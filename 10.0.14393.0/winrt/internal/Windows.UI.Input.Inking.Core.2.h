// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Input.Inking.Core.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_b83fbe98_882a_5b69_bd1c_c66690707fef
#define WINRT_GENERIC_b83fbe98_882a_5b69_bd1c_c66690707fef
template <> struct __declspec(uuid("b83fbe98-882a-5b69-bd1c-c66690707fef")) __declspec(novtable) TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> : impl_TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_10c47202_47ab_58bc_91de_d5000f1a74c0
#define WINRT_GENERIC_10c47202_47ab_58bc_91de_d5000f1a74c0
template <> struct __declspec(uuid("10c47202-47ab-58bc-91de-d5000f1a74c0")) __declspec(novtable) IVector<Windows::UI::Input::Inking::InkPoint> : impl_IVector<Windows::UI::Input::Inking::InkPoint> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_67ff75e8_02a4_5254_a965_0b254c7d0788
#define WINRT_GENERIC_67ff75e8_02a4_5254_a965_0b254c7d0788
template <> struct __declspec(uuid("67ff75e8-02a4-5254-a965-0b254c7d0788")) __declspec(novtable) TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> : impl_TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_d1ac414b_c87d_540f_8ab1_4e0d09d9d283
#define WINRT_GENERIC_d1ac414b_c87d_540f_8ab1_4e0d09d9d283
template <> struct __declspec(uuid("d1ac414b-c87d-540f-8ab1-4e0d09d9d283")) __declspec(novtable) IVectorView<Windows::UI::Input::Inking::InkPoint> : impl_IVectorView<Windows::UI::Input::Inking::InkPoint> {};
#endif

#ifndef WINRT_GENERIC_0630c0ef_a4e2_5af6_b2e9_8e042e294e17
#define WINRT_GENERIC_0630c0ef_a4e2_5af6_b2e9_8e042e294e17
template <> struct __declspec(uuid("0630c0ef-a4e2-5af6-b2e9-8e042e294e17")) __declspec(novtable) IIterable<Windows::UI::Input::Inking::InkPoint> : impl_IIterable<Windows::UI::Input::Inking::InkPoint> {};
#endif

#ifndef WINRT_GENERIC_47415452_db79_567e_84d5_e9912330f944
#define WINRT_GENERIC_47415452_db79_567e_84d5_e9912330f944
template <> struct __declspec(uuid("47415452-db79-567e-84d5-e9912330f944")) __declspec(novtable) IIterator<Windows::UI::Input::Inking::InkPoint> : impl_IIterator<Windows::UI::Input::Inking::InkPoint> {};
#endif


}

