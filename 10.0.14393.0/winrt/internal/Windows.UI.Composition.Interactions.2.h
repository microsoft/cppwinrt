// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Composition.Interactions.1.h"
#include "Windows.Foundation.2.h"
#include "Windows.UI.Composition.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_719cc2ba_3e76_5def_9f1a_38d85a145ea8
#define WINRT_GENERIC_719cc2ba_3e76_5def_9f1a_38d85a145ea8
template <> struct __declspec(uuid("719cc2ba-3e76-5def-9f1a-38d85a145ea8")) __declspec(novtable) IReference<float> : impl_IReference<float> {};
#endif

#ifndef WINRT_GENERIC_1ee770ff_c954_59ca_a754_6199a9be282c
#define WINRT_GENERIC_1ee770ff_c954_59ca_a754_6199a9be282c
template <> struct __declspec(uuid("1ee770ff-c954-59ca-a754-6199a9be282c")) __declspec(novtable) IReference<Windows::Foundation::Numerics::float3> : impl_IReference<Windows::Foundation::Numerics::float3> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_17c50e21_cb70_5a2b_b797_a8dc01a99113
#define WINRT_GENERIC_17c50e21_cb70_5a2b_b797_a8dc01a99113
template <> struct __declspec(uuid("17c50e21-cb70-5a2b-b797-a8dc01a99113")) __declspec(novtable) IIterable<Windows::UI::Composition::Interactions::ICompositionInteractionSource> : impl_IIterable<Windows::UI::Composition::Interactions::ICompositionInteractionSource> {};
#endif

#ifndef WINRT_GENERIC_9a245c40_aae6_59fb_87f5_4bb05599f0b1
#define WINRT_GENERIC_9a245c40_aae6_59fb_87f5_4bb05599f0b1
template <> struct __declspec(uuid("9a245c40-aae6-59fb-87f5-4bb05599f0b1")) __declspec(novtable) IIterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> : impl_IIterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> {};
#endif

#ifndef WINRT_GENERIC_20259ef3_9f4b_5257_8581_6d3eabbbd690
#define WINRT_GENERIC_20259ef3_9f4b_5257_8581_6d3eabbbd690
template <> struct __declspec(uuid("20259ef3-9f4b-5257-8581-6d3eabbbd690")) __declspec(novtable) IIterator<Windows::UI::Composition::Interactions::ICompositionInteractionSource> : impl_IIterator<Windows::UI::Composition::Interactions::ICompositionInteractionSource> {};
#endif

#ifndef WINRT_GENERIC_46617d87_2cd2_5e31_9a30_ea86f8aa7ca1
#define WINRT_GENERIC_46617d87_2cd2_5e31_9a30_ea86f8aa7ca1
template <> struct __declspec(uuid("46617d87-2cd2-5e31-9a30-ea86f8aa7ca1")) __declspec(novtable) IIterator<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> : impl_IIterator<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> {};
#endif


}

