// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Core::AnimationMetrics {

enum class AnimationEffect
{
    Expand = 0,
    Collapse = 1,
    Reposition = 2,
    FadeIn = 3,
    FadeOut = 4,
    AddToList = 5,
    DeleteFromList = 6,
    AddToGrid = 7,
    DeleteFromGrid = 8,
    AddToSearchGrid = 9,
    DeleteFromSearchGrid = 10,
    AddToSearchList = 11,
    DeleteFromSearchList = 12,
    ShowEdgeUI = 13,
    ShowPanel = 14,
    HideEdgeUI = 15,
    HidePanel = 16,
    ShowPopup = 17,
    HidePopup = 18,
    PointerDown = 19,
    PointerUp = 20,
    DragSourceStart = 21,
    DragSourceEnd = 22,
    TransitionContent = 23,
    Reveal = 24,
    Hide = 25,
    DragBetweenEnter = 26,
    DragBetweenLeave = 27,
    SwipeSelect = 28,
    SwipeDeselect = 29,
    SwipeReveal = 30,
    EnterPage = 31,
    TransitionPage = 32,
    CrossFade = 33,
    Peek = 34,
    UpdateBadge = 35,
};

enum class AnimationEffectTarget
{
    Primary = 0,
    Added = 1,
    Affected = 2,
    Background = 3,
    Content = 4,
    Deleted = 5,
    Deselected = 6,
    DragSource = 7,
    Hidden = 8,
    Incoming = 9,
    Outgoing = 10,
    Outline = 11,
    Remaining = 12,
    Revealed = 13,
    RowIn = 14,
    RowOut = 15,
    Selected = 16,
    Selection = 17,
    Shown = 18,
    Tapped = 19,
};

enum class PropertyAnimationType
{
    Scale = 0,
    Translation = 1,
    Opacity = 2,
};

