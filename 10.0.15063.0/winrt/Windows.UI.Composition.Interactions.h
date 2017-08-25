// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.UI.Input.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.UI.Composition.Interactions.2.h"
#include "winrt/Windows.UI.Composition.h"

namespace winrt::impl {

template <typename D> Windows::UI::Composition::ExpressionAnimation consume_Windows_UI_Composition_Interactions_ICompositionConditionalValue<D>::Condition() const
{
    Windows::UI::Composition::ExpressionAnimation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::ICompositionConditionalValue)->get_Condition(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_ICompositionConditionalValue<D>::Condition(Windows::UI::Composition::ExpressionAnimation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::ICompositionConditionalValue)->put_Condition(get_abi(value)));
}

template <typename D> Windows::UI::Composition::ExpressionAnimation consume_Windows_UI_Composition_Interactions_ICompositionConditionalValue<D>::Value() const
{
    Windows::UI::Composition::ExpressionAnimation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::ICompositionConditionalValue)->get_Value(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_ICompositionConditionalValue<D>::Value(Windows::UI::Composition::ExpressionAnimation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::ICompositionConditionalValue)->put_Value(get_abi(value)));
}

template <typename D> Windows::UI::Composition::Interactions::CompositionConditionalValue consume_Windows_UI_Composition_Interactions_ICompositionConditionalValueStatics<D>::Create(Windows::UI::Composition::Compositor const& compositor) const
{
    Windows::UI::Composition::Interactions::CompositionConditionalValue result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics)->Create(get_abi(compositor), put_abi(result)));
    return result;
}

template <typename D> int32_t consume_Windows_UI_Composition_Interactions_ICompositionInteractionSourceCollection<D>::Count() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection)->get_Count(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_ICompositionInteractionSourceCollection<D>::Add(Windows::UI::Composition::Interactions::ICompositionInteractionSource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection)->Add(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_Interactions_ICompositionInteractionSourceCollection<D>::Remove(Windows::UI::Composition::Interactions::ICompositionInteractionSource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection)->Remove(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_Interactions_ICompositionInteractionSourceCollection<D>::RemoveAll() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection)->RemoveAll());
}

