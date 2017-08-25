// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Haptics {

enum class VibrationAccessStatus
{
    Allowed = 0,
    DeniedByUser = 1,
    DeniedBySystem = 2,
    DeniedByEnergySaver = 3,
};

struct IKnownSimpleHapticsControllerWaveformsStatics;
struct ISimpleHapticsController;
struct ISimpleHapticsControllerFeedback;
struct IVibrationDevice;
struct IVibrationDeviceStatics;
struct KnownSimpleHapticsControllerWaveforms;
struct SimpleHapticsController;
struct SimpleHapticsControllerFeedback;
struct VibrationDevice;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Haptics::ISimpleHapticsController>{ using type = interface_category; };
template <> struct category<Windows::Devices::Haptics::ISimpleHapticsControllerFeedback>{ using type = interface_category; };
template <> struct category<Windows::Devices::Haptics::IVibrationDevice>{ using type = interface_category; };
template <> struct category<Windows::Devices::Haptics::IVibrationDeviceStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Haptics::KnownSimpleHapticsControllerWaveforms>{ using type = class_category; };
template <> struct category<Windows::Devices::Haptics::SimpleHapticsController>{ using type = class_category; };
template <> struct category<Windows::Devices::Haptics::SimpleHapticsControllerFeedback>{ using type = class_category; };
template <> struct category<Windows::Devices::Haptics::VibrationDevice>{ using type = class_category; };
template <> struct category<Windows::Devices::Haptics::VibrationAccessStatus>{ using type = enum_category; };
template <> struct name<Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics>{ static constexpr auto & value{ L"Windows.Devices.Haptics.IKnownSimpleHapticsControllerWaveformsStatics" }; };
template <> struct name<Windows::Devices::Haptics::ISimpleHapticsController>{ static constexpr auto & value{ L"Windows.Devices.Haptics.ISimpleHapticsController" }; };
template <> struct name<Windows::Devices::Haptics::ISimpleHapticsControllerFeedback>{ static constexpr auto & value{ L"Windows.Devices.Haptics.ISimpleHapticsControllerFeedback" }; };
template <> struct name<Windows::Devices::Haptics::IVibrationDevice>{ static constexpr auto & value{ L"Windows.Devices.Haptics.IVibrationDevice" }; };
template <> struct name<Windows::Devices::Haptics::IVibrationDeviceStatics>{ static constexpr auto & value{ L"Windows.Devices.Haptics.IVibrationDeviceStatics" }; };
template <> struct name<Windows::Devices::Haptics::KnownSimpleHapticsControllerWaveforms>{ static constexpr auto & value{ L"Windows.Devices.Haptics.KnownSimpleHapticsControllerWaveforms" }; };
template <> struct name<Windows::Devices::Haptics::SimpleHapticsController>{ static constexpr auto & value{ L"Windows.Devices.Haptics.SimpleHapticsController" }; };
template <> struct name<Windows::Devices::Haptics::SimpleHapticsControllerFeedback>{ static constexpr auto & value{ L"Windows.Devices.Haptics.SimpleHapticsControllerFeedback" }; };
template <> struct name<Windows::Devices::Haptics::VibrationDevice>{ static constexpr auto & value{ L"Windows.Devices.Haptics.VibrationDevice" }; };
template <> struct name<Windows::Devices::Haptics::VibrationAccessStatus>{ static constexpr auto & value{ L"Windows.Devices.Haptics.VibrationAccessStatus" }; };
template <> struct guid<Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics>{ static constexpr GUID value{ 0x3D577EF7,0x4CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid<Windows::Devices::Haptics::ISimpleHapticsController>{ static constexpr GUID value{ 0x3D577EF9,0x4CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid<Windows::Devices::Haptics::ISimpleHapticsControllerFeedback>{ static constexpr GUID value{ 0x3D577EF8,0x4CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid<Windows::Devices::Haptics::IVibrationDevice>{ static constexpr GUID value{ 0x40F21A3E,0x8844,0x47FF,{ 0xB3,0x12,0x06,0x18,0x5A,0x38,0x44,0xDA } }; };
template <> struct guid<Windows::Devices::Haptics::IVibrationDeviceStatics>{ static constexpr GUID value{ 0x53E2EDED,0x2290,0x4AC9,{ 0x8E,0xB3,0x1A,0x84,0x12,0x2E,0xB7,0x1C } }; };
template <> struct default_interface<Windows::Devices::Haptics::SimpleHapticsController>{ using type = Windows::Devices::Haptics::ISimpleHapticsController; };
template <> struct default_interface<Windows::Devices::Haptics::SimpleHapticsControllerFeedback>{ using type = Windows::Devices::Haptics::ISimpleHapticsControllerFeedback; };
template <> struct default_interface<Windows::Devices::Haptics::VibrationDevice>{ using type = Windows::Devices::Haptics::IVibrationDevice; };

template <typename D>
struct consume_Windows_Devices_Haptics_IKnownSimpleHapticsControllerWaveformsStatics
{
    uint16_t Click() const;
    uint16_t BuzzContinuous() const;
    uint16_t RumbleContinuous() const;
    uint16_t Press() const;
    uint16_t Release() const;
};
template <> struct consume<Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics> { template <typename D> using type = consume_Windows_Devices_Haptics_IKnownSimpleHapticsControllerWaveformsStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Haptics_ISimpleHapticsController
{
    hstring Id() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::SimpleHapticsControllerFeedback> SupportedFeedback() const;
    bool IsIntensitySupported() const;
    bool IsPlayCountSupported() const;
    bool IsPlayDurationSupported() const;
    bool IsReplayPauseIntervalSupported() const;
    void StopFeedback() const;
    void SendHapticFeedback(Windows::Devices::Haptics::SimpleHapticsControllerFeedback const& feedback) const;
    void SendHapticFeedback(Windows::Devices::Haptics::SimpleHapticsControllerFeedback const& feedback, double intensity) const;
    void SendHapticFeedbackForDuration(Windows::Devices::Haptics::SimpleHapticsControllerFeedback const& feedback, double intensity, Windows::Foundation::TimeSpan const& playDuration) const;
    void SendHapticFeedbackForPlayCount(Windows::Devices::Haptics::SimpleHapticsControllerFeedback const& feedback, double intensity, int32_t playCount, Windows::Foundation::TimeSpan const& replayPauseInterval) const;
};
template <> struct consume<Windows::Devices::Haptics::ISimpleHapticsController> { template <typename D> using type = consume_Windows_Devices_Haptics_ISimpleHapticsController<D>; };

template <typename D>
struct consume_Windows_Devices_Haptics_ISimpleHapticsControllerFeedback
{
    uint16_t Waveform() const;
    Windows::Foundation::TimeSpan Duration() const;
};
template <> struct consume<Windows::Devices::Haptics::ISimpleHapticsControllerFeedback> { template <typename D> using type = consume_Windows_Devices_Haptics_ISimpleHapticsControllerFeedback<D>; };

template <typename D>
struct consume_Windows_Devices_Haptics_IVibrationDevice
{
    hstring Id() const;
    Windows::Devices::Haptics::SimpleHapticsController SimpleHapticsController() const;
};
template <> struct consume<Windows::Devices::Haptics::IVibrationDevice> { template <typename D> using type = consume_Windows_Devices_Haptics_IVibrationDevice<D>; };

template <typename D>
struct consume_Windows_Devices_Haptics_IVibrationDeviceStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationAccessStatus> RequestAccessAsync() const;
    hstring GetDeviceSelector() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> FromIdAsync(param::hstring const& deviceId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> GetDefaultAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::VibrationDevice>> FindAllAsync() const;
};
template <> struct consume<Windows::Devices::Haptics::IVibrationDeviceStatics> { template <typename D> using type = consume_Windows_Devices_Haptics_IVibrationDeviceStatics<D>; };

template <> struct abi<Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Click(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_BuzzContinuous(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_RumbleContinuous(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Press(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Release(uint16_t* value) = 0;
};};

template <> struct abi<Windows::Devices::Haptics::ISimpleHapticsController>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SupportedFeedback(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsIntensitySupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsPlayCountSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsPlayDurationSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsReplayPauseIntervalSupported(bool* value) = 0;
    virtual HRESULT __stdcall StopFeedback() = 0;
    virtual HRESULT __stdcall SendHapticFeedback(::IUnknown* feedback) = 0;
    virtual HRESULT __stdcall SendHapticFeedbackWithIntensity(::IUnknown* feedback, double intensity) = 0;
    virtual HRESULT __stdcall SendHapticFeedbackForDuration(::IUnknown* feedback, double intensity, abi_t<Windows::Foundation::TimeSpan> playDuration) = 0;
    virtual HRESULT __stdcall SendHapticFeedbackForPlayCount(::IUnknown* feedback, double intensity, int32_t playCount, abi_t<Windows::Foundation::TimeSpan> replayPauseInterval) = 0;
};};

template <> struct abi<Windows::Devices::Haptics::ISimpleHapticsControllerFeedback>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Waveform(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Duration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
};};

template <> struct abi<Windows::Devices::Haptics::IVibrationDevice>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SimpleHapticsController(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Haptics::IVibrationDeviceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestAccessAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* result) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetDefaultAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall FindAllAsync(::IUnknown** operation) = 0;
};};

}
