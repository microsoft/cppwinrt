// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Gaming.Input.ForceFeedback.2.h"
#include "winrt/Windows.Gaming.Input.h"

namespace winrt::impl {

template <typename D> Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind consume_Windows_Gaming_Input_ForceFeedback_IConditionForceEffect<D>::Kind() const
{
    Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IConditionForceEffect)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Gaming_Input_ForceFeedback_IConditionForceEffect<D>::SetParameters(Windows::Foundation::Numerics::float3 const& direction, float positiveCoefficient, float negativeCoefficient, float maxPositiveMagnitude, float maxNegativeMagnitude, float deadZone, float bias) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IConditionForceEffect)->SetParameters(get_abi(direction), positiveCoefficient, negativeCoefficient, maxPositiveMagnitude, maxNegativeMagnitude, deadZone, bias));
}

template <typename D> Windows::Gaming::Input::ForceFeedback::ConditionForceEffect consume_Windows_Gaming_Input_ForceFeedback_IConditionForceEffectFactory<D>::CreateInstance(Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind const& effectKind) const
{
    Windows::Gaming::Input::ForceFeedback::ConditionForceEffect value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IConditionForceEffectFactory)->CreateInstance(get_abi(effectKind), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Gaming_Input_ForceFeedback_IConstantForceEffect<D>::SetParameters(Windows::Foundation::Numerics::float3 const& vector, Windows::Foundation::TimeSpan const& duration) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IConstantForceEffect)->SetParameters(get_abi(vector), get_abi(duration)));
}

template <typename D> void consume_Windows_Gaming_Input_ForceFeedback_IConstantForceEffect<D>::SetParametersWithEnvelope(Windows::Foundation::Numerics::float3 const& vector, float attackGain, float sustainGain, float releaseGain, Windows::Foundation::TimeSpan const& startDelay, Windows::Foundation::TimeSpan const& attackDuration, Windows::Foundation::TimeSpan const& sustainDuration, Windows::Foundation::TimeSpan const& releaseDuration, uint32_t repeatCount) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IConstantForceEffect)->SetParametersWithEnvelope(get_abi(vector), attackGain, sustainGain, releaseGain, get_abi(startDelay), get_abi(attackDuration), get_abi(sustainDuration), get_abi(releaseDuration), repeatCount));
}

template <typename D> double consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackEffect<D>::Gain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect)->get_Gain(&value));
    return value;
}

template <typename D> void consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackEffect<D>::Gain(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect)->put_Gain(value));
}

template <typename D> Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectState consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackEffect<D>::State() const
{
    Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectState value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect)->get_State(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackEffect<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect)->Start());
}

template <typename D> void consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackEffect<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect)->Stop());
}

template <typename D> bool consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::AreEffectsPaused() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->get_AreEffectsPaused(&value));
    return value;
}

template <typename D> double consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::MasterGain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->get_MasterGain(&value));
    return value;
}

template <typename D> void consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::MasterGain(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->put_MasterGain(value));
}

template <typename D> bool consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->get_IsEnabled(&value));
    return value;
}

template <typename D> Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectAxes consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::SupportedAxes() const
{
    Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectAxes value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->get_SupportedAxes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult> consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::LoadEffectAsync(Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect const& effect) const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->LoadEffectAsync(get_abi(effect), put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> void consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::PauseAllEffects() const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->PauseAllEffects());
}

template <typename D> void consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::ResumeAllEffects() const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->ResumeAllEffects());
}

template <typename D> void consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::StopAllEffects() const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->StopAllEffects());
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::TryDisableAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->TryDisableAsync(put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::TryEnableAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->TryEnableAsync(put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::TryResetAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->TryResetAsync(put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::TryUnloadEffectAsync(Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect const& effect) const
{
    Windows::Foundation::IAsyncOperation<bool> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->TryUnloadEffectAsync(get_abi(effect), put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind consume_Windows_Gaming_Input_ForceFeedback_IPeriodicForceEffect<D>::Kind() const
{
    Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Gaming_Input_ForceFeedback_IPeriodicForceEffect<D>::SetParameters(Windows::Foundation::Numerics::float3 const& vector, float frequency, float phase, float bias, Windows::Foundation::TimeSpan const& duration) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect)->SetParameters(get_abi(vector), frequency, phase, bias, get_abi(duration)));
}

template <typename D> void consume_Windows_Gaming_Input_ForceFeedback_IPeriodicForceEffect<D>::SetParametersWithEnvelope(Windows::Foundation::Numerics::float3 const& vector, float frequency, float phase, float bias, float attackGain, float sustainGain, float releaseGain, Windows::Foundation::TimeSpan const& startDelay, Windows::Foundation::TimeSpan const& attackDuration, Windows::Foundation::TimeSpan const& sustainDuration, Windows::Foundation::TimeSpan const& releaseDuration, uint32_t repeatCount) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect)->SetParametersWithEnvelope(get_abi(vector), frequency, phase, bias, attackGain, sustainGain, releaseGain, get_abi(startDelay), get_abi(attackDuration), get_abi(sustainDuration), get_abi(releaseDuration), repeatCount));
}