template <typename D> Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::InteractionSources() const
{
    Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_InteractionSources(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::IsPositionRoundingSuggested() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_IsPositionRoundingSuggested(&value));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::MaxPosition() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_MaxPosition(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::MaxPosition(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->put_MaxPosition(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::MaxScale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_MaxScale(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::MaxScale(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->put_MaxScale(value));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::MinPosition() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_MinPosition(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::MinPosition(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->put_MinPosition(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::MinScale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_MinScale(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::MinScale(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->put_MinScale(value));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::NaturalRestingPosition() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_NaturalRestingPosition(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::NaturalRestingScale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_NaturalRestingScale(&value));
    return value;
}

template <typename D> Windows::UI::Composition::Interactions::IInteractionTrackerOwner consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::Owner() const
{
    Windows::UI::Composition::Interactions::IInteractionTrackerOwner value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_Owner(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::Position() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::PositionInertiaDecayRate() const
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_PositionInertiaDecayRate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::PositionInertiaDecayRate(optional<Windows::Foundation::Numerics::float3> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->put_PositionInertiaDecayRate(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::PositionVelocityInPixelsPerSecond() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_PositionVelocityInPixelsPerSecond(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::Scale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_Scale(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<float> consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::ScaleInertiaDecayRate() const
{
    Windows::Foundation::IReference<float> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_ScaleInertiaDecayRate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::ScaleInertiaDecayRate(optional<float> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->put_ScaleInertiaDecayRate(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::ScaleVelocityInPercentPerSecond() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->get_ScaleVelocityInPercentPerSecond(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::AdjustPositionXIfGreaterThanThreshold(float adjustment, float positionThreshold) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->AdjustPositionXIfGreaterThanThreshold(adjustment, positionThreshold));
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::AdjustPositionYIfGreaterThanThreshold(float adjustment, float positionThreshold) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->AdjustPositionYIfGreaterThanThreshold(adjustment, positionThreshold));
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::ConfigurePositionXInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> const& modifiers) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->ConfigurePositionXInertiaModifiers(get_abi(modifiers)));
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::ConfigurePositionYInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> const& modifiers) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->ConfigurePositionYInertiaModifiers(get_abi(modifiers)));
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::ConfigureScaleInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> const& modifiers) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->ConfigureScaleInertiaModifiers(get_abi(modifiers)));
}

template <typename D> int32_t consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::TryUpdatePosition(Windows::Foundation::Numerics::float3 const& value) const
{
    int32_t requestId{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->TryUpdatePosition(get_abi(value), &requestId));
    return requestId;
}

template <typename D> int32_t consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::TryUpdatePositionBy(Windows::Foundation::Numerics::float3 const& amount) const
{
    int32_t requestId{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->TryUpdatePositionBy(get_abi(amount), &requestId));
    return requestId;
}

template <typename D> int32_t consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::TryUpdatePositionWithAnimation(Windows::UI::Composition::CompositionAnimation const& animation) const
{
    int32_t requestId{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->TryUpdatePositionWithAnimation(get_abi(animation), &requestId));
    return requestId;
}

template <typename D> int32_t consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::TryUpdatePositionWithAdditionalVelocity(Windows::Foundation::Numerics::float3 const& velocityInPixelsPerSecond) const
{
    int32_t requestId{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->TryUpdatePositionWithAdditionalVelocity(get_abi(velocityInPixelsPerSecond), &requestId));
    return requestId;
}

template <typename D> int32_t consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::TryUpdateScale(float value, Windows::Foundation::Numerics::float3 const& centerPoint) const
{
    int32_t requestId{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->TryUpdateScale(value, get_abi(centerPoint), &requestId));
    return requestId;
}

template <typename D> int32_t consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::TryUpdateScaleWithAnimation(Windows::UI::Composition::CompositionAnimation const& animation, Windows::Foundation::Numerics::float3 const& centerPoint) const
{
    int32_t requestId{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->TryUpdateScaleWithAnimation(get_abi(animation), get_abi(centerPoint), &requestId));
    return requestId;
}

template <typename D> int32_t consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>::TryUpdateScaleWithAdditionalVelocity(float velocityInPercentPerSecond, Windows::Foundation::Numerics::float3 const& centerPoint) const
{
    int32_t requestId{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker)->TryUpdateScaleWithAdditionalVelocity(velocityInPercentPerSecond, get_abi(centerPoint), &requestId));
    return requestId;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IInteractionTracker2<D>::ConfigureCenterPointXInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker2)->ConfigureCenterPointXInertiaModifiers(get_abi(conditionalValues)));
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IInteractionTracker2<D>::ConfigureCenterPointYInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTracker2)->ConfigureCenterPointYInertiaModifiers(get_abi(conditionalValues)));
}

template <typename D> int32_t consume_Windows_UI_Composition_Interactions_IInteractionTrackerCustomAnimationStateEnteredArgs<D>::RequestId() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs)->get_RequestId(&value));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Composition_Interactions_IInteractionTrackerIdleStateEnteredArgs<D>::RequestId() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs)->get_RequestId(&value));
    return value;
}

template <typename D> Windows::UI::Composition::ExpressionAnimation consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotion<D>::Condition() const
{
    Windows::UI::Composition::ExpressionAnimation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion)->get_Condition(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotion<D>::Condition(Windows::UI::Composition::ExpressionAnimation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion)->put_Condition(get_abi(value)));
}

template <typename D> Windows::UI::Composition::ExpressionAnimation consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotion<D>::Motion() const
{
    Windows::UI::Composition::ExpressionAnimation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion)->get_Motion(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotion<D>::Motion(Windows::UI::Composition::ExpressionAnimation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion)->put_Motion(get_abi(value)));
}

template <typename D> Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotionStatics<D>::Create(Windows::UI::Composition::Compositor const& compositor) const
{
    Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics)->Create(get_abi(compositor), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::ExpressionAnimation consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValue<D>::Condition() const
{
    Windows::UI::Composition::ExpressionAnimation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue)->get_Condition(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValue<D>::Condition(Windows::UI::Composition::ExpressionAnimation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue)->put_Condition(get_abi(value)));
}

template <typename D> Windows::UI::Composition::ExpressionAnimation consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValue<D>::RestingValue() const
{
    Windows::UI::Composition::ExpressionAnimation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue)->get_RestingValue(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValue<D>::RestingValue(Windows::UI::Composition::ExpressionAnimation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue)->put_RestingValue(get_abi(value)));
}

