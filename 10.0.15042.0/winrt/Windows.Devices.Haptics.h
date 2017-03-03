// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Devices.Haptics.3.h"
#include "Windows.Devices.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics> : produce_base<D, Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics>
{
    HRESULT __stdcall get_Click(uint16_t * value) noexcept override
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

    HRESULT __stdcall get_BuzzContinuous(uint16_t * value) noexcept override
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

    HRESULT __stdcall get_RumbleContinuous(uint16_t * value) noexcept override
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

    HRESULT __stdcall get_Press(uint16_t * value) noexcept override
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

    HRESULT __stdcall get_Release(uint16_t * value) noexcept override
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
    HRESULT __stdcall get_Id(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_SupportedFeedback(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::SimpleHapticsControllerFeedback>> value) noexcept override
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

    HRESULT __stdcall get_IsIntensitySupported(bool * value) noexcept override
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

    HRESULT __stdcall get_IsPlayCountSupported(bool * value) noexcept override
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

    HRESULT __stdcall get_IsPlayDurationSupported(bool * value) noexcept override
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

    HRESULT __stdcall get_IsReplayPauseIntervalSupported(bool * value) noexcept override
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

    HRESULT __stdcall abi_StopFeedback() noexcept override
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

    HRESULT __stdcall abi_SendHapticFeedback(impl::abi_arg_in<Windows::Devices::Haptics::ISimpleHapticsControllerFeedback> feedback) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendHapticFeedback(*reinterpret_cast<const Windows::Devices::Haptics::SimpleHapticsControllerFeedback *>(&feedback));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendHapticFeedbackWithIntensity(impl::abi_arg_in<Windows::Devices::Haptics::ISimpleHapticsControllerFeedback> feedback, double intensity) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendHapticFeedback(*reinterpret_cast<const Windows::Devices::Haptics::SimpleHapticsControllerFeedback *>(&feedback), intensity);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendHapticFeedbackForDuration(impl::abi_arg_in<Windows::Devices::Haptics::ISimpleHapticsControllerFeedback> feedback, double intensity, impl::abi_arg_in<Windows::Foundation::TimeSpan> playDuration) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendHapticFeedbackForDuration(*reinterpret_cast<const Windows::Devices::Haptics::SimpleHapticsControllerFeedback *>(&feedback), intensity, *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&playDuration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendHapticFeedbackForPlayCount(impl::abi_arg_in<Windows::Devices::Haptics::ISimpleHapticsControllerFeedback> feedback, double intensity, int32_t playCount, impl::abi_arg_in<Windows::Foundation::TimeSpan> replayPauseInterval) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendHapticFeedbackForPlayCount(*reinterpret_cast<const Windows::Devices::Haptics::SimpleHapticsControllerFeedback *>(&feedback), intensity, playCount, *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&replayPauseInterval));
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
    HRESULT __stdcall get_Waveform(uint16_t * value) noexcept override
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

    HRESULT __stdcall get_Duration(impl::abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
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
    HRESULT __stdcall get_Id(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_SimpleHapticsController(impl::abi_arg_out<Windows::Devices::Haptics::ISimpleHapticsController> value) noexcept override
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
    HRESULT __stdcall abi_RequestAccessAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Haptics::VibrationAccessStatus>> operation) noexcept override
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

    HRESULT __stdcall abi_GetDeviceSelector(impl::abi_arg_out<hstring> result) noexcept override
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

    HRESULT __stdcall abi_FromIdAsync(impl::abi_arg_in<hstring> deviceId, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDefaultAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice>> operation) noexcept override
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

    HRESULT __stdcall abi_FindAllAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::VibrationDevice>>> operation) noexcept override
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

namespace Windows::Devices::Haptics {

template <typename D> uint16_t impl_IKnownSimpleHapticsControllerWaveformsStatics<D>::Click() const
{
    uint16_t value {};
    check_hresult(WINRT_SHIM(IKnownSimpleHapticsControllerWaveformsStatics)->get_Click(&value));
    return value;
}

template <typename D> uint16_t impl_IKnownSimpleHapticsControllerWaveformsStatics<D>::BuzzContinuous() const
{
    uint16_t value {};
    check_hresult(WINRT_SHIM(IKnownSimpleHapticsControllerWaveformsStatics)->get_BuzzContinuous(&value));
    return value;
}

template <typename D> uint16_t impl_IKnownSimpleHapticsControllerWaveformsStatics<D>::RumbleContinuous() const
{
    uint16_t value {};
    check_hresult(WINRT_SHIM(IKnownSimpleHapticsControllerWaveformsStatics)->get_RumbleContinuous(&value));
    return value;
}

template <typename D> uint16_t impl_IKnownSimpleHapticsControllerWaveformsStatics<D>::Press() const
{
    uint16_t value {};
    check_hresult(WINRT_SHIM(IKnownSimpleHapticsControllerWaveformsStatics)->get_Press(&value));
    return value;
}

template <typename D> uint16_t impl_IKnownSimpleHapticsControllerWaveformsStatics<D>::Release() const
{
    uint16_t value {};
    check_hresult(WINRT_SHIM(IKnownSimpleHapticsControllerWaveformsStatics)->get_Release(&value));
    return value;
}

template <typename D> uint16_t impl_ISimpleHapticsControllerFeedback<D>::Waveform() const
{
    uint16_t value {};
    check_hresult(WINRT_SHIM(ISimpleHapticsControllerFeedback)->get_Waveform(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_ISimpleHapticsControllerFeedback<D>::Duration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(WINRT_SHIM(ISimpleHapticsControllerFeedback)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> hstring impl_ISimpleHapticsController<D>::Id() const
{
    hstring value;
    check_hresult(WINRT_SHIM(ISimpleHapticsController)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::SimpleHapticsControllerFeedback> impl_ISimpleHapticsController<D>::SupportedFeedback() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::SimpleHapticsControllerFeedback> value;
    check_hresult(WINRT_SHIM(ISimpleHapticsController)->get_SupportedFeedback(put_abi(value)));
    return value;
}

template <typename D> bool impl_ISimpleHapticsController<D>::IsIntensitySupported() const
{
    bool value {};
    check_hresult(WINRT_SHIM(ISimpleHapticsController)->get_IsIntensitySupported(&value));
    return value;
}

template <typename D> bool impl_ISimpleHapticsController<D>::IsPlayCountSupported() const
{
    bool value {};
    check_hresult(WINRT_SHIM(ISimpleHapticsController)->get_IsPlayCountSupported(&value));
    return value;
}

template <typename D> bool impl_ISimpleHapticsController<D>::IsPlayDurationSupported() const
{
    bool value {};
    check_hresult(WINRT_SHIM(ISimpleHapticsController)->get_IsPlayDurationSupported(&value));
    return value;
}

template <typename D> bool impl_ISimpleHapticsController<D>::IsReplayPauseIntervalSupported() const
{
    bool value {};
    check_hresult(WINRT_SHIM(ISimpleHapticsController)->get_IsReplayPauseIntervalSupported(&value));
    return value;
}

template <typename D> void impl_ISimpleHapticsController<D>::StopFeedback() const
{
    check_hresult(WINRT_SHIM(ISimpleHapticsController)->abi_StopFeedback());
}

template <typename D> void impl_ISimpleHapticsController<D>::SendHapticFeedback(const Windows::Devices::Haptics::SimpleHapticsControllerFeedback & feedback) const
{
    check_hresult(WINRT_SHIM(ISimpleHapticsController)->abi_SendHapticFeedback(get_abi(feedback)));
}

template <typename D> void impl_ISimpleHapticsController<D>::SendHapticFeedback(const Windows::Devices::Haptics::SimpleHapticsControllerFeedback & feedback, double intensity) const
{
    check_hresult(WINRT_SHIM(ISimpleHapticsController)->abi_SendHapticFeedbackWithIntensity(get_abi(feedback), intensity));
}

template <typename D> void impl_ISimpleHapticsController<D>::SendHapticFeedbackForDuration(const Windows::Devices::Haptics::SimpleHapticsControllerFeedback & feedback, double intensity, const Windows::Foundation::TimeSpan & playDuration) const
{
    check_hresult(WINRT_SHIM(ISimpleHapticsController)->abi_SendHapticFeedbackForDuration(get_abi(feedback), intensity, get_abi(playDuration)));
}

template <typename D> void impl_ISimpleHapticsController<D>::SendHapticFeedbackForPlayCount(const Windows::Devices::Haptics::SimpleHapticsControllerFeedback & feedback, double intensity, int32_t playCount, const Windows::Foundation::TimeSpan & replayPauseInterval) const
{
    check_hresult(WINRT_SHIM(ISimpleHapticsController)->abi_SendHapticFeedbackForPlayCount(get_abi(feedback), intensity, playCount, get_abi(replayPauseInterval)));
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Haptics::VibrationAccessStatus> impl_IVibrationDeviceStatics<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Haptics::VibrationAccessStatus> operation;
    check_hresult(WINRT_SHIM(IVibrationDeviceStatics)->abi_RequestAccessAsync(put_abi(operation)));
    return operation;
}

template <typename D> hstring impl_IVibrationDeviceStatics<D>::GetDeviceSelector() const
{
    hstring result;
    check_hresult(WINRT_SHIM(IVibrationDeviceStatics)->abi_GetDeviceSelector(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> impl_IVibrationDeviceStatics<D>::FromIdAsync(hstring_view deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> operation;
    check_hresult(WINRT_SHIM(IVibrationDeviceStatics)->abi_FromIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> impl_IVibrationDeviceStatics<D>::GetDefaultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> operation;
    check_hresult(WINRT_SHIM(IVibrationDeviceStatics)->abi_GetDefaultAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::VibrationDevice>> impl_IVibrationDeviceStatics<D>::FindAllAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::VibrationDevice>> operation;
    check_hresult(WINRT_SHIM(IVibrationDeviceStatics)->abi_FindAllAsync(put_abi(operation)));
    return operation;
}

template <typename D> hstring impl_IVibrationDevice<D>::Id() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IVibrationDevice)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Haptics::SimpleHapticsController impl_IVibrationDevice<D>::SimpleHapticsController() const
{
    Windows::Devices::Haptics::SimpleHapticsController value { nullptr };
    check_hresult(WINRT_SHIM(IVibrationDevice)->get_SimpleHapticsController(put_abi(value)));
    return value;
}

inline uint16_t KnownSimpleHapticsControllerWaveforms::Click()
{
    return get_activation_factory<KnownSimpleHapticsControllerWaveforms, IKnownSimpleHapticsControllerWaveformsStatics>().Click();
}

inline uint16_t KnownSimpleHapticsControllerWaveforms::BuzzContinuous()
{
    return get_activation_factory<KnownSimpleHapticsControllerWaveforms, IKnownSimpleHapticsControllerWaveformsStatics>().BuzzContinuous();
}

inline uint16_t KnownSimpleHapticsControllerWaveforms::RumbleContinuous()
{
    return get_activation_factory<KnownSimpleHapticsControllerWaveforms, IKnownSimpleHapticsControllerWaveformsStatics>().RumbleContinuous();
}

inline uint16_t KnownSimpleHapticsControllerWaveforms::Press()
{
    return get_activation_factory<KnownSimpleHapticsControllerWaveforms, IKnownSimpleHapticsControllerWaveformsStatics>().Press();
}

inline uint16_t KnownSimpleHapticsControllerWaveforms::Release()
{
    return get_activation_factory<KnownSimpleHapticsControllerWaveforms, IKnownSimpleHapticsControllerWaveformsStatics>().Release();
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Haptics::VibrationAccessStatus> VibrationDevice::RequestAccessAsync()
{
    return get_activation_factory<VibrationDevice, IVibrationDeviceStatics>().RequestAccessAsync();
}

inline hstring VibrationDevice::GetDeviceSelector()
{
    return get_activation_factory<VibrationDevice, IVibrationDeviceStatics>().GetDeviceSelector();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> VibrationDevice::FromIdAsync(hstring_view deviceId)
{
    return get_activation_factory<VibrationDevice, IVibrationDeviceStatics>().FromIdAsync(deviceId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> VibrationDevice::GetDefaultAsync()
{
    return get_activation_factory<VibrationDevice, IVibrationDeviceStatics>().GetDefaultAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::VibrationDevice>> VibrationDevice::FindAllAsync()
{
    return get_activation_factory<VibrationDevice, IVibrationDeviceStatics>().FindAllAsync();
}

}

}

template<>
struct std::hash<winrt::Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics>
{
    size_t operator()(const winrt::Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Haptics::ISimpleHapticsController>
{
    size_t operator()(const winrt::Windows::Devices::Haptics::ISimpleHapticsController & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback>
{
    size_t operator()(const winrt::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Haptics::IVibrationDevice>
{
    size_t operator()(const winrt::Windows::Devices::Haptics::IVibrationDevice & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Haptics::IVibrationDeviceStatics>
{
    size_t operator()(const winrt::Windows::Devices::Haptics::IVibrationDeviceStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Haptics::SimpleHapticsController>
{
    size_t operator()(const winrt::Windows::Devices::Haptics::SimpleHapticsController & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Haptics::SimpleHapticsControllerFeedback>
{
    size_t operator()(const winrt::Windows::Devices::Haptics::SimpleHapticsControllerFeedback & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Haptics::VibrationDevice>
{
    size_t operator()(const winrt::Windows::Devices::Haptics::VibrationDevice & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