namespace Windows::UI::Composition::Interactions {

template <typename D>
struct WINRT_EBO impl_ICompositionInteractionSource
{
};

template <typename D>
struct WINRT_EBO impl_ICompositionInteractionSourceCollection
{
    int32_t Count() const;
    void Add(const Windows::UI::Composition::Interactions::ICompositionInteractionSource & value) const;
    void Remove(const Windows::UI::Composition::Interactions::ICompositionInteractionSource & value) const;
    void RemoveAll() const;
};

template <typename D>
struct WINRT_EBO impl_IInteractionTracker
{
    Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection InteractionSources() const;
    bool IsPositionRoundingSuggested() const;
    Windows::Foundation::Numerics::float3 MaxPosition() const;
    void MaxPosition(const Windows::Foundation::Numerics::float3 & value) const;
    float MaxScale() const;
    void MaxScale(float value) const;
    Windows::Foundation::Numerics::float3 MinPosition() const;
    void MinPosition(const Windows::Foundation::Numerics::float3 & value) const;
    float MinScale() const;
    void MinScale(float value) const;
    Windows::Foundation::Numerics::float3 NaturalRestingPosition() const;
    float NaturalRestingScale() const;
    Windows::UI::Composition::Interactions::IInteractionTrackerOwner Owner() const;
    Windows::Foundation::Numerics::float3 Position() const;
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> PositionInertiaDecayRate() const;
    void PositionInertiaDecayRate(const Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> & value) const;
    Windows::Foundation::Numerics::float3 PositionVelocityInPixelsPerSecond() const;
    float Scale() const;
    Windows::Foundation::IReference<float> ScaleInertiaDecayRate() const;
    void ScaleInertiaDecayRate(const Windows::Foundation::IReference<float> & value) const;
    float ScaleVelocityInPercentPerSecond() const;
    void AdjustPositionXIfGreaterThanThreshold(float adjustment, float positionThreshold) const;
    void AdjustPositionYIfGreaterThanThreshold(float adjustment, float positionThreshold) const;
    void ConfigurePositionXInertiaModifiers(const Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> & modifiers) const;
    void ConfigurePositionYInertiaModifiers(const Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> & modifiers) const;
    void ConfigureScaleInertiaModifiers(const Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> & modifiers) const;
    int32_t TryUpdatePosition(const Windows::Foundation::Numerics::float3 & value) const;
    int32_t TryUpdatePositionBy(const Windows::Foundation::Numerics::float3 & amount) const;
    int32_t TryUpdatePositionWithAnimation(const Windows::UI::Composition::CompositionAnimation & animation) const;
    int32_t TryUpdatePositionWithAdditionalVelocity(const Windows::Foundation::Numerics::float3 & velocityInPixelsPerSecond) const;
    int32_t TryUpdateScale(float value, const Windows::Foundation::Numerics::float3 & centerPoint) const;
    int32_t TryUpdateScaleWithAnimation(const Windows::UI::Composition::CompositionAnimation & animation, const Windows::Foundation::Numerics::float3 & centerPoint) const;
    int32_t TryUpdateScaleWithAdditionalVelocity(float velocityInPercentPerSecond, const Windows::Foundation::Numerics::float3 & centerPoint) const;
};

template <typename D>
struct WINRT_EBO impl_IInteractionTrackerCustomAnimationStateEnteredArgs
{
    int32_t RequestId() const;
};

template <typename D>
struct WINRT_EBO impl_IInteractionTrackerIdleStateEnteredArgs
{
    int32_t RequestId() const;
};

template <typename D>
struct WINRT_EBO impl_IInteractionTrackerInertiaModifier
{
};

template <typename D>
struct WINRT_EBO impl_IInteractionTrackerInertiaModifierFactory
{
};

template <typename D>
struct WINRT_EBO impl_IInteractionTrackerInertiaMotion
{
    Windows::UI::Composition::ExpressionAnimation Condition() const;
    void Condition(const Windows::UI::Composition::ExpressionAnimation & value) const;
    Windows::UI::Composition::ExpressionAnimation Motion() const;
    void Motion(const Windows::UI::Composition::ExpressionAnimation & value) const;
};

template <typename D>
struct WINRT_EBO impl_IInteractionTrackerInertiaMotionStatics
{
    Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion Create(const Windows::UI::Composition::Compositor & compositor) const;
};

template <typename D>
struct WINRT_EBO impl_IInteractionTrackerInertiaRestingValue
{
    Windows::UI::Composition::ExpressionAnimation Condition() const;
    void Condition(const Windows::UI::Composition::ExpressionAnimation & value) const;
    Windows::UI::Composition::ExpressionAnimation RestingValue() const;
    void RestingValue(const Windows::UI::Composition::ExpressionAnimation & value) const;
};

template <typename D>
struct WINRT_EBO impl_IInteractionTrackerInertiaRestingValueStatics
{
    Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue Create(const Windows::UI::Composition::Compositor & compositor) const;
};

template <typename D>
struct WINRT_EBO impl_IInteractionTrackerInertiaStateEnteredArgs
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> ModifiedRestingPosition() const;
    Windows::Foundation::IReference<float> ModifiedRestingScale() const;
    Windows::Foundation::Numerics::float3 NaturalRestingPosition() const;
    float NaturalRestingScale() const;
    Windows::Foundation::Numerics::float3 PositionVelocityInPixelsPerSecond() const;
    int32_t RequestId() const;
    float ScaleVelocityInPercentPerSecond() const;
};

template <typename D>
struct WINRT_EBO impl_IInteractionTrackerInteractingStateEnteredArgs
{
    int32_t RequestId() const;
};

