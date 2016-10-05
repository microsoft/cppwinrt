// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Devices.Sensors.Custom.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Sensors::Custom {

struct __declspec(uuid("a136f9ad-4034-4b4d-99dd-531aac649c09")) __declspec(novtable) ICustomSensor : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetCurrentReading(Windows::Devices::Sensors::Custom::ICustomSensorReading ** value) = 0;
    virtual HRESULT __stdcall get_MinimumReportInterval(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_ReportInterval(uint32_t value) = 0;
    virtual HRESULT __stdcall get_ReportInterval(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall add_ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Custom::CustomSensor, Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ReadingChanged(event_token token) = 0;
};

struct __declspec(uuid("64004f4d-446a-4366-a87a-5f963268ec53")) __declspec(novtable) ICustomSensorReading : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_Properties(Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> ** value) = 0;
};

struct __declspec(uuid("6b202023-cffd-4cc1-8ff0-e21823d76fcc")) __declspec(novtable) ICustomSensorReadingChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Reading(Windows::Devices::Sensors::Custom::ICustomSensorReading ** value) = 0;
};

struct __declspec(uuid("992052cf-f422-4c7d-836b-e7dc74a7124b")) __declspec(novtable) ICustomSensorStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDeviceSelector(GUID interfaceId, hstring * result) = 0;
    virtual HRESULT __stdcall abi_FromIdAsync(hstring sensorId, Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Custom::CustomSensor> ** result) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Devices::Sensors::Custom::CustomSensor> { using default_interface = Windows::Devices::Sensors::Custom::ICustomSensor; };
template <> struct traits<Windows::Devices::Sensors::Custom::CustomSensorReading> { using default_interface = Windows::Devices::Sensors::Custom::ICustomSensorReading; };
template <> struct traits<Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs> { using default_interface = Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs; };

}

namespace Windows::Devices::Sensors::Custom {

template <typename T> struct impl_ICustomSensor;
template <typename T> struct impl_ICustomSensorReading;
template <typename T> struct impl_ICustomSensorReadingChangedEventArgs;
template <typename T> struct impl_ICustomSensorStatics;

}

namespace impl {

template <> struct traits<Windows::Devices::Sensors::Custom::ICustomSensor>
{
    using abi = ABI::Windows::Devices::Sensors::Custom::ICustomSensor;
    template <typename D> using consume = Windows::Devices::Sensors::Custom::impl_ICustomSensor<D>;
};

template <> struct traits<Windows::Devices::Sensors::Custom::ICustomSensorReading>
{
    using abi = ABI::Windows::Devices::Sensors::Custom::ICustomSensorReading;
    template <typename D> using consume = Windows::Devices::Sensors::Custom::impl_ICustomSensorReading<D>;
};

template <> struct traits<Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs>
{
    using abi = ABI::Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs;
    template <typename D> using consume = Windows::Devices::Sensors::Custom::impl_ICustomSensorReadingChangedEventArgs<D>;
};

template <> struct traits<Windows::Devices::Sensors::Custom::ICustomSensorStatics>
{
    using abi = ABI::Windows::Devices::Sensors::Custom::ICustomSensorStatics;
    template <typename D> using consume = Windows::Devices::Sensors::Custom::impl_ICustomSensorStatics<D>;
};

template <> struct traits<Windows::Devices::Sensors::Custom::CustomSensor>
{
    using abi = ABI::Windows::Devices::Sensors::Custom::CustomSensor;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Sensors.Custom.CustomSensor"; }
};

template <> struct traits<Windows::Devices::Sensors::Custom::CustomSensorReading>
{
    using abi = ABI::Windows::Devices::Sensors::Custom::CustomSensorReading;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Sensors.Custom.CustomSensorReading"; }
};

template <> struct traits<Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs>
{
    using abi = ABI::Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Sensors.Custom.CustomSensorReadingChangedEventArgs"; }
};

}

}
