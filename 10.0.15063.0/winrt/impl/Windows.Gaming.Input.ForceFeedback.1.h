// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Gaming.Input.ForceFeedback.0.h"

WINRT_EXPORT namespace winrt::Windows::Gaming::Input::ForceFeedback {

struct WINRT_EBO IConditionForceEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConditionForceEffect>,
    impl::require<IConditionForceEffect, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
{
    IConditionForceEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IConditionForceEffectFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConditionForceEffectFactory>
{
    IConditionForceEffectFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IConstantForceEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConstantForceEffect>,
    impl::require<IConstantForceEffect, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
{
    IConstantForceEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IForceFeedbackEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IForceFeedbackEffect>
{
    IForceFeedbackEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IForceFeedbackMotor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IForceFeedbackMotor>
{
    IForceFeedbackMotor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPeriodicForceEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPeriodicForceEffect>,
    impl::require<IPeriodicForceEffect, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
{
    IPeriodicForceEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPeriodicForceEffectFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPeriodicForceEffectFactory>
{
    IPeriodicForceEffectFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRampForceEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRampForceEffect>,
    impl::require<IRampForceEffect, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
{
    IRampForceEffect(std::nullptr_t = nullptr) noexcept {}
};

}