template <typename D> Windows::Gaming::Input::ForceFeedback::PeriodicForceEffect consume_Windows_Gaming_Input_ForceFeedback_IPeriodicForceEffectFactory<D>::CreateInstance(Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind const& effectKind) const
{
    Windows::Gaming::Input::ForceFeedback::PeriodicForceEffect value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffectFactory)->CreateInstance(get_abi(effectKind), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Gaming_Input_ForceFeedback_IRampForceEffect<D>::SetParameters(Windows::Foundation::Numerics::float3 const& startVector, Windows::Foundation::Numerics::float3 const& endVector, Windows::Foundation::TimeSpan const& duration) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IRampForceEffect)->SetParameters(get_abi(startVector), get_abi(endVector), get_abi(duration)));
}

template <typename D> void consume_Windows_Gaming_Input_ForceFeedback_IRampForceEffect<D>::SetParametersWithEnvelope(Windows::Foundation::Numerics::float3 const& startVector, Windows::Foundation::Numerics::float3 const& endVector, float attackGain, float sustainGain, float releaseGain, Windows::Foundation::TimeSpan const& startDelay, Windows::Foundation::TimeSpan const& attackDuration, Windows::Foundation::TimeSpan const& sustainDuration, Windows::Foundation::TimeSpan const& releaseDuration, uint32_t repeatCount) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::ForceFeedback::IRampForceEffect)->SetParametersWithEnvelope(get_abi(startVector), get_abi(endVector), attackGain, sustainGain, releaseGain, get_abi(startDelay), get_abi(attackDuration), get_abi(sustainDuration), get_abi(releaseDuration), repeatCount));
}

