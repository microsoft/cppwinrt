// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage {

enum class FileAccessMode;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::Devices::HumanInterfaceDevice {

enum class HidCollectionType
{
    Physical = 0,
    Application = 1,
    Logical = 2,
    Report = 3,
    NamedArray = 4,
    UsageSwitch = 5,
    UsageModifier = 6,
    Other = 7,
};

enum class HidReportType
{
    Input = 0,
    Output = 1,
    Feature = 2,
};

struct IHidBooleanControl;
struct IHidBooleanControlDescription;
struct IHidBooleanControlDescription2;
struct IHidCollection;
struct IHidDevice;
struct IHidDeviceStatics;
struct IHidFeatureReport;
struct IHidInputReport;
struct IHidInputReportReceivedEventArgs;
struct IHidNumericControl;
struct IHidNumericControlDescription;
struct IHidOutputReport;
struct HidBooleanControl;
struct HidBooleanControlDescription;
struct HidCollection;
struct HidDevice;
struct HidFeatureReport;
struct HidInputReport;
struct HidInputReportReceivedEventArgs;
struct HidNumericControl;
struct HidNumericControlDescription;
struct HidOutputReport;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidBooleanControl>{ using type = interface_category; };
template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription>{ using type = interface_category; };
template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2>{ using type = interface_category; };
template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidCollection>{ using type = interface_category; };
template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidDevice>{ using type = interface_category; };
template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidFeatureReport>{ using type = interface_category; };
template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidInputReport>{ using type = interface_category; };
template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidNumericControl>{ using type = interface_category; };
template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription>{ using type = interface_category; };
template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidOutputReport>{ using type = interface_category; };
template <> struct category<Windows::Devices::HumanInterfaceDevice::HidBooleanControl>{ using type = class_category; };
template <> struct category<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription>{ using type = class_category; };
template <> struct category<Windows::Devices::HumanInterfaceDevice::HidCollection>{ using type = class_category; };
template <> struct category<Windows::Devices::HumanInterfaceDevice::HidDevice>{ using type = class_category; };
template <> struct category<Windows::Devices::HumanInterfaceDevice::HidFeatureReport>{ using type = class_category; };
template <> struct category<Windows::Devices::HumanInterfaceDevice::HidInputReport>{ using type = class_category; };
template <> struct category<Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::HumanInterfaceDevice::HidNumericControl>{ using type = class_category; };
template <> struct category<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription>{ using type = class_category; };
template <> struct category<Windows::Devices::HumanInterfaceDevice::HidOutputReport>{ using type = class_category; };
template <> struct category<Windows::Devices::HumanInterfaceDevice::HidCollectionType>{ using type = enum_category; };
template <> struct category<Windows::Devices::HumanInterfaceDevice::HidReportType>{ using type = enum_category; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidBooleanControl>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidBooleanControl" }; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidBooleanControlDescription" }; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidBooleanControlDescription2" }; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidCollection>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidCollection" }; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidDevice>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidDevice" }; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidDeviceStatics" }; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidFeatureReport>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidFeatureReport" }; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidInputReport>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidInputReport" }; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidInputReportReceivedEventArgs" }; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidNumericControl>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidNumericControl" }; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidNumericControlDescription" }; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidOutputReport>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidOutputReport" }; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::HidBooleanControl>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidBooleanControl" }; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidBooleanControlDescription" }; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::HidCollection>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidCollection" }; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::HidDevice>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidDevice" }; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::HidFeatureReport>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidFeatureReport" }; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::HidInputReport>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidInputReport" }; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidInputReportReceivedEventArgs" }; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::HidNumericControl>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidNumericControl" }; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidNumericControlDescription" }; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::HidOutputReport>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidOutputReport" }; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::HidCollectionType>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidCollectionType" }; };
template <> struct name<Windows::Devices::HumanInterfaceDevice::HidReportType>{ static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidReportType" }; };
template <> struct guid<Windows::Devices::HumanInterfaceDevice::IHidBooleanControl>{ static constexpr GUID value{ 0x524DF48A,0x3695,0x408C,{ 0xBB,0xA2,0xE2,0xEB,0x5A,0xBF,0xBC,0x20 } }; };
template <> struct guid<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription>{ static constexpr GUID value{ 0x6196E543,0x29D8,0x4A2A,{ 0x86,0x83,0x84,0x9E,0x20,0x7B,0xBE,0x31 } }; };
template <> struct guid<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2>{ static constexpr GUID value{ 0xC8EED2EA,0x8A77,0x4C36,{ 0xAA,0x00,0x5F,0xF0,0x44,0x9D,0x3E,0x73 } }; };
template <> struct guid<Windows::Devices::HumanInterfaceDevice::IHidCollection>{ static constexpr GUID value{ 0x7189F5A3,0x32F1,0x46E3,{ 0xBE,0xFD,0x44,0xD2,0x66,0x3B,0x7E,0x6A } }; };
template <> struct guid<Windows::Devices::HumanInterfaceDevice::IHidDevice>{ static constexpr GUID value{ 0x5F8A14E7,0x2200,0x432E,{ 0x95,0xDA,0xD0,0x9B,0x87,0xD5,0x74,0xA8 } }; };
template <> struct guid<Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics>{ static constexpr GUID value{ 0x9E5981E4,0x9856,0x418C,{ 0x9F,0x73,0x77,0xDE,0x0C,0xD8,0x57,0x54 } }; };
template <> struct guid<Windows::Devices::HumanInterfaceDevice::IHidFeatureReport>{ static constexpr GUID value{ 0x841D9B79,0x5AE5,0x46E3,{ 0x82,0xEF,0x1F,0xEC,0x5C,0x89,0x42,0xF4 } }; };
template <> struct guid<Windows::Devices::HumanInterfaceDevice::IHidInputReport>{ static constexpr GUID value{ 0xC35D0E50,0xF7E7,0x4E8D,{ 0xB2,0x3E,0xCA,0xBB,0xE5,0x6B,0x90,0xE9 } }; };
template <> struct guid<Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs>{ static constexpr GUID value{ 0x7059C5CB,0x59B2,0x4DC2,{ 0x98,0x5C,0x0A,0xDC,0x61,0x36,0xFA,0x2D } }; };
template <> struct guid<Windows::Devices::HumanInterfaceDevice::IHidNumericControl>{ static constexpr GUID value{ 0xE38A12A5,0x35A7,0x4B75,{ 0x89,0xC8,0xFB,0x1F,0x28,0xB1,0x08,0x23 } }; };
template <> struct guid<Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription>{ static constexpr GUID value{ 0x638D5E86,0x1D97,0x4C75,{ 0x92,0x7F,0x5F,0xF5,0x8B,0xA0,0x5E,0x32 } }; };
template <> struct guid<Windows::Devices::HumanInterfaceDevice::IHidOutputReport>{ static constexpr GUID value{ 0x62CB2544,0xC896,0x4463,{ 0x93,0xC1,0xDF,0x9D,0xB0,0x53,0xC4,0x50 } }; };
template <> struct default_interface<Windows::Devices::HumanInterfaceDevice::HidBooleanControl>{ using type = Windows::Devices::HumanInterfaceDevice::IHidBooleanControl; };
template <> struct default_interface<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription>{ using type = Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription; };
template <> struct default_interface<Windows::Devices::HumanInterfaceDevice::HidCollection>{ using type = Windows::Devices::HumanInterfaceDevice::IHidCollection; };
template <> struct default_interface<Windows::Devices::HumanInterfaceDevice::HidDevice>{ using type = Windows::Devices::HumanInterfaceDevice::IHidDevice; };
template <> struct default_interface<Windows::Devices::HumanInterfaceDevice::HidFeatureReport>{ using type = Windows::Devices::HumanInterfaceDevice::IHidFeatureReport; };
template <> struct default_interface<Windows::Devices::HumanInterfaceDevice::HidInputReport>{ using type = Windows::Devices::HumanInterfaceDevice::IHidInputReport; };
template <> struct default_interface<Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs>{ using type = Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs; };
template <> struct default_interface<Windows::Devices::HumanInterfaceDevice::HidNumericControl>{ using type = Windows::Devices::HumanInterfaceDevice::IHidNumericControl; };
template <> struct default_interface<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription>{ using type = Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription; };
template <> struct default_interface<Windows::Devices::HumanInterfaceDevice::HidOutputReport>{ using type = Windows::Devices::HumanInterfaceDevice::IHidOutputReport; };

template <typename D>
struct consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControl
{
    uint32_t Id() const;
    uint16_t UsagePage() const;
    uint16_t UsageId() const;
    bool IsActive() const;
    void IsActive(bool value) const;
    Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription ControlDescription() const;
};
template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidBooleanControl> { template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControl<D>; };

template <typename D>
struct consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription
{
    uint32_t Id() const;
    uint16_t ReportId() const;
    Windows::Devices::HumanInterfaceDevice::HidReportType ReportType() const;
    uint16_t UsagePage() const;
    uint16_t UsageId() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidCollection> ParentCollections() const;
};
template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription> { template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription<D>; };

template <typename D>
struct consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription2
{
    bool IsAbsolute() const;
};
template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2> { template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription2<D>; };

template <typename D>
struct consume_Windows_Devices_HumanInterfaceDevice_IHidCollection
{
    uint32_t Id() const;
    Windows::Devices::HumanInterfaceDevice::HidCollectionType Type() const;
    uint32_t UsagePage() const;
    uint32_t UsageId() const;
};
template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidCollection> { template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidCollection<D>; };

template <typename D>
struct consume_Windows_Devices_HumanInterfaceDevice_IHidDevice
{
    uint16_t VendorId() const;
    uint16_t ProductId() const;
    uint16_t Version() const;
    uint16_t UsagePage() const;
    uint16_t UsageId() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidInputReport> GetInputReportAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidInputReport> GetInputReportAsync(uint16_t reportId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidFeatureReport> GetFeatureReportAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidFeatureReport> GetFeatureReportAsync(uint16_t reportId) const;
    Windows::Devices::HumanInterfaceDevice::HidOutputReport CreateOutputReport() const;
    Windows::Devices::HumanInterfaceDevice::HidOutputReport CreateOutputReport(uint16_t reportId) const;
    Windows::Devices::HumanInterfaceDevice::HidFeatureReport CreateFeatureReport() const;
    Windows::Devices::HumanInterfaceDevice::HidFeatureReport CreateFeatureReport(uint16_t reportId) const;
    Windows::Foundation::IAsyncOperation<uint32_t> SendOutputReportAsync(Windows::Devices::HumanInterfaceDevice::HidOutputReport const& outputReport) const;
    Windows::Foundation::IAsyncOperation<uint32_t> SendFeatureReportAsync(Windows::Devices::HumanInterfaceDevice::HidFeatureReport const& featureReport) const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription> GetBooleanControlDescriptions(Windows::Devices::HumanInterfaceDevice::HidReportType const& reportType, uint16_t usagePage, uint16_t usageId) const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription> GetNumericControlDescriptions(Windows::Devices::HumanInterfaceDevice::HidReportType const& reportType, uint16_t usagePage, uint16_t usageId) const;
    event_token InputReportReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::HumanInterfaceDevice::HidDevice, Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs> const& reportHandler) const;
    using InputReportReceived_revoker = event_revoker<Windows::Devices::HumanInterfaceDevice::IHidDevice>;
    InputReportReceived_revoker InputReportReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::HumanInterfaceDevice::HidDevice, Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs> const& reportHandler) const;
    void InputReportReceived(event_token const& token) const;
};
template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidDevice> { template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidDevice<D>; };

