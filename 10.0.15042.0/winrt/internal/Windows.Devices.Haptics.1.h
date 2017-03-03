// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Devices.Haptics.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Haptics {

struct __declspec(uuid("3d577ef7-4cee-11e6-b535-001bdc06ab3b")) __declspec(novtable) IKnownSimpleHapticsControllerWaveformsStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Click(uint16_t * value) = 0;
    virtual HRESULT __stdcall get_BuzzContinuous(uint16_t * value) = 0;
    virtual HRESULT __stdcall get_RumbleContinuous(uint16_t * value) = 0;
    virtual HRESULT __stdcall get_Press(uint16_t * value) = 0;
    virtual HRESULT __stdcall get_Release(uint16_t * value) = 0;
};

struct __declspec(uuid("3d577ef9-4cee-11e6-b535-001bdc06ab3b")) __declspec(novtable) ISimpleHapticsController : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_SupportedFeedback(Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::SimpleHapticsControllerFeedback> ** value) = 0;
    virtual HRESULT __stdcall get_IsIntensitySupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsPlayCountSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsPlayDurationSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsReplayPauseIntervalSupported(bool * value) = 0;
    virtual HRESULT __stdcall abi_StopFeedback() = 0;
    virtual HRESULT __stdcall abi_SendHapticFeedback(Windows::Devices::Haptics::ISimpleHapticsControllerFeedback * feedback) = 0;
    virtual HRESULT __stdcall abi_SendHapticFeedbackWithIntensity(Windows::Devices::Haptics::ISimpleHapticsControllerFeedback * feedback, double intensity) = 0;
    virtual HRESULT __stdcall abi_SendHapticFeedbackForDuration(Windows::Devices::Haptics::ISimpleHapticsControllerFeedback * feedback, double intensity, Windows::Foundation::TimeSpan playDuration) = 0;
    virtual HRESULT __stdcall abi_SendHapticFeedbackForPlayCount(Windows::Devices::Haptics::ISimpleHapticsControllerFeedback * feedback, double intensity, int32_t playCount, Windows::Foundation::TimeSpan replayPauseInterval) = 0;
};

struct __declspec(uuid("3d577ef8-4cee-11e6-b535-001bdc06ab3b")) __declspec(novtable) ISimpleHapticsControllerFeedback : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Waveform(uint16_t * value) = 0;
    virtual HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan * value) = 0;
};

struct __declspec(uuid("40f21a3e-8844-47ff-b312-06185a3844da")) __declspec(novtable) IVibrationDevice : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_SimpleHapticsController(Windows::Devices::Haptics::ISimpleHapticsController ** value) = 0;
};

struct __declspec(uuid("53e2eded-2290-4ac9-8eb3-1a84122eb71c")) __declspec(novtable) IVibrationDeviceStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_RequestAccessAsync(Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Haptics::VibrationAccessStatus> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetDeviceSelector(hstring * result) = 0;
    virtual HRESULT __stdcall abi_FromIdAsync(hstring deviceId, Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetDefaultAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> ** operation) = 0;
    virtual HRESULT __stdcall abi_FindAllAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::VibrationDevice>> ** operation) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Devices::Haptics::SimpleHapticsController> { using default_interface = Windows::Devices::Haptics::ISimpleHapticsController; };
template <> struct traits<Windows::Devices::Haptics::SimpleHapticsControllerFeedback> { using default_interface = Windows::Devices::Haptics::ISimpleHapticsControllerFeedback; };
template <> struct traits<Windows::Devices::Haptics::VibrationDevice> { using default_interface = Windows::Devices::Haptics::IVibrationDevice; };

}