struct IAnimationDescription;
struct IAnimationDescriptionFactory;
struct IOpacityAnimation;
struct IPropertyAnimation;
struct IScaleAnimation;
struct AnimationDescription;
struct OpacityAnimation;
struct PropertyAnimation;
struct ScaleAnimation;
struct TranslationAnimation;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Core::AnimationMetrics::IAnimationDescription>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::AnimationMetrics::IAnimationDescriptionFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::AnimationMetrics::IOpacityAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::AnimationMetrics::IPropertyAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::AnimationMetrics::IScaleAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::AnimationMetrics::AnimationDescription>{ using type = class_category; };
template <> struct category<Windows::UI::Core::AnimationMetrics::OpacityAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Core::AnimationMetrics::PropertyAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Core::AnimationMetrics::ScaleAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Core::AnimationMetrics::TranslationAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Core::AnimationMetrics::AnimationEffect>{ using type = enum_category; };
template <> struct category<Windows::UI::Core::AnimationMetrics::AnimationEffectTarget>{ using type = enum_category; };
template <> struct category<Windows::UI::Core::AnimationMetrics::PropertyAnimationType>{ using type = enum_category; };
template <> struct name<Windows::UI::Core::AnimationMetrics::IAnimationDescription>{ static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.IAnimationDescription" }; };
template <> struct name<Windows::UI::Core::AnimationMetrics::IAnimationDescriptionFactory>{ static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.IAnimationDescriptionFactory" }; };
template <> struct name<Windows::UI::Core::AnimationMetrics::IOpacityAnimation>{ static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.IOpacityAnimation" }; };
template <> struct name<Windows::UI::Core::AnimationMetrics::IPropertyAnimation>{ static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.IPropertyAnimation" }; };
template <> struct name<Windows::UI::Core::AnimationMetrics::IScaleAnimation>{ static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.IScaleAnimation" }; };
template <> struct name<Windows::UI::Core::AnimationMetrics::AnimationDescription>{ static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.AnimationDescription" }; };
template <> struct name<Windows::UI::Core::AnimationMetrics::OpacityAnimation>{ static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.OpacityAnimation" }; };
template <> struct name<Windows::UI::Core::AnimationMetrics::PropertyAnimation>{ static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.PropertyAnimation" }; };
template <> struct name<Windows::UI::Core::AnimationMetrics::ScaleAnimation>{ static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.ScaleAnimation" }; };
template <> struct name<Windows::UI::Core::AnimationMetrics::TranslationAnimation>{ static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.TranslationAnimation" }; };
template <> struct name<Windows::UI::Core::AnimationMetrics::AnimationEffect>{ static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.AnimationEffect" }; };
template <> struct name<Windows::UI::Core::AnimationMetrics::AnimationEffectTarget>{ static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.AnimationEffectTarget" }; };
template <> struct name<Windows::UI::Core::AnimationMetrics::PropertyAnimationType>{ static constexpr auto & value{ L"Windows.UI.Core.AnimationMetrics.PropertyAnimationType" }; };
template <> struct guid<Windows::UI::Core::AnimationMetrics::IAnimationDescription>{ static constexpr GUID value{ 0x7D11A549,0xBE3D,0x41DE,{ 0xB0,0x81,0x05,0xC1,0x49,0x96,0x2F,0x9B } }; };
template <> struct guid<Windows::UI::Core::AnimationMetrics::IAnimationDescriptionFactory>{ static constexpr GUID value{ 0xC6E27ABE,0xC1FB,0x48B5,{ 0x92,0x71,0xEC,0xC7,0x0A,0xC8,0x6E,0xF0 } }; };
template <> struct guid<Windows::UI::Core::AnimationMetrics::IOpacityAnimation>{ static constexpr GUID value{ 0x803AABE5,0xEE7E,0x455F,{ 0x84,0xE9,0x25,0x06,0xAF,0xB8,0xD2,0xB4 } }; };
template <> struct guid<Windows::UI::Core::AnimationMetrics::IPropertyAnimation>{ static constexpr GUID value{ 0x3A01B4DA,0x4D8C,0x411E,{ 0xB6,0x15,0x1A,0xDE,0x68,0x3A,0x99,0x03 } }; };
template <> struct guid<Windows::UI::Core::AnimationMetrics::IScaleAnimation>{ static constexpr GUID value{ 0x023552C7,0x71AB,0x428C,{ 0x9C,0x9F,0xD3,0x17,0x80,0x96,0x49,0x95 } }; };
template <> struct default_interface<Windows::UI::Core::AnimationMetrics::AnimationDescription>{ using type = Windows::UI::Core::AnimationMetrics::IAnimationDescription; };
template <> struct default_interface<Windows::UI::Core::AnimationMetrics::OpacityAnimation>{ using type = Windows::UI::Core::AnimationMetrics::IOpacityAnimation; };
template <> struct default_interface<Windows::UI::Core::AnimationMetrics::PropertyAnimation>{ using type = Windows::UI::Core::AnimationMetrics::IPropertyAnimation; };
template <> struct default_interface<Windows::UI::Core::AnimationMetrics::ScaleAnimation>{ using type = Windows::UI::Core::AnimationMetrics::IScaleAnimation; };
template <> struct default_interface<Windows::UI::Core::AnimationMetrics::TranslationAnimation>{ using type = Windows::UI::Core::AnimationMetrics::IPropertyAnimation; };

template <typename D>
struct consume_Windows_UI_Core_AnimationMetrics_IAnimationDescription
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Core::AnimationMetrics::IPropertyAnimation> Animations() const;
    Windows::Foundation::TimeSpan StaggerDelay() const;
    float StaggerDelayFactor() const;
    Windows::Foundation::TimeSpan DelayLimit() const;
    int32_t ZOrder() const;
};
template <> struct consume<Windows::UI::Core::AnimationMetrics::IAnimationDescription> { template <typename D> using type = consume_Windows_UI_Core_AnimationMetrics_IAnimationDescription<D>; };

template <typename D>
struct consume_Windows_UI_Core_AnimationMetrics_IAnimationDescriptionFactory
{
    Windows::UI::Core::AnimationMetrics::AnimationDescription CreateInstance(Windows::UI::Core::AnimationMetrics::AnimationEffect const& effect, Windows::UI::Core::AnimationMetrics::AnimationEffectTarget const& target) const;
};
template <> struct consume<Windows::UI::Core::AnimationMetrics::IAnimationDescriptionFactory> { template <typename D> using type = consume_Windows_UI_Core_AnimationMetrics_IAnimationDescriptionFactory<D>; };

template <typename D>
struct consume_Windows_UI_Core_AnimationMetrics_IOpacityAnimation
{
    Windows::Foundation::IReference<float> InitialOpacity() const;
    float FinalOpacity() const;
};
template <> struct consume<Windows::UI::Core::AnimationMetrics::IOpacityAnimation> { template <typename D> using type = consume_Windows_UI_Core_AnimationMetrics_IOpacityAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Core_AnimationMetrics_IPropertyAnimation
{
    Windows::UI::Core::AnimationMetrics::PropertyAnimationType Type() const;
    Windows::Foundation::TimeSpan Delay() const;
    Windows::Foundation::TimeSpan Duration() const;
    Windows::Foundation::Point Control1() const;
    Windows::Foundation::Point Control2() const;
};
template <> struct consume<Windows::UI::Core::AnimationMetrics::IPropertyAnimation> { template <typename D> using type = consume_Windows_UI_Core_AnimationMetrics_IPropertyAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Core_AnimationMetrics_IScaleAnimation
{
    Windows::Foundation::IReference<float> InitialScaleX() const;
    Windows::Foundation::IReference<float> InitialScaleY() const;
    float FinalScaleX() const;
    float FinalScaleY() const;
    Windows::Foundation::Point NormalizedOrigin() const;
};
template <> struct consume<Windows::UI::Core::AnimationMetrics::IScaleAnimation> { template <typename D> using type = consume_Windows_UI_Core_AnimationMetrics_IScaleAnimation<D>; };

template <> struct abi<Windows::UI::Core::AnimationMetrics::IAnimationDescription>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Animations(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StaggerDelay(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_StaggerDelayFactor(float* value) = 0;
    virtual HRESULT __stdcall get_DelayLimit(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_ZOrder(int32_t* value) = 0;
};};

template <> struct abi<Windows::UI::Core::AnimationMetrics::IAnimationDescriptionFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(abi_t<Windows::UI::Core::AnimationMetrics::AnimationEffect> effect, abi_t<Windows::UI::Core::AnimationMetrics::AnimationEffectTarget> target, ::IUnknown** animation) = 0;
};};

template <> struct abi<Windows::UI::Core::AnimationMetrics::IOpacityAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InitialOpacity(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FinalOpacity(float* value) = 0;
};};

template <> struct abi<Windows::UI::Core::AnimationMetrics::IPropertyAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Type(abi_t<Windows::UI::Core::AnimationMetrics::PropertyAnimationType>* value) = 0;
    virtual HRESULT __stdcall get_Delay(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Duration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Control1(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall get_Control2(abi_t<Windows::Foundation::Point>* value) = 0;
};};

template <> struct abi<Windows::UI::Core::AnimationMetrics::IScaleAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InitialScaleX(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_InitialScaleY(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FinalScaleX(float* value) = 0;
    virtual HRESULT __stdcall get_FinalScaleY(float* value) = 0;
    virtual HRESULT __stdcall get_NormalizedOrigin(abi_t<Windows::Foundation::Point>* value) = 0;
};};

}