template <typename D>
struct consume_Windows_Devices_HumanInterfaceDevice_IHidDeviceStatics
{
    hstring GetDeviceSelector(uint16_t usagePage, uint16_t usageId) const;
    hstring GetDeviceSelector(uint16_t usagePage, uint16_t usageId, uint16_t vendorId, uint16_t productId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidDevice> FromIdAsync(param::hstring const& deviceId, Windows::Storage::FileAccessMode const& accessMode) const;
};
template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics> { template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidDeviceStatics<D>; };

template <typename D>
struct consume_Windows_Devices_HumanInterfaceDevice_IHidFeatureReport
{
    uint16_t Id() const;
    Windows::Storage::Streams::IBuffer Data() const;
    void Data(Windows::Storage::Streams::IBuffer const& value) const;
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl GetBooleanControl(uint16_t usagePage, uint16_t usageId) const;
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl GetBooleanControlByDescription(Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription const& controlDescription) const;
    Windows::Devices::HumanInterfaceDevice::HidNumericControl GetNumericControl(uint16_t usagePage, uint16_t usageId) const;
    Windows::Devices::HumanInterfaceDevice::HidNumericControl GetNumericControlByDescription(Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription const& controlDescription) const;
};
template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidFeatureReport> { template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidFeatureReport<D>; };

template <typename D>
struct consume_Windows_Devices_HumanInterfaceDevice_IHidInputReport
{
    uint16_t Id() const;
    Windows::Storage::Streams::IBuffer Data() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControl> ActivatedBooleanControls() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControl> TransitionedBooleanControls() const;
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl GetBooleanControl(uint16_t usagePage, uint16_t usageId) const;
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl GetBooleanControlByDescription(Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription const& controlDescription) const;
    Windows::Devices::HumanInterfaceDevice::HidNumericControl GetNumericControl(uint16_t usagePage, uint16_t usageId) const;
    Windows::Devices::HumanInterfaceDevice::HidNumericControl GetNumericControlByDescription(Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription const& controlDescription) const;
};
template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidInputReport> { template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidInputReport<D>; };

template <typename D>
struct consume_Windows_Devices_HumanInterfaceDevice_IHidInputReportReceivedEventArgs
{
    Windows::Devices::HumanInterfaceDevice::HidInputReport Report() const;
};
template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs> { template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidInputReportReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControl
{
    uint32_t Id() const;
    bool IsGrouped() const;
    uint16_t UsagePage() const;
    uint16_t UsageId() const;
    int64_t Value() const;
    void Value(int64_t value) const;
    int64_t ScaledValue() const;
    void ScaledValue(int64_t value) const;
    Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription ControlDescription() const;
};
template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidNumericControl> { template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControl<D>; };

template <typename D>
struct consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription
{
    uint32_t Id() const;
    uint16_t ReportId() const;
    Windows::Devices::HumanInterfaceDevice::HidReportType ReportType() const;
    uint32_t ReportSize() const;
    uint32_t ReportCount() const;
    uint16_t UsagePage() const;
    uint16_t UsageId() const;
    int32_t LogicalMinimum() const;
    int32_t LogicalMaximum() const;
    int32_t PhysicalMinimum() const;
    int32_t PhysicalMaximum() const;
    uint32_t UnitExponent() const;
    uint32_t Unit() const;
    bool IsAbsolute() const;
    bool HasNull() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidCollection> ParentCollections() const;
};
template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription> { template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription<D>; };

template <typename D>
struct consume_Windows_Devices_HumanInterfaceDevice_IHidOutputReport
{
    uint16_t Id() const;
    Windows::Storage::Streams::IBuffer Data() const;
    void Data(Windows::Storage::Streams::IBuffer const& value) const;
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl GetBooleanControl(uint16_t usagePage, uint16_t usageId) const;
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl GetBooleanControlByDescription(Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription const& controlDescription) const;
    Windows::Devices::HumanInterfaceDevice::HidNumericControl GetNumericControl(uint16_t usagePage, uint16_t usageId) const;
    Windows::Devices::HumanInterfaceDevice::HidNumericControl GetNumericControlByDescription(Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription const& controlDescription) const;
};
template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidOutputReport> { template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidOutputReport<D>; };

template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidBooleanControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_UsagePage(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_UsageId(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_IsActive(bool* value) = 0;
    virtual HRESULT __stdcall put_IsActive(bool value) = 0;
    virtual HRESULT __stdcall get_ControlDescription(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_ReportId(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_ReportType(abi_t<Windows::Devices::HumanInterfaceDevice::HidReportType>* value) = 0;
    virtual HRESULT __stdcall get_UsagePage(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_UsageId(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_ParentCollections(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsAbsolute(bool* value) = 0;
};};

template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidCollection>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Type(abi_t<Windows::Devices::HumanInterfaceDevice::HidCollectionType>* value) = 0;
    virtual HRESULT __stdcall get_UsagePage(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_UsageId(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidDevice>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_VendorId(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_ProductId(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Version(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_UsagePage(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_UsageId(uint16_t* value) = 0;
    virtual HRESULT __stdcall GetInputReportAsync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetInputReportByIdAsync(uint16_t reportId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetFeatureReportAsync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetFeatureReportByIdAsync(uint16_t reportId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateOutputReport(::IUnknown** outputReport) = 0;
    virtual HRESULT __stdcall CreateOutputReportById(uint16_t reportId, ::IUnknown** outputReport) = 0;
    virtual HRESULT __stdcall CreateFeatureReport(::IUnknown** featureReport) = 0;
    virtual HRESULT __stdcall CreateFeatureReportById(uint16_t reportId, ::IUnknown** featureReport) = 0;
    virtual HRESULT __stdcall SendOutputReportAsync(::IUnknown* outputReport, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SendFeatureReportAsync(::IUnknown* featureReport, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetBooleanControlDescriptions(abi_t<Windows::Devices::HumanInterfaceDevice::HidReportType> reportType, uint16_t usagePage, uint16_t usageId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetNumericControlDescriptions(abi_t<Windows::Devices::HumanInterfaceDevice::HidReportType> reportType, uint16_t usagePage, uint16_t usageId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_InputReportReceived(::IUnknown* reportHandler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_InputReportReceived(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeviceSelector(uint16_t usagePage, uint16_t usageId, HSTRING* selector) = 0;
    virtual HRESULT __stdcall GetDeviceSelectorVidPid(uint16_t usagePage, uint16_t usageId, uint16_t vendorId, uint16_t productId, HSTRING* selector) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, abi_t<Windows::Storage::FileAccessMode> accessMode, ::IUnknown** hidDevice) = 0;
};};

template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidFeatureReport>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Data(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Data(::IUnknown* value) = 0;
    virtual HRESULT __stdcall GetBooleanControl(uint16_t usagePage, uint16_t usageId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetBooleanControlByDescription(::IUnknown* controlDescription, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetNumericControl(uint16_t usagePage, uint16_t usageId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetNumericControlByDescription(::IUnknown* controlDescription, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidInputReport>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Data(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ActivatedBooleanControls(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TransitionedBooleanControls(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetBooleanControl(uint16_t usagePage, uint16_t usageId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetBooleanControlByDescription(::IUnknown* controlDescription, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetNumericControl(uint16_t usagePage, uint16_t usageId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetNumericControlByDescription(::IUnknown* controlDescription, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Report(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidNumericControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_IsGrouped(bool* value) = 0;
    virtual HRESULT __stdcall get_UsagePage(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_UsageId(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Value(int64_t* value) = 0;
    virtual HRESULT __stdcall put_Value(int64_t value) = 0;
    virtual HRESULT __stdcall get_ScaledValue(int64_t* value) = 0;
    virtual HRESULT __stdcall put_ScaledValue(int64_t value) = 0;
    virtual HRESULT __stdcall get_ControlDescription(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_ReportId(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_ReportType(abi_t<Windows::Devices::HumanInterfaceDevice::HidReportType>* value) = 0;
    virtual HRESULT __stdcall get_ReportSize(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_ReportCount(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_UsagePage(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_UsageId(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_LogicalMinimum(int32_t* value) = 0;
    virtual HRESULT __stdcall get_LogicalMaximum(int32_t* value) = 0;
    virtual HRESULT __stdcall get_PhysicalMinimum(int32_t* value) = 0;
    virtual HRESULT __stdcall get_PhysicalMaximum(int32_t* value) = 0;
    virtual HRESULT __stdcall get_UnitExponent(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Unit(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_IsAbsolute(bool* value) = 0;
    virtual HRESULT __stdcall get_HasNull(bool* value) = 0;
    virtual HRESULT __stdcall get_ParentCollections(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidOutputReport>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Data(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Data(::IUnknown* value) = 0;
    virtual HRESULT __stdcall GetBooleanControl(uint16_t usagePage, uint16_t usageId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetBooleanControlByDescription(::IUnknown* controlDescription, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetNumericControl(uint16_t usagePage, uint16_t usageId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetNumericControlByDescription(::IUnknown* controlDescription, ::IUnknown** value) = 0;
};};

}
