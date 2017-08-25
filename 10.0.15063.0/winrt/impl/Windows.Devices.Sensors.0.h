// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Graphics::Display {

enum class DisplayOrientations : unsigned;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct IClosable;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Sensors {

enum class AccelerometerReadingType
{
    Standard = 0,
    Linear = 1,
    Gravity = 2,
};

enum class ActivitySensorReadingConfidence
{
    High = 0,
    Low = 1,
};

enum class ActivityType
{
    Unknown = 0,
    Idle = 1,
    Stationary = 2,
    Fidgeting = 3,
    Walking = 4,
    Running = 5,
    InVehicle = 6,
    Biking = 7,
};

enum class MagnetometerAccuracy
{
    Unknown = 0,
    Unreliable = 1,
    Approximate = 2,
    High = 3,
};

enum class PedometerStepKind
{
    Unknown = 0,
    Walking = 1,
    Running = 2,
};

enum class SensorOptimizationGoal
{
    Precision = 0,
    PowerEfficiency = 1,
};

enum class SensorReadingType
{
    Absolute = 0,
    Relative = 1,
};

enum class SensorType
{
    Accelerometer = 0,
    ActivitySensor = 1,
    Barometer = 2,
    Compass = 3,
    CustomSensor = 4,
    Gyroscope = 5,
    ProximitySensor = 6,
    Inclinometer = 7,
    LightSensor = 8,
    OrientationSensor = 9,
    Pedometer = 10,
    RelativeInclinometer = 11,
    RelativeOrientationSensor = 12,
    SimpleOrientationSensor = 13,
};

enum class SimpleOrientation
{
    NotRotated = 0,
    Rotated90DegreesCounterclockwise = 1,
    Rotated180DegreesCounterclockwise = 2,
    Rotated270DegreesCounterclockwise = 3,
    Faceup = 4,
    Facedown = 5,
};

struct IAccelerometer;
struct IAccelerometer2;
struct IAccelerometer3;
struct IAccelerometer4;
struct IAccelerometerDeviceId;
struct IAccelerometerReading;
struct IAccelerometerReadingChangedEventArgs;
struct IAccelerometerShakenEventArgs;
struct IAccelerometerStatics;
struct IAccelerometerStatics2;
struct IActivitySensor;
struct IActivitySensorReading;
struct IActivitySensorReadingChangeReport;
struct IActivitySensorReadingChangedEventArgs;
struct IActivitySensorStatics;
struct IActivitySensorTriggerDetails;
struct IAltimeter;
struct IAltimeterReading;
struct IAltimeterReadingChangedEventArgs;
struct IAltimeterStatics;
struct IBarometer;
struct IBarometerReading;
struct IBarometerReadingChangedEventArgs;
struct IBarometerStatics;
struct ICompass;
struct ICompass2;
struct ICompassDeviceId;
struct ICompassReading;
struct ICompassReadingChangedEventArgs;
struct ICompassReadingHeadingAccuracy;
struct ICompassStatics;
struct IGyrometer;
struct IGyrometer2;
struct IGyrometerDeviceId;
struct IGyrometerReading;
struct IGyrometerReadingChangedEventArgs;
struct IGyrometerStatics;
struct IInclinometer;
struct IInclinometer2;
struct IInclinometerDeviceId;
struct IInclinometerReading;
struct IInclinometerReadingChangedEventArgs;
struct IInclinometerReadingYawAccuracy;
struct IInclinometerStatics;
struct IInclinometerStatics2;
struct IInclinometerStatics3;
struct ILightSensor;
struct ILightSensorDeviceId;
struct ILightSensorReading;
struct ILightSensorReadingChangedEventArgs;
struct ILightSensorStatics;
struct IMagnetometer;
struct IMagnetometer2;
struct IMagnetometerDeviceId;
struct IMagnetometerReading;
struct IMagnetometerReadingChangedEventArgs;
struct IMagnetometerStatics;
struct IOrientationSensor;
struct IOrientationSensor2;
struct IOrientationSensorDeviceId;
struct IOrientationSensorReading;
struct IOrientationSensorReadingChangedEventArgs;
struct IOrientationSensorReadingYawAccuracy;
struct IOrientationSensorStatics;
struct IOrientationSensorStatics2;
struct IOrientationSensorStatics3;
struct IPedometer;
struct IPedometer2;
struct IPedometerDataThresholdFactory;
struct IPedometerReading;
struct IPedometerReadingChangedEventArgs;
struct IPedometerStatics;
struct IPedometerStatics2;
struct IProximitySensor;
struct IProximitySensorDataThresholdFactory;
struct IProximitySensorReading;
struct IProximitySensorReadingChangedEventArgs;
struct IProximitySensorStatics;
struct IProximitySensorStatics2;
struct ISensorDataThreshold;
struct ISensorDataThresholdTriggerDetails;
struct ISensorQuaternion;
struct ISensorRotationMatrix;
struct ISimpleOrientationSensor;
struct ISimpleOrientationSensor2;
struct ISimpleOrientationSensorDeviceId;
struct ISimpleOrientationSensorOrientationChangedEventArgs;
struct ISimpleOrientationSensorStatics;
struct Accelerometer;
struct AccelerometerReading;
struct AccelerometerReadingChangedEventArgs;
struct AccelerometerShakenEventArgs;
struct ActivitySensor;
struct ActivitySensorReading;
struct ActivitySensorReadingChangeReport;
struct ActivitySensorReadingChangedEventArgs;
struct ActivitySensorTriggerDetails;
struct Altimeter;
struct AltimeterReading;
struct AltimeterReadingChangedEventArgs;
struct Barometer;
struct BarometerReading;
struct BarometerReadingChangedEventArgs;
struct Compass;
struct CompassReading;
struct CompassReadingChangedEventArgs;
struct Gyrometer;
struct GyrometerReading;
struct GyrometerReadingChangedEventArgs;
struct Inclinometer;
struct InclinometerReading;
struct InclinometerReadingChangedEventArgs;
struct LightSensor;
struct LightSensorReading;
struct LightSensorReadingChangedEventArgs;
struct Magnetometer;
struct MagnetometerReading;
struct MagnetometerReadingChangedEventArgs;
struct OrientationSensor;
struct OrientationSensorReading;
struct OrientationSensorReadingChangedEventArgs;
struct Pedometer;
struct PedometerDataThreshold;
struct PedometerReading;
struct PedometerReadingChangedEventArgs;
struct ProximitySensor;
struct ProximitySensorDataThreshold;
struct ProximitySensorDisplayOnOffController;
struct ProximitySensorReading;
struct ProximitySensorReadingChangedEventArgs;
struct SensorDataThresholdTriggerDetails;
struct SensorQuaternion;
struct SensorRotationMatrix;
struct SimpleOrientationSensor;
struct SimpleOrientationSensorOrientationChangedEventArgs;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Sensors::IAccelerometer>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IAccelerometer2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IAccelerometer3>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IAccelerometer4>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IAccelerometerDeviceId>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IAccelerometerReading>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IAccelerometerReadingChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IAccelerometerShakenEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IAccelerometerStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IAccelerometerStatics2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IActivitySensor>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IActivitySensorReading>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IActivitySensorReadingChangeReport>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IActivitySensorReadingChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IActivitySensorStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IActivitySensorTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IAltimeter>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IAltimeterReading>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IAltimeterReadingChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IAltimeterStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IBarometer>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IBarometerReading>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IBarometerReadingChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IBarometerStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::ICompass>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::ICompass2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::ICompassDeviceId>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::ICompassReading>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::ICompassReadingChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::ICompassReadingHeadingAccuracy>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::ICompassStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IGyrometer>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IGyrometer2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IGyrometerDeviceId>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IGyrometerReading>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IGyrometerReadingChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IGyrometerStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IInclinometer>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IInclinometer2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IInclinometerDeviceId>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IInclinometerReading>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IInclinometerReadingChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IInclinometerReadingYawAccuracy>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IInclinometerStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IInclinometerStatics2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IInclinometerStatics3>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::ILightSensor>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::ILightSensorDeviceId>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::ILightSensorReading>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::ILightSensorReadingChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::ILightSensorStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IMagnetometer>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IMagnetometer2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IMagnetometerDeviceId>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IMagnetometerReading>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IMagnetometerReadingChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IMagnetometerStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IOrientationSensor>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IOrientationSensor2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IOrientationSensorDeviceId>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IOrientationSensorReading>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IOrientationSensorReadingChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IOrientationSensorReadingYawAccuracy>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IOrientationSensorStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IOrientationSensorStatics2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IOrientationSensorStatics3>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IPedometer>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IPedometer2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IPedometerDataThresholdFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IPedometerReading>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IPedometerReadingChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IPedometerStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IPedometerStatics2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IProximitySensor>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IProximitySensorDataThresholdFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IProximitySensorReading>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IProximitySensorReadingChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IProximitySensorStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::IProximitySensorStatics2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::ISensorDataThreshold>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::ISensorQuaternion>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::ISensorRotationMatrix>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::ISimpleOrientationSensor>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::ISimpleOrientationSensor2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::ISimpleOrientationSensorDeviceId>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::ISimpleOrientationSensorStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::Accelerometer>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::AccelerometerReading>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::AccelerometerReadingChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::AccelerometerShakenEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::ActivitySensor>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::ActivitySensorReading>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::ActivitySensorReadingChangeReport>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::ActivitySensorReadingChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::ActivitySensorTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::Altimeter>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::AltimeterReading>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::AltimeterReadingChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::Barometer>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::BarometerReading>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::BarometerReadingChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::Compass>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::CompassReading>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::CompassReadingChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::Gyrometer>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::GyrometerReading>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::GyrometerReadingChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::Inclinometer>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::InclinometerReading>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::InclinometerReadingChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::LightSensor>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::LightSensorReading>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::LightSensorReadingChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::Magnetometer>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::MagnetometerReading>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::MagnetometerReadingChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::OrientationSensor>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::OrientationSensorReading>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::OrientationSensorReadingChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::Pedometer>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::PedometerDataThreshold>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::PedometerReading>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::PedometerReadingChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::ProximitySensor>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::ProximitySensorDataThreshold>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::ProximitySensorDisplayOnOffController>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::ProximitySensorReading>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::ProximitySensorReadingChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::SensorDataThresholdTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::SensorQuaternion>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::SensorRotationMatrix>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::SimpleOrientationSensor>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::SimpleOrientationSensorOrientationChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::AccelerometerReadingType>{ using type = enum_category; };
template <> struct category<Windows::Devices::Sensors::ActivitySensorReadingConfidence>{ using type = enum_category; };
template <> struct category<Windows::Devices::Sensors::ActivityType>{ using type = enum_category; };
template <> struct category<Windows::Devices::Sensors::MagnetometerAccuracy>{ using type = enum_category; };
template <> struct category<Windows::Devices::Sensors::PedometerStepKind>{ using type = enum_category; };
template <> struct category<Windows::Devices::Sensors::SensorOptimizationGoal>{ using type = enum_category; };
template <> struct category<Windows::Devices::Sensors::SensorReadingType>{ using type = enum_category; };
template <> struct category<Windows::Devices::Sensors::SensorType>{ using type = enum_category; };
template <> struct category<Windows::Devices::Sensors::SimpleOrientation>{ using type = enum_category; };
template <> struct name<Windows::Devices::Sensors::IAccelerometer>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IAccelerometer" }; };
template <> struct name<Windows::Devices::Sensors::IAccelerometer2>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IAccelerometer2" }; };
template <> struct name<Windows::Devices::Sensors::IAccelerometer3>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IAccelerometer3" }; };
template <> struct name<Windows::Devices::Sensors::IAccelerometer4>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IAccelerometer4" }; };
template <> struct name<Windows::Devices::Sensors::IAccelerometerDeviceId>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IAccelerometerDeviceId" }; };
template <> struct name<Windows::Devices::Sensors::IAccelerometerReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IAccelerometerReading" }; };
template <> struct name<Windows::Devices::Sensors::IAccelerometerReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IAccelerometerReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::IAccelerometerShakenEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IAccelerometerShakenEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::IAccelerometerStatics>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IAccelerometerStatics" }; };
template <> struct name<Windows::Devices::Sensors::IAccelerometerStatics2>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IAccelerometerStatics2" }; };
template <> struct name<Windows::Devices::Sensors::IActivitySensor>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IActivitySensor" }; };
template <> struct name<Windows::Devices::Sensors::IActivitySensorReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IActivitySensorReading" }; };
template <> struct name<Windows::Devices::Sensors::IActivitySensorReadingChangeReport>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IActivitySensorReadingChangeReport" }; };
template <> struct name<Windows::Devices::Sensors::IActivitySensorReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IActivitySensorReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::IActivitySensorStatics>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IActivitySensorStatics" }; };
template <> struct name<Windows::Devices::Sensors::IActivitySensorTriggerDetails>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IActivitySensorTriggerDetails" }; };
template <> struct name<Windows::Devices::Sensors::IAltimeter>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IAltimeter" }; };
template <> struct name<Windows::Devices::Sensors::IAltimeterReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IAltimeterReading" }; };
template <> struct name<Windows::Devices::Sensors::IAltimeterReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IAltimeterReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::IAltimeterStatics>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IAltimeterStatics" }; };
template <> struct name<Windows::Devices::Sensors::IBarometer>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IBarometer" }; };
template <> struct name<Windows::Devices::Sensors::IBarometerReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IBarometerReading" }; };
template <> struct name<Windows::Devices::Sensors::IBarometerReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IBarometerReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::IBarometerStatics>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IBarometerStatics" }; };
template <> struct name<Windows::Devices::Sensors::ICompass>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ICompass" }; };
template <> struct name<Windows::Devices::Sensors::ICompass2>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ICompass2" }; };
template <> struct name<Windows::Devices::Sensors::ICompassDeviceId>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ICompassDeviceId" }; };
template <> struct name<Windows::Devices::Sensors::ICompassReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ICompassReading" }; };
template <> struct name<Windows::Devices::Sensors::ICompassReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ICompassReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::ICompassReadingHeadingAccuracy>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ICompassReadingHeadingAccuracy" }; };
template <> struct name<Windows::Devices::Sensors::ICompassStatics>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ICompassStatics" }; };
template <> struct name<Windows::Devices::Sensors::IGyrometer>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IGyrometer" }; };
template <> struct name<Windows::Devices::Sensors::IGyrometer2>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IGyrometer2" }; };
template <> struct name<Windows::Devices::Sensors::IGyrometerDeviceId>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IGyrometerDeviceId" }; };
template <> struct name<Windows::Devices::Sensors::IGyrometerReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IGyrometerReading" }; };
template <> struct name<Windows::Devices::Sensors::IGyrometerReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IGyrometerReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::IGyrometerStatics>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IGyrometerStatics" }; };
template <> struct name<Windows::Devices::Sensors::IInclinometer>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IInclinometer" }; };
template <> struct name<Windows::Devices::Sensors::IInclinometer2>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IInclinometer2" }; };
template <> struct name<Windows::Devices::Sensors::IInclinometerDeviceId>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IInclinometerDeviceId" }; };
template <> struct name<Windows::Devices::Sensors::IInclinometerReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IInclinometerReading" }; };
template <> struct name<Windows::Devices::Sensors::IInclinometerReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IInclinometerReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::IInclinometerReadingYawAccuracy>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IInclinometerReadingYawAccuracy" }; };
template <> struct name<Windows::Devices::Sensors::IInclinometerStatics>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IInclinometerStatics" }; };
template <> struct name<Windows::Devices::Sensors::IInclinometerStatics2>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IInclinometerStatics2" }; };
template <> struct name<Windows::Devices::Sensors::IInclinometerStatics3>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IInclinometerStatics3" }; };
template <> struct name<Windows::Devices::Sensors::ILightSensor>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ILightSensor" }; };
template <> struct name<Windows::Devices::Sensors::ILightSensorDeviceId>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ILightSensorDeviceId" }; };
template <> struct name<Windows::Devices::Sensors::ILightSensorReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ILightSensorReading" }; };
template <> struct name<Windows::Devices::Sensors::ILightSensorReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ILightSensorReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::ILightSensorStatics>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ILightSensorStatics" }; };
template <> struct name<Windows::Devices::Sensors::IMagnetometer>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IMagnetometer" }; };
template <> struct name<Windows::Devices::Sensors::IMagnetometer2>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IMagnetometer2" }; };
template <> struct name<Windows::Devices::Sensors::IMagnetometerDeviceId>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IMagnetometerDeviceId" }; };
template <> struct name<Windows::Devices::Sensors::IMagnetometerReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IMagnetometerReading" }; };
template <> struct name<Windows::Devices::Sensors::IMagnetometerReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IMagnetometerReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::IMagnetometerStatics>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IMagnetometerStatics" }; };
template <> struct name<Windows::Devices::Sensors::IOrientationSensor>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IOrientationSensor" }; };
template <> struct name<Windows::Devices::Sensors::IOrientationSensor2>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IOrientationSensor2" }; };
template <> struct name<Windows::Devices::Sensors::IOrientationSensorDeviceId>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IOrientationSensorDeviceId" }; };
template <> struct name<Windows::Devices::Sensors::IOrientationSensorReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IOrientationSensorReading" }; };
template <> struct name<Windows::Devices::Sensors::IOrientationSensorReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IOrientationSensorReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::IOrientationSensorReadingYawAccuracy>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IOrientationSensorReadingYawAccuracy" }; };
template <> struct name<Windows::Devices::Sensors::IOrientationSensorStatics>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IOrientationSensorStatics" }; };
template <> struct name<Windows::Devices::Sensors::IOrientationSensorStatics2>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IOrientationSensorStatics2" }; };
template <> struct name<Windows::Devices::Sensors::IOrientationSensorStatics3>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IOrientationSensorStatics3" }; };
template <> struct name<Windows::Devices::Sensors::IPedometer>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IPedometer" }; };
template <> struct name<Windows::Devices::Sensors::IPedometer2>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IPedometer2" }; };
template <> struct name<Windows::Devices::Sensors::IPedometerDataThresholdFactory>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IPedometerDataThresholdFactory" }; };
template <> struct name<Windows::Devices::Sensors::IPedometerReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IPedometerReading" }; };
template <> struct name<Windows::Devices::Sensors::IPedometerReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IPedometerReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::IPedometerStatics>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IPedometerStatics" }; };
template <> struct name<Windows::Devices::Sensors::IPedometerStatics2>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IPedometerStatics2" }; };
template <> struct name<Windows::Devices::Sensors::IProximitySensor>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IProximitySensor" }; };
template <> struct name<Windows::Devices::Sensors::IProximitySensorDataThresholdFactory>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IProximitySensorDataThresholdFactory" }; };
template <> struct name<Windows::Devices::Sensors::IProximitySensorReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IProximitySensorReading" }; };
template <> struct name<Windows::Devices::Sensors::IProximitySensorReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IProximitySensorReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::IProximitySensorStatics>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IProximitySensorStatics" }; };
template <> struct name<Windows::Devices::Sensors::IProximitySensorStatics2>{ static constexpr auto & value{ L"Windows.Devices.Sensors.IProximitySensorStatics2" }; };
template <> struct name<Windows::Devices::Sensors::ISensorDataThreshold>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ISensorDataThreshold" }; };
template <> struct name<Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ISensorDataThresholdTriggerDetails" }; };
template <> struct name<Windows::Devices::Sensors::ISensorQuaternion>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ISensorQuaternion" }; };
template <> struct name<Windows::Devices::Sensors::ISensorRotationMatrix>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ISensorRotationMatrix" }; };
template <> struct name<Windows::Devices::Sensors::ISimpleOrientationSensor>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ISimpleOrientationSensor" }; };
template <> struct name<Windows::Devices::Sensors::ISimpleOrientationSensor2>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ISimpleOrientationSensor2" }; };
template <> struct name<Windows::Devices::Sensors::ISimpleOrientationSensorDeviceId>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ISimpleOrientationSensorDeviceId" }; };
template <> struct name<Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ISimpleOrientationSensorOrientationChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::ISimpleOrientationSensorStatics>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ISimpleOrientationSensorStatics" }; };
template <> struct name<Windows::Devices::Sensors::Accelerometer>{ static constexpr auto & value{ L"Windows.Devices.Sensors.Accelerometer" }; };
template <> struct name<Windows::Devices::Sensors::AccelerometerReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.AccelerometerReading" }; };
template <> struct name<Windows::Devices::Sensors::AccelerometerReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.AccelerometerReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::AccelerometerShakenEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.AccelerometerShakenEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::ActivitySensor>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ActivitySensor" }; };
template <> struct name<Windows::Devices::Sensors::ActivitySensorReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ActivitySensorReading" }; };
template <> struct name<Windows::Devices::Sensors::ActivitySensorReadingChangeReport>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ActivitySensorReadingChangeReport" }; };
template <> struct name<Windows::Devices::Sensors::ActivitySensorReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ActivitySensorReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::ActivitySensorTriggerDetails>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ActivitySensorTriggerDetails" }; };
template <> struct name<Windows::Devices::Sensors::Altimeter>{ static constexpr auto & value{ L"Windows.Devices.Sensors.Altimeter" }; };
template <> struct name<Windows::Devices::Sensors::AltimeterReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.AltimeterReading" }; };
template <> struct name<Windows::Devices::Sensors::AltimeterReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.AltimeterReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::Barometer>{ static constexpr auto & value{ L"Windows.Devices.Sensors.Barometer" }; };
template <> struct name<Windows::Devices::Sensors::BarometerReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.BarometerReading" }; };
template <> struct name<Windows::Devices::Sensors::BarometerReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.BarometerReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::Compass>{ static constexpr auto & value{ L"Windows.Devices.Sensors.Compass" }; };
template <> struct name<Windows::Devices::Sensors::CompassReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.CompassReading" }; };
template <> struct name<Windows::Devices::Sensors::CompassReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.CompassReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::Gyrometer>{ static constexpr auto & value{ L"Windows.Devices.Sensors.Gyrometer" }; };
template <> struct name<Windows::Devices::Sensors::GyrometerReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.GyrometerReading" }; };
template <> struct name<Windows::Devices::Sensors::GyrometerReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.GyrometerReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::Inclinometer>{ static constexpr auto & value{ L"Windows.Devices.Sensors.Inclinometer" }; };
template <> struct name<Windows::Devices::Sensors::InclinometerReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.InclinometerReading" }; };
template <> struct name<Windows::Devices::Sensors::InclinometerReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.InclinometerReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::LightSensor>{ static constexpr auto & value{ L"Windows.Devices.Sensors.LightSensor" }; };
template <> struct name<Windows::Devices::Sensors::LightSensorReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.LightSensorReading" }; };
template <> struct name<Windows::Devices::Sensors::LightSensorReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.LightSensorReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::Magnetometer>{ static constexpr auto & value{ L"Windows.Devices.Sensors.Magnetometer" }; };
template <> struct name<Windows::Devices::Sensors::MagnetometerReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.MagnetometerReading" }; };
template <> struct name<Windows::Devices::Sensors::MagnetometerReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.MagnetometerReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::OrientationSensor>{ static constexpr auto & value{ L"Windows.Devices.Sensors.OrientationSensor" }; };
template <> struct name<Windows::Devices::Sensors::OrientationSensorReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.OrientationSensorReading" }; };
template <> struct name<Windows::Devices::Sensors::OrientationSensorReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.OrientationSensorReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::Pedometer>{ static constexpr auto & value{ L"Windows.Devices.Sensors.Pedometer" }; };
template <> struct name<Windows::Devices::Sensors::PedometerDataThreshold>{ static constexpr auto & value{ L"Windows.Devices.Sensors.PedometerDataThreshold" }; };
template <> struct name<Windows::Devices::Sensors::PedometerReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.PedometerReading" }; };
template <> struct name<Windows::Devices::Sensors::PedometerReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.PedometerReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::ProximitySensor>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ProximitySensor" }; };
template <> struct name<Windows::Devices::Sensors::ProximitySensorDataThreshold>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ProximitySensorDataThreshold" }; };
template <> struct name<Windows::Devices::Sensors::ProximitySensorDisplayOnOffController>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ProximitySensorDisplayOnOffController" }; };
template <> struct name<Windows::Devices::Sensors::ProximitySensorReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ProximitySensorReading" }; };
template <> struct name<Windows::Devices::Sensors::ProximitySensorReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ProximitySensorReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::SensorDataThresholdTriggerDetails>{ static constexpr auto & value{ L"Windows.Devices.Sensors.SensorDataThresholdTriggerDetails" }; };
template <> struct name<Windows::Devices::Sensors::SensorQuaternion>{ static constexpr auto & value{ L"Windows.Devices.Sensors.SensorQuaternion" }; };
template <> struct name<Windows::Devices::Sensors::SensorRotationMatrix>{ static constexpr auto & value{ L"Windows.Devices.Sensors.SensorRotationMatrix" }; };
template <> struct name<Windows::Devices::Sensors::SimpleOrientationSensor>{ static constexpr auto & value{ L"Windows.Devices.Sensors.SimpleOrientationSensor" }; };
template <> struct name<Windows::Devices::Sensors::SimpleOrientationSensorOrientationChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.SimpleOrientationSensorOrientationChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::AccelerometerReadingType>{ static constexpr auto & value{ L"Windows.Devices.Sensors.AccelerometerReadingType" }; };
template <> struct name<Windows::Devices::Sensors::ActivitySensorReadingConfidence>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ActivitySensorReadingConfidence" }; };
template <> struct name<Windows::Devices::Sensors::ActivityType>{ static constexpr auto & value{ L"Windows.Devices.Sensors.ActivityType" }; };
template <> struct name<Windows::Devices::Sensors::MagnetometerAccuracy>{ static constexpr auto & value{ L"Windows.Devices.Sensors.MagnetometerAccuracy" }; };
template <> struct name<Windows::Devices::Sensors::PedometerStepKind>{ static constexpr auto & value{ L"Windows.Devices.Sensors.PedometerStepKind" }; };
template <> struct name<Windows::Devices::Sensors::SensorOptimizationGoal>{ static constexpr auto & value{ L"Windows.Devices.Sensors.SensorOptimizationGoal" }; };
template <> struct name<Windows::Devices::Sensors::SensorReadingType>{ static constexpr auto & value{ L"Windows.Devices.Sensors.SensorReadingType" }; };
template <> struct name<Windows::Devices::Sensors::SensorType>{ static constexpr auto & value{ L"Windows.Devices.Sensors.SensorType" }; };
template <> struct name<Windows::Devices::Sensors::SimpleOrientation>{ static constexpr auto & value{ L"Windows.Devices.Sensors.SimpleOrientation" }; };
template <> struct guid<Windows::Devices::Sensors::IAccelerometer>{ static constexpr GUID value{ 0xDF184548,0x2711,0x4DA7,{ 0x80,0x98,0x4B,0x82,0x20,0x5D,0x3C,0x7D } }; };
template <> struct guid<Windows::Devices::Sensors::IAccelerometer2>{ static constexpr GUID value{ 0xE8F092EE,0x4964,0x401A,{ 0xB6,0x02,0x22,0x0D,0x71,0x53,0xC6,0x0A } }; };
template <> struct guid<Windows::Devices::Sensors::IAccelerometer3>{ static constexpr GUID value{ 0x87E0022A,0xED80,0x49EB,{ 0xBF,0x8A,0xA4,0xEA,0x31,0xE5,0xCD,0x84 } }; };
template <> struct guid<Windows::Devices::Sensors::IAccelerometer4>{ static constexpr GUID value{ 0x1D373C4F,0x42D3,0x45B2,{ 0x81,0x44,0xAB,0x7F,0xB6,0x65,0xEB,0x59 } }; };
template <> struct guid<Windows::Devices::Sensors::IAccelerometerDeviceId>{ static constexpr GUID value{ 0x7EAC64A9,0x97D5,0x446D,{ 0xAB,0x5A,0x91,0x7D,0xF9,0xB9,0x6A,0x2C } }; };
template <> struct guid<Windows::Devices::Sensors::IAccelerometerReading>{ static constexpr GUID value{ 0xB9FE7ACB,0xD351,0x40AF,{ 0x8B,0xB6,0x7A,0xA9,0xAE,0x64,0x1F,0xB7 } }; };
template <> struct guid<Windows::Devices::Sensors::IAccelerometerReadingChangedEventArgs>{ static constexpr GUID value{ 0x0095C65B,0xB6AC,0x475A,{ 0x9F,0x44,0x8B,0x32,0xD3,0x5A,0x3F,0x25 } }; };
template <> struct guid<Windows::Devices::Sensors::IAccelerometerShakenEventArgs>{ static constexpr GUID value{ 0x95FF01D1,0x4A28,0x4F35,{ 0x98,0xE8,0x81,0x78,0xAA,0xE4,0x08,0x4A } }; };
template <> struct guid<Windows::Devices::Sensors::IAccelerometerStatics>{ static constexpr GUID value{ 0xA5E28B74,0x5A87,0x4A2D,{ 0xBE,0xCC,0x0F,0x90,0x6E,0xA0,0x61,0xDD } }; };
template <> struct guid<Windows::Devices::Sensors::IAccelerometerStatics2>{ static constexpr GUID value{ 0xC4C4842F,0xD86B,0x4685,{ 0xB2,0xD7,0x33,0x96,0xF7,0x98,0xD5,0x7B } }; };
template <> struct guid<Windows::Devices::Sensors::IActivitySensor>{ static constexpr GUID value{ 0xCD7A630C,0xFB5F,0x48EB,{ 0xB0,0x9B,0xA2,0x70,0x8D,0x1C,0x61,0xEF } }; };
template <> struct guid<Windows::Devices::Sensors::IActivitySensorReading>{ static constexpr GUID value{ 0x85125A96,0x1472,0x40A2,{ 0xB2,0xAE,0xE1,0xEF,0x29,0x22,0x6C,0x78 } }; };
template <> struct guid<Windows::Devices::Sensors::IActivitySensorReadingChangeReport>{ static constexpr GUID value{ 0x4F3C2915,0xD93B,0x47BD,{ 0x96,0x0A,0xF2,0x0F,0xB2,0xF3,0x22,0xB9 } }; };
template <> struct guid<Windows::Devices::Sensors::IActivitySensorReadingChangedEventArgs>{ static constexpr GUID value{ 0xDE386717,0xAEB6,0x4EC7,{ 0x94,0x6A,0xD9,0xCC,0x19,0xB9,0x51,0xEC } }; };
template <> struct guid<Windows::Devices::Sensors::IActivitySensorStatics>{ static constexpr GUID value{ 0xA71E0E9D,0xEE8B,0x45D1,{ 0xB2,0x5B,0x08,0xCC,0x0D,0xF9,0x2A,0xB6 } }; };
template <> struct guid<Windows::Devices::Sensors::IActivitySensorTriggerDetails>{ static constexpr GUID value{ 0x2C9E6612,0xB9CA,0x4677,{ 0xB2,0x63,0x24,0x32,0x97,0xF7,0x9D,0x3A } }; };
template <> struct guid<Windows::Devices::Sensors::IAltimeter>{ static constexpr GUID value{ 0x72F057FD,0x8F04,0x49F1,{ 0xB4,0xA7,0xF4,0xE3,0x63,0xB7,0x01,0xA2 } }; };
template <> struct guid<Windows::Devices::Sensors::IAltimeterReading>{ static constexpr GUID value{ 0xFBE8EF73,0x7F5E,0x48C8,{ 0xAA,0x1A,0xF1,0xF3,0xBE,0xFC,0x11,0x44 } }; };
template <> struct guid<Windows::Devices::Sensors::IAltimeterReadingChangedEventArgs>{ static constexpr GUID value{ 0x7069D077,0x446D,0x47F7,{ 0x99,0x8C,0xEB,0xC2,0x3B,0x45,0xE4,0xA2 } }; };
template <> struct guid<Windows::Devices::Sensors::IAltimeterStatics>{ static constexpr GUID value{ 0x9EB4D7C3,0xE5AC,0x47CE,{ 0x8E,0xEF,0xD3,0x71,0x81,0x68,0xC0,0x1F } }; };
template <> struct guid<Windows::Devices::Sensors::IBarometer>{ static constexpr GUID value{ 0x934475A8,0x78BF,0x452F,{ 0xB0,0x17,0xF0,0x20,0x9C,0xE6,0xDA,0xB4 } }; };
template <> struct guid<Windows::Devices::Sensors::IBarometerReading>{ static constexpr GUID value{ 0xF5B9D2E6,0x1DF6,0x4A1A,{ 0xA7,0xAD,0x32,0x1D,0x4F,0x5D,0xB2,0x47 } }; };
template <> struct guid<Windows::Devices::Sensors::IBarometerReadingChangedEventArgs>{ static constexpr GUID value{ 0x3D84945F,0x037B,0x404F,{ 0x9B,0xBB,0x62,0x32,0xD6,0x95,0x43,0xC3 } }; };
template <> struct guid<Windows::Devices::Sensors::IBarometerStatics>{ static constexpr GUID value{ 0x286B270A,0x02E3,0x4F86,{ 0x84,0xFC,0xFD,0xD8,0x92,0xB5,0x94,0x0F } }; };
template <> struct guid<Windows::Devices::Sensors::ICompass>{ static constexpr GUID value{ 0x292FFA94,0x1B45,0x403C,{ 0xBA,0x06,0xB1,0x06,0xDB,0xA6,0x9A,0x64 } }; };
template <> struct guid<Windows::Devices::Sensors::ICompass2>{ static constexpr GUID value{ 0x36F26D09,0xC7D7,0x434F,{ 0xB4,0x61,0x97,0x9D,0xDF,0xC2,0x32,0x2F } }; };
template <> struct guid<Windows::Devices::Sensors::ICompassDeviceId>{ static constexpr GUID value{ 0xD181CA29,0xB085,0x4B1D,{ 0x87,0x0A,0x4F,0xF5,0x7B,0xA7,0x4F,0xD4 } }; };
template <> struct guid<Windows::Devices::Sensors::ICompassReading>{ static constexpr GUID value{ 0x82911128,0x513D,0x4DC9,{ 0xB7,0x81,0x5E,0xED,0xFB,0xF0,0x2D,0x0C } }; };
template <> struct guid<Windows::Devices::Sensors::ICompassReadingChangedEventArgs>{ static constexpr GUID value{ 0x8F1549B0,0xE8BC,0x4C7E,{ 0xB0,0x09,0x4E,0x41,0xDF,0x13,0x70,0x72 } }; };
template <> struct guid<Windows::Devices::Sensors::ICompassReadingHeadingAccuracy>{ static constexpr GUID value{ 0xE761354E,0x8911,0x40F7,{ 0x9E,0x16,0x6E,0xCC,0x7D,0xAE,0xC5,0xDE } }; };
template <> struct guid<Windows::Devices::Sensors::ICompassStatics>{ static constexpr GUID value{ 0x9ABC97DF,0x56EC,0x4C25,{ 0xB5,0x4D,0x40,0xA6,0x8B,0xB5,0xB2,0x69 } }; };
template <> struct guid<Windows::Devices::Sensors::IGyrometer>{ static constexpr GUID value{ 0xFDB9A9C4,0x84B1,0x4CA2,{ 0x97,0x63,0x9B,0x58,0x95,0x06,0xC7,0x0C } }; };
template <> struct guid<Windows::Devices::Sensors::IGyrometer2>{ static constexpr GUID value{ 0x63DF2443,0x8CE8,0x41C3,{ 0xAC,0x44,0x86,0x98,0x81,0x0B,0x55,0x7F } }; };
template <> struct guid<Windows::Devices::Sensors::IGyrometerDeviceId>{ static constexpr GUID value{ 0x1EE5E978,0x89A2,0x4275,{ 0x9E,0x95,0x71,0x26,0xF4,0x70,0x87,0x60 } }; };
template <> struct guid<Windows::Devices::Sensors::IGyrometerReading>{ static constexpr GUID value{ 0xB3D6DE5C,0x1EE4,0x456F,{ 0x9D,0xE7,0xE2,0x49,0x3B,0x5C,0x8E,0x03 } }; };
template <> struct guid<Windows::Devices::Sensors::IGyrometerReadingChangedEventArgs>{ static constexpr GUID value{ 0x0FDF1895,0x6F9E,0x42CE,{ 0x8D,0x58,0x38,0x8C,0x0A,0xB8,0x35,0x6D } }; };
template <> struct guid<Windows::Devices::Sensors::IGyrometerStatics>{ static constexpr GUID value{ 0x83B6E7C9,0xE49D,0x4B39,{ 0x86,0xE6,0xCD,0x55,0x4B,0xE4,0xC5,0xC1 } }; };
template <> struct guid<Windows::Devices::Sensors::IInclinometer>{ static constexpr GUID value{ 0x2648CA6F,0x2286,0x406F,{ 0x91,0x61,0xF0,0xC4,0xBD,0x80,0x6E,0xBF } }; };
template <> struct guid<Windows::Devices::Sensors::IInclinometer2>{ static constexpr GUID value{ 0x029F3393,0x28B2,0x45F8,{ 0xBB,0x16,0x61,0xE8,0x6A,0x7F,0xAE,0x6E } }; };
template <> struct guid<Windows::Devices::Sensors::IInclinometerDeviceId>{ static constexpr GUID value{ 0x01E91982,0x41FF,0x4406,{ 0xAE,0x83,0x62,0x21,0x0F,0xF1,0x6F,0xE3 } }; };
template <> struct guid<Windows::Devices::Sensors::IInclinometerReading>{ static constexpr GUID value{ 0x9F44F055,0xB6F6,0x497F,{ 0xB1,0x27,0x1A,0x77,0x5E,0x50,0x14,0x58 } }; };
template <> struct guid<Windows::Devices::Sensors::IInclinometerReadingChangedEventArgs>{ static constexpr GUID value{ 0x4AE91DC1,0xE7EB,0x4938,{ 0x85,0x11,0xAE,0x0D,0x6B,0x44,0x04,0x38 } }; };
template <> struct guid<Windows::Devices::Sensors::IInclinometerReadingYawAccuracy>{ static constexpr GUID value{ 0xB453E880,0x1FE3,0x4986,{ 0xA2,0x57,0xE6,0xEC,0xE2,0x72,0x39,0x49 } }; };
template <> struct guid<Windows::Devices::Sensors::IInclinometerStatics>{ static constexpr GUID value{ 0xF22EC551,0x9C30,0x453A,{ 0x8B,0x49,0x3C,0x3E,0xEB,0x33,0xCB,0x61 } }; };
template <> struct guid<Windows::Devices::Sensors::IInclinometerStatics2>{ static constexpr GUID value{ 0x043F9775,0x6A1E,0x499C,{ 0x86,0xE0,0x63,0x8C,0x1A,0x86,0x4B,0x00 } }; };
template <> struct guid<Windows::Devices::Sensors::IInclinometerStatics3>{ static constexpr GUID value{ 0xBD9A4280,0xB91A,0x4829,{ 0x93,0x92,0xAB,0xC0,0xB6,0xBD,0xF2,0xB4 } }; };
template <> struct guid<Windows::Devices::Sensors::ILightSensor>{ static constexpr GUID value{ 0xF84C0718,0x0C54,0x47AE,{ 0x92,0x2E,0x78,0x9F,0x57,0xFB,0x03,0xA0 } }; };
template <> struct guid<Windows::Devices::Sensors::ILightSensorDeviceId>{ static constexpr GUID value{ 0x7FEE49F8,0x0AFB,0x4F51,{ 0x87,0xF0,0x6C,0x26,0x37,0x5C,0xE9,0x4F } }; };
template <> struct guid<Windows::Devices::Sensors::ILightSensorReading>{ static constexpr GUID value{ 0xFFDF6300,0x227C,0x4D2B,{ 0xB3,0x02,0xFC,0x01,0x42,0x48,0x5C,0x68 } }; };
template <> struct guid<Windows::Devices::Sensors::ILightSensorReadingChangedEventArgs>{ static constexpr GUID value{ 0xA3A2F4CF,0x258B,0x420C,{ 0xB8,0xAB,0x8E,0xDD,0x60,0x1E,0xCF,0x50 } }; };
template <> struct guid<Windows::Devices::Sensors::ILightSensorStatics>{ static constexpr GUID value{ 0x45DB8C84,0xC3A8,0x471E,{ 0x9A,0x53,0x64,0x57,0xFA,0xD8,0x7C,0x0E } }; };
template <> struct guid<Windows::Devices::Sensors::IMagnetometer>{ static constexpr GUID value{ 0x484F626E,0xD3C9,0x4111,{ 0xB3,0xF6,0x2C,0xF1,0xFA,0xA4,0x18,0xD5 } }; };
template <> struct guid<Windows::Devices::Sensors::IMagnetometer2>{ static constexpr GUID value{ 0xB4656C85,0x26F6,0x444B,{ 0xA9,0xE2,0xA2,0x3F,0x96,0x6C,0xD3,0x68 } }; };
template <> struct guid<Windows::Devices::Sensors::IMagnetometerDeviceId>{ static constexpr GUID value{ 0x58B498C2,0x7E4B,0x404C,{ 0x9F,0xC5,0x5D,0xE8,0xB4,0x0E,0xBA,0xE3 } }; };
template <> struct guid<Windows::Devices::Sensors::IMagnetometerReading>{ static constexpr GUID value{ 0x0C2CC40D,0xEBFD,0x4E5C,{ 0xBB,0x11,0xAF,0xC2,0x9B,0x3C,0xAE,0x61 } }; };
template <> struct guid<Windows::Devices::Sensors::IMagnetometerReadingChangedEventArgs>{ static constexpr GUID value{ 0x17EAE872,0x2EB9,0x4EE7,{ 0x8A,0xD0,0x31,0x27,0x53,0x7D,0x94,0x9B } }; };
template <> struct guid<Windows::Devices::Sensors::IMagnetometerStatics>{ static constexpr GUID value{ 0x853C64CC,0x0698,0x4DDA,{ 0xA6,0xDF,0x9C,0xB9,0xCC,0x4A,0xB4,0x0A } }; };
template <> struct guid<Windows::Devices::Sensors::IOrientationSensor>{ static constexpr GUID value{ 0x5E354635,0xCF6B,0x4C63,{ 0xAB,0xD8,0x10,0x25,0x2B,0x0B,0xF6,0xEC } }; };
template <> struct guid<Windows::Devices::Sensors::IOrientationSensor2>{ static constexpr GUID value{ 0x0D924CF9,0x2F1F,0x49C9,{ 0x80,0x42,0x4A,0x18,0x13,0xD6,0x77,0x60 } }; };
template <> struct guid<Windows::Devices::Sensors::IOrientationSensorDeviceId>{ static constexpr GUID value{ 0x5A69B648,0x4C29,0x49EC,{ 0xB2,0x8F,0xEA,0x1D,0x11,0x7B,0x66,0xF0 } }; };
template <> struct guid<Windows::Devices::Sensors::IOrientationSensorReading>{ static constexpr GUID value{ 0x4756C993,0x6595,0x4897,{ 0xBC,0xC6,0xD5,0x37,0xEE,0x75,0x75,0x64 } }; };
template <> struct guid<Windows::Devices::Sensors::IOrientationSensorReadingChangedEventArgs>{ static constexpr GUID value{ 0x012C1186,0xC3BA,0x46BC,{ 0xAE,0x65,0x7A,0x98,0x99,0x6C,0xBF,0xB8 } }; };
template <> struct guid<Windows::Devices::Sensors::IOrientationSensorReadingYawAccuracy>{ static constexpr GUID value{ 0xD1AC9824,0x3F5A,0x49A2,{ 0xBC,0x7B,0x11,0x80,0xBC,0x38,0xCD,0x2B } }; };
template <> struct guid<Windows::Devices::Sensors::IOrientationSensorStatics>{ static constexpr GUID value{ 0x10EF8712,0xFB4C,0x428A,{ 0x89,0x8B,0x27,0x65,0xE4,0x09,0xE6,0x69 } }; };
template <> struct guid<Windows::Devices::Sensors::IOrientationSensorStatics2>{ static constexpr GUID value{ 0x59DA0D0B,0xD40A,0x4C71,{ 0x92,0x76,0x8A,0x27,0x2A,0x0A,0x66,0x19 } }; };
template <> struct guid<Windows::Devices::Sensors::IOrientationSensorStatics3>{ static constexpr GUID value{ 0xD82CE920,0x2777,0x40FF,{ 0x9F,0x59,0xD6,0x54,0xB0,0x85,0xF1,0x2F } }; };
template <> struct guid<Windows::Devices::Sensors::IPedometer>{ static constexpr GUID value{ 0x9A1E013D,0x3D98,0x45F8,{ 0x89,0x20,0x8E,0x4E,0xCA,0xCA,0x5F,0x97 } }; };
template <> struct guid<Windows::Devices::Sensors::IPedometer2>{ static constexpr GUID value{ 0xE5A406DF,0x2B81,0x4ADD,{ 0xB2,0xFF,0x77,0xAB,0x6C,0x98,0xBA,0x19 } }; };
template <> struct guid<Windows::Devices::Sensors::IPedometerDataThresholdFactory>{ static constexpr GUID value{ 0xCBAD8F50,0x7A54,0x466B,{ 0x90,0x10,0x77,0xA1,0x62,0xFC,0xA5,0xD7 } }; };
template <> struct guid<Windows::Devices::Sensors::IPedometerReading>{ static constexpr GUID value{ 0x2245DCF4,0xA8E1,0x432F,{ 0x89,0x6A,0xBE,0x0D,0xD9,0xB0,0x2D,0x24 } }; };
template <> struct guid<Windows::Devices::Sensors::IPedometerReadingChangedEventArgs>{ static constexpr GUID value{ 0xF855E47E,0xABBC,0x4456,{ 0x86,0xA8,0x25,0xCF,0x2B,0x33,0x37,0x42 } }; };
template <> struct guid<Windows::Devices::Sensors::IPedometerStatics>{ static constexpr GUID value{ 0x82980A2F,0x4083,0x4DFB,{ 0xB4,0x11,0x93,0x8E,0xA0,0xF4,0xB9,0x46 } }; };
template <> struct guid<Windows::Devices::Sensors::IPedometerStatics2>{ static constexpr GUID value{ 0x79F5C6BB,0xCE0E,0x4133,{ 0xB4,0x7E,0x86,0x27,0xEA,0x72,0xF6,0x77 } }; };
template <> struct guid<Windows::Devices::Sensors::IProximitySensor>{ static constexpr GUID value{ 0x54C076B8,0xECFB,0x4944,{ 0xB9,0x28,0x74,0xFC,0x50,0x4D,0x47,0xEE } }; };
template <> struct guid<Windows::Devices::Sensors::IProximitySensorDataThresholdFactory>{ static constexpr GUID value{ 0x905AC121,0x6D27,0x4AD3,{ 0x9D,0xB5,0x64,0x67,0xF2,0xA5,0xAD,0x9D } }; };
template <> struct guid<Windows::Devices::Sensors::IProximitySensorReading>{ static constexpr GUID value{ 0x71228D59,0x132D,0x4D5F,{ 0x8F,0xF9,0x2F,0x0D,0xB8,0x75,0x1C,0xED } }; };
template <> struct guid<Windows::Devices::Sensors::IProximitySensorReadingChangedEventArgs>{ static constexpr GUID value{ 0xCFC2F366,0xC3E8,0x40FD,{ 0x8C,0xC3,0x67,0xE2,0x89,0x00,0x49,0x38 } }; };
template <> struct guid<Windows::Devices::Sensors::IProximitySensorStatics>{ static constexpr GUID value{ 0x29186649,0x6269,0x4E57,{ 0xA5,0xAD,0x82,0xBE,0x80,0x81,0x33,0x92 } }; };
template <> struct guid<Windows::Devices::Sensors::IProximitySensorStatics2>{ static constexpr GUID value{ 0xCBF473AE,0xE9CA,0x422F,{ 0xAD,0x67,0x4C,0x3D,0x25,0xDF,0x35,0x0C } }; };
template <> struct guid<Windows::Devices::Sensors::ISensorDataThreshold>{ static constexpr GUID value{ 0x54DAEC61,0xFE4B,0x4E07,{ 0xB2,0x60,0x3A,0x4C,0xDF,0xBE,0x39,0x6E } }; };
template <> struct guid<Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails>{ static constexpr GUID value{ 0x9106F1B7,0xE88D,0x48B1,{ 0xBC,0x90,0x61,0x9C,0x7B,0x34,0x93,0x91 } }; };
template <> struct guid<Windows::Devices::Sensors::ISensorQuaternion>{ static constexpr GUID value{ 0xC9C5C827,0xC71C,0x46E7,{ 0x9D,0xA3,0x36,0xA1,0x93,0xB2,0x32,0xBC } }; };
template <> struct guid<Windows::Devices::Sensors::ISensorRotationMatrix>{ static constexpr GUID value{ 0x0A3D5A67,0x22F4,0x4392,{ 0x95,0x38,0x65,0xD0,0xBD,0x06,0x4A,0xA6 } }; };
template <> struct guid<Windows::Devices::Sensors::ISimpleOrientationSensor>{ static constexpr GUID value{ 0x5FF53856,0x214A,0x4DEE,{ 0xA3,0xF9,0x61,0x6F,0x1A,0xB0,0x6F,0xFD } }; };
template <> struct guid<Windows::Devices::Sensors::ISimpleOrientationSensor2>{ static constexpr GUID value{ 0xA277A798,0x8870,0x453E,{ 0x8B,0xD6,0xB8,0xF5,0xD8,0xD7,0x94,0x1B } }; };
template <> struct guid<Windows::Devices::Sensors::ISimpleOrientationSensorDeviceId>{ static constexpr GUID value{ 0xFBC00ACB,0x3B76,0x41F6,{ 0x80,0x91,0x30,0xEF,0xE6,0x46,0xD3,0xCF } }; };
template <> struct guid<Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs>{ static constexpr GUID value{ 0xBCD5C660,0x23D4,0x4B4C,{ 0xA2,0x2E,0xBA,0x81,0xAD,0xE0,0xC6,0x01 } }; };
template <> struct guid<Windows::Devices::Sensors::ISimpleOrientationSensorStatics>{ static constexpr GUID value{ 0x72ED066F,0x70AA,0x40C6,{ 0x9B,0x1B,0x34,0x33,0xF7,0x45,0x9B,0x4E } }; };
template <> struct default_interface<Windows::Devices::Sensors::Accelerometer>{ using type = Windows::Devices::Sensors::IAccelerometer; };
template <> struct default_interface<Windows::Devices::Sensors::AccelerometerReading>{ using type = Windows::Devices::Sensors::IAccelerometerReading; };
template <> struct default_interface<Windows::Devices::Sensors::AccelerometerReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::IAccelerometerReadingChangedEventArgs; };
template <> struct default_interface<Windows::Devices::Sensors::AccelerometerShakenEventArgs>{ using type = Windows::Devices::Sensors::IAccelerometerShakenEventArgs; };
template <> struct default_interface<Windows::Devices::Sensors::ActivitySensor>{ using type = Windows::Devices::Sensors::IActivitySensor; };
template <> struct default_interface<Windows::Devices::Sensors::ActivitySensorReading>{ using type = Windows::Devices::Sensors::IActivitySensorReading; };
template <> struct default_interface<Windows::Devices::Sensors::ActivitySensorReadingChangeReport>{ using type = Windows::Devices::Sensors::IActivitySensorReadingChangeReport; };
template <> struct default_interface<Windows::Devices::Sensors::ActivitySensorReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::IActivitySensorReadingChangedEventArgs; };
template <> struct default_interface<Windows::Devices::Sensors::ActivitySensorTriggerDetails>{ using type = Windows::Devices::Sensors::IActivitySensorTriggerDetails; };
template <> struct default_interface<Windows::Devices::Sensors::Altimeter>{ using type = Windows::Devices::Sensors::IAltimeter; };
template <> struct default_interface<Windows::Devices::Sensors::AltimeterReading>{ using type = Windows::Devices::Sensors::IAltimeterReading; };
template <> struct default_interface<Windows::Devices::Sensors::AltimeterReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::IAltimeterReadingChangedEventArgs; };
template <> struct default_interface<Windows::Devices::Sensors::Barometer>{ using type = Windows::Devices::Sensors::IBarometer; };
template <> struct default_interface<Windows::Devices::Sensors::BarometerReading>{ using type = Windows::Devices::Sensors::IBarometerReading; };
template <> struct default_interface<Windows::Devices::Sensors::BarometerReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::IBarometerReadingChangedEventArgs; };
template <> struct default_interface<Windows::Devices::Sensors::Compass>{ using type = Windows::Devices::Sensors::ICompass; };
template <> struct default_interface<Windows::Devices::Sensors::CompassReading>{ using type = Windows::Devices::Sensors::ICompassReading; };
template <> struct default_interface<Windows::Devices::Sensors::CompassReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::ICompassReadingChangedEventArgs; };
template <> struct default_interface<Windows::Devices::Sensors::Gyrometer>{ using type = Windows::Devices::Sensors::IGyrometer; };
template <> struct default_interface<Windows::Devices::Sensors::GyrometerReading>{ using type = Windows::Devices::Sensors::IGyrometerReading; };
template <> struct default_interface<Windows::Devices::Sensors::GyrometerReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::IGyrometerReadingChangedEventArgs; };
template <> struct default_interface<Windows::Devices::Sensors::Inclinometer>{ using type = Windows::Devices::Sensors::IInclinometer; };
template <> struct default_interface<Windows::Devices::Sensors::InclinometerReading>{ using type = Windows::Devices::Sensors::IInclinometerReading; };
template <> struct default_interface<Windows::Devices::Sensors::InclinometerReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::IInclinometerReadingChangedEventArgs; };
template <> struct default_interface<Windows::Devices::Sensors::LightSensor>{ using type = Windows::Devices::Sensors::ILightSensor; };
template <> struct default_interface<Windows::Devices::Sensors::LightSensorReading>{ using type = Windows::Devices::Sensors::ILightSensorReading; };
template <> struct default_interface<Windows::Devices::Sensors::LightSensorReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::ILightSensorReadingChangedEventArgs; };
template <> struct default_interface<Windows::Devices::Sensors::Magnetometer>{ using type = Windows::Devices::Sensors::IMagnetometer; };
template <> struct default_interface<Windows::Devices::Sensors::MagnetometerReading>{ using type = Windows::Devices::Sensors::IMagnetometerReading; };
template <> struct default_interface<Windows::Devices::Sensors::MagnetometerReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::IMagnetometerReadingChangedEventArgs; };
template <> struct default_interface<Windows::Devices::Sensors::OrientationSensor>{ using type = Windows::Devices::Sensors::IOrientationSensor; };
template <> struct default_interface<Windows::Devices::Sensors::OrientationSensorReading>{ using type = Windows::Devices::Sensors::IOrientationSensorReading; };
template <> struct default_interface<Windows::Devices::Sensors::OrientationSensorReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::IOrientationSensorReadingChangedEventArgs; };
template <> struct default_interface<Windows::Devices::Sensors::Pedometer>{ using type = Windows::Devices::Sensors::IPedometer; };
template <> struct default_interface<Windows::Devices::Sensors::PedometerDataThreshold>{ using type = Windows::Devices::Sensors::ISensorDataThreshold; };
template <> struct default_interface<Windows::Devices::Sensors::PedometerReading>{ using type = Windows::Devices::Sensors::IPedometerReading; };
template <> struct default_interface<Windows::Devices::Sensors::PedometerReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::IPedometerReadingChangedEventArgs; };
template <> struct default_interface<Windows::Devices::Sensors::ProximitySensor>{ using type = Windows::Devices::Sensors::IProximitySensor; };
template <> struct default_interface<Windows::Devices::Sensors::ProximitySensorDataThreshold>{ using type = Windows::Devices::Sensors::ISensorDataThreshold; };
template <> struct default_interface<Windows::Devices::Sensors::ProximitySensorDisplayOnOffController>{ using type = Windows::Foundation::IClosable; };
template <> struct default_interface<Windows::Devices::Sensors::ProximitySensorReading>{ using type = Windows::Devices::Sensors::IProximitySensorReading; };
template <> struct default_interface<Windows::Devices::Sensors::ProximitySensorReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::IProximitySensorReadingChangedEventArgs; };
template <> struct default_interface<Windows::Devices::Sensors::SensorDataThresholdTriggerDetails>{ using type = Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails; };
template <> struct default_interface<Windows::Devices::Sensors::SensorQuaternion>{ using type = Windows::Devices::Sensors::ISensorQuaternion; };
template <> struct default_interface<Windows::Devices::Sensors::SensorRotationMatrix>{ using type = Windows::Devices::Sensors::ISensorRotationMatrix; };
template <> struct default_interface<Windows::Devices::Sensors::SimpleOrientationSensor>{ using type = Windows::Devices::Sensors::ISimpleOrientationSensor; };
template <> struct default_interface<Windows::Devices::Sensors::SimpleOrientationSensorOrientationChangedEventArgs>{ using type = Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs; };

