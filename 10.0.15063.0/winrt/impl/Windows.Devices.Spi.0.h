// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Spi::Provider {

struct ISpiProvider;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Spi {

enum class SpiMode
{
    Mode0 = 0,
    Mode1 = 1,
    Mode2 = 2,
    Mode3 = 3,
};

enum class SpiSharingMode
{
    Exclusive = 0,
    Shared = 1,
};

struct ISpiBusInfo;
struct ISpiConnectionSettings;
struct ISpiConnectionSettingsFactory;
struct ISpiController;
struct ISpiControllerStatics;
struct ISpiDevice;
struct ISpiDeviceStatics;
struct SpiBusInfo;
struct SpiConnectionSettings;
struct SpiController;
struct SpiDevice;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Spi::ISpiBusInfo>{ using type = interface_category; };
template <> struct category<Windows::Devices::Spi::ISpiConnectionSettings>{ using type = interface_category; };
template <> struct category<Windows::Devices::Spi::ISpiConnectionSettingsFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Spi::ISpiController>{ using type = interface_category; };
template <> struct category<Windows::Devices::Spi::ISpiControllerStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Spi::ISpiDevice>{ using type = interface_category; };
template <> struct category<Windows::Devices::Spi::ISpiDeviceStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Spi::SpiBusInfo>{ using type = class_category; };
template <> struct category<Windows::Devices::Spi::SpiConnectionSettings>{ using type = class_category; };
template <> struct category<Windows::Devices::Spi::SpiController>{ using type = class_category; };
template <> struct category<Windows::Devices::Spi::SpiDevice>{ using type = class_category; };
template <> struct category<Windows::Devices::Spi::SpiMode>{ using type = enum_category; };
template <> struct category<Windows::Devices::Spi::SpiSharingMode>{ using type = enum_category; };
template <> struct name<Windows::Devices::Spi::ISpiBusInfo>{ static constexpr auto & value{ L"Windows.Devices.Spi.ISpiBusInfo" }; };
template <> struct name<Windows::Devices::Spi::ISpiConnectionSettings>{ static constexpr auto & value{ L"Windows.Devices.Spi.ISpiConnectionSettings" }; };
template <> struct name<Windows::Devices::Spi::ISpiConnectionSettingsFactory>{ static constexpr auto & value{ L"Windows.Devices.Spi.ISpiConnectionSettingsFactory" }; };
template <> struct name<Windows::Devices::Spi::ISpiController>{ static constexpr auto & value{ L"Windows.Devices.Spi.ISpiController" }; };
template <> struct name<Windows::Devices::Spi::ISpiControllerStatics>{ static constexpr auto & value{ L"Windows.Devices.Spi.ISpiControllerStatics" }; };
template <> struct name<Windows::Devices::Spi::ISpiDevice>{ static constexpr auto & value{ L"Windows.Devices.Spi.ISpiDevice" }; };
template <> struct name<Windows::Devices::Spi::ISpiDeviceStatics>{ static constexpr auto & value{ L"Windows.Devices.Spi.ISpiDeviceStatics" }; };
template <> struct name<Windows::Devices::Spi::SpiBusInfo>{ static constexpr auto & value{ L"Windows.Devices.Spi.SpiBusInfo" }; };
template <> struct name<Windows::Devices::Spi::SpiConnectionSettings>{ static constexpr auto & value{ L"Windows.Devices.Spi.SpiConnectionSettings" }; };
template <> struct name<Windows::Devices::Spi::SpiController>{ static constexpr auto & value{ L"Windows.Devices.Spi.SpiController" }; };
template <> struct name<Windows::Devices::Spi::SpiDevice>{ static constexpr auto & value{ L"Windows.Devices.Spi.SpiDevice" }; };
template <> struct name<Windows::Devices::Spi::SpiMode>{ static constexpr auto & value{ L"Windows.Devices.Spi.SpiMode" }; };
template <> struct name<Windows::Devices::Spi::SpiSharingMode>{ static constexpr auto & value{ L"Windows.Devices.Spi.SpiSharingMode" }; };
template <> struct guid<Windows::Devices::Spi::ISpiBusInfo>{ static constexpr GUID value{ 0x9929444A,0x54F2,0x48C6,{ 0xB9,0x52,0x9C,0x32,0xFC,0x02,0xC6,0x69 } }; };
template <> struct guid<Windows::Devices::Spi::ISpiConnectionSettings>{ static constexpr GUID value{ 0x5283A37F,0xF935,0x4B9F,{ 0xA7,0xA7,0x3A,0x78,0x90,0xAF,0xA5,0xCE } }; };
template <> struct guid<Windows::Devices::Spi::ISpiConnectionSettingsFactory>{ static constexpr GUID value{ 0xFF99081E,0x10C4,0x44B7,{ 0x9F,0xEA,0xA7,0x48,0xB5,0xA4,0x6F,0x31 } }; };
template <> struct guid<Windows::Devices::Spi::ISpiController>{ static constexpr GUID value{ 0xA8D3C829,0x9895,0x4159,{ 0xA9,0x34,0x87,0x41,0xF1,0xEE,0x6D,0x27 } }; };
template <> struct guid<Windows::Devices::Spi::ISpiControllerStatics>{ static constexpr GUID value{ 0x0D5229E2,0x138B,0x4E48,{ 0xB9,0x64,0x4F,0x2F,0x79,0xB9,0xC5,0xA2 } }; };
template <> struct guid<Windows::Devices::Spi::ISpiDevice>{ static constexpr GUID value{ 0x05D5356D,0x11B6,0x4D39,{ 0x84,0xD5,0x95,0xDF,0xB4,0xC9,0xF2,0xCE } }; };
template <> struct guid<Windows::Devices::Spi::ISpiDeviceStatics>{ static constexpr GUID value{ 0xA278E559,0x5720,0x4D3F,{ 0xBD,0x93,0x56,0xF5,0xFF,0x5A,0x58,0x79 } }; };
template <> struct default_interface<Windows::Devices::Spi::SpiBusInfo>{ using type = Windows::Devices::Spi::ISpiBusInfo; };
template <> struct default_interface<Windows::Devices::Spi::SpiConnectionSettings>{ using type = Windows::Devices::Spi::ISpiConnectionSettings; };
template <> struct default_interface<Windows::Devices::Spi::SpiController>{ using type = Windows::Devices::Spi::ISpiController; };
template <> struct default_interface<Windows::Devices::Spi::SpiDevice>{ using type = Windows::Devices::Spi::ISpiDevice; };

template <typename D>
struct consume_Windows_Devices_Spi_ISpiBusInfo
{
    int32_t ChipSelectLineCount() const;
    int32_t MinClockFrequency() const;
    int32_t MaxClockFrequency() const;
    Windows::Foundation::Collections::IVectorView<int32_t> SupportedDataBitLengths() const;
};
template <> struct consume<Windows::Devices::Spi::ISpiBusInfo> { template <typename D> using type = consume_Windows_Devices_Spi_ISpiBusInfo<D>; };

template <typename D>
struct consume_Windows_Devices_Spi_ISpiConnectionSettings
{
    int32_t ChipSelectLine() const;
    void ChipSelectLine(int32_t value) const;
    Windows::Devices::Spi::SpiMode Mode() const;
    void Mode(Windows::Devices::Spi::SpiMode const& value) const;
    int32_t DataBitLength() const;
    void DataBitLength(int32_t value) const;
    int32_t ClockFrequency() const;
    void ClockFrequency(int32_t value) const;
    Windows::Devices::Spi::SpiSharingMode SharingMode() const;
    void SharingMode(Windows::Devices::Spi::SpiSharingMode const& value) const;
};
template <> struct consume<Windows::Devices::Spi::ISpiConnectionSettings> { template <typename D> using type = consume_Windows_Devices_Spi_ISpiConnectionSettings<D>; };

template <typename D>
struct consume_Windows_Devices_Spi_ISpiConnectionSettingsFactory
{
    Windows::Devices::Spi::SpiConnectionSettings Create(int32_t chipSelectLine) const;
};
template <> struct consume<Windows::Devices::Spi::ISpiConnectionSettingsFactory> { template <typename D> using type = consume_Windows_Devices_Spi_ISpiConnectionSettingsFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Spi_ISpiController
{
    Windows::Devices::Spi::SpiDevice GetDevice(Windows::Devices::Spi::SpiConnectionSettings const& settings) const;
};
template <> struct consume<Windows::Devices::Spi::ISpiController> { template <typename D> using type = consume_Windows_Devices_Spi_ISpiController<D>; };

template <typename D>
struct consume_Windows_Devices_Spi_ISpiControllerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Spi::SpiController> GetDefaultAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Spi::SpiController>> GetControllersAsync(Windows::Devices::Spi::Provider::ISpiProvider const& provider) const;
};
template <> struct consume<Windows::Devices::Spi::ISpiControllerStatics> { template <typename D> using type = consume_Windows_Devices_Spi_ISpiControllerStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Spi_ISpiDevice
{
    hstring DeviceId() const;
    Windows::Devices::Spi::SpiConnectionSettings ConnectionSettings() const;
    void Write(array_view<uint8_t const> buffer) const;
    void Read(array_view<uint8_t> buffer) const;
    void TransferSequential(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const;
    void TransferFullDuplex(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const;
};
template <> struct consume<Windows::Devices::Spi::ISpiDevice> { template <typename D> using type = consume_Windows_Devices_Spi_ISpiDevice<D>; };

template <typename D>
struct consume_Windows_Devices_Spi_ISpiDeviceStatics
{
    hstring GetDeviceSelector() const;
    hstring GetDeviceSelector(param::hstring const& friendlyName) const;
    Windows::Devices::Spi::SpiBusInfo GetBusInfo(param::hstring const& busId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Spi::SpiDevice> FromIdAsync(param::hstring const& busId, Windows::Devices::Spi::SpiConnectionSettings const& settings) const;
};
template <> struct consume<Windows::Devices::Spi::ISpiDeviceStatics> { template <typename D> using type = consume_Windows_Devices_Spi_ISpiDeviceStatics<D>; };

template <> struct abi<Windows::Devices::Spi::ISpiBusInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ChipSelectLineCount(int32_t* value) = 0;
    virtual HRESULT __stdcall get_MinClockFrequency(int32_t* value) = 0;
    virtual HRESULT __stdcall get_MaxClockFrequency(int32_t* value) = 0;
    virtual HRESULT __stdcall get_SupportedDataBitLengths(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Spi::ISpiConnectionSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ChipSelectLine(int32_t* value) = 0;
    virtual HRESULT __stdcall put_ChipSelectLine(int32_t value) = 0;
    virtual HRESULT __stdcall get_Mode(abi_t<Windows::Devices::Spi::SpiMode>* value) = 0;
    virtual HRESULT __stdcall put_Mode(abi_t<Windows::Devices::Spi::SpiMode> value) = 0;
    virtual HRESULT __stdcall get_DataBitLength(int32_t* value) = 0;
    virtual HRESULT __stdcall put_DataBitLength(int32_t value) = 0;
    virtual HRESULT __stdcall get_ClockFrequency(int32_t* value) = 0;
    virtual HRESULT __stdcall put_ClockFrequency(int32_t value) = 0;
    virtual HRESULT __stdcall get_SharingMode(abi_t<Windows::Devices::Spi::SpiSharingMode>* value) = 0;
    virtual HRESULT __stdcall put_SharingMode(abi_t<Windows::Devices::Spi::SpiSharingMode> value) = 0;
};};

template <> struct abi<Windows::Devices::Spi::ISpiConnectionSettingsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(int32_t chipSelectLine, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Spi::ISpiController>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDevice(::IUnknown* settings, ::IUnknown** device) = 0;
};};

template <> struct abi<Windows::Devices::Spi::ISpiControllerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefaultAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetControllersAsync(::IUnknown* provider, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::Spi::ISpiDevice>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ConnectionSettings(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Write(uint32_t __bufferSize, uint8_t* buffer) = 0;
    virtual HRESULT __stdcall Read(uint32_t __bufferSize, uint8_t* buffer) = 0;
    virtual HRESULT __stdcall TransferSequential(uint32_t __writeBufferSize, uint8_t* writeBuffer, uint32_t __readBufferSize, uint8_t* readBuffer) = 0;
    virtual HRESULT __stdcall TransferFullDuplex(uint32_t __writeBufferSize, uint8_t* writeBuffer, uint32_t __readBufferSize, uint8_t* readBuffer) = 0;
};};

template <> struct abi<Windows::Devices::Spi::ISpiDeviceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetDeviceSelectorFromFriendlyName(HSTRING friendlyName, HSTRING* value) = 0;
    virtual HRESULT __stdcall GetBusInfo(HSTRING busId, ::IUnknown** busInfo) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING busId, ::IUnknown* settings, ::IUnknown** operation) = 0;
};};

}
