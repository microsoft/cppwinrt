// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Composition {

struct ContainerVisual;

}

WINRT_EXPORT namespace winrt::Windows::UI::Core {

struct PointerEventArgs;

}

WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking {

struct InkDrawingAttributes;
struct InkPoint;
struct InkPresenter;
struct InkStroke;

}

WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking::Core {

enum class CoreWetStrokeDisposition : int32_t
{
    Inking = 0,
    Completed = 1,
    Canceled = 2,
};

struct ICoreIncrementalInkStroke;
struct ICoreIncrementalInkStrokeFactory;
struct ICoreInkIndependentInputSource;
struct ICoreInkIndependentInputSourceStatics;
struct ICoreInkPresenterHost;
struct ICoreWetStrokeUpdateEventArgs;
struct ICoreWetStrokeUpdateSource;
struct ICoreWetStrokeUpdateSourceStatics;
struct CoreIncrementalInkStroke;
struct CoreInkIndependentInputSource;
struct CoreInkPresenterHost;
struct CoreWetStrokeUpdateEventArgs;
struct CoreWetStrokeUpdateSource;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Core::ICoreIncrementalInkStrokeFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Core::ICoreInkPresenterHost>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Core::CoreIncrementalInkStroke>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::Core::CoreInkPresenterHost>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition>{ using type = enum_category; };
template <> struct name<Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.ICoreIncrementalInkStroke" }; };
template <> struct name<Windows::UI::Input::Inking::Core::ICoreIncrementalInkStrokeFactory>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.ICoreIncrementalInkStrokeFactory" }; };
template <> struct name<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.ICoreInkIndependentInputSource" }; };
template <> struct name<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.ICoreInkIndependentInputSourceStatics" }; };
template <> struct name<Windows::UI::Input::Inking::Core::ICoreInkPresenterHost>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.ICoreInkPresenterHost" }; };
template <> struct name<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateEventArgs" }; };
template <> struct name<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateSource" }; };
template <> struct name<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateSourceStatics" }; };
template <> struct name<Windows::UI::Input::Inking::Core::CoreIncrementalInkStroke>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.CoreIncrementalInkStroke" }; };
template <> struct name<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.CoreInkIndependentInputSource" }; };
template <> struct name<Windows::UI::Input::Inking::Core::CoreInkPresenterHost>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.CoreInkPresenterHost" }; };
template <> struct name<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateEventArgs" }; };
template <> struct name<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateSource" }; };
template <> struct name<Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.CoreWetStrokeDisposition" }; };
template <> struct guid<Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke>{ static constexpr GUID value{ 0xFDA015D3,0x9D66,0x4F7D,{ 0xA5,0x7F,0xCC,0x70,0xB9,0xCF,0xAA,0x76 } }; };
template <> struct guid<Windows::UI::Input::Inking::Core::ICoreIncrementalInkStrokeFactory>{ static constexpr GUID value{ 0xD7C59F46,0x8DA8,0x4F70,{ 0x97,0x51,0xE5,0x3B,0xB6,0xDF,0x45,0x96 } }; };
template <> struct guid<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>{ static constexpr GUID value{ 0x39B38DA9,0x7639,0x4499,{ 0xA5,0xB5,0x19,0x1D,0x00,0xE3,0x5B,0x16 } }; };
template <> struct guid<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics>{ static constexpr GUID value{ 0x73E6011B,0x80C0,0x4DFB,{ 0x9B,0x66,0x10,0xBA,0x7F,0x3F,0x9C,0x84 } }; };
template <> struct guid<Windows::UI::Input::Inking::Core::ICoreInkPresenterHost>{ static constexpr GUID value{ 0x396E89E6,0x7D55,0x4617,{ 0x9E,0x58,0x68,0xC7,0x0C,0x91,0x69,0xB9 } }; };
template <> struct guid<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs>{ static constexpr GUID value{ 0xFB07D14C,0x3380,0x457A,{ 0xA9,0x87,0x99,0x13,0x57,0x89,0x6C,0x1B } }; };
template <> struct guid<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>{ static constexpr GUID value{ 0x1F718E22,0xEE52,0x4E00,{ 0x82,0x09,0x4C,0x3E,0x5B,0x21,0xA3,0xCC } }; };
template <> struct guid<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics>{ static constexpr GUID value{ 0x3DAD9CBA,0x1D3D,0x46AE,{ 0xAB,0x9D,0x86,0x47,0x48,0x6C,0x6F,0x90 } }; };
template <> struct default_interface<Windows::UI::Input::Inking::Core::CoreIncrementalInkStroke>{ using type = Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke; };
template <> struct default_interface<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource>{ using type = Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource; };
template <> struct default_interface<Windows::UI::Input::Inking::Core::CoreInkPresenterHost>{ using type = Windows::UI::Input::Inking::Core::ICoreInkPresenterHost; };
template <> struct default_interface<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs>{ using type = Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs; };
template <> struct default_interface<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource>{ using type = Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource; };

template <typename D>
struct consume_Windows_UI_Input_Inking_Core_ICoreIncrementalInkStroke
{
    Windows::Foundation::Rect AppendInkPoints(param::iterable<Windows::UI::Input::Inking::InkPoint> const& inkPoints) const;
    Windows::UI::Input::Inking::InkStroke CreateInkStroke() const;
    Windows::UI::Input::Inking::InkDrawingAttributes DrawingAttributes() const noexcept;
    Windows::Foundation::Numerics::float3x2 PointTransform() const noexcept;
    Windows::Foundation::Rect BoundingRect() const noexcept;
};
template <> struct consume<Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke> { template <typename D> using type = consume_Windows_UI_Input_Inking_Core_ICoreIncrementalInkStroke<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_Core_ICoreIncrementalInkStrokeFactory
{
    Windows::UI::Input::Inking::Core::CoreIncrementalInkStroke Create(Windows::UI::Input::Inking::InkDrawingAttributes const& drawingAttributes, Windows::Foundation::Numerics::float3x2 const& pointTransform) const;
};
template <> struct consume<Windows::UI::Input::Inking::Core::ICoreIncrementalInkStrokeFactory> { template <typename D> using type = consume_Windows_UI_Input_Inking_Core_ICoreIncrementalInkStrokeFactory<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource
{
    event_token PointerEntering(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerEntering_revoker = event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>;
    PointerEntering_revoker PointerEntering(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerEntering(event_token const& cookie) const;
    event_token PointerHovering(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerHovering_revoker = event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>;
    PointerHovering_revoker PointerHovering(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerHovering(event_token const& cookie) const;
    event_token PointerExiting(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerExiting_revoker = event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>;
    PointerExiting_revoker PointerExiting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerExiting(event_token const& cookie) const;
    event_token PointerPressing(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerPressing_revoker = event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>;
    PointerPressing_revoker PointerPressing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerPressing(event_token const& cookie) const;
    event_token PointerMoving(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerMoving_revoker = event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>;
    PointerMoving_revoker PointerMoving(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerMoving(event_token const& cookie) const;
    event_token PointerReleasing(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerReleasing_revoker = event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>;
    PointerReleasing_revoker PointerReleasing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerReleasing(event_token const& cookie) const;
    event_token PointerLost(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerLost_revoker = event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>;
    PointerLost_revoker PointerLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerLost(event_token const& cookie) const;
    Windows::UI::Input::Inking::InkPresenter InkPresenter() const noexcept;
};
template <> struct consume<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> { template <typename D> using type = consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSourceStatics
{
    Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter) const;
};
template <> struct consume<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics> { template <typename D> using type = consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSourceStatics<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_Core_ICoreInkPresenterHost
{
    Windows::UI::Input::Inking::InkPresenter InkPresenter() const noexcept;
    Windows::UI::Composition::ContainerVisual RootVisual() const noexcept;
    void RootVisual(Windows::UI::Composition::ContainerVisual const& value) const noexcept;
};
template <> struct consume<Windows::UI::Input::Inking::Core::ICoreInkPresenterHost> { template <typename D> using type = consume_Windows_UI_Input_Inking_Core_ICoreInkPresenterHost<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateEventArgs
{
    Windows::Foundation::Collections::IVector<Windows::UI::Input::Inking::InkPoint> NewInkPoints() const noexcept;
    uint32_t PointerId() const noexcept;
    Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition Disposition() const noexcept;
    void Disposition(Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition const& value) const noexcept;
};
template <> struct consume<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs> { template <typename D> using type = consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource
{
    event_token WetStrokeStarting(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const;
    using WetStrokeStarting_revoker = event_revoker<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>;
    WetStrokeStarting_revoker WetStrokeStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const;
    void WetStrokeStarting(event_token const& cookie) const;
    event_token WetStrokeContinuing(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const;
    using WetStrokeContinuing_revoker = event_revoker<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>;
    WetStrokeContinuing_revoker WetStrokeContinuing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const;
    void WetStrokeContinuing(event_token const& cookie) const;
    event_token WetStrokeStopping(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const;
    using WetStrokeStopping_revoker = event_revoker<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>;
    WetStrokeStopping_revoker WetStrokeStopping(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const;
    void WetStrokeStopping(event_token const& cookie) const;
    event_token WetStrokeCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const;
    using WetStrokeCompleted_revoker = event_revoker<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>;
    WetStrokeCompleted_revoker WetStrokeCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const;
    void WetStrokeCompleted(event_token const& cookie) const;
    event_token WetStrokeCanceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const;
    using WetStrokeCanceled_revoker = event_revoker<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>;
    WetStrokeCanceled_revoker WetStrokeCanceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const;
    void WetStrokeCanceled(event_token const& cookie) const;
    Windows::UI::Input::Inking::InkPresenter InkPresenter() const noexcept;
};
template <> struct consume<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource> { template <typename D> using type = consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSourceStatics
{
    Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter) const;
};
template <> struct consume<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics> { template <typename D> using type = consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSourceStatics<D>; };

template <> struct abi<Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AppendInkPoints(::IUnknown* inkPoints, Windows::Foundation::Rect* result) = 0;
    virtual HRESULT __stdcall CreateInkStroke(::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_DrawingAttributes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PointTransform(Windows::Foundation::Numerics::float3x2* value) = 0;
    virtual HRESULT __stdcall get_BoundingRect(Windows::Foundation::Rect* value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::Core::ICoreIncrementalInkStrokeFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* drawingAttributes, Windows::Foundation::Numerics::float3x2 pointTransform, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_PointerEntering(::IUnknown* handler, event_token* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerEntering(event_token cookie) = 0;
    virtual HRESULT __stdcall add_PointerHovering(::IUnknown* handler, event_token* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerHovering(event_token cookie) = 0;
    virtual HRESULT __stdcall add_PointerExiting(::IUnknown* handler, event_token* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerExiting(event_token cookie) = 0;
    virtual HRESULT __stdcall add_PointerPressing(::IUnknown* handler, event_token* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerPressing(event_token cookie) = 0;
    virtual HRESULT __stdcall add_PointerMoving(::IUnknown* handler, event_token* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerMoving(event_token cookie) = 0;
    virtual HRESULT __stdcall add_PointerReleasing(::IUnknown* handler, event_token* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerReleasing(event_token cookie) = 0;
    virtual HRESULT __stdcall add_PointerLost(::IUnknown* handler, event_token* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerLost(event_token cookie) = 0;
    virtual HRESULT __stdcall get_InkPresenter(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* inkPresenter, ::IUnknown** inkIndependentInputSource) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::Core::ICoreInkPresenterHost>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InkPresenter(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RootVisual(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_RootVisual(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NewInkPoints(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PointerId(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Disposition(Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition* value) = 0;
    virtual HRESULT __stdcall put_Disposition(Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_WetStrokeStarting(::IUnknown* handler, event_token* cookie) = 0;
    virtual HRESULT __stdcall remove_WetStrokeStarting(event_token cookie) = 0;
    virtual HRESULT __stdcall add_WetStrokeContinuing(::IUnknown* handler, event_token* cookie) = 0;
    virtual HRESULT __stdcall remove_WetStrokeContinuing(event_token cookie) = 0;
    virtual HRESULT __stdcall add_WetStrokeStopping(::IUnknown* handler, event_token* cookie) = 0;
    virtual HRESULT __stdcall remove_WetStrokeStopping(event_token cookie) = 0;
    virtual HRESULT __stdcall add_WetStrokeCompleted(::IUnknown* handler, event_token* cookie) = 0;
    virtual HRESULT __stdcall remove_WetStrokeCompleted(event_token cookie) = 0;
    virtual HRESULT __stdcall add_WetStrokeCanceled(::IUnknown* handler, event_token* cookie) = 0;
    virtual HRESULT __stdcall remove_WetStrokeCanceled(event_token cookie) = 0;
    virtual HRESULT __stdcall get_InkPresenter(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* inkPresenter, ::IUnknown** WetStrokeUpdateSource) = 0;
};};

}