template <typename D> Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValueStatics<D>::Create(Windows::UI::Composition::Compositor const& compositor) const
{
    Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics)->Create(get_abi(compositor), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs<D>::ModifiedRestingPosition() const
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs)->get_ModifiedRestingPosition(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<float> consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs<D>::ModifiedRestingScale() const
{
    Windows::Foundation::IReference<float> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs)->get_ModifiedRestingScale(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs<D>::NaturalRestingPosition() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs)->get_NaturalRestingPosition(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs<D>::NaturalRestingScale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs)->get_NaturalRestingScale(&value));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs<D>::PositionVelocityInPixelsPerSecond() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs)->get_PositionVelocityInPixelsPerSecond(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs<D>::RequestId() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs)->get_RequestId(&value));
    return value;
}

template <typename D> float consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs<D>::ScaleVelocityInPercentPerSecond() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs)->get_ScaleVelocityInPercentPerSecond(&value));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Composition_Interactions_IInteractionTrackerInteractingStateEnteredArgs<D>::RequestId() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs)->get_RequestId(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IInteractionTrackerOwner<D>::CustomAnimationStateEntered(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs const& args) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerOwner)->CustomAnimationStateEntered(get_abi(sender), get_abi(args)));
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IInteractionTrackerOwner<D>::IdleStateEntered(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs const& args) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerOwner)->IdleStateEntered(get_abi(sender), get_abi(args)));
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IInteractionTrackerOwner<D>::InertiaStateEntered(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs const& args) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerOwner)->InertiaStateEntered(get_abi(sender), get_abi(args)));
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IInteractionTrackerOwner<D>::InteractingStateEntered(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs const& args) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerOwner)->InteractingStateEntered(get_abi(sender), get_abi(args)));
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IInteractionTrackerOwner<D>::RequestIgnored(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs const& args) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerOwner)->RequestIgnored(get_abi(sender), get_abi(args)));
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IInteractionTrackerOwner<D>::ValuesChanged(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs const& args) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerOwner)->ValuesChanged(get_abi(sender), get_abi(args)));
}

template <typename D> int32_t consume_Windows_UI_Composition_Interactions_IInteractionTrackerRequestIgnoredArgs<D>::RequestId() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs)->get_RequestId(&value));
    return value;
}

template <typename D> Windows::UI::Composition::Interactions::InteractionTracker consume_Windows_UI_Composition_Interactions_IInteractionTrackerStatics<D>::Create(Windows::UI::Composition::Compositor const& compositor) const
{
    Windows::UI::Composition::Interactions::InteractionTracker result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerStatics)->Create(get_abi(compositor), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::Interactions::InteractionTracker consume_Windows_UI_Composition_Interactions_IInteractionTrackerStatics<D>::CreateWithOwner(Windows::UI::Composition::Compositor const& compositor, Windows::UI::Composition::Interactions::IInteractionTrackerOwner const& owner) const
{
    Windows::UI::Composition::Interactions::InteractionTracker result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerStatics)->CreateWithOwner(get_abi(compositor), get_abi(owner), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_Interactions_IInteractionTrackerValuesChangedArgs<D>::Position() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs)->get_Position(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Composition_Interactions_IInteractionTrackerValuesChangedArgs<D>::RequestId() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs)->get_RequestId(&value));
    return value;
}

template <typename D> float consume_Windows_UI_Composition_Interactions_IInteractionTrackerValuesChangedArgs<D>::Scale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs)->get_Scale(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::IsPositionXRailsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->get_IsPositionXRailsEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::IsPositionXRailsEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->put_IsPositionXRailsEnabled(value));
}

template <typename D> bool consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::IsPositionYRailsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->get_IsPositionYRailsEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::IsPositionYRailsEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->put_IsPositionYRailsEnabled(value));
}

template <typename D> Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::ManipulationRedirectionMode() const
{
    Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->get_ManipulationRedirectionMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::ManipulationRedirectionMode(Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->put_ManipulationRedirectionMode(get_abi(value)));
}

template <typename D> Windows::UI::Composition::Interactions::InteractionChainingMode consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::PositionXChainingMode() const
{
    Windows::UI::Composition::Interactions::InteractionChainingMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->get_PositionXChainingMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::PositionXChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->put_PositionXChainingMode(get_abi(value)));
}

