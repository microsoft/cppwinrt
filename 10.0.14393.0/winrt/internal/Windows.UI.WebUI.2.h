// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.WebUI.1.h"
#include "Windows.ApplicationModel.2.h"
#include "Windows.ApplicationModel.Activation.2.h"
#include "Windows.ApplicationModel.Background.2.h"
#include "Windows.Foundation.2.h"
#include "Windows.Graphics.Printing.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::WebUI {

template <typename D>
struct WINRT_EBO impl_IActivatedDeferral
{
    void Complete() const;
};

template <typename D>
struct WINRT_EBO impl_IActivatedEventArgsDeferral
{
    Windows::UI::WebUI::ActivatedOperation ActivatedOperation() const;
};

template <typename D>
struct WINRT_EBO impl_IActivatedOperation
{
    Windows::UI::WebUI::ActivatedDeferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IHtmlPrintDocumentSource
{
    Windows::UI::WebUI::PrintContent Content() const;
    void Content(Windows::UI::WebUI::PrintContent value) const;
    float LeftMargin() const;
    void LeftMargin(float value) const;
    float TopMargin() const;
    void TopMargin(float value) const;
    float RightMargin() const;
    void RightMargin(float value) const;
    float BottomMargin() const;
    void BottomMargin(float value) const;
    bool EnableHeaderFooter() const;
    void EnableHeaderFooter(bool value) const;
    bool ShrinkToFit() const;
    void ShrinkToFit(bool value) const;
    float PercentScale() const;
    void PercentScale(float scalePercent) const;
    hstring PageRange() const;
    bool TrySetPageRange(hstring_ref strPageRange) const;
};

template <typename D>
struct WINRT_EBO impl_IWebUIActivationStatics
{
    event_token Activated(const Windows::UI::WebUI::ActivatedEventHandler & handler) const;
    using Activated_revoker = event_revoker<IWebUIActivationStatics>;
    Activated_revoker Activated(auto_revoke_t, const Windows::UI::WebUI::ActivatedEventHandler & handler) const;
    void Activated(event_token token) const;
    event_token Suspending(const Windows::UI::WebUI::SuspendingEventHandler & handler) const;
    using Suspending_revoker = event_revoker<IWebUIActivationStatics>;
    Suspending_revoker Suspending(auto_revoke_t, const Windows::UI::WebUI::SuspendingEventHandler & handler) const;
    void Suspending(event_token token) const;
    event_token Resuming(const Windows::UI::WebUI::ResumingEventHandler & handler) const;
    using Resuming_revoker = event_revoker<IWebUIActivationStatics>;
    Resuming_revoker Resuming(auto_revoke_t, const Windows::UI::WebUI::ResumingEventHandler & handler) const;
    void Resuming(event_token token) const;
    event_token Navigated(const Windows::UI::WebUI::NavigatedEventHandler & handler) const;
    using Navigated_revoker = event_revoker<IWebUIActivationStatics>;
    Navigated_revoker Navigated(auto_revoke_t, const Windows::UI::WebUI::NavigatedEventHandler & handler) const;
    void Navigated(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IWebUIActivationStatics2
{
    event_token LeavingBackground(const Windows::UI::WebUI::LeavingBackgroundEventHandler & handler) const;
    using LeavingBackground_revoker = event_revoker<IWebUIActivationStatics2>;
    LeavingBackground_revoker LeavingBackground(auto_revoke_t, const Windows::UI::WebUI::LeavingBackgroundEventHandler & handler) const;
    void LeavingBackground(event_token token) const;
    event_token EnteredBackground(const Windows::UI::WebUI::EnteredBackgroundEventHandler & handler) const;
    using EnteredBackground_revoker = event_revoker<IWebUIActivationStatics2>;
    EnteredBackground_revoker EnteredBackground(auto_revoke_t, const Windows::UI::WebUI::EnteredBackgroundEventHandler & handler) const;
    void EnteredBackground(event_token token) const;
    void EnablePrelaunch(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_IWebUIBackgroundTaskInstance
{
    bool Succeeded() const;
    void Succeeded(bool succeeded) const;
};

template <typename D>
struct WINRT_EBO impl_IWebUIBackgroundTaskInstanceStatics
{
    Windows::UI::WebUI::IWebUIBackgroundTaskInstance Current() const;
};

template <typename D>
struct WINRT_EBO impl_IWebUINavigatedDeferral
{
    void Complete() const;
};

template <typename D>
struct WINRT_EBO impl_IWebUINavigatedEventArgs
{
    Windows::UI::WebUI::WebUINavigatedOperation NavigatedOperation() const;
};

template <typename D>
struct WINRT_EBO impl_IWebUINavigatedOperation
{
    Windows::UI::WebUI::WebUINavigatedDeferral GetDeferral() const;
};

struct ActivatedEventHandler : Windows::IUnknown
{
    ActivatedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ActivatedEventHandler>(m_ptr); }
    template <typename L> ActivatedEventHandler(L lambda);
    template <typename F> ActivatedEventHandler (F * function);
    template <typename O, typename M> ActivatedEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::ApplicationModel::Activation::IActivatedEventArgs & eventArgs) const;
};

struct EnteredBackgroundEventHandler : Windows::IUnknown
{
    EnteredBackgroundEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<EnteredBackgroundEventHandler>(m_ptr); }
    template <typename L> EnteredBackgroundEventHandler(L lambda);
    template <typename F> EnteredBackgroundEventHandler (F * function);
    template <typename O, typename M> EnteredBackgroundEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::ApplicationModel::IEnteredBackgroundEventArgs & e) const;
};

struct LeavingBackgroundEventHandler : Windows::IUnknown
{
    LeavingBackgroundEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<LeavingBackgroundEventHandler>(m_ptr); }
    template <typename L> LeavingBackgroundEventHandler(L lambda);
    template <typename F> LeavingBackgroundEventHandler (F * function);
    template <typename O, typename M> LeavingBackgroundEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::ApplicationModel::ILeavingBackgroundEventArgs & e) const;
};

