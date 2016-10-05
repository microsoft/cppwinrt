// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Sensors {

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

namespace Windows::Devices::Sensors {

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

namespace Windows::Devices::Sensors {

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

}

}