template <typename D>
struct WINRT_EBO impl_IInteractionTrackerOwner
{
    void CustomAnimationStateEntered(const Windows::UI::Composition::Interactions::InteractionTracker & sender, const Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs & args) const;
    void IdleStateEntered(const Windows::UI::Composition::Interactions::InteractionTracker & sender, const Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs & args) const;
    void InertiaStateEntered(const Windows::UI::Composition::Interactions::InteractionTracker & sender, const Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs & args) const;
    void InteractingStateEntered(const Windows::UI::Composition::Interactions::InteractionTracker & sender, const Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs & args) const;
    void RequestIgnored(const Windows::UI::Composition::Interactions::InteractionTracker & sender, const Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs & args) const;
    void ValuesChanged(const Windows::UI::Composition::Interactions::InteractionTracker & sender, const Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs & args) const;
};

template <typename D>
struct WINRT_EBO impl_IInteractionTrackerRequestIgnoredArgs
{
    int32_t RequestId() const;
};

template <typename D>
struct WINRT_EBO impl_IInteractionTrackerStatics
{
    Windows::UI::Composition::Interactions::InteractionTracker Create(const Windows::UI::Composition::Compositor & compositor) const;
    Windows::UI::Composition::Interactions::InteractionTracker CreateWithOwner(const Windows::UI::Composition::Compositor & compositor, const Windows::UI::Composition::Interactions::IInteractionTrackerOwner & owner) const;
};

template <typename D>
struct WINRT_EBO impl_IInteractionTrackerValuesChangedArgs
{
    Windows::Foundation::Numerics::float3 Position() const;
    int32_t RequestId() const;
    float Scale() const;
};

template <typename D>
struct WINRT_EBO impl_IVisualInteractionSource
{
    bool IsPositionXRailsEnabled() const;
    void IsPositionXRailsEnabled(bool value) const;
    bool IsPositionYRailsEnabled() const;
    void IsPositionYRailsEnabled(bool value) const;
    Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode ManipulationRedirectionMode() const;
    void ManipulationRedirectionMode(Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode value) const;
    Windows::UI::Composition::Interactions::InteractionChainingMode PositionXChainingMode() const;
    void PositionXChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode value) const;
    Windows::UI::Composition::Interactions::InteractionSourceMode PositionXSourceMode() const;
    void PositionXSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode value) const;
    Windows::UI::Composition::Interactions::InteractionChainingMode PositionYChainingMode() const;
    void PositionYChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode value) const;
    Windows::UI::Composition::Interactions::InteractionSourceMode PositionYSourceMode() const;
    void PositionYSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode value) const;
    Windows::UI::Composition::Interactions::InteractionChainingMode ScaleChainingMode() const;
    void ScaleChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode value) const;
    Windows::UI::Composition::Interactions::InteractionSourceMode ScaleSourceMode() const;
    void ScaleSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode value) const;
    Windows::UI::Composition::Visual Source() const;
    void TryRedirectForManipulation(const Windows::UI::Input::PointerPoint & pointerPoint) const;
};

template <typename D>
struct WINRT_EBO impl_IVisualInteractionSourceStatics
{
    Windows::UI::Composition::Interactions::VisualInteractionSource Create(const Windows::UI::Composition::Visual & source) const;
};

struct ICompositionInteractionSource :
    Windows::IInspectable,
    impl::consume<ICompositionInteractionSource>
{
    ICompositionInteractionSource(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICompositionInteractionSource>(m_ptr); }
};

struct ICompositionInteractionSourceCollection :
    Windows::IInspectable,
    impl::consume<ICompositionInteractionSourceCollection>,
    impl::require<ICompositionInteractionSourceCollection, Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::ICompositionInteractionSource>>
{
    ICompositionInteractionSourceCollection(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICompositionInteractionSourceCollection>(m_ptr); }
};

struct IInteractionTracker :
    Windows::IInspectable,
    impl::consume<IInteractionTracker>
{
    IInteractionTracker(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInteractionTracker>(m_ptr); }
};

struct IInteractionTrackerCustomAnimationStateEnteredArgs :
    Windows::IInspectable,
    impl::consume<IInteractionTrackerCustomAnimationStateEnteredArgs>
{
    IInteractionTrackerCustomAnimationStateEnteredArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInteractionTrackerCustomAnimationStateEnteredArgs>(m_ptr); }
};