namespace Windows::UI::Input::Inking::Core {

template <typename D>
struct WINRT_EBO impl_ICoreInkIndependentInputSource
{
    event_token PointerEntering(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const;
    using PointerEntering_revoker = event_revoker<ICoreInkIndependentInputSource>;
    PointerEntering_revoker PointerEntering(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const;
    void PointerEntering(event_token cookie) const;
    event_token PointerHovering(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const;
    using PointerHovering_revoker = event_revoker<ICoreInkIndependentInputSource>;
    PointerHovering_revoker PointerHovering(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const;
    void PointerHovering(event_token cookie) const;
    event_token PointerExiting(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const;
    using PointerExiting_revoker = event_revoker<ICoreInkIndependentInputSource>;
    PointerExiting_revoker PointerExiting(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const;
    void PointerExiting(event_token cookie) const;
    event_token PointerPressing(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const;
    using PointerPressing_revoker = event_revoker<ICoreInkIndependentInputSource>;
    PointerPressing_revoker PointerPressing(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const;
    void PointerPressing(event_token cookie) const;
    event_token PointerMoving(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const;
    using PointerMoving_revoker = event_revoker<ICoreInkIndependentInputSource>;
    PointerMoving_revoker PointerMoving(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const;
    void PointerMoving(event_token cookie) const;
    event_token PointerReleasing(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const;
    using PointerReleasing_revoker = event_revoker<ICoreInkIndependentInputSource>;
    PointerReleasing_revoker PointerReleasing(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const;
    void PointerReleasing(event_token cookie) const;
    event_token PointerLost(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const;
    using PointerLost_revoker = event_revoker<ICoreInkIndependentInputSource>;
    PointerLost_revoker PointerLost(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const;
    void PointerLost(event_token cookie) const;
    Windows::UI::Input::Inking::InkPresenter InkPresenter() const;
};

template <typename D>
struct WINRT_EBO impl_ICoreInkIndependentInputSourceStatics
{
    Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource Create(const Windows::UI::Input::Inking::InkPresenter & inkPresenter) const;
};

template <typename D>
struct WINRT_EBO impl_ICoreWetStrokeUpdateEventArgs
{
    Windows::Foundation::Collections::IVector<Windows::UI::Input::Inking::InkPoint> NewInkPoints() const;
    uint32_t PointerId() const;
    Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition Disposition() const;
    void Disposition(Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition value) const;
};

template <typename D>
struct WINRT_EBO impl_ICoreWetStrokeUpdateSource
{
    event_token WetStrokeStarting(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> & handler) const;
    using WetStrokeStarting_revoker = event_revoker<ICoreWetStrokeUpdateSource>;
    WetStrokeStarting_revoker WetStrokeStarting(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> & handler) const;
    void WetStrokeStarting(event_token cookie) const;
    event_token WetStrokeContinuing(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> & handler) const;
    using WetStrokeContinuing_revoker = event_revoker<ICoreWetStrokeUpdateSource>;
    WetStrokeContinuing_revoker WetStrokeContinuing(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> & handler) const;
    void WetStrokeContinuing(event_token cookie) const;
    event_token WetStrokeStopping(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> & handler) const;
    using WetStrokeStopping_revoker = event_revoker<ICoreWetStrokeUpdateSource>;
    WetStrokeStopping_revoker WetStrokeStopping(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> & handler) const;
    void WetStrokeStopping(event_token cookie) const;
    event_token WetStrokeCompleted(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> & handler) const;
    using WetStrokeCompleted_revoker = event_revoker<ICoreWetStrokeUpdateSource>;
    WetStrokeCompleted_revoker WetStrokeCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> & handler) const;
    void WetStrokeCompleted(event_token cookie) const;
    event_token WetStrokeCanceled(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> & handler) const;
    using WetStrokeCanceled_revoker = event_revoker<ICoreWetStrokeUpdateSource>;
    WetStrokeCanceled_revoker WetStrokeCanceled(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> & handler) const;
    void WetStrokeCanceled(event_token cookie) const;
    Windows::UI::Input::Inking::InkPresenter InkPresenter() const;
};

template <typename D>
struct WINRT_EBO impl_ICoreWetStrokeUpdateSourceStatics
{
    Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource Create(const Windows::UI::Input::Inking::InkPresenter & inkPresenter) const;
};

struct ICoreInkIndependentInputSource :
    Windows::IInspectable,
    impl::consume<ICoreInkIndependentInputSource>
{
    ICoreInkIndependentInputSource(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICoreInkIndependentInputSource>(m_ptr); }
};

struct ICoreInkIndependentInputSourceStatics :
    Windows::IInspectable,
    impl::consume<ICoreInkIndependentInputSourceStatics>
{
    ICoreInkIndependentInputSourceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICoreInkIndependentInputSourceStatics>(m_ptr); }
};

struct ICoreWetStrokeUpdateEventArgs :
    Windows::IInspectable,
    impl::consume<ICoreWetStrokeUpdateEventArgs>
{
    ICoreWetStrokeUpdateEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICoreWetStrokeUpdateEventArgs>(m_ptr); }
};

struct ICoreWetStrokeUpdateSource :
    Windows::IInspectable,
    impl::consume<ICoreWetStrokeUpdateSource>
{
    ICoreWetStrokeUpdateSource(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICoreWetStrokeUpdateSource>(m_ptr); }
};

struct ICoreWetStrokeUpdateSourceStatics :
    Windows::IInspectable,
    impl::consume<ICoreWetStrokeUpdateSourceStatics>
{
    ICoreWetStrokeUpdateSourceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICoreWetStrokeUpdateSourceStatics>(m_ptr); }
};

}

}