template <typename D>
struct consume_Windows_Devices_Sensors_IAccelerometer
{
    Windows::Devices::Sensors::AccelerometerReading GetCurrentReading() const;
    uint32_t MinimumReportInterval() const;
    void ReportInterval(uint32_t value) const;
    uint32_t ReportInterval() const;
    event_token ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Accelerometer, Windows::Devices::Sensors::AccelerometerReadingChangedEventArgs> const& handler) const;
    using ReadingChanged_revoker = event_revoker<Windows::Devices::Sensors::IAccelerometer>;
    ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Accelerometer, Windows::Devices::Sensors::AccelerometerReadingChangedEventArgs> const& handler) const;
    void ReadingChanged(event_token const& token) const;
    event_token Shaken(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Accelerometer, Windows::Devices::Sensors::AccelerometerShakenEventArgs> const& handler) const;
    using Shaken_revoker = event_revoker<Windows::Devices::Sensors::IAccelerometer>;
    Shaken_revoker Shaken(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Accelerometer, Windows::Devices::Sensors::AccelerometerShakenEventArgs> const& handler) const;
    void Shaken(event_token const& token) const;
};
template <> struct consume<Windows::Devices::Sensors::IAccelerometer> { template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometer<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IAccelerometer2
{
    void ReadingTransform(Windows::Graphics::Display::DisplayOrientations const& value) const;
    Windows::Graphics::Display::DisplayOrientations ReadingTransform() const;
};
template <> struct consume<Windows::Devices::Sensors::IAccelerometer2> { template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometer2<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IAccelerometer3
{
    void ReportLatency(uint32_t value) const;
    uint32_t ReportLatency() const;
    uint32_t MaxBatchSize() const;
};
template <> struct consume<Windows::Devices::Sensors::IAccelerometer3> { template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometer3<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IAccelerometer4
{
    Windows::Devices::Sensors::AccelerometerReadingType ReadingType() const;
};
template <> struct consume<Windows::Devices::Sensors::IAccelerometer4> { template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometer4<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IAccelerometerDeviceId
{
    hstring DeviceId() const;
};
template <> struct consume<Windows::Devices::Sensors::IAccelerometerDeviceId> { template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometerDeviceId<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IAccelerometerReading
{
    Windows::Foundation::DateTime Timestamp() const;
    double AccelerationX() const;
    double AccelerationY() const;
    double AccelerationZ() const;
};
template <> struct consume<Windows::Devices::Sensors::IAccelerometerReading> { template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometerReading<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IAccelerometerReadingChangedEventArgs
{
    Windows::Devices::Sensors::AccelerometerReading Reading() const;
};
template <> struct consume<Windows::Devices::Sensors::IAccelerometerReadingChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometerReadingChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IAccelerometerShakenEventArgs
{
    Windows::Foundation::DateTime Timestamp() const;
};
template <> struct consume<Windows::Devices::Sensors::IAccelerometerShakenEventArgs> { template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometerShakenEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IAccelerometerStatics
{
    Windows::Devices::Sensors::Accelerometer GetDefault() const;
};
template <> struct consume<Windows::Devices::Sensors::IAccelerometerStatics> { template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometerStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IAccelerometerStatics2
{
    Windows::Devices::Sensors::Accelerometer GetDefault(Windows::Devices::Sensors::AccelerometerReadingType const& readingType) const;
};
template <> struct consume<Windows::Devices::Sensors::IAccelerometerStatics2> { template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometerStatics2<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IActivitySensor
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::ActivitySensorReading> GetCurrentReadingAsync() const;
    Windows::Foundation::Collections::IVector<Windows::Devices::Sensors::ActivityType> SubscribedActivities() const;
    double PowerInMilliwatts() const;
    hstring DeviceId() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivityType> SupportedActivities() const;
    uint32_t MinimumReportInterval() const;
    event_token ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::ActivitySensor, Windows::Devices::Sensors::ActivitySensorReadingChangedEventArgs> const& handler) const;
    using ReadingChanged_revoker = event_revoker<Windows::Devices::Sensors::IActivitySensor>;
    ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::ActivitySensor, Windows::Devices::Sensors::ActivitySensorReadingChangedEventArgs> const& handler) const;
    void ReadingChanged(event_token const& token) const;
};
template <> struct consume<Windows::Devices::Sensors::IActivitySensor> { template <typename D> using type = consume_Windows_Devices_Sensors_IActivitySensor<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IActivitySensorReading
{
    Windows::Foundation::DateTime Timestamp() const;
    Windows::Devices::Sensors::ActivityType Activity() const;
    Windows::Devices::Sensors::ActivitySensorReadingConfidence Confidence() const;
};
template <> struct consume<Windows::Devices::Sensors::IActivitySensorReading> { template <typename D> using type = consume_Windows_Devices_Sensors_IActivitySensorReading<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IActivitySensorReadingChangeReport
{
    Windows::Devices::Sensors::ActivitySensorReading Reading() const;
};
template <> struct consume<Windows::Devices::Sensors::IActivitySensorReadingChangeReport> { template <typename D> using type = consume_Windows_Devices_Sensors_IActivitySensorReadingChangeReport<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IActivitySensorReadingChangedEventArgs
{
    Windows::Devices::Sensors::ActivitySensorReading Reading() const;
};
template <> struct consume<Windows::Devices::Sensors::IActivitySensorReadingChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_Sensors_IActivitySensorReadingChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IActivitySensorStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::ActivitySensor> GetDefaultAsync() const;
    hstring GetDeviceSelector() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::ActivitySensor> FromIdAsync(param::hstring const& deviceId) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivitySensorReading>> GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivitySensorReading>> GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime, Windows::Foundation::TimeSpan const& duration) const;
};
template <> struct consume<Windows::Devices::Sensors::IActivitySensorStatics> { template <typename D> using type = consume_Windows_Devices_Sensors_IActivitySensorStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IActivitySensorTriggerDetails
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivitySensorReadingChangeReport> ReadReports() const;
};
template <> struct consume<Windows::Devices::Sensors::IActivitySensorTriggerDetails> { template <typename D> using type = consume_Windows_Devices_Sensors_IActivitySensorTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IAltimeter
{
    Windows::Devices::Sensors::AltimeterReading GetCurrentReading() const;
    hstring DeviceId() const;
    uint32_t MinimumReportInterval() const;
    void ReportInterval(uint32_t value) const;
    uint32_t ReportInterval() const;
    event_token ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Altimeter, Windows::Devices::Sensors::AltimeterReadingChangedEventArgs> const& handler) const;
    using ReadingChanged_revoker = event_revoker<Windows::Devices::Sensors::IAltimeter>;
    ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Altimeter, Windows::Devices::Sensors::AltimeterReadingChangedEventArgs> const& handler) const;
    void ReadingChanged(event_token const& token) const;
};
template <> struct consume<Windows::Devices::Sensors::IAltimeter> { template <typename D> using type = consume_Windows_Devices_Sensors_IAltimeter<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IAltimeterReading
{
    Windows::Foundation::DateTime Timestamp() const;
    double AltitudeChangeInMeters() const;
};
template <> struct consume<Windows::Devices::Sensors::IAltimeterReading> { template <typename D> using type = consume_Windows_Devices_Sensors_IAltimeterReading<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IAltimeterReadingChangedEventArgs
{
    Windows::Devices::Sensors::AltimeterReading Reading() const;
};
template <> struct consume<Windows::Devices::Sensors::IAltimeterReadingChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_Sensors_IAltimeterReadingChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IAltimeterStatics
{
    Windows::Devices::Sensors::Altimeter GetDefault() const;
};
template <> struct consume<Windows::Devices::Sensors::IAltimeterStatics> { template <typename D> using type = consume_Windows_Devices_Sensors_IAltimeterStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IBarometer
{
    Windows::Devices::Sensors::BarometerReading GetCurrentReading() const;
    hstring DeviceId() const;
    uint32_t MinimumReportInterval() const;
    void ReportInterval(uint32_t value) const;
    uint32_t ReportInterval() const;
    event_token ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Barometer, Windows::Devices::Sensors::BarometerReadingChangedEventArgs> const& handler) const;
    using ReadingChanged_revoker = event_revoker<Windows::Devices::Sensors::IBarometer>;
    ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Barometer, Windows::Devices::Sensors::BarometerReadingChangedEventArgs> const& handler) const;
    void ReadingChanged(event_token const& token) const;
};
template <> struct consume<Windows::Devices::Sensors::IBarometer> { template <typename D> using type = consume_Windows_Devices_Sensors_IBarometer<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IBarometerReading
{
    Windows::Foundation::DateTime Timestamp() const;
    double StationPressureInHectopascals() const;
};
template <> struct consume<Windows::Devices::Sensors::IBarometerReading> { template <typename D> using type = consume_Windows_Devices_Sensors_IBarometerReading<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IBarometerReadingChangedEventArgs
{
    Windows::Devices::Sensors::BarometerReading Reading() const;
};
template <> struct consume<Windows::Devices::Sensors::IBarometerReadingChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_Sensors_IBarometerReadingChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IBarometerStatics
{
    Windows::Devices::Sensors::Barometer GetDefault() const;
};
template <> struct consume<Windows::Devices::Sensors::IBarometerStatics> { template <typename D> using type = consume_Windows_Devices_Sensors_IBarometerStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_ICompass
{
    Windows::Devices::Sensors::CompassReading GetCurrentReading() const;
    uint32_t MinimumReportInterval() const;
    void ReportInterval(uint32_t value) const;
    uint32_t ReportInterval() const;
    event_token ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Compass, Windows::Devices::Sensors::CompassReadingChangedEventArgs> const& handler) const;
    using ReadingChanged_revoker = event_revoker<Windows::Devices::Sensors::ICompass>;
    ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Compass, Windows::Devices::Sensors::CompassReadingChangedEventArgs> const& handler) const;
    void ReadingChanged(event_token const& token) const;
};
template <> struct consume<Windows::Devices::Sensors::ICompass> { template <typename D> using type = consume_Windows_Devices_Sensors_ICompass<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_ICompass2
{
    void ReadingTransform(Windows::Graphics::Display::DisplayOrientations const& value) const;
    Windows::Graphics::Display::DisplayOrientations ReadingTransform() const;
};
template <> struct consume<Windows::Devices::Sensors::ICompass2> { template <typename D> using type = consume_Windows_Devices_Sensors_ICompass2<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_ICompassDeviceId
{
    hstring DeviceId() const;
};
template <> struct consume<Windows::Devices::Sensors::ICompassDeviceId> { template <typename D> using type = consume_Windows_Devices_Sensors_ICompassDeviceId<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_ICompassReading
{
    Windows::Foundation::DateTime Timestamp() const;
    double HeadingMagneticNorth() const;
    Windows::Foundation::IReference<double> HeadingTrueNorth() const;
};
template <> struct consume<Windows::Devices::Sensors::ICompassReading> { template <typename D> using type = consume_Windows_Devices_Sensors_ICompassReading<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_ICompassReadingChangedEventArgs
{
    Windows::Devices::Sensors::CompassReading Reading() const;
};
template <> struct consume<Windows::Devices::Sensors::ICompassReadingChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_Sensors_ICompassReadingChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_ICompassReadingHeadingAccuracy
{
    Windows::Devices::Sensors::MagnetometerAccuracy HeadingAccuracy() const;
};
template <> struct consume<Windows::Devices::Sensors::ICompassReadingHeadingAccuracy> { template <typename D> using type = consume_Windows_Devices_Sensors_ICompassReadingHeadingAccuracy<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_ICompassStatics
{
    Windows::Devices::Sensors::Compass GetDefault() const;
};
template <> struct consume<Windows::Devices::Sensors::ICompassStatics> { template <typename D> using type = consume_Windows_Devices_Sensors_ICompassStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IGyrometer
{
    Windows::Devices::Sensors::GyrometerReading GetCurrentReading() const;
    uint32_t MinimumReportInterval() const;
    void ReportInterval(uint32_t value) const;
    uint32_t ReportInterval() const;
    event_token ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Gyrometer, Windows::Devices::Sensors::GyrometerReadingChangedEventArgs> const& handler) const;
    using ReadingChanged_revoker = event_revoker<Windows::Devices::Sensors::IGyrometer>;
    ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Gyrometer, Windows::Devices::Sensors::GyrometerReadingChangedEventArgs> const& handler) const;
    void ReadingChanged(event_token const& token) const;
};
template <> struct consume<Windows::Devices::Sensors::IGyrometer> { template <typename D> using type = consume_Windows_Devices_Sensors_IGyrometer<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IGyrometer2
{
    void ReadingTransform(Windows::Graphics::Display::DisplayOrientations const& value) const;
    Windows::Graphics::Display::DisplayOrientations ReadingTransform() const;
};
template <> struct consume<Windows::Devices::Sensors::IGyrometer2> { template <typename D> using type = consume_Windows_Devices_Sensors_IGyrometer2<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IGyrometerDeviceId
{
    hstring DeviceId() const;
};
template <> struct consume<Windows::Devices::Sensors::IGyrometerDeviceId> { template <typename D> using type = consume_Windows_Devices_Sensors_IGyrometerDeviceId<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IGyrometerReading
{
    Windows::Foundation::DateTime Timestamp() const;
    double AngularVelocityX() const;
    double AngularVelocityY() const;
    double AngularVelocityZ() const;
};
template <> struct consume<Windows::Devices::Sensors::IGyrometerReading> { template <typename D> using type = consume_Windows_Devices_Sensors_IGyrometerReading<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IGyrometerReadingChangedEventArgs
{
    Windows::Devices::Sensors::GyrometerReading Reading() const;
};
template <> struct consume<Windows::Devices::Sensors::IGyrometerReadingChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_Sensors_IGyrometerReadingChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IGyrometerStatics
{
    Windows::Devices::Sensors::Gyrometer GetDefault() const;
};
template <> struct consume<Windows::Devices::Sensors::IGyrometerStatics> { template <typename D> using type = consume_Windows_Devices_Sensors_IGyrometerStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IInclinometer
{
    Windows::Devices::Sensors::InclinometerReading GetCurrentReading() const;
    uint32_t MinimumReportInterval() const;
    void ReportInterval(uint32_t value) const;
    uint32_t ReportInterval() const;
    event_token ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Inclinometer, Windows::Devices::Sensors::InclinometerReadingChangedEventArgs> const& handler) const;
    using ReadingChanged_revoker = event_revoker<Windows::Devices::Sensors::IInclinometer>;
    ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Inclinometer, Windows::Devices::Sensors::InclinometerReadingChangedEventArgs> const& handler) const;
    void ReadingChanged(event_token const& token) const;
};
template <> struct consume<Windows::Devices::Sensors::IInclinometer> { template <typename D> using type = consume_Windows_Devices_Sensors_IInclinometer<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IInclinometer2
{
    void ReadingTransform(Windows::Graphics::Display::DisplayOrientations const& value) const;
    Windows::Graphics::Display::DisplayOrientations ReadingTransform() const;
    Windows::Devices::Sensors::SensorReadingType ReadingType() const;
};
template <> struct consume<Windows::Devices::Sensors::IInclinometer2> { template <typename D> using type = consume_Windows_Devices_Sensors_IInclinometer2<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IInclinometerDeviceId
{
    hstring DeviceId() const;
};
template <> struct consume<Windows::Devices::Sensors::IInclinometerDeviceId> { template <typename D> using type = consume_Windows_Devices_Sensors_IInclinometerDeviceId<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IInclinometerReading
{
    Windows::Foundation::DateTime Timestamp() const;
    float PitchDegrees() const;
    float RollDegrees() const;
    float YawDegrees() const;
};
template <> struct consume<Windows::Devices::Sensors::IInclinometerReading> { template <typename D> using type = consume_Windows_Devices_Sensors_IInclinometerReading<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IInclinometerReadingChangedEventArgs
{
    Windows::Devices::Sensors::InclinometerReading Reading() const;
};
template <> struct consume<Windows::Devices::Sensors::IInclinometerReadingChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_Sensors_IInclinometerReadingChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IInclinometerReadingYawAccuracy
{
    Windows::Devices::Sensors::MagnetometerAccuracy YawAccuracy() const;
};
template <> struct consume<Windows::Devices::Sensors::IInclinometerReadingYawAccuracy> { template <typename D> using type = consume_Windows_Devices_Sensors_IInclinometerReadingYawAccuracy<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IInclinometerStatics
{
    Windows::Devices::Sensors::Inclinometer GetDefault() const;
};
template <> struct consume<Windows::Devices::Sensors::IInclinometerStatics> { template <typename D> using type = consume_Windows_Devices_Sensors_IInclinometerStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IInclinometerStatics2
{
    Windows::Devices::Sensors::Inclinometer GetDefaultForRelativeReadings() const;
};
template <> struct consume<Windows::Devices::Sensors::IInclinometerStatics2> { template <typename D> using type = consume_Windows_Devices_Sensors_IInclinometerStatics2<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IInclinometerStatics3
{
    Windows::Devices::Sensors::Inclinometer GetDefault(Windows::Devices::Sensors::SensorReadingType const& sensorReadingtype) const;
};
template <> struct consume<Windows::Devices::Sensors::IInclinometerStatics3> { template <typename D> using type = consume_Windows_Devices_Sensors_IInclinometerStatics3<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_ILightSensor
{
    Windows::Devices::Sensors::LightSensorReading GetCurrentReading() const;
    uint32_t MinimumReportInterval() const;
    void ReportInterval(uint32_t value) const;
    uint32_t ReportInterval() const;
    event_token ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::LightSensor, Windows::Devices::Sensors::LightSensorReadingChangedEventArgs> const& handler) const;
    using ReadingChanged_revoker = event_revoker<Windows::Devices::Sensors::ILightSensor>;
    ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::LightSensor, Windows::Devices::Sensors::LightSensorReadingChangedEventArgs> const& handler) const;
    void ReadingChanged(event_token const& token) const;
};
template <> struct consume<Windows::Devices::Sensors::ILightSensor> { template <typename D> using type = consume_Windows_Devices_Sensors_ILightSensor<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_ILightSensorDeviceId
{
    hstring DeviceId() const;
};
template <> struct consume<Windows::Devices::Sensors::ILightSensorDeviceId> { template <typename D> using type = consume_Windows_Devices_Sensors_ILightSensorDeviceId<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_ILightSensorReading
{
    Windows::Foundation::DateTime Timestamp() const;
    float IlluminanceInLux() const;
};
template <> struct consume<Windows::Devices::Sensors::ILightSensorReading> { template <typename D> using type = consume_Windows_Devices_Sensors_ILightSensorReading<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_ILightSensorReadingChangedEventArgs
{
    Windows::Devices::Sensors::LightSensorReading Reading() const;
};
template <> struct consume<Windows::Devices::Sensors::ILightSensorReadingChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_Sensors_ILightSensorReadingChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_ILightSensorStatics
{
    Windows::Devices::Sensors::LightSensor GetDefault() const;
};
template <> struct consume<Windows::Devices::Sensors::ILightSensorStatics> { template <typename D> using type = consume_Windows_Devices_Sensors_ILightSensorStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IMagnetometer
{
    Windows::Devices::Sensors::MagnetometerReading GetCurrentReading() const;
    uint32_t MinimumReportInterval() const;
    void ReportInterval(uint32_t value) const;
    uint32_t ReportInterval() const;
    event_token ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Magnetometer, Windows::Devices::Sensors::MagnetometerReadingChangedEventArgs> const& handler) const;
    using ReadingChanged_revoker = event_revoker<Windows::Devices::Sensors::IMagnetometer>;
    ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Magnetometer, Windows::Devices::Sensors::MagnetometerReadingChangedEventArgs> const& handler) const;
    void ReadingChanged(event_token const& token) const;
};
template <> struct consume<Windows::Devices::Sensors::IMagnetometer> { template <typename D> using type = consume_Windows_Devices_Sensors_IMagnetometer<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IMagnetometer2
{
    void ReadingTransform(Windows::Graphics::Display::DisplayOrientations const& value) const;
    Windows::Graphics::Display::DisplayOrientations ReadingTransform() const;
};
template <> struct consume<Windows::Devices::Sensors::IMagnetometer2> { template <typename D> using type = consume_Windows_Devices_Sensors_IMagnetometer2<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IMagnetometerDeviceId
{
    hstring DeviceId() const;
};
template <> struct consume<Windows::Devices::Sensors::IMagnetometerDeviceId> { template <typename D> using type = consume_Windows_Devices_Sensors_IMagnetometerDeviceId<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IMagnetometerReading
{
    Windows::Foundation::DateTime Timestamp() const;
    float MagneticFieldX() const;
    float MagneticFieldY() const;
    float MagneticFieldZ() const;
    Windows::Devices::Sensors::MagnetometerAccuracy DirectionalAccuracy() const;
};
template <> struct consume<Windows::Devices::Sensors::IMagnetometerReading> { template <typename D> using type = consume_Windows_Devices_Sensors_IMagnetometerReading<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IMagnetometerReadingChangedEventArgs
{
    Windows::Devices::Sensors::MagnetometerReading Reading() const;
};
template <> struct consume<Windows::Devices::Sensors::IMagnetometerReadingChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_Sensors_IMagnetometerReadingChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IMagnetometerStatics
{
    Windows::Devices::Sensors::Magnetometer GetDefault() const;
};
template <> struct consume<Windows::Devices::Sensors::IMagnetometerStatics> { template <typename D> using type = consume_Windows_Devices_Sensors_IMagnetometerStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IOrientationSensor
{
    Windows::Devices::Sensors::OrientationSensorReading GetCurrentReading() const;
    uint32_t MinimumReportInterval() const;
    void ReportInterval(uint32_t value) const;
    uint32_t ReportInterval() const;
    event_token ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::OrientationSensor, Windows::Devices::Sensors::OrientationSensorReadingChangedEventArgs> const& handler) const;
    using ReadingChanged_revoker = event_revoker<Windows::Devices::Sensors::IOrientationSensor>;
    ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::OrientationSensor, Windows::Devices::Sensors::OrientationSensorReadingChangedEventArgs> const& handler) const;
    void ReadingChanged(event_token const& token) const;
};
template <> struct consume<Windows::Devices::Sensors::IOrientationSensor> { template <typename D> using type = consume_Windows_Devices_Sensors_IOrientationSensor<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IOrientationSensor2
{
    void ReadingTransform(Windows::Graphics::Display::DisplayOrientations const& value) const;
    Windows::Graphics::Display::DisplayOrientations ReadingTransform() const;
    Windows::Devices::Sensors::SensorReadingType ReadingType() const;
};
template <> struct consume<Windows::Devices::Sensors::IOrientationSensor2> { template <typename D> using type = consume_Windows_Devices_Sensors_IOrientationSensor2<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IOrientationSensorDeviceId
{
    hstring DeviceId() const;
};
template <> struct consume<Windows::Devices::Sensors::IOrientationSensorDeviceId> { template <typename D> using type = consume_Windows_Devices_Sensors_IOrientationSensorDeviceId<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IOrientationSensorReading
{
    Windows::Foundation::DateTime Timestamp() const;
    Windows::Devices::Sensors::SensorRotationMatrix RotationMatrix() const;
    Windows::Devices::Sensors::SensorQuaternion Quaternion() const;
};
template <> struct consume<Windows::Devices::Sensors::IOrientationSensorReading> { template <typename D> using type = consume_Windows_Devices_Sensors_IOrientationSensorReading<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IOrientationSensorReadingChangedEventArgs
{
    Windows::Devices::Sensors::OrientationSensorReading Reading() const;
};
template <> struct consume<Windows::Devices::Sensors::IOrientationSensorReadingChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_Sensors_IOrientationSensorReadingChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IOrientationSensorReadingYawAccuracy
{
    Windows::Devices::Sensors::MagnetometerAccuracy YawAccuracy() const;
};
template <> struct consume<Windows::Devices::Sensors::IOrientationSensorReadingYawAccuracy> { template <typename D> using type = consume_Windows_Devices_Sensors_IOrientationSensorReadingYawAccuracy<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IOrientationSensorStatics
{
    Windows::Devices::Sensors::OrientationSensor GetDefault() const;
};
template <> struct consume<Windows::Devices::Sensors::IOrientationSensorStatics> { template <typename D> using type = consume_Windows_Devices_Sensors_IOrientationSensorStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IOrientationSensorStatics2
{
    Windows::Devices::Sensors::OrientationSensor GetDefaultForRelativeReadings() const;
};
template <> struct consume<Windows::Devices::Sensors::IOrientationSensorStatics2> { template <typename D> using type = consume_Windows_Devices_Sensors_IOrientationSensorStatics2<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IOrientationSensorStatics3
{
    Windows::Devices::Sensors::OrientationSensor GetDefault(Windows::Devices::Sensors::SensorReadingType const& sensorReadingtype) const;
    Windows::Devices::Sensors::OrientationSensor GetDefault(Windows::Devices::Sensors::SensorReadingType const& sensorReadingType, Windows::Devices::Sensors::SensorOptimizationGoal const& optimizationGoal) const;
};
template <> struct consume<Windows::Devices::Sensors::IOrientationSensorStatics3> { template <typename D> using type = consume_Windows_Devices_Sensors_IOrientationSensorStatics3<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IPedometer
{
    hstring DeviceId() const;
    double PowerInMilliwatts() const;
    uint32_t MinimumReportInterval() const;
    void ReportInterval(uint32_t value) const;
    uint32_t ReportInterval() const;
    event_token ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Pedometer, Windows::Devices::Sensors::PedometerReadingChangedEventArgs> const& handler) const;
    using ReadingChanged_revoker = event_revoker<Windows::Devices::Sensors::IPedometer>;
    ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Pedometer, Windows::Devices::Sensors::PedometerReadingChangedEventArgs> const& handler) const;
    void ReadingChanged(event_token const& token) const;
};
template <> struct consume<Windows::Devices::Sensors::IPedometer> { template <typename D> using type = consume_Windows_Devices_Sensors_IPedometer<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IPedometer2
{
    Windows::Foundation::Collections::IMapView<Windows::Devices::Sensors::PedometerStepKind, Windows::Devices::Sensors::PedometerReading> GetCurrentReadings() const;
};
template <> struct consume<Windows::Devices::Sensors::IPedometer2> { template <typename D> using type = consume_Windows_Devices_Sensors_IPedometer2<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IPedometerDataThresholdFactory
{
    Windows::Devices::Sensors::PedometerDataThreshold Create(Windows::Devices::Sensors::Pedometer const& sensor, int32_t stepGoal) const;
};
template <> struct consume<Windows::Devices::Sensors::IPedometerDataThresholdFactory> { template <typename D> using type = consume_Windows_Devices_Sensors_IPedometerDataThresholdFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IPedometerReading
{
    Windows::Devices::Sensors::PedometerStepKind StepKind() const;
    int32_t CumulativeSteps() const;
    Windows::Foundation::DateTime Timestamp() const;
    Windows::Foundation::TimeSpan CumulativeStepsDuration() const;
};
template <> struct consume<Windows::Devices::Sensors::IPedometerReading> { template <typename D> using type = consume_Windows_Devices_Sensors_IPedometerReading<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IPedometerReadingChangedEventArgs
{
    Windows::Devices::Sensors::PedometerReading Reading() const;
};
template <> struct consume<Windows::Devices::Sensors::IPedometerReadingChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_Sensors_IPedometerReadingChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IPedometerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Pedometer> FromIdAsync(param::hstring const& deviceId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Pedometer> GetDefaultAsync() const;
    hstring GetDeviceSelector() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::PedometerReading>> GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::PedometerReading>> GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime, Windows::Foundation::TimeSpan const& duration) const;
};
template <> struct consume<Windows::Devices::Sensors::IPedometerStatics> { template <typename D> using type = consume_Windows_Devices_Sensors_IPedometerStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IPedometerStatics2
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::PedometerReading> GetReadingsFromTriggerDetails(Windows::Devices::Sensors::SensorDataThresholdTriggerDetails const& triggerDetails) const;
};
template <> struct consume<Windows::Devices::Sensors::IPedometerStatics2> { template <typename D> using type = consume_Windows_Devices_Sensors_IPedometerStatics2<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IProximitySensor
{
    hstring DeviceId() const;
    Windows::Foundation::IReference<uint32_t> MaxDistanceInMillimeters() const;
    Windows::Foundation::IReference<uint32_t> MinDistanceInMillimeters() const;
    Windows::Devices::Sensors::ProximitySensorReading GetCurrentReading() const;
    event_token ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::ProximitySensor, Windows::Devices::Sensors::ProximitySensorReadingChangedEventArgs> const& handler) const;
    using ReadingChanged_revoker = event_revoker<Windows::Devices::Sensors::IProximitySensor>;
    ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::ProximitySensor, Windows::Devices::Sensors::ProximitySensorReadingChangedEventArgs> const& handler) const;
    void ReadingChanged(event_token const& token) const;
    Windows::Devices::Sensors::ProximitySensorDisplayOnOffController CreateDisplayOnOffController() const;
};
template <> struct consume<Windows::Devices::Sensors::IProximitySensor> { template <typename D> using type = consume_Windows_Devices_Sensors_IProximitySensor<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IProximitySensorDataThresholdFactory
{
    Windows::Devices::Sensors::ProximitySensorDataThreshold Create(Windows::Devices::Sensors::ProximitySensor const& sensor) const;
};
template <> struct consume<Windows::Devices::Sensors::IProximitySensorDataThresholdFactory> { template <typename D> using type = consume_Windows_Devices_Sensors_IProximitySensorDataThresholdFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IProximitySensorReading
{
    Windows::Foundation::DateTime Timestamp() const;
    bool IsDetected() const;
    Windows::Foundation::IReference<uint32_t> DistanceInMillimeters() const;
};
template <> struct consume<Windows::Devices::Sensors::IProximitySensorReading> { template <typename D> using type = consume_Windows_Devices_Sensors_IProximitySensorReading<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IProximitySensorReadingChangedEventArgs
{
    Windows::Devices::Sensors::ProximitySensorReading Reading() const;
};
template <> struct consume<Windows::Devices::Sensors::IProximitySensorReadingChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_Sensors_IProximitySensorReadingChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IProximitySensorStatics
{
    hstring GetDeviceSelector() const;
    Windows::Devices::Sensors::ProximitySensor FromId(param::hstring const& sensorId) const;
};
template <> struct consume<Windows::Devices::Sensors::IProximitySensorStatics> { template <typename D> using type = consume_Windows_Devices_Sensors_IProximitySensorStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_IProximitySensorStatics2
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ProximitySensorReading> GetReadingsFromTriggerDetails(Windows::Devices::Sensors::SensorDataThresholdTriggerDetails const& triggerDetails) const;
};
template <> struct consume<Windows::Devices::Sensors::IProximitySensorStatics2> { template <typename D> using type = consume_Windows_Devices_Sensors_IProximitySensorStatics2<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_ISensorDataThreshold
{
};
template <> struct consume<Windows::Devices::Sensors::ISensorDataThreshold> { template <typename D> using type = consume_Windows_Devices_Sensors_ISensorDataThreshold<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_ISensorDataThresholdTriggerDetails
{
    hstring DeviceId() const;
    Windows::Devices::Sensors::SensorType SensorType() const;
};
template <> struct consume<Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails> { template <typename D> using type = consume_Windows_Devices_Sensors_ISensorDataThresholdTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_ISensorQuaternion
{
    float W() const;
    float X() const;
    float Y() const;
    float Z() const;
};
template <> struct consume<Windows::Devices::Sensors::ISensorQuaternion> { template <typename D> using type = consume_Windows_Devices_Sensors_ISensorQuaternion<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_ISensorRotationMatrix
{
    float M11() const;
    float M12() const;
    float M13() const;
    float M21() const;
    float M22() const;
    float M23() const;
    float M31() const;
    float M32() const;
    float M33() const;
};
template <> struct consume<Windows::Devices::Sensors::ISensorRotationMatrix> { template <typename D> using type = consume_Windows_Devices_Sensors_ISensorRotationMatrix<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_ISimpleOrientationSensor
{
    Windows::Devices::Sensors::SimpleOrientation GetCurrentOrientation() const;
    event_token OrientationChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::SimpleOrientationSensor, Windows::Devices::Sensors::SimpleOrientationSensorOrientationChangedEventArgs> const& handler) const;
    using OrientationChanged_revoker = event_revoker<Windows::Devices::Sensors::ISimpleOrientationSensor>;
    OrientationChanged_revoker OrientationChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::SimpleOrientationSensor, Windows::Devices::Sensors::SimpleOrientationSensorOrientationChangedEventArgs> const& handler) const;
    void OrientationChanged(event_token const& token) const;
};
template <> struct consume<Windows::Devices::Sensors::ISimpleOrientationSensor> { template <typename D> using type = consume_Windows_Devices_Sensors_ISimpleOrientationSensor<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_ISimpleOrientationSensor2
{
    void ReadingTransform(Windows::Graphics::Display::DisplayOrientations const& value) const;
    Windows::Graphics::Display::DisplayOrientations ReadingTransform() const;
};
template <> struct consume<Windows::Devices::Sensors::ISimpleOrientationSensor2> { template <typename D> using type = consume_Windows_Devices_Sensors_ISimpleOrientationSensor2<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_ISimpleOrientationSensorDeviceId
{
    hstring DeviceId() const;
};
template <> struct consume<Windows::Devices::Sensors::ISimpleOrientationSensorDeviceId> { template <typename D> using type = consume_Windows_Devices_Sensors_ISimpleOrientationSensorDeviceId<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_ISimpleOrientationSensorOrientationChangedEventArgs
{
    Windows::Foundation::DateTime Timestamp() const;
    Windows::Devices::Sensors::SimpleOrientation Orientation() const;
};
template <> struct consume<Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_Sensors_ISimpleOrientationSensorOrientationChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_ISimpleOrientationSensorStatics
{
    Windows::Devices::Sensors::SimpleOrientationSensor GetDefault() const;
};
template <> struct consume<Windows::Devices::Sensors::ISimpleOrientationSensorStatics> { template <typename D> using type = consume_Windows_Devices_Sensors_ISimpleOrientationSensorStatics<D>; };

template <> struct abi<Windows::Devices::Sensors::IAccelerometer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCurrentReading(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_ReportInterval(uint32_t value) = 0;
    virtual HRESULT __stdcall get_ReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ReadingChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Shaken(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Shaken(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IAccelerometer2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_ReadingTransform(abi_t<Windows::Graphics::Display::DisplayOrientations> value) = 0;
    virtual HRESULT __stdcall get_ReadingTransform(abi_t<Windows::Graphics::Display::DisplayOrientations>* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IAccelerometer3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_ReportLatency(uint32_t value) = 0;
    virtual HRESULT __stdcall get_ReportLatency(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_MaxBatchSize(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IAccelerometer4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ReadingType(abi_t<Windows::Devices::Sensors::AccelerometerReadingType>* type) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IAccelerometerDeviceId>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IAccelerometerReading>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_AccelerationX(double* value) = 0;
    virtual HRESULT __stdcall get_AccelerationY(double* value) = 0;
    virtual HRESULT __stdcall get_AccelerationZ(double* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IAccelerometerReadingChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Reading(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IAccelerometerShakenEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IAccelerometerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IAccelerometerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefaultWithAccelerometerReadingType(abi_t<Windows::Devices::Sensors::AccelerometerReadingType> readingType, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IActivitySensor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCurrentReadingAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_SubscribedActivities(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PowerInMilliwatts(double* value) = 0;
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SupportedActivities(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ReadingChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IActivitySensorReading>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_Activity(abi_t<Windows::Devices::Sensors::ActivityType>* value) = 0;
    virtual HRESULT __stdcall get_Confidence(abi_t<Windows::Devices::Sensors::ActivitySensorReadingConfidence>* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IActivitySensorReadingChangeReport>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Reading(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IActivitySensorReadingChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Reading(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IActivitySensorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefaultAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* value) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetSystemHistoryAsync(abi_t<Windows::Foundation::DateTime> fromTime, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetSystemHistoryWithDurationAsync(abi_t<Windows::Foundation::DateTime> fromTime, abi_t<Windows::Foundation::TimeSpan> duration, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IActivitySensorTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ReadReports(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IAltimeter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCurrentReading(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_ReportInterval(uint32_t value) = 0;
    virtual HRESULT __stdcall get_ReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ReadingChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IAltimeterReading>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_AltitudeChangeInMeters(double* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IAltimeterReadingChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Reading(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IAltimeterStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IBarometer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCurrentReading(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_ReportInterval(uint32_t value) = 0;
    virtual HRESULT __stdcall get_ReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ReadingChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IBarometerReading>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_StationPressureInHectopascals(double* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IBarometerReadingChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Reading(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IBarometerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::ICompass>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCurrentReading(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_ReportInterval(uint32_t value) = 0;
    virtual HRESULT __stdcall get_ReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ReadingChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::ICompass2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_ReadingTransform(abi_t<Windows::Graphics::Display::DisplayOrientations> value) = 0;
    virtual HRESULT __stdcall get_ReadingTransform(abi_t<Windows::Graphics::Display::DisplayOrientations>* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::ICompassDeviceId>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::ICompassReading>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_HeadingMagneticNorth(double* value) = 0;
    virtual HRESULT __stdcall get_HeadingTrueNorth(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::ICompassReadingChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Reading(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::ICompassReadingHeadingAccuracy>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HeadingAccuracy(abi_t<Windows::Devices::Sensors::MagnetometerAccuracy>* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::ICompassStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IGyrometer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCurrentReading(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_ReportInterval(uint32_t value) = 0;
    virtual HRESULT __stdcall get_ReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ReadingChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IGyrometer2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_ReadingTransform(abi_t<Windows::Graphics::Display::DisplayOrientations> value) = 0;
    virtual HRESULT __stdcall get_ReadingTransform(abi_t<Windows::Graphics::Display::DisplayOrientations>* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IGyrometerDeviceId>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IGyrometerReading>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_AngularVelocityX(double* value) = 0;
    virtual HRESULT __stdcall get_AngularVelocityY(double* value) = 0;
    virtual HRESULT __stdcall get_AngularVelocityZ(double* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IGyrometerReadingChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Reading(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IGyrometerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IInclinometer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCurrentReading(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_ReportInterval(uint32_t value) = 0;
    virtual HRESULT __stdcall get_ReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ReadingChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IInclinometer2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_ReadingTransform(abi_t<Windows::Graphics::Display::DisplayOrientations> value) = 0;
    virtual HRESULT __stdcall get_ReadingTransform(abi_t<Windows::Graphics::Display::DisplayOrientations>* value) = 0;
    virtual HRESULT __stdcall get_ReadingType(abi_t<Windows::Devices::Sensors::SensorReadingType>* type) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IInclinometerDeviceId>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IInclinometerReading>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_PitchDegrees(float* value) = 0;
    virtual HRESULT __stdcall get_RollDegrees(float* value) = 0;
    virtual HRESULT __stdcall get_YawDegrees(float* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IInclinometerReadingChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Reading(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IInclinometerReadingYawAccuracy>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_YawAccuracy(abi_t<Windows::Devices::Sensors::MagnetometerAccuracy>* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IInclinometerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IInclinometerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefaultForRelativeReadings(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IInclinometerStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefaultWithSensorReadingType(abi_t<Windows::Devices::Sensors::SensorReadingType> sensorReadingtype, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::ILightSensor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCurrentReading(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_ReportInterval(uint32_t value) = 0;
    virtual HRESULT __stdcall get_ReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ReadingChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::ILightSensorDeviceId>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::ILightSensorReading>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_IlluminanceInLux(float* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::ILightSensorReadingChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Reading(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::ILightSensorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IMagnetometer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCurrentReading(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_ReportInterval(uint32_t value) = 0;
    virtual HRESULT __stdcall get_ReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ReadingChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IMagnetometer2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_ReadingTransform(abi_t<Windows::Graphics::Display::DisplayOrientations> value) = 0;
    virtual HRESULT __stdcall get_ReadingTransform(abi_t<Windows::Graphics::Display::DisplayOrientations>* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IMagnetometerDeviceId>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IMagnetometerReading>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_MagneticFieldX(float* value) = 0;
    virtual HRESULT __stdcall get_MagneticFieldY(float* value) = 0;
    virtual HRESULT __stdcall get_MagneticFieldZ(float* value) = 0;
    virtual HRESULT __stdcall get_DirectionalAccuracy(abi_t<Windows::Devices::Sensors::MagnetometerAccuracy>* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IMagnetometerReadingChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Reading(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IMagnetometerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IOrientationSensor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCurrentReading(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_ReportInterval(uint32_t value) = 0;
    virtual HRESULT __stdcall get_ReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ReadingChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IOrientationSensor2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_ReadingTransform(abi_t<Windows::Graphics::Display::DisplayOrientations> value) = 0;
    virtual HRESULT __stdcall get_ReadingTransform(abi_t<Windows::Graphics::Display::DisplayOrientations>* value) = 0;
    virtual HRESULT __stdcall get_ReadingType(abi_t<Windows::Devices::Sensors::SensorReadingType>* type) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IOrientationSensorDeviceId>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IOrientationSensorReading>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_RotationMatrix(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Quaternion(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IOrientationSensorReadingChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Reading(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IOrientationSensorReadingYawAccuracy>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_YawAccuracy(abi_t<Windows::Devices::Sensors::MagnetometerAccuracy>* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IOrientationSensorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IOrientationSensorStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefaultForRelativeReadings(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IOrientationSensorStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefaultWithSensorReadingType(abi_t<Windows::Devices::Sensors::SensorReadingType> sensorReadingtype, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetDefaultWithSensorReadingTypeAndSensorOptimizationGoal(abi_t<Windows::Devices::Sensors::SensorReadingType> sensorReadingType, abi_t<Windows::Devices::Sensors::SensorOptimizationGoal> optimizationGoal, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IPedometer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PowerInMilliwatts(double* value) = 0;
    virtual HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_ReportInterval(uint32_t value) = 0;
    virtual HRESULT __stdcall get_ReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ReadingChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IPedometer2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCurrentReadings(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IPedometerDataThresholdFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* sensor, int32_t stepGoal, ::IUnknown** threshold) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IPedometerReading>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StepKind(abi_t<Windows::Devices::Sensors::PedometerStepKind>* value) = 0;
    virtual HRESULT __stdcall get_CumulativeSteps(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_CumulativeStepsDuration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IPedometerReadingChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Reading(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IPedometerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetDefaultAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* result) = 0;
    virtual HRESULT __stdcall GetSystemHistoryAsync(abi_t<Windows::Foundation::DateTime> fromTime, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetSystemHistoryWithDurationAsync(abi_t<Windows::Foundation::DateTime> fromTime, abi_t<Windows::Foundation::TimeSpan> duration, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IPedometerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetReadingsFromTriggerDetails(::IUnknown* triggerDetails, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IProximitySensor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MaxDistanceInMillimeters(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MinDistanceInMillimeters(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetCurrentReading(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ReadingChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall CreateDisplayOnOffController(::IUnknown** controller) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IProximitySensorDataThresholdFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* sensor, ::IUnknown** threshold) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IProximitySensorReading>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_IsDetected(bool* value) = 0;
    virtual HRESULT __stdcall get_DistanceInMillimeters(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IProximitySensorReadingChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Reading(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IProximitySensorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* value) = 0;
    virtual HRESULT __stdcall FromId(HSTRING sensorId, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::IProximitySensorStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetReadingsFromTriggerDetails(::IUnknown* triggerDetails, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::ISensorDataThreshold>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SensorType(abi_t<Windows::Devices::Sensors::SensorType>* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::ISensorQuaternion>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_W(float* value) = 0;
    virtual HRESULT __stdcall get_X(float* value) = 0;
    virtual HRESULT __stdcall get_Y(float* value) = 0;
    virtual HRESULT __stdcall get_Z(float* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::ISensorRotationMatrix>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_M11(float* value) = 0;
    virtual HRESULT __stdcall get_M12(float* value) = 0;
    virtual HRESULT __stdcall get_M13(float* value) = 0;
    virtual HRESULT __stdcall get_M21(float* value) = 0;
    virtual HRESULT __stdcall get_M22(float* value) = 0;
    virtual HRESULT __stdcall get_M23(float* value) = 0;
    virtual HRESULT __stdcall get_M31(float* value) = 0;
    virtual HRESULT __stdcall get_M32(float* value) = 0;
    virtual HRESULT __stdcall get_M33(float* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::ISimpleOrientationSensor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCurrentOrientation(abi_t<Windows::Devices::Sensors::SimpleOrientation>* value) = 0;
    virtual HRESULT __stdcall add_OrientationChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_OrientationChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::ISimpleOrientationSensor2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_ReadingTransform(abi_t<Windows::Graphics::Display::DisplayOrientations> value) = 0;
    virtual HRESULT __stdcall get_ReadingTransform(abi_t<Windows::Graphics::Display::DisplayOrientations>* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::ISimpleOrientationSensorDeviceId>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_Orientation(abi_t<Windows::Devices::Sensors::SimpleOrientation>* value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::ISimpleOrientationSensorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** result) = 0;
};};

}
