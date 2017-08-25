// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Sensors::Custom {

struct ICustomSensor;
struct ICustomSensorReading;
struct ICustomSensorReadingChangedEventArgs;
struct ICustomSensorStatics;
struct CustomSensor;
struct CustomSensorReading;
struct CustomSensorReadingChangedEventArgs;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Sensors::Custom::ICustomSensor>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::Custom::ICustomSensorReading>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::Custom::ICustomSensorStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sensors::Custom::CustomSensor>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::Custom::CustomSensorReading>{ using type = class_category; };
template <> struct category<Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs>{ using type = class_category; };
template <> struct name<Windows::Devices::Sensors::Custom::ICustomSensor>{ static constexpr auto & value{ L"Windows.Devices.Sensors.Custom.ICustomSensor" }; };
template <> struct name<Windows::Devices::Sensors::Custom::ICustomSensorReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.Custom.ICustomSensorReading" }; };
template <> struct name<Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.Custom.ICustomSensorReadingChangedEventArgs" }; };
template <> struct name<Windows::Devices::Sensors::Custom::ICustomSensorStatics>{ static constexpr auto & value{ L"Windows.Devices.Sensors.Custom.ICustomSensorStatics" }; };
template <> struct name<Windows::Devices::Sensors::Custom::CustomSensor>{ static constexpr auto & value{ L"Windows.Devices.Sensors.Custom.CustomSensor" }; };
template <> struct name<Windows::Devices::Sensors::Custom::CustomSensorReading>{ static constexpr auto & value{ L"Windows.Devices.Sensors.Custom.CustomSensorReading" }; };
template <> struct name<Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sensors.Custom.CustomSensorReadingChangedEventArgs" }; };
template <> struct guid<Windows::Devices::Sensors::Custom::ICustomSensor>{ static constexpr GUID value{ 0xA136F9AD,0x4034,0x4B4D,{ 0x99,0xDD,0x53,0x1A,0xAC,0x64,0x9C,0x09 } }; };
template <> struct guid<Windows::Devices::Sensors::Custom::ICustomSensorReading>{ static constexpr GUID value{ 0x64004F4D,0x446A,0x4366,{ 0xA8,0x7A,0x5F,0x96,0x32,0x68,0xEC,0x53 } }; };
template <> struct guid<Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs>{ static constexpr GUID value{ 0x6B202023,0xCFFD,0x4CC1,{ 0x8F,0xF0,0xE2,0x18,0x23,0xD7,0x6F,0xCC } }; };
template <> struct guid<Windows::Devices::Sensors::Custom::ICustomSensorStatics>{ static constexpr GUID value{ 0x992052CF,0xF422,0x4C7D,{ 0x83,0x6B,0xE7,0xDC,0x74,0xA7,0x12,0x4B } }; };
template <> struct default_interface<Windows::Devices::Sensors::Custom::CustomSensor>{ using type = Windows::Devices::Sensors::Custom::ICustomSensor; };
template <> struct default_interface<Windows::Devices::Sensors::Custom::CustomSensorReading>{ using type = Windows::Devices::Sensors::Custom::ICustomSensorReading; };
template <> struct default_interface<Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs; };

template <typename D>
struct consume_Windows_Devices_Sensors_Custom_ICustomSensor
{
    Windows::Devices::Sensors::Custom::CustomSensorReading GetCurrentReading() const;
    uint32_t MinimumReportInterval() const;
    void ReportInterval(uint32_t value) const;
    uint32_t ReportInterval() const;
    hstring DeviceId() const;
    event_token ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Custom::CustomSensor, Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs> const& handler) const;
    using ReadingChanged_revoker = event_revoker<Windows::Devices::Sensors::Custom::ICustomSensor>;
    ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Custom::CustomSensor, Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs> const& handler) const;
    void ReadingChanged(event_token const& token) const;
};
template <> struct consume<Windows::Devices::Sensors::Custom::ICustomSensor> { template <typename D> using type = consume_Windows_Devices_Sensors_Custom_ICustomSensor<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_Custom_ICustomSensorReading
{
    Windows::Foundation::DateTime Timestamp() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> Properties() const;
};
template <> struct consume<Windows::Devices::Sensors::Custom::ICustomSensorReading> { template <typename D> using type = consume_Windows_Devices_Sensors_Custom_ICustomSensorReading<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_Custom_ICustomSensorReadingChangedEventArgs
{
    Windows::Devices::Sensors::Custom::CustomSensorReading Reading() const;
};
template <> struct consume<Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_Sensors_Custom_ICustomSensorReadingChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Sensors_Custom_ICustomSensorStatics
{
    hstring GetDeviceSelector(GUID const& interfaceId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Custom::CustomSensor> FromIdAsync(param::hstring const& sensorId) const;
};
template <> struct consume<Windows::Devices::Sensors::Custom::ICustomSensorStatics> { template <typename D> using type = consume_Windows_Devices_Sensors_Custom_ICustomSensorStatics<D>; };

template <> struct abi<Windows::Devices::Sensors::Custom::ICustomSensor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCurrentReading(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_ReportInterval(uint32_t value) = 0;
    virtual HRESULT __stdcall get_ReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall add_ReadingChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ReadingChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::Custom::ICustomSensorReading>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Reading(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Sensors::Custom::ICustomSensorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeviceSelector(abi_t<GUID> interfaceId, HSTRING* result) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING sensorId, ::IUnknown** result) = 0;
};};

}
