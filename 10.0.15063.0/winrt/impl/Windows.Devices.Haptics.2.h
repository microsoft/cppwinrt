// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Haptics.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Haptics {

struct KnownSimpleHapticsControllerWaveforms
{
    KnownSimpleHapticsControllerWaveforms() = delete;
    static uint16_t Click();
    static uint16_t BuzzContinuous();
    static uint16_t RumbleContinuous();
    static uint16_t Press();
    static uint16_t Release();
};

struct WINRT_EBO SimpleHapticsController :
    Windows::Devices::Haptics::ISimpleHapticsController
{
    SimpleHapticsController(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SimpleHapticsControllerFeedback :
    Windows::Devices::Haptics::ISimpleHapticsControllerFeedback
{
    SimpleHapticsControllerFeedback(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VibrationDevice :
    Windows::Devices::Haptics::IVibrationDevice
{
    VibrationDevice(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationAccessStatus> RequestAccessAsync();
    static hstring GetDeviceSelector();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> FromIdAsync(param::hstring const& deviceId);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> GetDefaultAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::VibrationDevice>> FindAllAsync();
};

}