template <typename D> Windows::UI::Composition::Interactions::InteractionSourceMode consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::PositionXSourceMode() const
{
    Windows::UI::Composition::Interactions::InteractionSourceMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->get_PositionXSourceMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::PositionXSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->put_PositionXSourceMode(get_abi(value)));
}

template <typename D> Windows::UI::Composition::Interactions::InteractionChainingMode consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::PositionYChainingMode() const
{
    Windows::UI::Composition::Interactions::InteractionChainingMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->get_PositionYChainingMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::PositionYChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->put_PositionYChainingMode(get_abi(value)));
}

template <typename D> Windows::UI::Composition::Interactions::InteractionSourceMode consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::PositionYSourceMode() const
{
    Windows::UI::Composition::Interactions::InteractionSourceMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->get_PositionYSourceMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::PositionYSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->put_PositionYSourceMode(get_abi(value)));
}

template <typename D> Windows::UI::Composition::Interactions::InteractionChainingMode consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::ScaleChainingMode() const
{
    Windows::UI::Composition::Interactions::InteractionChainingMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->get_ScaleChainingMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::ScaleChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->put_ScaleChainingMode(get_abi(value)));
}

template <typename D> Windows::UI::Composition::Interactions::InteractionSourceMode consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::ScaleSourceMode() const
{
    Windows::UI::Composition::Interactions::InteractionSourceMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->get_ScaleSourceMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::ScaleSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->put_ScaleSourceMode(get_abi(value)));
}

template <typename D> Windows::UI::Composition::Visual consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::Source() const
{
    Windows::UI::Composition::Visual value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->get_Source(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>::TryRedirectForManipulation(Windows::UI::Input::PointerPoint const& pointerPoint) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource)->TryRedirectForManipulation(get_abi(pointerPoint)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>::DeltaPosition() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource2)->get_DeltaPosition(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>::DeltaScale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource2)->get_DeltaScale(&value));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>::Position() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource2)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>::PositionVelocity() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource2)->get_PositionVelocity(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>::Scale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource2)->get_Scale(&value));
    return value;
}

template <typename D> float consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>::ScaleVelocity() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource2)->get_ScaleVelocity(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>::ConfigureCenterPointXModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource2)->ConfigureCenterPointXModifiers(get_abi(conditionalValues)));
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>::ConfigureCenterPointYModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource2)->ConfigureCenterPointYModifiers(get_abi(conditionalValues)));
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>::ConfigureDeltaPositionXModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource2)->ConfigureDeltaPositionXModifiers(get_abi(conditionalValues)));
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>::ConfigureDeltaPositionYModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource2)->ConfigureDeltaPositionYModifiers(get_abi(conditionalValues)));
}

template <typename D> void consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>::ConfigureDeltaScaleModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSource2)->ConfigureDeltaScaleModifiers(get_abi(conditionalValues)));
}

