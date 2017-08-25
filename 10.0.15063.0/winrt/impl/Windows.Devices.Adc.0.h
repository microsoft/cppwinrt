// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Adc::Provider {

struct IAdcProvider;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Adc {

enum class AdcChannelMode
{
    SingleEnded = 0,
    Differential = 1,
};

struct IAdcChannel;
struct IAdcController;
struct IAdcControllerStatics;
struct IAdcControllerStatics2;
struct AdcChannel;
struct AdcController;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Adc::IAdcChannel>{ using type = interface_category; };
template <> struct category<Windows::Devices::Adc::IAdcController>{ using type = interface_category; };
template <> struct category<Windows::Devices::Adc::IAdcControllerStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Adc::IAdcControllerStatics2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Adc::AdcChannel>{ using type = class_category; };
template <> struct category<Windows::Devices::Adc::AdcController>{ using type = class_category; };
template <> struct category<Windows::Devices::Adc::AdcChannelMode>{ using type = enum_category; };
template <> struct name<Windows::Devices::Adc::IAdcChannel>{ static constexpr auto & value{ L"Windows.Devices.Adc.IAdcChannel" }; };
template <> struct name<Windows::Devices::Adc::IAdcController>{ static constexpr auto & value{ L"Windows.Devices.Adc.IAdcController" }; };
template <> struct name<Windows::Devices::Adc::IAdcControllerStatics>{ static constexpr auto & value{ L"Windows.Devices.Adc.IAdcControllerStatics" }; };
template <> struct name<Windows::Devices::Adc::IAdcControllerStatics2>{ static constexpr auto & value{ L"Windows.Devices.Adc.IAdcControllerStatics2" }; };
template <> struct name<Windows::Devices::Adc::AdcChannel>{ static constexpr auto & value{ L"Windows.Devices.Adc.AdcChannel" }; };
template <> struct name<Windows::Devices::Adc::AdcController>{ static constexpr auto & value{ L"Windows.Devices.Adc.AdcController" }; };
template <> struct name<Windows::Devices::Adc::AdcChannelMode>{ static constexpr auto & value{ L"Windows.Devices.Adc.AdcChannelMode" }; };
template <> struct guid<Windows::Devices::Adc::IAdcChannel>{ static constexpr GUID value{ 0x040BF414,0x2588,0x4A56,{ 0xAB,0xEF,0x73,0xA2,0x60,0xAC,0xC6,0x0A } }; };
template <> struct guid<Windows::Devices::Adc::IAdcController>{ static constexpr GUID value{ 0x2A76E4B0,0xA896,0x4219,{ 0x86,0xB6,0xEA,0x8C,0xDC,0xE9,0x8F,0x56 } }; };
template <> struct guid<Windows::Devices::Adc::IAdcControllerStatics>{ static constexpr GUID value{ 0xCCE98E0C,0x01F8,0x4891,{ 0xBC,0x3B,0xBE,0x53,0xEF,0x27,0x9C,0xA4 } }; };
template <> struct guid<Windows::Devices::Adc::IAdcControllerStatics2>{ static constexpr GUID value{ 0xA2B93B1D,0x977B,0x4F5A,{ 0xA5,0xFE,0xA6,0xAB,0xAF,0xFE,0x64,0x84 } }; };
template <> struct default_interface<Windows::Devices::Adc::AdcChannel>{ using type = Windows::Devices::Adc::IAdcChannel; };
template <> struct default_interface<Windows::Devices::Adc::AdcController>{ using type = Windows::Devices::Adc::IAdcController; };

template <typename D>
struct consume_Windows_Devices_Adc_IAdcChannel
{
    Windows::Devices::Adc::AdcController Controller() const;
    int32_t ReadValue() const;
    double ReadRatio() const;
};
template <> struct consume<Windows::Devices::Adc::IAdcChannel> { template <typename D> using type = consume_Windows_Devices_Adc_IAdcChannel<D>; };

template <typename D>
struct consume_Windows_Devices_Adc_IAdcController
{
    int32_t ChannelCount() const;
    int32_t ResolutionInBits() const;
    int32_t MinValue() const;
    int32_t MaxValue() const;
    Windows::Devices::Adc::AdcChannelMode ChannelMode() const;
    void ChannelMode(Windows::Devices::Adc::AdcChannelMode const& value) const;
    bool IsChannelModeSupported(Windows::Devices::Adc::AdcChannelMode const& channelMode) const;
    Windows::Devices::Adc::AdcChannel OpenChannel(int32_t channelNumber) const;
};
template <> struct consume<Windows::Devices::Adc::IAdcController> { template <typename D> using type = consume_Windows_Devices_Adc_IAdcController<D>; };

template <typename D>
struct consume_Windows_Devices_Adc_IAdcControllerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Adc::AdcController>> GetControllersAsync(Windows::Devices::Adc::Provider::IAdcProvider const& provider) const;
};
template <> struct consume<Windows::Devices::Adc::IAdcControllerStatics> { template <typename D> using type = consume_Windows_Devices_Adc_IAdcControllerStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Adc_IAdcControllerStatics2
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Adc::AdcController> GetDefaultAsync() const;
};
template <> struct consume<Windows::Devices::Adc::IAdcControllerStatics2> { template <typename D> using type = consume_Windows_Devices_Adc_IAdcControllerStatics2<D>; };

template <> struct abi<Windows::Devices::Adc::IAdcChannel>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Controller(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ReadValue(int32_t* result) = 0;
    virtual HRESULT __stdcall ReadRatio(double* result) = 0;
};};

template <> struct abi<Windows::Devices::Adc::IAdcController>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ChannelCount(int32_t* value) = 0;
    virtual HRESULT __stdcall get_ResolutionInBits(int32_t* value) = 0;
    virtual HRESULT __stdcall get_MinValue(int32_t* value) = 0;
    virtual HRESULT __stdcall get_MaxValue(int32_t* value) = 0;
    virtual HRESULT __stdcall get_ChannelMode(abi_t<Windows::Devices::Adc::AdcChannelMode>* value) = 0;
    virtual HRESULT __stdcall put_ChannelMode(abi_t<Windows::Devices::Adc::AdcChannelMode> value) = 0;
    virtual HRESULT __stdcall IsChannelModeSupported(abi_t<Windows::Devices::Adc::AdcChannelMode> channelMode, bool* result) = 0;
    virtual HRESULT __stdcall OpenChannel(int32_t channelNumber, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Adc::IAdcControllerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetControllersAsync(::IUnknown* provider, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::Adc::IAdcControllerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefaultAsync(::IUnknown** operation) = 0;
};};

}
