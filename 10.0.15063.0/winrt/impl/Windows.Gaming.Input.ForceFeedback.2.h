// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Gaming.Input.ForceFeedback.1.h"

WINRT_EXPORT namespace winrt::Windows::Gaming::Input::ForceFeedback {

struct WINRT_EBO ConditionForceEffect :
    Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect,
    impl::require<ConditionForceEffect, Windows::Gaming::Input::ForceFeedback::IConditionForceEffect>
{
    ConditionForceEffect(std::nullptr_t) noexcept {}
    ConditionForceEffect(Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind const& effectKind);
};

struct WINRT_EBO ConstantForceEffect :
    Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect,
    impl::require<ConstantForceEffect, Windows::Gaming::Input::ForceFeedback::IConstantForceEffect>
{
    ConstantForceEffect(std::nullptr_t) noexcept {}
    ConstantForceEffect();
};

struct WINRT_EBO ForceFeedbackMotor :
    Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor
{
    ForceFeedbackMotor(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PeriodicForceEffect :
    Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect,
    impl::require<PeriodicForceEffect, Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect>
{
    PeriodicForceEffect(std::nullptr_t) noexcept {}
    PeriodicForceEffect(Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind const& effectKind);
};

struct WINRT_EBO RampForceEffect :
    Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect,
    impl::require<RampForceEffect, Windows::Gaming::Input::ForceFeedback::IRampForceEffect>
{
    RampForceEffect(std::nullptr_t) noexcept {}
    RampForceEffect();
};

}
