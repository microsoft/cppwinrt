// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Composition {

struct CompositionAnimation;
struct Compositor;
struct ExpressionAnimation;
struct ScalarNaturalMotionAnimation;
struct Vector2NaturalMotionAnimation;
struct Visual;

}

WINRT_EXPORT namespace winrt::Windows::UI::Input {

struct PointerPoint;

}

WINRT_EXPORT namespace winrt::Windows::UI::Composition::Interactions {

enum class InteractionChainingMode : int32_t
{
    Auto = 0,
    Always = 1,
    Never = 2,
};

enum class InteractionSourceMode : int32_t
{
    Disabled = 0,
    EnabledWithInertia = 1,
    EnabledWithoutInertia = 2,
};

enum class VisualInteractionSourceRedirectionMode : int32_t
{
    Off = 0,
    CapableTouchpadOnly = 1,
};

struct ICompositionConditionalValue;
struct ICompositionConditionalValueStatics;
struct ICompositionInteractionSource;
struct ICompositionInteractionSourceCollection;
struct IInteractionTracker;
struct IInteractionTracker2;
struct IInteractionTracker3;
struct IInteractionTrackerCustomAnimationStateEnteredArgs;
struct IInteractionTrackerIdleStateEnteredArgs;
struct IInteractionTrackerInertiaModifier;
struct IInteractionTrackerInertiaModifierFactory;
struct IInteractionTrackerInertiaMotion;
struct IInteractionTrackerInertiaMotionStatics;
struct IInteractionTrackerInertiaNaturalMotion;
struct IInteractionTrackerInertiaNaturalMotionStatics;
struct IInteractionTrackerInertiaRestingValue;
struct IInteractionTrackerInertiaRestingValueStatics;
struct IInteractionTrackerInertiaStateEnteredArgs;
struct IInteractionTrackerInteractingStateEnteredArgs;
struct IInteractionTrackerOwner;
struct IInteractionTrackerRequestIgnoredArgs;
struct IInteractionTrackerStatics;
struct IInteractionTrackerValuesChangedArgs;
struct IInteractionTrackerVector2InertiaModifier;
struct IInteractionTrackerVector2InertiaModifierFactory;
struct IInteractionTrackerVector2InertiaNaturalMotion;
struct IInteractionTrackerVector2InertiaNaturalMotionStatics;
struct IVisualInteractionSource;
struct IVisualInteractionSource2;
struct IVisualInteractionSourceObjectFactory;
struct IVisualInteractionSourceStatics;
struct CompositionConditionalValue;
struct CompositionInteractionSourceCollection;
struct InteractionTracker;
struct InteractionTrackerCustomAnimationStateEnteredArgs;
struct InteractionTrackerIdleStateEnteredArgs;
struct InteractionTrackerInertiaModifier;
struct InteractionTrackerInertiaMotion;
struct InteractionTrackerInertiaNaturalMotion;
struct InteractionTrackerInertiaRestingValue;
struct InteractionTrackerInertiaStateEnteredArgs;
struct InteractionTrackerInteractingStateEnteredArgs;
struct InteractionTrackerRequestIgnoredArgs;
struct InteractionTrackerValuesChangedArgs;
struct InteractionTrackerVector2InertiaModifier;
struct InteractionTrackerVector2InertiaNaturalMotion;
struct VisualInteractionSource;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Composition::Interactions::ICompositionConditionalValue>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::ICompositionInteractionSource>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IInteractionTracker>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IInteractionTracker2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IInteractionTracker3>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotionStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerOwner>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifierFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotionStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IVisualInteractionSource>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IVisualInteractionSource2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IVisualInteractionSourceObjectFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Interactions::CompositionConditionalValue>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Interactions::InteractionTracker>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Interactions::VisualInteractionSource>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Interactions::InteractionChainingMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Composition::Interactions::InteractionSourceMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode>{ using type = enum_category; };
template <> struct name<Windows::UI::Composition::Interactions::ICompositionConditionalValue>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.ICompositionConditionalValue" }; };
template <> struct name<Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.ICompositionConditionalValueStatics" }; };
template <> struct name<Windows::UI::Composition::Interactions::ICompositionInteractionSource>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.ICompositionInteractionSource" }; };
template <> struct name<Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.ICompositionInteractionSourceCollection" }; };
template <> struct name<Windows::UI::Composition::Interactions::IInteractionTracker>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTracker" }; };
template <> struct name<Windows::UI::Composition::Interactions::IInteractionTracker2>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTracker2" }; };
template <> struct name<Windows::UI::Composition::Interactions::IInteractionTracker3>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTracker3" }; };
template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerCustomAnimationStateEnteredArgs" }; };
template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerIdleStateEnteredArgs" }; };
template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaModifier" }; };
template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaModifierFactory" }; };
template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaMotion" }; };
template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaMotionStatics" }; };
template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaNaturalMotion" }; };
template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotionStatics>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaNaturalMotionStatics" }; };
template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaRestingValue" }; };
template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaRestingValueStatics" }; };
template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaStateEnteredArgs" }; };
template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerInteractingStateEnteredArgs" }; };
template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerOwner>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerOwner" }; };
template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerRequestIgnoredArgs" }; };
template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerStatics>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerStatics" }; };
template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerValuesChangedArgs" }; };
template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerVector2InertiaModifier" }; };
template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifierFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerVector2InertiaModifierFactory" }; };
template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerVector2InertiaNaturalMotion" }; };
template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotionStatics>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerVector2InertiaNaturalMotionStatics" }; };
template <> struct name<Windows::UI::Composition::Interactions::IVisualInteractionSource>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IVisualInteractionSource" }; };
template <> struct name<Windows::UI::Composition::Interactions::IVisualInteractionSource2>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IVisualInteractionSource2" }; };
template <> struct name<Windows::UI::Composition::Interactions::IVisualInteractionSourceObjectFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IVisualInteractionSourceObjectFactory" }; };
template <> struct name<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IVisualInteractionSourceStatics" }; };
template <> struct name<Windows::UI::Composition::Interactions::CompositionConditionalValue>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.CompositionConditionalValue" }; };
template <> struct name<Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.CompositionInteractionSourceCollection" }; };
template <> struct name<Windows::UI::Composition::Interactions::InteractionTracker>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTracker" }; };
template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerCustomAnimationStateEnteredArgs" }; };
template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerIdleStateEnteredArgs" }; };
template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerInertiaModifier" }; };
template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerInertiaMotion" }; };
template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerInertiaNaturalMotion" }; };
template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerInertiaRestingValue" }; };
template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerInertiaStateEnteredArgs" }; };
template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerInteractingStateEnteredArgs" }; };
template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerRequestIgnoredArgs" }; };
template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerValuesChangedArgs" }; };
template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerVector2InertiaModifier" }; };
template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerVector2InertiaNaturalMotion" }; };
template <> struct name<Windows::UI::Composition::Interactions::VisualInteractionSource>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.VisualInteractionSource" }; };
template <> struct name<Windows::UI::Composition::Interactions::InteractionChainingMode>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionChainingMode" }; };
template <> struct name<Windows::UI::Composition::Interactions::InteractionSourceMode>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionSourceMode" }; };
template <> struct name<Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode>{ static constexpr auto & value{ L"Windows.UI.Composition.Interactions.VisualInteractionSourceRedirectionMode" }; };
template <> struct guid<Windows::UI::Composition::Interactions::ICompositionConditionalValue>{ static constexpr GUID value{ 0x43250538,0xEB73,0x4561,{ 0xA7,0x1D,0x1A,0x43,0xEA,0xEB,0x7A,0x9B } }; };
template <> struct guid<Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics>{ static constexpr GUID value{ 0x090C4B72,0x8467,0x4D0A,{ 0x90,0x65,0xAC,0x46,0xB8,0x0A,0x55,0x22 } }; };
template <> struct guid<Windows::UI::Composition::Interactions::ICompositionInteractionSource>{ static constexpr GUID value{ 0x043B2431,0x06E3,0x495A,{ 0xBA,0x54,0x40,0x9F,0x00,0x17,0xFA,0xC0 } }; };
template <> struct guid<Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection>{ static constexpr GUID value{ 0x1B468E4B,0xA5BF,0x47D8,{ 0xA5,0x47,0x38,0x94,0x15,0x5A,0x15,0x8C } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IInteractionTracker>{ static constexpr GUID value{ 0x2A8E8CB1,0x1000,0x4416,{ 0x83,0x63,0xCC,0x27,0xFB,0x87,0x73,0x08 } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IInteractionTracker2>{ static constexpr GUID value{ 0x25769A3E,0xCE6D,0x448C,{ 0x83,0x86,0x92,0x62,0x0D,0x24,0x07,0x56 } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IInteractionTracker3>{ static constexpr GUID value{ 0xE6C5D7A2,0x5C4B,0x42C6,{ 0x84,0xB7,0xF6,0x94,0x41,0xB1,0x80,0x91 } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs>{ static constexpr GUID value{ 0x8D1C8CF1,0xD7B0,0x434C,{ 0xA5,0xD2,0x2D,0x76,0x11,0x86,0x48,0x34 } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs>{ static constexpr GUID value{ 0x50012FAA,0x1510,0x4142,{ 0xA1,0xA5,0x01,0x9B,0x09,0xF8,0x85,0x7B } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>{ static constexpr GUID value{ 0xA0E2C920,0x26B4,0x4DA2,{ 0x8B,0x61,0x5E,0x68,0x39,0x79,0xBB,0xE2 } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory>{ static constexpr GUID value{ 0x993818FE,0xC94E,0x4B86,{ 0x87,0xF3,0x92,0x26,0x65,0xBA,0x46,0xB9 } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion>{ static constexpr GUID value{ 0x04922FDC,0xF154,0x4CB8,{ 0xBF,0x33,0xCC,0x1B,0xA6,0x11,0xE6,0xDB } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics>{ static constexpr GUID value{ 0x8CC83DD6,0xBA7B,0x431A,{ 0x84,0x4B,0x6E,0xAC,0x91,0x30,0xF9,0x9A } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion>{ static constexpr GUID value{ 0x70ACDAAE,0x27DC,0x48ED,{ 0xA3,0xC3,0x6D,0x61,0xC9,0xA0,0x29,0xD2 } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotionStatics>{ static constexpr GUID value{ 0xCFDA55B0,0x5E3E,0x4289,{ 0x93,0x2D,0xEE,0x5F,0x50,0xE7,0x42,0x83 } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue>{ static constexpr GUID value{ 0x86F7EC09,0x5096,0x4170,{ 0x9C,0xC8,0xDF,0x2F,0xE1,0x01,0xBB,0x93 } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics>{ static constexpr GUID value{ 0x18ED4699,0x0745,0x4096,{ 0xBC,0xAB,0x3A,0x4E,0x99,0x56,0x9B,0xCF } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs>{ static constexpr GUID value{ 0x87108CF2,0xE7FF,0x4F7D,{ 0x9F,0xFD,0xD7,0x2F,0x1E,0x40,0x9B,0x63 } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs>{ static constexpr GUID value{ 0xA7263939,0xA17B,0x4011,{ 0x99,0xFD,0xB5,0xC2,0x4F,0x14,0x37,0x48 } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IInteractionTrackerOwner>{ static constexpr GUID value{ 0xDB2E8AF3,0x4DEB,0x4E53,{ 0xB2,0x9C,0xB0,0x6C,0x9F,0x96,0xD6,0x51 } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs>{ static constexpr GUID value{ 0x80DD82F1,0xCE25,0x488F,{ 0x91,0xDD,0xCB,0x64,0x55,0xCC,0xFF,0x2E } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IInteractionTrackerStatics>{ static constexpr GUID value{ 0xBBA5D7B7,0x6590,0x4498,{ 0x8D,0x6C,0xEB,0x62,0xB5,0x14,0xC9,0x2A } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs>{ static constexpr GUID value{ 0xCF1578EF,0xD3DF,0x4501,{ 0xB9,0xE6,0xF0,0x2F,0xB2,0x2F,0x73,0xD0 } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier>{ static constexpr GUID value{ 0x87E08AB0,0x3086,0x4853,{ 0xA4,0xB7,0x77,0x88,0x2A,0xD5,0xD7,0xE3 } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifierFactory>{ static constexpr GUID value{ 0x7401D6C4,0x6C6D,0x48DF,{ 0xBC,0x3E,0x17,0x1E,0x22,0x7E,0x7D,0x7F } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion>{ static constexpr GUID value{ 0x5F17695C,0x162D,0x4C07,{ 0x94,0x00,0xC2,0x82,0xB2,0x82,0x76,0xCA } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotionStatics>{ static constexpr GUID value{ 0x82001A48,0x09C0,0x434F,{ 0x81,0x89,0x14,0x1C,0x66,0xDF,0x36,0x2F } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IVisualInteractionSource>{ static constexpr GUID value{ 0xCA0E8A86,0xD8D6,0x4111,{ 0xB0,0x88,0x70,0x34,0x7B,0xD2,0xB0,0xED } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IVisualInteractionSource2>{ static constexpr GUID value{ 0xAA914893,0xA73C,0x414D,{ 0x80,0xD0,0x24,0x9B,0xAD,0x2F,0xBD,0x93 } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IVisualInteractionSourceObjectFactory>{ static constexpr GUID value{ 0xB2CA917C,0xE98A,0x41F2,{ 0xB3,0xC9,0x89,0x1C,0x92,0x66,0xC8,0xF6 } }; };
template <> struct guid<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics>{ static constexpr GUID value{ 0x369965E1,0x8645,0x4F75,{ 0xBA,0x00,0x64,0x79,0xCD,0x10,0xC8,0xE6 } }; };
template <> struct default_interface<Windows::UI::Composition::Interactions::CompositionConditionalValue>{ using type = Windows::UI::Composition::Interactions::ICompositionConditionalValue; };
template <> struct default_interface<Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection>{ using type = Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection; };
template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTracker>{ using type = Windows::UI::Composition::Interactions::IInteractionTracker; };
template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs; };
template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs; };
template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier; };
template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion; };
template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion; };
template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue; };
template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs; };
template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs; };
template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs; };
template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs; };
template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier; };
template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion; };
template <> struct default_interface<Windows::UI::Composition::Interactions::VisualInteractionSource>{ using type = Windows::UI::Composition::Interactions::IVisualInteractionSource; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_ICompositionConditionalValue
{
    Windows::UI::Composition::ExpressionAnimation Condition() const noexcept;
    void Condition(Windows::UI::Composition::ExpressionAnimation const& value) const noexcept;
    Windows::UI::Composition::ExpressionAnimation Value() const noexcept;
    void Value(Windows::UI::Composition::ExpressionAnimation const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::Interactions::ICompositionConditionalValue> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_ICompositionConditionalValue<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_ICompositionConditionalValueStatics
{
    Windows::UI::Composition::Interactions::CompositionConditionalValue Create(Windows::UI::Composition::Compositor const& compositor) const;
};
template <> struct consume<Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_ICompositionConditionalValueStatics<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_ICompositionInteractionSource
{
};
template <> struct consume<Windows::UI::Composition::Interactions::ICompositionInteractionSource> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_ICompositionInteractionSource<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_ICompositionInteractionSourceCollection
{
    int32_t Count() const noexcept;
    void Add(Windows::UI::Composition::Interactions::ICompositionInteractionSource const& value) const;
    void Remove(Windows::UI::Composition::Interactions::ICompositionInteractionSource const& value) const;
    void RemoveAll() const;
};
template <> struct consume<Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_ICompositionInteractionSourceCollection<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IInteractionTracker
{
    Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection InteractionSources() const noexcept;
    bool IsPositionRoundingSuggested() const noexcept;
    Windows::Foundation::Numerics::float3 MaxPosition() const noexcept;
    void MaxPosition(Windows::Foundation::Numerics::float3 const& value) const noexcept;
    float MaxScale() const noexcept;
    void MaxScale(float value) const noexcept;
    Windows::Foundation::Numerics::float3 MinPosition() const noexcept;
    void MinPosition(Windows::Foundation::Numerics::float3 const& value) const noexcept;
    float MinScale() const noexcept;
    void MinScale(float value) const noexcept;
    Windows::Foundation::Numerics::float3 NaturalRestingPosition() const noexcept;
    float NaturalRestingScale() const noexcept;
    Windows::UI::Composition::Interactions::IInteractionTrackerOwner Owner() const noexcept;
    Windows::Foundation::Numerics::float3 Position() const noexcept;
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> PositionInertiaDecayRate() const noexcept;
    void PositionInertiaDecayRate(optional<Windows::Foundation::Numerics::float3> const& value) const noexcept;
    Windows::Foundation::Numerics::float3 PositionVelocityInPixelsPerSecond() const noexcept;
    float Scale() const noexcept;
    Windows::Foundation::IReference<float> ScaleInertiaDecayRate() const noexcept;
    void ScaleInertiaDecayRate(optional<float> const& value) const noexcept;
    float ScaleVelocityInPercentPerSecond() const noexcept;
    void AdjustPositionXIfGreaterThanThreshold(float adjustment, float positionThreshold) const;
    void AdjustPositionYIfGreaterThanThreshold(float adjustment, float positionThreshold) const;
    void ConfigurePositionXInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> const& modifiers) const;
    void ConfigurePositionYInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> const& modifiers) const;
    void ConfigureScaleInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> const& modifiers) const;
    int32_t TryUpdatePosition(Windows::Foundation::Numerics::float3 const& value) const;
    int32_t TryUpdatePositionBy(Windows::Foundation::Numerics::float3 const& amount) const;
    int32_t TryUpdatePositionWithAnimation(Windows::UI::Composition::CompositionAnimation const& animation) const;
    int32_t TryUpdatePositionWithAdditionalVelocity(Windows::Foundation::Numerics::float3 const& velocityInPixelsPerSecond) const;
    int32_t TryUpdateScale(float value, Windows::Foundation::Numerics::float3 const& centerPoint) const;
    int32_t TryUpdateScaleWithAnimation(Windows::UI::Composition::CompositionAnimation const& animation, Windows::Foundation::Numerics::float3 const& centerPoint) const;
    int32_t TryUpdateScaleWithAdditionalVelocity(float velocityInPercentPerSecond, Windows::Foundation::Numerics::float3 const& centerPoint) const;
};
template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTracker> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IInteractionTracker2
{
    void ConfigureCenterPointXInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const;
    void ConfigureCenterPointYInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const;
};
template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTracker2> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTracker2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IInteractionTracker3
{
    void ConfigureVector2PositionInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier> const& modifiers) const;
};
template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTracker3> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTracker3<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerCustomAnimationStateEnteredArgs
{
    int32_t RequestId() const noexcept;
};
template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerCustomAnimationStateEnteredArgs<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerIdleStateEnteredArgs
{
    int32_t RequestId() const noexcept;
};
template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerIdleStateEnteredArgs<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaModifier
{
};
template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaModifier<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaModifierFactory
{
};
template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaModifierFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotion
{
    Windows::UI::Composition::ExpressionAnimation Condition() const noexcept;
    void Condition(Windows::UI::Composition::ExpressionAnimation const& value) const noexcept;
    Windows::UI::Composition::ExpressionAnimation Motion() const noexcept;
    void Motion(Windows::UI::Composition::ExpressionAnimation const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotion<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotionStatics
{
    Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion Create(Windows::UI::Composition::Compositor const& compositor) const;
};
template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotionStatics<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaNaturalMotion
{
    Windows::UI::Composition::ExpressionAnimation Condition() const noexcept;
    void Condition(Windows::UI::Composition::ExpressionAnimation const& value) const noexcept;
    Windows::UI::Composition::ScalarNaturalMotionAnimation NaturalMotion() const noexcept;
    void NaturalMotion(Windows::UI::Composition::ScalarNaturalMotionAnimation const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaNaturalMotion<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaNaturalMotionStatics
{
    Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion Create(Windows::UI::Composition::Compositor const& compositor) const;
};
template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotionStatics> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaNaturalMotionStatics<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValue
{
    Windows::UI::Composition::ExpressionAnimation Condition() const noexcept;
    void Condition(Windows::UI::Composition::ExpressionAnimation const& value) const noexcept;
    Windows::UI::Composition::ExpressionAnimation RestingValue() const noexcept;
    void RestingValue(Windows::UI::Composition::ExpressionAnimation const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValue<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValueStatics
{
    Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue Create(Windows::UI::Composition::Compositor const& compositor) const;
};
template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValueStatics<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> ModifiedRestingPosition() const noexcept;
    Windows::Foundation::IReference<float> ModifiedRestingScale() const noexcept;
    Windows::Foundation::Numerics::float3 NaturalRestingPosition() const noexcept;
    float NaturalRestingScale() const noexcept;
    Windows::Foundation::Numerics::float3 PositionVelocityInPixelsPerSecond() const noexcept;
    int32_t RequestId() const noexcept;
    float ScaleVelocityInPercentPerSecond() const noexcept;
};
template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInteractingStateEnteredArgs
{
    int32_t RequestId() const noexcept;
};
template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInteractingStateEnteredArgs<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerOwner
{
    void CustomAnimationStateEntered(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs const& args) const;
    void IdleStateEntered(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs const& args) const;
    void InertiaStateEntered(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs const& args) const;
    void InteractingStateEntered(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs const& args) const;
    void RequestIgnored(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs const& args) const;
    void ValuesChanged(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs const& args) const;
};
template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerOwner> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerOwner<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerRequestIgnoredArgs
{
    int32_t RequestId() const noexcept;
};
template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerRequestIgnoredArgs<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerStatics
{
    Windows::UI::Composition::Interactions::InteractionTracker Create(Windows::UI::Composition::Compositor const& compositor) const;
    Windows::UI::Composition::Interactions::InteractionTracker CreateWithOwner(Windows::UI::Composition::Compositor const& compositor, Windows::UI::Composition::Interactions::IInteractionTrackerOwner const& owner) const;
};
template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerStatics> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerStatics<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerValuesChangedArgs
{
    Windows::Foundation::Numerics::float3 Position() const noexcept;
    int32_t RequestId() const noexcept;
    float Scale() const noexcept;
};
template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerValuesChangedArgs<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaModifier
{
};
template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaModifier<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaModifierFactory
{
};
template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifierFactory> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaModifierFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaNaturalMotion
{
    Windows::UI::Composition::ExpressionAnimation Condition() const noexcept;
    void Condition(Windows::UI::Composition::ExpressionAnimation const& value) const noexcept;
    Windows::UI::Composition::Vector2NaturalMotionAnimation NaturalMotion() const noexcept;
    void NaturalMotion(Windows::UI::Composition::Vector2NaturalMotionAnimation const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaNaturalMotion<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaNaturalMotionStatics
{
    Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion Create(Windows::UI::Composition::Compositor const& compositor) const;
};
template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotionStatics> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaNaturalMotionStatics<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IVisualInteractionSource
{
    bool IsPositionXRailsEnabled() const noexcept;
    void IsPositionXRailsEnabled(bool value) const noexcept;
    bool IsPositionYRailsEnabled() const noexcept;
    void IsPositionYRailsEnabled(bool value) const noexcept;
    Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode ManipulationRedirectionMode() const noexcept;
    void ManipulationRedirectionMode(Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode const& value) const noexcept;
    Windows::UI::Composition::Interactions::InteractionChainingMode PositionXChainingMode() const noexcept;
    void PositionXChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode const& value) const noexcept;
    Windows::UI::Composition::Interactions::InteractionSourceMode PositionXSourceMode() const noexcept;
    void PositionXSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode const& value) const noexcept;
    Windows::UI::Composition::Interactions::InteractionChainingMode PositionYChainingMode() const noexcept;
    void PositionYChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode const& value) const noexcept;
    Windows::UI::Composition::Interactions::InteractionSourceMode PositionYSourceMode() const noexcept;
    void PositionYSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode const& value) const noexcept;
    Windows::UI::Composition::Interactions::InteractionChainingMode ScaleChainingMode() const noexcept;
    void ScaleChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode const& value) const noexcept;
    Windows::UI::Composition::Interactions::InteractionSourceMode ScaleSourceMode() const noexcept;
    void ScaleSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode const& value) const noexcept;
    Windows::UI::Composition::Visual Source() const noexcept;
    void TryRedirectForManipulation(Windows::UI::Input::PointerPoint const& pointerPoint) const;
};
template <> struct consume<Windows::UI::Composition::Interactions::IVisualInteractionSource> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2
{
    Windows::Foundation::Numerics::float3 DeltaPosition() const noexcept;
    float DeltaScale() const noexcept;
    Windows::Foundation::Numerics::float3 Position() const noexcept;
    Windows::Foundation::Numerics::float3 PositionVelocity() const noexcept;
    float Scale() const noexcept;
    float ScaleVelocity() const noexcept;
    void ConfigureCenterPointXModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const;
    void ConfigureCenterPointYModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const;
    void ConfigureDeltaPositionXModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const;
    void ConfigureDeltaPositionYModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const;
    void ConfigureDeltaScaleModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const;
};
template <> struct consume<Windows::UI::Composition::Interactions::IVisualInteractionSource2> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IVisualInteractionSourceObjectFactory
{
};
template <> struct consume<Windows::UI::Composition::Interactions::IVisualInteractionSourceObjectFactory> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IVisualInteractionSourceObjectFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_Interactions_IVisualInteractionSourceStatics
{
    Windows::UI::Composition::Interactions::VisualInteractionSource Create(Windows::UI::Composition::Visual const& source) const;
};
template <> struct consume<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics> { template <typename D> using type = consume_Windows_UI_Composition_Interactions_IVisualInteractionSourceStatics<D>; };

template <> struct abi<Windows::UI::Composition::Interactions::ICompositionConditionalValue>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Condition(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Condition(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Value(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Value(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* compositor, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::ICompositionInteractionSource>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Count(int32_t* value) = 0;
    virtual HRESULT __stdcall Add(::IUnknown* value) = 0;
    virtual HRESULT __stdcall Remove(::IUnknown* value) = 0;
    virtual HRESULT __stdcall RemoveAll() = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTracker>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InteractionSources(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsPositionRoundingSuggested(bool* value) = 0;
    virtual HRESULT __stdcall get_MaxPosition(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall put_MaxPosition(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_MaxScale(float* value) = 0;
    virtual HRESULT __stdcall put_MaxScale(float value) = 0;
    virtual HRESULT __stdcall get_MinPosition(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall put_MinPosition(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_MinScale(float* value) = 0;
    virtual HRESULT __stdcall put_MinScale(float value) = 0;
    virtual HRESULT __stdcall get_NaturalRestingPosition(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall get_NaturalRestingScale(float* value) = 0;
    virtual HRESULT __stdcall get_Owner(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall get_PositionInertiaDecayRate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_PositionInertiaDecayRate(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_PositionVelocityInPixelsPerSecond(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall get_Scale(float* value) = 0;
    virtual HRESULT __stdcall get_ScaleInertiaDecayRate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ScaleInertiaDecayRate(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ScaleVelocityInPercentPerSecond(float* value) = 0;
    virtual HRESULT __stdcall AdjustPositionXIfGreaterThanThreshold(float adjustment, float positionThreshold) = 0;
    virtual HRESULT __stdcall AdjustPositionYIfGreaterThanThreshold(float adjustment, float positionThreshold) = 0;
    virtual HRESULT __stdcall ConfigurePositionXInertiaModifiers(::IUnknown* modifiers) = 0;
    virtual HRESULT __stdcall ConfigurePositionYInertiaModifiers(::IUnknown* modifiers) = 0;
    virtual HRESULT __stdcall ConfigureScaleInertiaModifiers(::IUnknown* modifiers) = 0;
    virtual HRESULT __stdcall TryUpdatePosition(Windows::Foundation::Numerics::float3 value, int32_t* requestId) = 0;
    virtual HRESULT __stdcall TryUpdatePositionBy(Windows::Foundation::Numerics::float3 amount, int32_t* requestId) = 0;
    virtual HRESULT __stdcall TryUpdatePositionWithAnimation(::IUnknown* animation, int32_t* requestId) = 0;
    virtual HRESULT __stdcall TryUpdatePositionWithAdditionalVelocity(Windows::Foundation::Numerics::float3 velocityInPixelsPerSecond, int32_t* requestId) = 0;
    virtual HRESULT __stdcall TryUpdateScale(float value, Windows::Foundation::Numerics::float3 centerPoint, int32_t* requestId) = 0;
    virtual HRESULT __stdcall TryUpdateScaleWithAnimation(::IUnknown* animation, Windows::Foundation::Numerics::float3 centerPoint, int32_t* requestId) = 0;
    virtual HRESULT __stdcall TryUpdateScaleWithAdditionalVelocity(float velocityInPercentPerSecond, Windows::Foundation::Numerics::float3 centerPoint, int32_t* requestId) = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTracker2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ConfigureCenterPointXInertiaModifiers(::IUnknown* conditionalValues) = 0;
    virtual HRESULT __stdcall ConfigureCenterPointYInertiaModifiers(::IUnknown* conditionalValues) = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTracker3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ConfigureVector2PositionInertiaModifiers(::IUnknown* modifiers) = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RequestId(int32_t* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RequestId(int32_t* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Condition(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Condition(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Motion(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Motion(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* compositor, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Condition(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Condition(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_NaturalMotion(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_NaturalMotion(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotionStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* compositor, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Condition(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Condition(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_RestingValue(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_RestingValue(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* compositor, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ModifiedRestingPosition(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ModifiedRestingScale(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NaturalRestingPosition(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall get_NaturalRestingScale(float* value) = 0;
    virtual HRESULT __stdcall get_PositionVelocityInPixelsPerSecond(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall get_RequestId(int32_t* value) = 0;
    virtual HRESULT __stdcall get_ScaleVelocityInPercentPerSecond(float* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RequestId(int32_t* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerOwner>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CustomAnimationStateEntered(::IUnknown* sender, ::IUnknown* args) = 0;
    virtual HRESULT __stdcall IdleStateEntered(::IUnknown* sender, ::IUnknown* args) = 0;
    virtual HRESULT __stdcall InertiaStateEntered(::IUnknown* sender, ::IUnknown* args) = 0;
    virtual HRESULT __stdcall InteractingStateEntered(::IUnknown* sender, ::IUnknown* args) = 0;
    virtual HRESULT __stdcall RequestIgnored(::IUnknown* sender, ::IUnknown* args) = 0;
    virtual HRESULT __stdcall ValuesChanged(::IUnknown* sender, ::IUnknown* args) = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RequestId(int32_t* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* compositor, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateWithOwner(::IUnknown* compositor, ::IUnknown* owner, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall get_RequestId(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Scale(float* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifierFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Condition(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Condition(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_NaturalMotion(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_NaturalMotion(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotionStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* compositor, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::IVisualInteractionSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsPositionXRailsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsPositionXRailsEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsPositionYRailsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsPositionYRailsEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_ManipulationRedirectionMode(Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode* value) = 0;
    virtual HRESULT __stdcall put_ManipulationRedirectionMode(Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode value) = 0;
    virtual HRESULT __stdcall get_PositionXChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode* value) = 0;
    virtual HRESULT __stdcall put_PositionXChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode value) = 0;
    virtual HRESULT __stdcall get_PositionXSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode* value) = 0;
    virtual HRESULT __stdcall put_PositionXSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode value) = 0;
    virtual HRESULT __stdcall get_PositionYChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode* value) = 0;
    virtual HRESULT __stdcall put_PositionYChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode value) = 0;
    virtual HRESULT __stdcall get_PositionYSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode* value) = 0;
    virtual HRESULT __stdcall put_PositionYSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode value) = 0;
    virtual HRESULT __stdcall get_ScaleChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode* value) = 0;
    virtual HRESULT __stdcall put_ScaleChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode value) = 0;
    virtual HRESULT __stdcall get_ScaleSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode* value) = 0;
    virtual HRESULT __stdcall put_ScaleSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** value) = 0;
    virtual HRESULT __stdcall TryRedirectForManipulation(::IUnknown* pointerPoint) = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::IVisualInteractionSource2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeltaPosition(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall get_DeltaScale(float* value) = 0;
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall get_PositionVelocity(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall get_Scale(float* value) = 0;
    virtual HRESULT __stdcall get_ScaleVelocity(float* value) = 0;
    virtual HRESULT __stdcall ConfigureCenterPointXModifiers(::IUnknown* conditionalValues) = 0;
    virtual HRESULT __stdcall ConfigureCenterPointYModifiers(::IUnknown* conditionalValues) = 0;
    virtual HRESULT __stdcall ConfigureDeltaPositionXModifiers(::IUnknown* conditionalValues) = 0;
    virtual HRESULT __stdcall ConfigureDeltaPositionYModifiers(::IUnknown* conditionalValues) = 0;
    virtual HRESULT __stdcall ConfigureDeltaScaleModifiers(::IUnknown* conditionalValues) = 0;
};};

template <> struct abi<Windows::UI::Composition::Interactions::IVisualInteractionSourceObjectFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* source, ::IUnknown** result) = 0;
};};

}
