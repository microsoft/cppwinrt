// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Gaming.Input.ForceFeedback.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
#define WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
template <> struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a")) __declspec(novtable) IAsyncOperation<bool> : impl_IAsyncOperation<bool> {};
#endif

#ifndef WINRT_GENERIC_21f834fc_e845_5ab9_bf85_9534e2397798
#define WINRT_GENERIC_21f834fc_e845_5ab9_bf85_9534e2397798
template <> struct __declspec(uuid("21f834fc-e845-5ab9-bf85-9534e2397798")) __declspec(novtable) IAsyncOperation<winrt::Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult> : impl_IAsyncOperation<winrt::Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult> {};
#endif

#ifndef WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
#define WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
template <> struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a")) __declspec(novtable) AsyncOperationCompletedHandler<bool> : impl_AsyncOperationCompletedHandler<bool> {};
#endif

#ifndef WINRT_GENERIC_f8220a41_f738_51e8_89ba_76bbd66158cb
#define WINRT_GENERIC_f8220a41_f738_51e8_89ba_76bbd66158cb
template <> struct __declspec(uuid("f8220a41-f738-51e8-89ba-76bbd66158cb")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult> : impl_AsyncOperationCompletedHandler<winrt::Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult> {};
#endif


}

namespace Windows::Gaming::Input::ForceFeedback {

template <typename D>
struct WINRT_EBO impl_IConditionForceEffect
{
    Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind Kind() const;
    void SetParameters(const Windows::Foundation::Numerics::float3 & direction, float positiveCoefficient, float negativeCoefficient, float maxPositiveMagnitude, float maxNegativeMagnitude, float deadZone, float bias) const;
};

template <typename D>
struct WINRT_EBO impl_IConditionForceEffectFactory
{
    Windows::Gaming::Input::ForceFeedback::ConditionForceEffect CreateInstance(Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind effectKind) const;
};

template <typename D>
struct WINRT_EBO impl_IConstantForceEffect
{
    void SetParameters(const Windows::Foundation::Numerics::float3 & vector, const Windows::Foundation::TimeSpan & duration) const;
    void SetParametersWithEnvelope(const Windows::Foundation::Numerics::float3 & vector, float attackGain, float sustainGain, float releaseGain, const Windows::Foundation::TimeSpan & startDelay, const Windows::Foundation::TimeSpan & attackDuration, const Windows::Foundation::TimeSpan & sustainDuration, const Windows::Foundation::TimeSpan & releaseDuration, uint32_t repeatCount) const;
};

template <typename D>
struct WINRT_EBO impl_IForceFeedbackEffect
{
    double Gain() const;
    void Gain(double value) const;
    Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectState State() const;
    void Start() const;
    void Stop() const;
};

template <typename D>
struct WINRT_EBO impl_IForceFeedbackMotor
{
    bool AreEffectsPaused() const;
    double MasterGain() const;
    void MasterGain(double value) const;
    bool IsEnabled() const;
    Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectAxes SupportedAxes() const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult> LoadEffectAsync(const Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect & effect) const;
    void PauseAllEffects() const;
    void ResumeAllEffects() const;
    void StopAllEffects() const;
    Windows::Foundation::IAsyncOperation<bool> TryDisableAsync() const;
    Windows::Foundation::IAsyncOperation<bool> TryEnableAsync() const;
    Windows::Foundation::IAsyncOperation<bool> TryResetAsync() const;
    Windows::Foundation::IAsyncOperation<bool> TryUnloadEffectAsync(const Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect & effect) const;
};

template <typename D>
struct WINRT_EBO impl_IPeriodicForceEffect
{
    Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind Kind() const;
    void SetParameters(const Windows::Foundation::Numerics::float3 & vector, float frequency, float phase, float bias, const Windows::Foundation::TimeSpan & duration) const;
    void SetParametersWithEnvelope(const Windows::Foundation::Numerics::float3 & vector, float frequency, float phase, float bias, float attackGain, float sustainGain, float releaseGain, const Windows::Foundation::TimeSpan & startDelay, const Windows::Foundation::TimeSpan & attackDuration, const Windows::Foundation::TimeSpan & sustainDuration, const Windows::Foundation::TimeSpan & releaseDuration, uint32_t repeatCount) const;
};

template <typename D>
struct WINRT_EBO impl_IPeriodicForceEffectFactory
{
    Windows::Gaming::Input::ForceFeedback::PeriodicForceEffect CreateInstance(Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind effectKind) const;
};

template <typename D>
struct WINRT_EBO impl_IRampForceEffect
{
    void SetParameters(const Windows::Foundation::Numerics::float3 & startVector, const Windows::Foundation::Numerics::float3 & endVector, const Windows::Foundation::TimeSpan & duration) const;
    void SetParametersWithEnvelope(const Windows::Foundation::Numerics::float3 & startVector, const Windows::Foundation::Numerics::float3 & endVector, float attackGain, float sustainGain, float releaseGain, const Windows::Foundation::TimeSpan & startDelay, const Windows::Foundation::TimeSpan & attackDuration, const Windows::Foundation::TimeSpan & sustainDuration, const Windows::Foundation::TimeSpan & releaseDuration, uint32_t repeatCount) const;
};

struct IConditionForceEffect :
    Windows::IInspectable,
    impl::consume<IConditionForceEffect>,
    impl::require<IConditionForceEffect, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
{
    IConditionForceEffect(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IConditionForceEffect>(m_ptr); }
};

struct IConditionForceEffectFactory :
    Windows::IInspectable,
    impl::consume<IConditionForceEffectFactory>
{
    IConditionForceEffectFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IConditionForceEffectFactory>(m_ptr); }
};

struct IConstantForceEffect :
    Windows::IInspectable,
    impl::consume<IConstantForceEffect>,
    impl::require<IConstantForceEffect, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
{
    IConstantForceEffect(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IConstantForceEffect>(m_ptr); }
};

struct IForceFeedbackEffect :
    Windows::IInspectable,
    impl::consume<IForceFeedbackEffect>
{
    IForceFeedbackEffect(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IForceFeedbackEffect>(m_ptr); }
};

struct IForceFeedbackMotor :
    Windows::IInspectable,
    impl::consume<IForceFeedbackMotor>
{
    IForceFeedbackMotor(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IForceFeedbackMotor>(m_ptr); }
};

struct IPeriodicForceEffect :
    Windows::IInspectable,
    impl::consume<IPeriodicForceEffect>,
    impl::require<IPeriodicForceEffect, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
{
    IPeriodicForceEffect(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPeriodicForceEffect>(m_ptr); }
};

struct IPeriodicForceEffectFactory :
    Windows::IInspectable,
    impl::consume<IPeriodicForceEffectFactory>
{
    IPeriodicForceEffectFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPeriodicForceEffectFactory>(m_ptr); }
};

struct IRampForceEffect :
    Windows::IInspectable,
    impl::consume<IRampForceEffect>,
    impl::require<IRampForceEffect, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
{
    IRampForceEffect(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRampForceEffect>(m_ptr); }
};

}

}
