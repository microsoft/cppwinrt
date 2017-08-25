// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Core {

struct PointerEventArgs;

}

WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking {

struct InkPoint;
struct InkPresenter;

}

WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking::Core {

enum class CoreWetStrokeDisposition
{
    Inking = 0,
    Completed = 1,
    Canceled = 2,
};

struct ICoreInkIndependentInputSource;
struct ICoreInkIndependentInputSourceStatics;
struct ICoreWetStrokeUpdateEventArgs;
struct ICoreWetStrokeUpdateSource;
struct ICoreWetStrokeUpdateSourceStatics;
struct CoreInkIndependentInputSource;
struct CoreWetStrokeUpdateEventArgs;
struct CoreWetStrokeUpdateSource;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition>{ using type = enum_category; };
template <> struct name<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.ICoreInkIndependentInputSource" }; };
template <> struct name<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.ICoreInkIndependentInputSourceStatics" }; };
template <> struct name<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateEventArgs" }; };
template <> struct name<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateSource" }; };
template <> struct name<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateSourceStatics" }; };
template <> struct name<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.CoreInkIndependentInputSource" }; };
template <> struct name<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateEventArgs" }; };
template <> struct name<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateSource" }; };
template <> struct name<Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.CoreWetStrokeDisposition" }; };
template <> struct guid<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>{ static constexpr GUID value{ 0x39B38DA9,0x7639,0x4499,{ 0xA5,0xB5,0x19,0x1D,0x00,0xE3,0x5B,0x16 } }; };
template <> struct guid<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics>{ static constexpr GUID value{ 0x73E6011B,0x80C0,0x4DFB,{ 0x9B,0x66,0x10,0xBA,0x7F,0x3F,0x9C,0x84 } }; };
template <> struct guid<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs>{ static constexpr GUID value{ 0xFB07D14C,0x3380,0x457A,{ 0xA9,0x87,0x99,0x13,0x57,0x89,0x6C,0x1B } }; };
template <> struct guid<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>{ static constexpr GUID value{ 0x1F718E22,0xEE52,0x4E00,{ 0x82,0x09,0x4C,0x3E,0x5B,0x21,0xA3,0xCC } }; };
template <> struct guid<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics>{ static constexpr GUID value{ 0x3DAD9CBA,0x1D3D,0x46AE,{ 0xAB,0x9D,0x86,0x47,0x48,0x6C,0x6F,0x90 } }; };
template <> struct default_interface<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource>{ using type = Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource; };
template <> struct default_interface<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs>{ using type = Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs; };
template <> struct default_interface<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource>{ using type = Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource; };

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
    Windows::UI::Input::Inking::InkPresenter InkPresenter() const;
};
template <> struct consume<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> { template <typename D> using type = consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSourceStatics
{
    Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter) const;
};
template <> struct consume<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics> { template <typename D> using type = consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSourceStatics<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateEventArgs
{
    Windows::Foundation::Collections::IVector<Windows::UI::Input::Inking::InkPoint> NewInkPoints() const;
    uint32_t PointerId() const;
    Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition Disposition() const;
    void Disposition(Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition const& value) const;
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
    Windows::UI::Input::Inking::InkPresenter InkPresenter() const;
};
template <> struct consume<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource> { template <typename D> using type = consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSourceStatics
{
    Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter) const;
};
template <> struct consume<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics> { template <typename D> using type = consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSourceStatics<D>; };

template <> struct abi<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_PointerEntering(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerEntering(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerHovering(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerHovering(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerExiting(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerExiting(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerPressing(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerPressing(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerMoving(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerMoving(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerReleasing(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerReleasing(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerLost(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerLost(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall get_InkPresenter(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* inkPresenter, ::IUnknown** inkIndependentInputSource) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NewInkPoints(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PointerId(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Disposition(abi_t<Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition>* value) = 0;
    virtual HRESULT __stdcall put_Disposition(abi_t<Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition> value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_WetStrokeStarting(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_WetStrokeStarting(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_WetStrokeContinuing(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_WetStrokeContinuing(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_WetStrokeStopping(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_WetStrokeStopping(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_WetStrokeCompleted(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_WetStrokeCompleted(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_WetStrokeCanceled(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_WetStrokeCanceled(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall get_InkPresenter(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* inkPresenter, ::IUnknown** WetStrokeUpdateSource) = 0;
};};

}