struct IInteractionTrackerIdleStateEnteredArgs :
    Windows::IInspectable,
    impl::consume<IInteractionTrackerIdleStateEnteredArgs>
{
    IInteractionTrackerIdleStateEnteredArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInteractionTrackerIdleStateEnteredArgs>(m_ptr); }
};

struct IInteractionTrackerInertiaModifier :
    Windows::IInspectable,
    impl::consume<IInteractionTrackerInertiaModifier>
{
    IInteractionTrackerInertiaModifier(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInteractionTrackerInertiaModifier>(m_ptr); }
};

struct IInteractionTrackerInertiaModifierFactory :
    Windows::IInspectable,
    impl::consume<IInteractionTrackerInertiaModifierFactory>
{
    IInteractionTrackerInertiaModifierFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInteractionTrackerInertiaModifierFactory>(m_ptr); }
};

struct IInteractionTrackerInertiaMotion :
    Windows::IInspectable,
    impl::consume<IInteractionTrackerInertiaMotion>
{
    IInteractionTrackerInertiaMotion(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInteractionTrackerInertiaMotion>(m_ptr); }
};

struct IInteractionTrackerInertiaMotionStatics :
    Windows::IInspectable,
    impl::consume<IInteractionTrackerInertiaMotionStatics>
{
    IInteractionTrackerInertiaMotionStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInteractionTrackerInertiaMotionStatics>(m_ptr); }
};

struct IInteractionTrackerInertiaRestingValue :
    Windows::IInspectable,
    impl::consume<IInteractionTrackerInertiaRestingValue>
{
    IInteractionTrackerInertiaRestingValue(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInteractionTrackerInertiaRestingValue>(m_ptr); }
};

struct IInteractionTrackerInertiaRestingValueStatics :
    Windows::IInspectable,
    impl::consume<IInteractionTrackerInertiaRestingValueStatics>
{
    IInteractionTrackerInertiaRestingValueStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInteractionTrackerInertiaRestingValueStatics>(m_ptr); }
};

struct IInteractionTrackerInertiaStateEnteredArgs :
    Windows::IInspectable,
    impl::consume<IInteractionTrackerInertiaStateEnteredArgs>
{
    IInteractionTrackerInertiaStateEnteredArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInteractionTrackerInertiaStateEnteredArgs>(m_ptr); }
};

struct IInteractionTrackerInteractingStateEnteredArgs :
    Windows::IInspectable,
    impl::consume<IInteractionTrackerInteractingStateEnteredArgs>
{
    IInteractionTrackerInteractingStateEnteredArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInteractionTrackerInteractingStateEnteredArgs>(m_ptr); }
};

struct IInteractionTrackerOwner :
    Windows::IInspectable,
    impl::consume<IInteractionTrackerOwner>
{
    IInteractionTrackerOwner(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInteractionTrackerOwner>(m_ptr); }
};

struct IInteractionTrackerRequestIgnoredArgs :
    Windows::IInspectable,
    impl::consume<IInteractionTrackerRequestIgnoredArgs>
{
    IInteractionTrackerRequestIgnoredArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInteractionTrackerRequestIgnoredArgs>(m_ptr); }
};

struct IInteractionTrackerStatics :
    Windows::IInspectable,
    impl::consume<IInteractionTrackerStatics>
{
    IInteractionTrackerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInteractionTrackerStatics>(m_ptr); }
};

struct IInteractionTrackerValuesChangedArgs :
    Windows::IInspectable,
    impl::consume<IInteractionTrackerValuesChangedArgs>
{
    IInteractionTrackerValuesChangedArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInteractionTrackerValuesChangedArgs>(m_ptr); }
};

struct IVisualInteractionSource :
    Windows::IInspectable,
    impl::consume<IVisualInteractionSource>
{
    IVisualInteractionSource(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVisualInteractionSource>(m_ptr); }
};

struct IVisualInteractionSourceStatics :
    Windows::IInspectable,
    impl::consume<IVisualInteractionSourceStatics>
{
    IVisualInteractionSourceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVisualInteractionSourceStatics>(m_ptr); }
};

}

}
