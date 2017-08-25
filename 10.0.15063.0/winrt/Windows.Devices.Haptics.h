// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Haptics.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> uint16_t consume_Windows_Devices_Haptics_IKnownSimpleHapticsControllerWaveformsStatics<D>::Click() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics)->get_Click(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Haptics_IKnownSimpleHapticsControllerWaveformsStatics<D>::BuzzContinuous() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics)->get_BuzzContinuous(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Haptics_IKnownSimpleHapticsControllerWaveformsStatics<D>::RumbleContinuous() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics)->get_RumbleContinuous(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Haptics_IKnownSimpleHapticsControllerWaveformsStatics<D>::Press() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics)->get_Press(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Haptics_IKnownSimpleHapticsControllerWaveformsStatics<D>::Release() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics)->get_Release(&value));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Haptics_ISimpleHapticsController<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::ISimpleHapticsController)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::SimpleHapticsControllerFeedback> consume_Windows_Devices_Haptics_ISimpleHapticsController<D>::SupportedFeedback() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::SimpleHapticsControllerFeedback> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::ISimpleHapticsController)->get_SupportedFeedback(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Haptics_ISimpleHapticsController<D>::IsIntensitySupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::ISimpleHapticsController)->get_IsIntensitySupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Haptics_ISimpleHapticsController<D>::IsPlayCountSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::ISimpleHapticsController)->get_IsPlayCountSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Haptics_ISimpleHapticsController<D>::IsPlayDurationSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::ISimpleHapticsController)->get_IsPlayDurationSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Haptics_ISimpleHapticsController<D>::IsReplayPauseIntervalSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::ISimpleHapticsController)->get_IsReplayPauseIntervalSupported(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Haptics_ISimpleHapticsController<D>::StopFeedback() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::ISimpleHapticsController)->StopFeedback());
}

template <typename D> void consume_Windows_Devices_Haptics_ISimpleHapticsController<D>::SendHapticFeedback(Windows::Devices::Haptics::SimpleHapticsControllerFeedback const& feedback) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::ISimpleHapticsController)->SendHapticFeedback(get_abi(feedback)));
}

template <typename D> void consume_Windows_Devices_Haptics_ISimpleHapticsController<D>::SendHapticFeedback(Windows::Devices::Haptics::SimpleHapticsControllerFeedback const& feedback, double intensity) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::ISimpleHapticsController)->SendHapticFeedbackWithIntensity(get_abi(feedback), intensity));
}

template <typename D> void consume_Windows_Devices_Haptics_ISimpleHapticsController<D>::SendHapticFeedbackForDuration(Windows::Devices::Haptics::SimpleHapticsControllerFeedback const& feedback, double intensity, Windows::Foundation::TimeSpan const& playDuration) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::ISimpleHapticsController)->SendHapticFeedbackForDuration(get_abi(feedback), intensity, get_abi(playDuration)));
}

template <typename D> void consume_Windows_Devices_Haptics_ISimpleHapticsController<D>::SendHapticFeedbackForPlayCount(Windows::Devices::Haptics::SimpleHapticsControllerFeedback const& feedback, double intensity, int32_t playCount, Windows::Foundation::TimeSpan const& replayPauseInterval) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::ISimpleHapticsController)->SendHapticFeedbackForPlayCount(get_abi(feedback), intensity, playCount, get_abi(replayPauseInterval)));
}

template <typename D> uint16_t consume_Windows_Devices_Haptics_ISimpleHapticsControllerFeedback<D>::Waveform() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::ISimpleHapticsControllerFeedback)->get_Waveform(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Haptics_ISimpleHapticsControllerFeedback<D>::Duration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::ISimpleHapticsControllerFeedback)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Haptics_IVibrationDevice<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::IVibrationDevice)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Haptics::SimpleHapticsController consume_Windows_Devices_Haptics_IVibrationDevice<D>::SimpleHapticsController() const
{
    Windows::Devices::Haptics::SimpleHapticsController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::IVibrationDevice)->get_SimpleHapticsController(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationAccessStatus> consume_Windows_Devices_Haptics_IVibrationDeviceStatics<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationAccessStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::IVibrationDeviceStatics)->RequestAccessAsync(put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Devices_Haptics_IVibrationDeviceStatics<D>::GetDeviceSelector() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::IVibrationDeviceStatics)->GetDeviceSelector(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> consume_Windows_Devices_Haptics_IVibrationDeviceStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::IVibrationDeviceStatics)->FromIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> consume_Windows_Devices_Haptics_IVibrationDeviceStatics<D>::GetDefaultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::IVibrationDeviceStatics)->GetDefaultAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::VibrationDevice>> consume_Windows_Devices_Haptics_IVibrationDeviceStatics<D>::FindAllAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::VibrationDevice>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Haptics::IVibrationDeviceStatics)->FindAllAsync(put_abi(operation)));
    return operation;
}