struct NavigatedEventHandler : Windows::IUnknown
{
    NavigatedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<NavigatedEventHandler>(m_ptr); }
    template <typename L> NavigatedEventHandler(L lambda);
    template <typename F> NavigatedEventHandler (F * function);
    template <typename O, typename M> NavigatedEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::WebUI::IWebUINavigatedEventArgs & e) const;
};

struct ResumingEventHandler : Windows::IUnknown
{
    ResumingEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ResumingEventHandler>(m_ptr); }
    template <typename L> ResumingEventHandler(L lambda);
    template <typename F> ResumingEventHandler (F * function);
    template <typename O, typename M> ResumingEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender) const;
};

struct SuspendingEventHandler : Windows::IUnknown
{
    SuspendingEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<SuspendingEventHandler>(m_ptr); }
    template <typename L> SuspendingEventHandler(L lambda);
    template <typename F> SuspendingEventHandler (F * function);
    template <typename O, typename M> SuspendingEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::ApplicationModel::ISuspendingEventArgs & e) const;
};

struct IActivatedDeferral :
    Windows::IInspectable,
    impl::consume<IActivatedDeferral>
{
    IActivatedDeferral(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IActivatedDeferral>(m_ptr); }
};

struct IActivatedEventArgsDeferral :
    Windows::IInspectable,
    impl::consume<IActivatedEventArgsDeferral>
{
    IActivatedEventArgsDeferral(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IActivatedEventArgsDeferral>(m_ptr); }
};

struct IActivatedOperation :
    Windows::IInspectable,
    impl::consume<IActivatedOperation>
{
    IActivatedOperation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IActivatedOperation>(m_ptr); }
};

struct IHtmlPrintDocumentSource :
    Windows::IInspectable,
    impl::consume<IHtmlPrintDocumentSource>,
    impl::require<IHtmlPrintDocumentSource, Windows::Graphics::Printing::IPrintDocumentSource>
{
    IHtmlPrintDocumentSource(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHtmlPrintDocumentSource>(m_ptr); }
};

struct IWebUIActivationStatics :
    Windows::IInspectable,
    impl::consume<IWebUIActivationStatics>
{
    IWebUIActivationStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebUIActivationStatics>(m_ptr); }
};

struct IWebUIActivationStatics2 :
    Windows::IInspectable,
    impl::consume<IWebUIActivationStatics2>
{
    IWebUIActivationStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebUIActivationStatics2>(m_ptr); }
};

struct IWebUIBackgroundTaskInstance :
    Windows::IInspectable,
    impl::consume<IWebUIBackgroundTaskInstance>
{
    IWebUIBackgroundTaskInstance(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebUIBackgroundTaskInstance>(m_ptr); }
};

struct IWebUIBackgroundTaskInstanceStatics :
    Windows::IInspectable,
    impl::consume<IWebUIBackgroundTaskInstanceStatics>
{
    IWebUIBackgroundTaskInstanceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebUIBackgroundTaskInstanceStatics>(m_ptr); }
};

struct IWebUINavigatedDeferral :
    Windows::IInspectable,
    impl::consume<IWebUINavigatedDeferral>
{
    IWebUINavigatedDeferral(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebUINavigatedDeferral>(m_ptr); }
};

struct IWebUINavigatedEventArgs :
    Windows::IInspectable,
    impl::consume<IWebUINavigatedEventArgs>
{
    IWebUINavigatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebUINavigatedEventArgs>(m_ptr); }
};

struct IWebUINavigatedOperation :
    Windows::IInspectable,
    impl::consume<IWebUINavigatedOperation>
{
    IWebUINavigatedOperation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebUINavigatedOperation>(m_ptr); }
};

}

}