namespace Windows::Devices::Haptics {

template <typename D>
struct WINRT_EBO impl_IKnownSimpleHapticsControllerWaveformsStatics
{
    uint16_t Click() const;
    uint16_t BuzzContinuous() const;
    uint16_t RumbleContinuous() const;
    uint16_t Press() const;
    uint16_t Release() const;
};

template <typename D>
struct WINRT_EBO impl_ISimpleHapticsController
{
    hstring Id() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::SimpleHapticsControllerFeedback> SupportedFeedback() const;
    bool IsIntensitySupported() const;
    bool IsPlayCountSupported() const;
    bool IsPlayDurationSupported() const;
    bool IsReplayPauseIntervalSupported() const;
    void StopFeedback() const;
    void SendHapticFeedback(const Windows::Devices::Haptics::SimpleHapticsControllerFeedback & feedback) const;
    void SendHapticFeedback(const Windows::Devices::Haptics::SimpleHapticsControllerFeedback & feedback, double intensity) const;
    void SendHapticFeedbackForDuration(const Windows::Devices::Haptics::SimpleHapticsControllerFeedback & feedback, double intensity, const Windows::Foundation::TimeSpan & playDuration) const;
    void SendHapticFeedbackForPlayCount(const Windows::Devices::Haptics::SimpleHapticsControllerFeedback & feedback, double intensity, int32_t playCount, const Windows::Foundation::TimeSpan & replayPauseInterval) const;
};

template <typename D>
struct WINRT_EBO impl_ISimpleHapticsControllerFeedback
{
    uint16_t Waveform() const;
    Windows::Foundation::TimeSpan Duration() const;
};

template <typename D>
struct WINRT_EBO impl_IVibrationDevice
{
    hstring Id() const;
    Windows::Devices::Haptics::SimpleHapticsController SimpleHapticsController() const;
};

template <typename D>
struct WINRT_EBO impl_IVibrationDeviceStatics
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Haptics::VibrationAccessStatus> RequestAccessAsync() const;
    hstring GetDeviceSelector() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> FromIdAsync(hstring_view deviceId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> GetDefaultAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::VibrationDevice>> FindAllAsync() const;
};

}

namespace impl {

template <> struct traits<Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics>
{
    using abi = ABI::Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics;
    template <typename D> using consume = Windows::Devices::Haptics::impl_IKnownSimpleHapticsControllerWaveformsStatics<D>;
};

template <> struct traits<Windows::Devices::Haptics::ISimpleHapticsController>
{
    using abi = ABI::Windows::Devices::Haptics::ISimpleHapticsController;
    template <typename D> using consume = Windows::Devices::Haptics::impl_ISimpleHapticsController<D>;
};

template <> struct traits<Windows::Devices::Haptics::ISimpleHapticsControllerFeedback>
{
    using abi = ABI::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback;
    template <typename D> using consume = Windows::Devices::Haptics::impl_ISimpleHapticsControllerFeedback<D>;
};

template <> struct traits<Windows::Devices::Haptics::IVibrationDevice>
{
    using abi = ABI::Windows::Devices::Haptics::IVibrationDevice;
    template <typename D> using consume = Windows::Devices::Haptics::impl_IVibrationDevice<D>;
};

template <> struct traits<Windows::Devices::Haptics::IVibrationDeviceStatics>
{
    using abi = ABI::Windows::Devices::Haptics::IVibrationDeviceStatics;
    template <typename D> using consume = Windows::Devices::Haptics::impl_IVibrationDeviceStatics<D>;
};

template <> struct traits<Windows::Devices::Haptics::KnownSimpleHapticsControllerWaveforms>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Haptics.KnownSimpleHapticsControllerWaveforms"; }
};

template <> struct traits<Windows::Devices::Haptics::SimpleHapticsController>
{
    using abi = ABI::Windows::Devices::Haptics::SimpleHapticsController;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Haptics.SimpleHapticsController"; }
};

template <> struct traits<Windows::Devices::Haptics::SimpleHapticsControllerFeedback>
{
    using abi = ABI::Windows::Devices::Haptics::SimpleHapticsControllerFeedback;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Haptics.SimpleHapticsControllerFeedback"; }
};

template <> struct traits<Windows::Devices::Haptics::VibrationDevice>
{
    using abi = ABI::Windows::Devices::Haptics::VibrationDevice;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Haptics.VibrationDevice"; }
};

}

}