template <typename D>
struct produce<D, Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics> : produce_base<D, Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics>
{
    HRESULT __stdcall get_Click(uint16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Click());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BuzzContinuous(uint16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BuzzContinuous());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RumbleContinuous(uint16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RumbleContinuous());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Press(uint16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Press());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Release(uint16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Release());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Haptics::ISimpleHapticsController> : produce_base<D, Windows::Devices::Haptics::ISimpleHapticsController>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedFeedback(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedFeedback());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsIntensitySupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsIntensitySupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPlayCountSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPlayCountSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPlayDurationSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPlayDurationSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsReplayPauseIntervalSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsReplayPauseIntervalSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopFeedback() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopFeedback();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendHapticFeedback(::IUnknown* feedback) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendHapticFeedback(*reinterpret_cast<Windows::Devices::Haptics::SimpleHapticsControllerFeedback const*>(&feedback));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendHapticFeedbackWithIntensity(::IUnknown* feedback, double intensity) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendHapticFeedback(*reinterpret_cast<Windows::Devices::Haptics::SimpleHapticsControllerFeedback const*>(&feedback), intensity);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendHapticFeedbackForDuration(::IUnknown* feedback, double intensity, abi_t<Windows::Foundation::TimeSpan> playDuration) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendHapticFeedbackForDuration(*reinterpret_cast<Windows::Devices::Haptics::SimpleHapticsControllerFeedback const*>(&feedback), intensity, *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&playDuration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendHapticFeedbackForPlayCount(::IUnknown* feedback, double intensity, int32_t playCount, abi_t<Windows::Foundation::TimeSpan> replayPauseInterval) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendHapticFeedbackForPlayCount(*reinterpret_cast<Windows::Devices::Haptics::SimpleHapticsControllerFeedback const*>(&feedback), intensity, playCount, *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&replayPauseInterval));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Haptics::ISimpleHapticsControllerFeedback> : produce_base<D, Windows::Devices::Haptics::ISimpleHapticsControllerFeedback>
{
    HRESULT __stdcall get_Waveform(uint16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Waveform());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Haptics::IVibrationDevice> : produce_base<D, Windows::Devices::Haptics::IVibrationDevice>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SimpleHapticsController(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SimpleHapticsController());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Haptics::IVibrationDeviceStatics> : produce_base<D, Windows::Devices::Haptics::IVibrationDeviceStatics>
{
    HRESULT __stdcall RequestAccessAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestAccessAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDefaultAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetDefaultAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindAllAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Haptics {

inline uint16_t KnownSimpleHapticsControllerWaveforms::Click()
{
    return get_activation_factory<KnownSimpleHapticsControllerWaveforms, Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics>().Click();
}

inline uint16_t KnownSimpleHapticsControllerWaveforms::BuzzContinuous()
{
    return get_activation_factory<KnownSimpleHapticsControllerWaveforms, Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics>().BuzzContinuous();
}

inline uint16_t KnownSimpleHapticsControllerWaveforms::RumbleContinuous()
{
    return get_activation_factory<KnownSimpleHapticsControllerWaveforms, Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics>().RumbleContinuous();
}

inline uint16_t KnownSimpleHapticsControllerWaveforms::Press()
{
    return get_activation_factory<KnownSimpleHapticsControllerWaveforms, Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics>().Press();
}

inline uint16_t KnownSimpleHapticsControllerWaveforms::Release()
{
    return get_activation_factory<KnownSimpleHapticsControllerWaveforms, Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics>().Release();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationAccessStatus> VibrationDevice::RequestAccessAsync()
{
    return get_activation_factory<VibrationDevice, Windows::Devices::Haptics::IVibrationDeviceStatics>().RequestAccessAsync();
}

inline hstring VibrationDevice::GetDeviceSelector()
{
    return get_activation_factory<VibrationDevice, Windows::Devices::Haptics::IVibrationDeviceStatics>().GetDeviceSelector();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> VibrationDevice::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<VibrationDevice, Windows::Devices::Haptics::IVibrationDeviceStatics>().FromIdAsync(deviceId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> VibrationDevice::GetDefaultAsync()
{
    return get_activation_factory<VibrationDevice, Windows::Devices::Haptics::IVibrationDeviceStatics>().GetDefaultAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::VibrationDevice>> VibrationDevice::FindAllAsync()
{
    return get_activation_factory<VibrationDevice, Windows::Devices::Haptics::IVibrationDeviceStatics>().FindAllAsync();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics> {};

template<> struct hash<winrt::Windows::Devices::Haptics::ISimpleHapticsController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Haptics::ISimpleHapticsController> {};

template<> struct hash<winrt::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback> {};

template<> struct hash<winrt::Windows::Devices::Haptics::IVibrationDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Haptics::IVibrationDevice> {};

template<> struct hash<winrt::Windows::Devices::Haptics::IVibrationDeviceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Haptics::IVibrationDeviceStatics> {};

template<> struct hash<winrt::Windows::Devices::Haptics::KnownSimpleHapticsControllerWaveforms> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Haptics::KnownSimpleHapticsControllerWaveforms> {};

template<> struct hash<winrt::Windows::Devices::Haptics::SimpleHapticsController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Haptics::SimpleHapticsController> {};

template<> struct hash<winrt::Windows::Devices::Haptics::SimpleHapticsControllerFeedback> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Haptics::SimpleHapticsControllerFeedback> {};

template<> struct hash<winrt::Windows::Devices::Haptics::VibrationDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Haptics::VibrationDevice> {};

}

WINRT_WARNING_POP