template <typename D>
struct produce<D, Windows::Gaming::Input::ForceFeedback::IConditionForceEffect> : produce_base<D, Windows::Gaming::Input::ForceFeedback::IConditionForceEffect>
{
    HRESULT __stdcall get_Kind(abi_t<Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetParameters(abi_t<Windows::Foundation::Numerics::float3> direction, float positiveCoefficient, float negativeCoefficient, float maxPositiveMagnitude, float maxNegativeMagnitude, float deadZone, float bias) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetParameters(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&direction), positiveCoefficient, negativeCoefficient, maxPositiveMagnitude, maxNegativeMagnitude, deadZone, bias);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::ForceFeedback::IConditionForceEffectFactory> : produce_base<D, Windows::Gaming::Input::ForceFeedback::IConditionForceEffectFactory>
{
    HRESULT __stdcall CreateInstance(abi_t<Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind> effectKind, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind const*>(&effectKind)));
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
struct produce<D, Windows::Gaming::Input::ForceFeedback::IConstantForceEffect> : produce_base<D, Windows::Gaming::Input::ForceFeedback::IConstantForceEffect>
{
    HRESULT __stdcall SetParameters(abi_t<Windows::Foundation::Numerics::float3> vector, abi_t<Windows::Foundation::TimeSpan> duration) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetParameters(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&vector), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&duration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetParametersWithEnvelope(abi_t<Windows::Foundation::Numerics::float3> vector, float attackGain, float sustainGain, float releaseGain, abi_t<Windows::Foundation::TimeSpan> startDelay, abi_t<Windows::Foundation::TimeSpan> attackDuration, abi_t<Windows::Foundation::TimeSpan> sustainDuration, abi_t<Windows::Foundation::TimeSpan> releaseDuration, uint32_t repeatCount) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetParametersWithEnvelope(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&vector), attackGain, sustainGain, releaseGain, *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&startDelay), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&attackDuration), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&sustainDuration), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&releaseDuration), repeatCount);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect> : produce_base<D, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
{
    HRESULT __stdcall get_Gain(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Gain());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Gain(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Gain(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(abi_t<Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Start() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor> : produce_base<D, Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor>
{
    HRESULT __stdcall get_AreEffectsPaused(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AreEffectsPaused());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MasterGain(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MasterGain());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MasterGain(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MasterGain(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedAxes(abi_t<Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectAxes>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedAxes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadEffectAsync(::IUnknown* effect, ::IUnknown** asyncOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_abi(this->shim().LoadEffectAsync(*reinterpret_cast<Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect const*>(&effect)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PauseAllEffects() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PauseAllEffects();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ResumeAllEffects() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResumeAllEffects();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopAllEffects() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopAllEffects();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryDisableAsync(::IUnknown** asyncOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_abi(this->shim().TryDisableAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryEnableAsync(::IUnknown** asyncOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_abi(this->shim().TryEnableAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryResetAsync(::IUnknown** asyncOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_abi(this->shim().TryResetAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryUnloadEffectAsync(::IUnknown* effect, ::IUnknown** asyncOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_abi(this->shim().TryUnloadEffectAsync(*reinterpret_cast<Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect const*>(&effect)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect> : produce_base<D, Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect>
{
    HRESULT __stdcall get_Kind(abi_t<Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetParameters(abi_t<Windows::Foundation::Numerics::float3> vector, float frequency, float phase, float bias, abi_t<Windows::Foundation::TimeSpan> duration) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetParameters(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&vector), frequency, phase, bias, *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&duration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetParametersWithEnvelope(abi_t<Windows::Foundation::Numerics::float3> vector, float frequency, float phase, float bias, float attackGain, float sustainGain, float releaseGain, abi_t<Windows::Foundation::TimeSpan> startDelay, abi_t<Windows::Foundation::TimeSpan> attackDuration, abi_t<Windows::Foundation::TimeSpan> sustainDuration, abi_t<Windows::Foundation::TimeSpan> releaseDuration, uint32_t repeatCount) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetParametersWithEnvelope(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&vector), frequency, phase, bias, attackGain, sustainGain, releaseGain, *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&startDelay), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&attackDuration), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&sustainDuration), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&releaseDuration), repeatCount);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffectFactory> : produce_base<D, Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffectFactory>
{
    HRESULT __stdcall CreateInstance(abi_t<Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind> effectKind, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind const*>(&effectKind)));
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
struct produce<D, Windows::Gaming::Input::ForceFeedback::IRampForceEffect> : produce_base<D, Windows::Gaming::Input::ForceFeedback::IRampForceEffect>
{
    HRESULT __stdcall SetParameters(abi_t<Windows::Foundation::Numerics::float3> startVector, abi_t<Windows::Foundation::Numerics::float3> endVector, abi_t<Windows::Foundation::TimeSpan> duration) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetParameters(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&startVector), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&endVector), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&duration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetParametersWithEnvelope(abi_t<Windows::Foundation::Numerics::float3> startVector, abi_t<Windows::Foundation::Numerics::float3> endVector, float attackGain, float sustainGain, float releaseGain, abi_t<Windows::Foundation::TimeSpan> startDelay, abi_t<Windows::Foundation::TimeSpan> attackDuration, abi_t<Windows::Foundation::TimeSpan> sustainDuration, abi_t<Windows::Foundation::TimeSpan> releaseDuration, uint32_t repeatCount) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetParametersWithEnvelope(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&startVector), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&endVector), attackGain, sustainGain, releaseGain, *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&startDelay), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&attackDuration), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&sustainDuration), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&releaseDuration), repeatCount);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Gaming::Input::ForceFeedback {

inline ConditionForceEffect::ConditionForceEffect(Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind const& effectKind) :
    ConditionForceEffect(get_activation_factory<ConditionForceEffect, Windows::Gaming::Input::ForceFeedback::IConditionForceEffectFactory>().CreateInstance(effectKind))
{}

inline ConstantForceEffect::ConstantForceEffect() :
    ConstantForceEffect(activate_instance<ConstantForceEffect>())
{}

inline PeriodicForceEffect::PeriodicForceEffect(Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind const& effectKind) :
    PeriodicForceEffect(get_activation_factory<PeriodicForceEffect, Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffectFactory>().CreateInstance(effectKind))
{}

inline RampForceEffect::RampForceEffect() :
    RampForceEffect(activate_instance<RampForceEffect>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::IConditionForceEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::ForceFeedback::IConditionForceEffect> {};

template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::IConditionForceEffectFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::ForceFeedback::IConditionForceEffectFactory> {};

template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::IConstantForceEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::ForceFeedback::IConstantForceEffect> {};

template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect> {};

template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor> {};

template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect> {};

template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffectFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffectFactory> {};

template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::IRampForceEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::ForceFeedback::IRampForceEffect> {};

template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::ConditionForceEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::ForceFeedback::ConditionForceEffect> {};

template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::ConstantForceEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::ForceFeedback::ConstantForceEffect> {};

template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor> {};

template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::PeriodicForceEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::ForceFeedback::PeriodicForceEffect> {};

template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::RampForceEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::ForceFeedback::RampForceEffect> {};

}

WINRT_WARNING_POP