template <typename D> Windows::UI::Composition::Interactions::VisualInteractionSource consume_Windows_UI_Composition_Interactions_IVisualInteractionSourceStatics<D>::Create(Windows::UI::Composition::Visual const& source) const
{
    Windows::UI::Composition::Interactions::VisualInteractionSource result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics)->Create(get_abi(source), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::ICompositionConditionalValue> : produce_base<D, Windows::UI::Composition::Interactions::ICompositionConditionalValue>
{
    HRESULT __stdcall get_Condition(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Condition());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Condition(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Condition(*reinterpret_cast<Windows::UI::Composition::ExpressionAnimation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<Windows::UI::Composition::ExpressionAnimation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics> : produce_base<D, Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics>
{
    HRESULT __stdcall Create(::IUnknown* compositor, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::UI::Composition::Compositor const*>(&compositor)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::ICompositionInteractionSource> : produce_base<D, Windows::UI::Composition::Interactions::ICompositionInteractionSource>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection> : produce_base<D, Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection>
{
    HRESULT __stdcall get_Count(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Count());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Add(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Add(*reinterpret_cast<Windows::UI::Composition::Interactions::ICompositionInteractionSource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Remove(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Remove(*reinterpret_cast<Windows::UI::Composition::Interactions::ICompositionInteractionSource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveAll() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveAll();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTracker> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTracker>
{
    HRESULT __stdcall get_InteractionSources(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InteractionSources());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPositionRoundingSuggested(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPositionRoundingSuggested());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPosition(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxPosition(abi_t<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxPosition(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxScale(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxScale(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxScale(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinPosition(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MinPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MinPosition(abi_t<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinPosition(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinScale(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MinScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MinScale(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinScale(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NaturalRestingPosition(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NaturalRestingPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NaturalRestingScale(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NaturalRestingScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Owner(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Owner());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PositionInertiaDecayRate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PositionInertiaDecayRate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PositionInertiaDecayRate(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionInertiaDecayRate(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PositionVelocityInPixelsPerSecond(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PositionVelocityInPixelsPerSecond());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Scale(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Scale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleInertiaDecayRate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScaleInertiaDecayRate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ScaleInertiaDecayRate(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScaleInertiaDecayRate(*reinterpret_cast<Windows::Foundation::IReference<float> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleVelocityInPercentPerSecond(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScaleVelocityInPercentPerSecond());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AdjustPositionXIfGreaterThanThreshold(float adjustment, float positionThreshold) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AdjustPositionXIfGreaterThanThreshold(adjustment, positionThreshold);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AdjustPositionYIfGreaterThanThreshold(float adjustment, float positionThreshold) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AdjustPositionYIfGreaterThanThreshold(adjustment, positionThreshold);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConfigurePositionXInertiaModifiers(::IUnknown* modifiers) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfigurePositionXInertiaModifiers(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> const*>(&modifiers));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConfigurePositionYInertiaModifiers(::IUnknown* modifiers) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfigurePositionYInertiaModifiers(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> const*>(&modifiers));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConfigureScaleInertiaModifiers(::IUnknown* modifiers) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfigureScaleInertiaModifiers(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> const*>(&modifiers));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryUpdatePosition(abi_t<Windows::Foundation::Numerics::float3> value, int32_t* requestId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *requestId = detach_abi(this->shim().TryUpdatePosition(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryUpdatePositionBy(abi_t<Windows::Foundation::Numerics::float3> amount, int32_t* requestId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *requestId = detach_abi(this->shim().TryUpdatePositionBy(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&amount)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryUpdatePositionWithAnimation(::IUnknown* animation, int32_t* requestId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *requestId = detach_abi(this->shim().TryUpdatePositionWithAnimation(*reinterpret_cast<Windows::UI::Composition::CompositionAnimation const*>(&animation)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryUpdatePositionWithAdditionalVelocity(abi_t<Windows::Foundation::Numerics::float3> velocityInPixelsPerSecond, int32_t* requestId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *requestId = detach_abi(this->shim().TryUpdatePositionWithAdditionalVelocity(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&velocityInPixelsPerSecond)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryUpdateScale(float value, abi_t<Windows::Foundation::Numerics::float3> centerPoint, int32_t* requestId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *requestId = detach_abi(this->shim().TryUpdateScale(value, *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&centerPoint)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryUpdateScaleWithAnimation(::IUnknown* animation, abi_t<Windows::Foundation::Numerics::float3> centerPoint, int32_t* requestId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *requestId = detach_abi(this->shim().TryUpdateScaleWithAnimation(*reinterpret_cast<Windows::UI::Composition::CompositionAnimation const*>(&animation), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&centerPoint)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryUpdateScaleWithAdditionalVelocity(float velocityInPercentPerSecond, abi_t<Windows::Foundation::Numerics::float3> centerPoint, int32_t* requestId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *requestId = detach_abi(this->shim().TryUpdateScaleWithAdditionalVelocity(velocityInPercentPerSecond, *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&centerPoint)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTracker2> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTracker2>
{
    HRESULT __stdcall ConfigureCenterPointXInertiaModifiers(::IUnknown* conditionalValues) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfigureCenterPointXInertiaModifiers(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const*>(&conditionalValues));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConfigureCenterPointYInertiaModifiers(::IUnknown* conditionalValues) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfigureCenterPointYInertiaModifiers(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const*>(&conditionalValues));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs>
{
    HRESULT __stdcall get_RequestId(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs>
{
    HRESULT __stdcall get_RequestId(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion>
{
    HRESULT __stdcall get_Condition(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Condition());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Condition(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Condition(*reinterpret_cast<Windows::UI::Composition::ExpressionAnimation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Motion(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Motion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Motion(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Motion(*reinterpret_cast<Windows::UI::Composition::ExpressionAnimation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics>
{
    HRESULT __stdcall Create(::IUnknown* compositor, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::UI::Composition::Compositor const*>(&compositor)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue>
{
    HRESULT __stdcall get_Condition(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Condition());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Condition(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Condition(*reinterpret_cast<Windows::UI::Composition::ExpressionAnimation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RestingValue(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RestingValue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RestingValue(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RestingValue(*reinterpret_cast<Windows::UI::Composition::ExpressionAnimation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics>
{
    HRESULT __stdcall Create(::IUnknown* compositor, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::UI::Composition::Compositor const*>(&compositor)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs>
{
    HRESULT __stdcall get_ModifiedRestingPosition(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ModifiedRestingPosition());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ModifiedRestingScale(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ModifiedRestingScale());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NaturalRestingPosition(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NaturalRestingPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NaturalRestingScale(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NaturalRestingScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PositionVelocityInPixelsPerSecond(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PositionVelocityInPixelsPerSecond());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestId(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleVelocityInPercentPerSecond(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScaleVelocityInPercentPerSecond());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs>
{
    HRESULT __stdcall get_RequestId(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerOwner> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerOwner>
{
    HRESULT __stdcall CustomAnimationStateEntered(::IUnknown* sender, ::IUnknown* args) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomAnimationStateEntered(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTracker const*>(&sender), *reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs const*>(&args));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IdleStateEntered(::IUnknown* sender, ::IUnknown* args) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IdleStateEntered(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTracker const*>(&sender), *reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs const*>(&args));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InertiaStateEntered(::IUnknown* sender, ::IUnknown* args) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InertiaStateEntered(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTracker const*>(&sender), *reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs const*>(&args));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InteractingStateEntered(::IUnknown* sender, ::IUnknown* args) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InteractingStateEntered(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTracker const*>(&sender), *reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs const*>(&args));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestIgnored(::IUnknown* sender, ::IUnknown* args) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestIgnored(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTracker const*>(&sender), *reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs const*>(&args));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ValuesChanged(::IUnknown* sender, ::IUnknown* args) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ValuesChanged(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTracker const*>(&sender), *reinterpret_cast<Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs const*>(&args));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs>
{
    HRESULT __stdcall get_RequestId(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerStatics> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerStatics>
{
    HRESULT __stdcall Create(::IUnknown* compositor, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::UI::Composition::Compositor const*>(&compositor)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithOwner(::IUnknown* compositor, ::IUnknown* owner, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithOwner(*reinterpret_cast<Windows::UI::Composition::Compositor const*>(&compositor), *reinterpret_cast<Windows::UI::Composition::Interactions::IInteractionTrackerOwner const*>(&owner)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs>
{
    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestId(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Scale(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Scale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IVisualInteractionSource> : produce_base<D, Windows::UI::Composition::Interactions::IVisualInteractionSource>
{
    HRESULT __stdcall get_IsPositionXRailsEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPositionXRailsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsPositionXRailsEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPositionXRailsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPositionYRailsEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPositionYRailsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsPositionYRailsEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPositionYRailsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ManipulationRedirectionMode(abi_t<Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ManipulationRedirectionMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ManipulationRedirectionMode(abi_t<Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ManipulationRedirectionMode(*reinterpret_cast<Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PositionXChainingMode(abi_t<Windows::UI::Composition::Interactions::InteractionChainingMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PositionXChainingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PositionXChainingMode(abi_t<Windows::UI::Composition::Interactions::InteractionChainingMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionXChainingMode(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionChainingMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PositionXSourceMode(abi_t<Windows::UI::Composition::Interactions::InteractionSourceMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PositionXSourceMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PositionXSourceMode(abi_t<Windows::UI::Composition::Interactions::InteractionSourceMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionXSourceMode(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionSourceMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PositionYChainingMode(abi_t<Windows::UI::Composition::Interactions::InteractionChainingMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PositionYChainingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PositionYChainingMode(abi_t<Windows::UI::Composition::Interactions::InteractionChainingMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionYChainingMode(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionChainingMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PositionYSourceMode(abi_t<Windows::UI::Composition::Interactions::InteractionSourceMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PositionYSourceMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PositionYSourceMode(abi_t<Windows::UI::Composition::Interactions::InteractionSourceMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionYSourceMode(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionSourceMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleChainingMode(abi_t<Windows::UI::Composition::Interactions::InteractionChainingMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScaleChainingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ScaleChainingMode(abi_t<Windows::UI::Composition::Interactions::InteractionChainingMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScaleChainingMode(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionChainingMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleSourceMode(abi_t<Windows::UI::Composition::Interactions::InteractionSourceMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScaleSourceMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ScaleSourceMode(abi_t<Windows::UI::Composition::Interactions::InteractionSourceMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScaleSourceMode(*reinterpret_cast<Windows::UI::Composition::Interactions::InteractionSourceMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryRedirectForManipulation(::IUnknown* pointerPoint) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TryRedirectForManipulation(*reinterpret_cast<Windows::UI::Input::PointerPoint const*>(&pointerPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IVisualInteractionSource2> : produce_base<D, Windows::UI::Composition::Interactions::IVisualInteractionSource2>
{
    HRESULT __stdcall get_DeltaPosition(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeltaPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeltaScale(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeltaScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PositionVelocity(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PositionVelocity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Scale(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Scale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleVelocity(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScaleVelocity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConfigureCenterPointXModifiers(::IUnknown* conditionalValues) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfigureCenterPointXModifiers(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const*>(&conditionalValues));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConfigureCenterPointYModifiers(::IUnknown* conditionalValues) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfigureCenterPointYModifiers(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const*>(&conditionalValues));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConfigureDeltaPositionXModifiers(::IUnknown* conditionalValues) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfigureDeltaPositionXModifiers(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const*>(&conditionalValues));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConfigureDeltaPositionYModifiers(::IUnknown* conditionalValues) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfigureDeltaPositionYModifiers(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const*>(&conditionalValues));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConfigureDeltaScaleModifiers(::IUnknown* conditionalValues) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfigureDeltaScaleModifiers(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const*>(&conditionalValues));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IVisualInteractionSourceObjectFactory> : produce_base<D, Windows::UI::Composition::Interactions::IVisualInteractionSourceObjectFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics> : produce_base<D, Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics>
{
    HRESULT __stdcall Create(::IUnknown* source, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&source)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Composition::Interactions {

inline Windows::UI::Composition::Interactions::CompositionConditionalValue CompositionConditionalValue::Create(Windows::UI::Composition::Compositor const& compositor)
{
    return get_activation_factory<CompositionConditionalValue, Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics>().Create(compositor);
}

inline Windows::UI::Composition::Interactions::InteractionTracker InteractionTracker::Create(Windows::UI::Composition::Compositor const& compositor)
{
    return get_activation_factory<InteractionTracker, Windows::UI::Composition::Interactions::IInteractionTrackerStatics>().Create(compositor);
}

inline Windows::UI::Composition::Interactions::InteractionTracker InteractionTracker::CreateWithOwner(Windows::UI::Composition::Compositor const& compositor, Windows::UI::Composition::Interactions::IInteractionTrackerOwner const& owner)
{
    return get_activation_factory<InteractionTracker, Windows::UI::Composition::Interactions::IInteractionTrackerStatics>().CreateWithOwner(compositor, owner);
}

inline Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion InteractionTrackerInertiaMotion::Create(Windows::UI::Composition::Compositor const& compositor)
{
    return get_activation_factory<InteractionTrackerInertiaMotion, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics>().Create(compositor);
}

inline Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue InteractionTrackerInertiaRestingValue::Create(Windows::UI::Composition::Compositor const& compositor)
{
    return get_activation_factory<InteractionTrackerInertiaRestingValue, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics>().Create(compositor);
}

inline Windows::UI::Composition::Interactions::VisualInteractionSource VisualInteractionSource::Create(Windows::UI::Composition::Visual const& source)
{
    return get_activation_factory<VisualInteractionSource, Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics>().Create(source);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Composition::Interactions::ICompositionConditionalValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::ICompositionConditionalValue> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::ICompositionInteractionSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::ICompositionInteractionSource> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTracker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::IInteractionTracker> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTracker2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::IInteractionTracker2> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerOwner> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerOwner> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerStatics> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::IVisualInteractionSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::IVisualInteractionSource> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::IVisualInteractionSource2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::IVisualInteractionSource2> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::IVisualInteractionSourceObjectFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::IVisualInteractionSourceObjectFactory> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::CompositionConditionalValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::CompositionConditionalValue> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionTracker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::InteractionTracker> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs> {};

template<> struct hash<winrt::Windows::UI::Composition::Interactions::VisualInteractionSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Interactions::VisualInteractionSource> {};

}

WINRT_WARNING_POP
