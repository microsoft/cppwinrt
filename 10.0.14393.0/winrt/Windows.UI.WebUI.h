// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.ApplicationModel.Activation.3.h"
#include "internal/Windows.ApplicationModel.3.h"
#include "internal/Windows.UI.WebUI.3.h"
#include "Windows.UI.h"
#include "Windows.ApplicationModel.h"
#include "Windows.ApplicationModel.Activation.h"
#include "Windows.ApplicationModel.Background.h"
#include "Windows.Foundation.h"
#include "Windows.Graphics.Printing.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::WebUI {

template <typename L> ActivatedEventHandler::ActivatedEventHandler(L lambda) :
    ActivatedEventHandler(impl::make_delegate<impl_ActivatedEventHandler<L>, ActivatedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> ActivatedEventHandler::ActivatedEventHandler(F * function) :
    ActivatedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> ActivatedEventHandler::ActivatedEventHandler(O * object, M method) :
    ActivatedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void ActivatedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::ApplicationModel::Activation::IActivatedEventArgs & eventArgs) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(eventArgs)));
}

template <typename L> EnteredBackgroundEventHandler::EnteredBackgroundEventHandler(L lambda) :
    EnteredBackgroundEventHandler(impl::make_delegate<impl_EnteredBackgroundEventHandler<L>, EnteredBackgroundEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> EnteredBackgroundEventHandler::EnteredBackgroundEventHandler(F * function) :
    EnteredBackgroundEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> EnteredBackgroundEventHandler::EnteredBackgroundEventHandler(O * object, M method) :
    EnteredBackgroundEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void EnteredBackgroundEventHandler::operator()(const Windows::IInspectable & sender, const Windows::ApplicationModel::IEnteredBackgroundEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> LeavingBackgroundEventHandler::LeavingBackgroundEventHandler(L lambda) :
    LeavingBackgroundEventHandler(impl::make_delegate<impl_LeavingBackgroundEventHandler<L>, LeavingBackgroundEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> LeavingBackgroundEventHandler::LeavingBackgroundEventHandler(F * function) :
    LeavingBackgroundEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> LeavingBackgroundEventHandler::LeavingBackgroundEventHandler(O * object, M method) :
    LeavingBackgroundEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void LeavingBackgroundEventHandler::operator()(const Windows::IInspectable & sender, const Windows::ApplicationModel::ILeavingBackgroundEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> NavigatedEventHandler::NavigatedEventHandler(L lambda) :
    NavigatedEventHandler(impl::make_delegate<impl_NavigatedEventHandler<L>, NavigatedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> NavigatedEventHandler::NavigatedEventHandler(F * function) :
    NavigatedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> NavigatedEventHandler::NavigatedEventHandler(O * object, M method) :
    NavigatedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void NavigatedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::WebUI::IWebUINavigatedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> ResumingEventHandler::ResumingEventHandler(L lambda) :
    ResumingEventHandler(impl::make_delegate<impl_ResumingEventHandler<L>, ResumingEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> ResumingEventHandler::ResumingEventHandler(F * function) :
    ResumingEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> ResumingEventHandler::ResumingEventHandler(O * object, M method) :
    ResumingEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void ResumingEventHandler::operator()(const Windows::IInspectable & sender) const
{
    check_hresult((*this)->abi_Invoke(get(sender)));
}

template <typename L> SuspendingEventHandler::SuspendingEventHandler(L lambda) :
    SuspendingEventHandler(impl::make_delegate<impl_SuspendingEventHandler<L>, SuspendingEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> SuspendingEventHandler::SuspendingEventHandler(F * function) :
    SuspendingEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> SuspendingEventHandler::SuspendingEventHandler(O * object, M method) :
    SuspendingEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void SuspendingEventHandler::operator()(const Windows::IInspectable & sender, const Windows::ApplicationModel::ISuspendingEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::UI::WebUI::IActivatedDeferral> : produce_base<D, Windows::UI::WebUI::IActivatedDeferral>
{
    HRESULT __stdcall abi_Complete() noexcept override
    {
        try
        {
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::WebUI::IActivatedEventArgsDeferral> : produce_base<D, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    HRESULT __stdcall get_ActivatedOperation(abi_arg_out<Windows::UI::WebUI::IActivatedOperation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ActivatedOperation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::WebUI::IActivatedOperation> : produce_base<D, Windows::UI::WebUI::IActivatedOperation>
{
    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::UI::WebUI::IActivatedDeferral> deferral) noexcept override
    {
        try
        {
            *deferral = detach(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *deferral = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::WebUI::IHtmlPrintDocumentSource> : produce_base<D, Windows::UI::WebUI::IHtmlPrintDocumentSource>
{
    HRESULT __stdcall get_Content(Windows::UI::WebUI::PrintContent * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Content(Windows::UI::WebUI::PrintContent value) noexcept override
    {
        try
        {
            this->shim().Content(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LeftMargin(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LeftMargin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LeftMargin(float value) noexcept override
    {
        try
        {
            this->shim().LeftMargin(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TopMargin(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TopMargin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TopMargin(float value) noexcept override
    {
        try
        {
            this->shim().TopMargin(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RightMargin(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RightMargin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RightMargin(float value) noexcept override
    {
        try
        {
            this->shim().RightMargin(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BottomMargin(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BottomMargin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BottomMargin(float value) noexcept override
    {
        try
        {
            this->shim().BottomMargin(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnableHeaderFooter(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnableHeaderFooter());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EnableHeaderFooter(bool value) noexcept override
    {
        try
        {
            this->shim().EnableHeaderFooter(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShrinkToFit(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ShrinkToFit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ShrinkToFit(bool value) noexcept override
    {
        try
        {
            this->shim().ShrinkToFit(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PercentScale(float * pScalePercent) noexcept override
    {
        try
        {
            *pScalePercent = detach(this->shim().PercentScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PercentScale(float scalePercent) noexcept override
    {
        try
        {
            this->shim().PercentScale(scalePercent);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PageRange(abi_arg_out<hstring> pstrPageRange) noexcept override
    {
        try
        {
            *pstrPageRange = detach(this->shim().PageRange());
            return S_OK;
        }
        catch (...)
        {
            *pstrPageRange = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetPageRange(abi_arg_in<hstring> strPageRange, bool * pfSuccess) noexcept override
    {
        try
        {
            *pfSuccess = detach(this->shim().TrySetPageRange(*reinterpret_cast<const hstring *>(&strPageRange)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::WebUI::IWebUIActivationStatics> : produce_base<D, Windows::UI::WebUI::IWebUIActivationStatics>
{
    HRESULT __stdcall add_Activated(abi_arg_in<Windows::UI::WebUI::ActivatedEventHandler> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Activated(*reinterpret_cast<const Windows::UI::WebUI::ActivatedEventHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Activated(event_token token) noexcept override
    {
        try
        {
            this->shim().Activated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Suspending(abi_arg_in<Windows::UI::WebUI::SuspendingEventHandler> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Suspending(*reinterpret_cast<const Windows::UI::WebUI::SuspendingEventHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Suspending(event_token token) noexcept override
    {
        try
        {
            this->shim().Suspending(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Resuming(abi_arg_in<Windows::UI::WebUI::ResumingEventHandler> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Resuming(*reinterpret_cast<const Windows::UI::WebUI::ResumingEventHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Resuming(event_token token) noexcept override
    {
        try
        {
            this->shim().Resuming(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Navigated(abi_arg_in<Windows::UI::WebUI::NavigatedEventHandler> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Navigated(*reinterpret_cast<const Windows::UI::WebUI::NavigatedEventHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Navigated(event_token token) noexcept override
    {
        try
        {
            this->shim().Navigated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::WebUI::IWebUIActivationStatics2> : produce_base<D, Windows::UI::WebUI::IWebUIActivationStatics2>
{
    HRESULT __stdcall add_LeavingBackground(abi_arg_in<Windows::UI::WebUI::LeavingBackgroundEventHandler> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().LeavingBackground(*reinterpret_cast<const Windows::UI::WebUI::LeavingBackgroundEventHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LeavingBackground(event_token token) noexcept override
    {
        try
        {
            this->shim().LeavingBackground(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnteredBackground(abi_arg_in<Windows::UI::WebUI::EnteredBackgroundEventHandler> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().EnteredBackground(*reinterpret_cast<const Windows::UI::WebUI::EnteredBackgroundEventHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnteredBackground(event_token token) noexcept override
    {
        try
        {
            this->shim().EnteredBackground(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EnablePrelaunch(bool value) noexcept override
    {
        try
        {
            this->shim().EnablePrelaunch(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::WebUI::IWebUIBackgroundTaskInstance> : produce_base<D, Windows::UI::WebUI::IWebUIBackgroundTaskInstance>
{
    HRESULT __stdcall get_Succeeded(bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().Succeeded());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Succeeded(bool succeeded) noexcept override
    {
        try
        {
            this->shim().Succeeded(succeeded);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::WebUI::IWebUIBackgroundTaskInstanceStatics> : produce_base<D, Windows::UI::WebUI::IWebUIBackgroundTaskInstanceStatics>
{
    HRESULT __stdcall get_Current(abi_arg_out<Windows::UI::WebUI::IWebUIBackgroundTaskInstance> backgroundTaskInstance) noexcept override
    {
        try
        {
            *backgroundTaskInstance = detach(this->shim().Current());
            return S_OK;
        }
        catch (...)
        {
            *backgroundTaskInstance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::WebUI::IWebUINavigatedDeferral> : produce_base<D, Windows::UI::WebUI::IWebUINavigatedDeferral>
{
    HRESULT __stdcall abi_Complete() noexcept override
    {
        try
        {
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::WebUI::IWebUINavigatedEventArgs> : produce_base<D, Windows::UI::WebUI::IWebUINavigatedEventArgs>
{
    HRESULT __stdcall get_NavigatedOperation(abi_arg_out<Windows::UI::WebUI::IWebUINavigatedOperation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NavigatedOperation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::WebUI::IWebUINavigatedOperation> : produce_base<D, Windows::UI::WebUI::IWebUINavigatedOperation>
{
    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::UI::WebUI::IWebUINavigatedDeferral> deferral) noexcept override
    {
        try
        {
            *deferral = detach(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *deferral = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::UI::WebUI {

template <typename D> void impl_IActivatedDeferral<D>::Complete() const
{
    check_hresult(static_cast<const IActivatedDeferral &>(static_cast<const D &>(*this))->abi_Complete());
}

template <typename D> Windows::UI::WebUI::ActivatedDeferral impl_IActivatedOperation<D>::GetDeferral() const
{
    Windows::UI::WebUI::ActivatedDeferral deferral { nullptr };
    check_hresult(static_cast<const IActivatedOperation &>(static_cast<const D &>(*this))->abi_GetDeferral(put(deferral)));
    return deferral;
}

template <typename D> Windows::UI::WebUI::ActivatedOperation impl_IActivatedEventArgsDeferral<D>::ActivatedOperation() const
{
    Windows::UI::WebUI::ActivatedOperation value { nullptr };
    check_hresult(static_cast<const IActivatedEventArgsDeferral &>(static_cast<const D &>(*this))->get_ActivatedOperation(put(value)));
    return value;
}

template <typename D> Windows::UI::WebUI::WebUINavigatedOperation impl_IWebUINavigatedEventArgs<D>::NavigatedOperation() const
{
    Windows::UI::WebUI::WebUINavigatedOperation value { nullptr };
    check_hresult(static_cast<const IWebUINavigatedEventArgs &>(static_cast<const D &>(*this))->get_NavigatedOperation(put(value)));
    return value;
}

template <typename D> bool impl_IWebUIBackgroundTaskInstance<D>::Succeeded() const
{
    bool succeeded {};
    check_hresult(static_cast<const IWebUIBackgroundTaskInstance &>(static_cast<const D &>(*this))->get_Succeeded(&succeeded));
    return succeeded;
}

template <typename D> void impl_IWebUIBackgroundTaskInstance<D>::Succeeded(bool succeeded) const
{
    check_hresult(static_cast<const IWebUIBackgroundTaskInstance &>(static_cast<const D &>(*this))->put_Succeeded(succeeded));
}

template <typename D> Windows::UI::WebUI::IWebUIBackgroundTaskInstance impl_IWebUIBackgroundTaskInstanceStatics<D>::Current() const
{
    Windows::UI::WebUI::IWebUIBackgroundTaskInstance backgroundTaskInstance;
    check_hresult(static_cast<const IWebUIBackgroundTaskInstanceStatics &>(static_cast<const D &>(*this))->get_Current(put(backgroundTaskInstance)));
    return backgroundTaskInstance;
}

template <typename D> void impl_IWebUINavigatedDeferral<D>::Complete() const
{
    check_hresult(static_cast<const IWebUINavigatedDeferral &>(static_cast<const D &>(*this))->abi_Complete());
}

template <typename D> Windows::UI::WebUI::WebUINavigatedDeferral impl_IWebUINavigatedOperation<D>::GetDeferral() const
{
    Windows::UI::WebUI::WebUINavigatedDeferral deferral { nullptr };
    check_hresult(static_cast<const IWebUINavigatedOperation &>(static_cast<const D &>(*this))->abi_GetDeferral(put(deferral)));
    return deferral;
}

template <typename D> event_token impl_IWebUIActivationStatics<D>::Activated(const Windows::UI::WebUI::ActivatedEventHandler & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IWebUIActivationStatics &>(static_cast<const D &>(*this))->add_Activated(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IWebUIActivationStatics> impl_IWebUIActivationStatics<D>::Activated(auto_revoke_t, const Windows::UI::WebUI::ActivatedEventHandler & handler) const
{
    return impl::make_event_revoker<D, IWebUIActivationStatics>(this, &ABI::Windows::UI::WebUI::IWebUIActivationStatics::remove_Activated, Activated(handler));
}

template <typename D> void impl_IWebUIActivationStatics<D>::Activated(event_token token) const
{
    check_hresult(static_cast<const IWebUIActivationStatics &>(static_cast<const D &>(*this))->remove_Activated(token));
}

template <typename D> event_token impl_IWebUIActivationStatics<D>::Suspending(const Windows::UI::WebUI::SuspendingEventHandler & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IWebUIActivationStatics &>(static_cast<const D &>(*this))->add_Suspending(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IWebUIActivationStatics> impl_IWebUIActivationStatics<D>::Suspending(auto_revoke_t, const Windows::UI::WebUI::SuspendingEventHandler & handler) const
{
    return impl::make_event_revoker<D, IWebUIActivationStatics>(this, &ABI::Windows::UI::WebUI::IWebUIActivationStatics::remove_Suspending, Suspending(handler));
}

template <typename D> void impl_IWebUIActivationStatics<D>::Suspending(event_token token) const
{
    check_hresult(static_cast<const IWebUIActivationStatics &>(static_cast<const D &>(*this))->remove_Suspending(token));
}

template <typename D> event_token impl_IWebUIActivationStatics<D>::Resuming(const Windows::UI::WebUI::ResumingEventHandler & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IWebUIActivationStatics &>(static_cast<const D &>(*this))->add_Resuming(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IWebUIActivationStatics> impl_IWebUIActivationStatics<D>::Resuming(auto_revoke_t, const Windows::UI::WebUI::ResumingEventHandler & handler) const
{
    return impl::make_event_revoker<D, IWebUIActivationStatics>(this, &ABI::Windows::UI::WebUI::IWebUIActivationStatics::remove_Resuming, Resuming(handler));
}

template <typename D> void impl_IWebUIActivationStatics<D>::Resuming(event_token token) const
{
    check_hresult(static_cast<const IWebUIActivationStatics &>(static_cast<const D &>(*this))->remove_Resuming(token));
}

template <typename D> event_token impl_IWebUIActivationStatics<D>::Navigated(const Windows::UI::WebUI::NavigatedEventHandler & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IWebUIActivationStatics &>(static_cast<const D &>(*this))->add_Navigated(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IWebUIActivationStatics> impl_IWebUIActivationStatics<D>::Navigated(auto_revoke_t, const Windows::UI::WebUI::NavigatedEventHandler & handler) const
{
    return impl::make_event_revoker<D, IWebUIActivationStatics>(this, &ABI::Windows::UI::WebUI::IWebUIActivationStatics::remove_Navigated, Navigated(handler));
}

template <typename D> void impl_IWebUIActivationStatics<D>::Navigated(event_token token) const
{
    check_hresult(static_cast<const IWebUIActivationStatics &>(static_cast<const D &>(*this))->remove_Navigated(token));
}

template <typename D> event_token impl_IWebUIActivationStatics2<D>::LeavingBackground(const Windows::UI::WebUI::LeavingBackgroundEventHandler & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IWebUIActivationStatics2 &>(static_cast<const D &>(*this))->add_LeavingBackground(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IWebUIActivationStatics2> impl_IWebUIActivationStatics2<D>::LeavingBackground(auto_revoke_t, const Windows::UI::WebUI::LeavingBackgroundEventHandler & handler) const
{
    return impl::make_event_revoker<D, IWebUIActivationStatics2>(this, &ABI::Windows::UI::WebUI::IWebUIActivationStatics2::remove_LeavingBackground, LeavingBackground(handler));
}

template <typename D> void impl_IWebUIActivationStatics2<D>::LeavingBackground(event_token token) const
{
    check_hresult(static_cast<const IWebUIActivationStatics2 &>(static_cast<const D &>(*this))->remove_LeavingBackground(token));
}

template <typename D> event_token impl_IWebUIActivationStatics2<D>::EnteredBackground(const Windows::UI::WebUI::EnteredBackgroundEventHandler & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IWebUIActivationStatics2 &>(static_cast<const D &>(*this))->add_EnteredBackground(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IWebUIActivationStatics2> impl_IWebUIActivationStatics2<D>::EnteredBackground(auto_revoke_t, const Windows::UI::WebUI::EnteredBackgroundEventHandler & handler) const
{
    return impl::make_event_revoker<D, IWebUIActivationStatics2>(this, &ABI::Windows::UI::WebUI::IWebUIActivationStatics2::remove_EnteredBackground, EnteredBackground(handler));
}

template <typename D> void impl_IWebUIActivationStatics2<D>::EnteredBackground(event_token token) const
{
    check_hresult(static_cast<const IWebUIActivationStatics2 &>(static_cast<const D &>(*this))->remove_EnteredBackground(token));
}

template <typename D> void impl_IWebUIActivationStatics2<D>::EnablePrelaunch(bool value) const
{
    check_hresult(static_cast<const IWebUIActivationStatics2 &>(static_cast<const D &>(*this))->abi_EnablePrelaunch(value));
}

template <typename D> Windows::UI::WebUI::PrintContent impl_IHtmlPrintDocumentSource<D>::Content() const
{
    Windows::UI::WebUI::PrintContent value {};
    check_hresult(static_cast<const IHtmlPrintDocumentSource &>(static_cast<const D &>(*this))->get_Content(&value));
    return value;
}

template <typename D> void impl_IHtmlPrintDocumentSource<D>::Content(Windows::UI::WebUI::PrintContent value) const
{
    check_hresult(static_cast<const IHtmlPrintDocumentSource &>(static_cast<const D &>(*this))->put_Content(value));
}

template <typename D> float impl_IHtmlPrintDocumentSource<D>::LeftMargin() const
{
    float value {};
    check_hresult(static_cast<const IHtmlPrintDocumentSource &>(static_cast<const D &>(*this))->get_LeftMargin(&value));
    return value;
}

template <typename D> void impl_IHtmlPrintDocumentSource<D>::LeftMargin(float value) const
{
    check_hresult(static_cast<const IHtmlPrintDocumentSource &>(static_cast<const D &>(*this))->put_LeftMargin(value));
}

template <typename D> float impl_IHtmlPrintDocumentSource<D>::TopMargin() const
{
    float value {};
    check_hresult(static_cast<const IHtmlPrintDocumentSource &>(static_cast<const D &>(*this))->get_TopMargin(&value));
    return value;
}

template <typename D> void impl_IHtmlPrintDocumentSource<D>::TopMargin(float value) const
{
    check_hresult(static_cast<const IHtmlPrintDocumentSource &>(static_cast<const D &>(*this))->put_TopMargin(value));
}

template <typename D> float impl_IHtmlPrintDocumentSource<D>::RightMargin() const
{
    float value {};
    check_hresult(static_cast<const IHtmlPrintDocumentSource &>(static_cast<const D &>(*this))->get_RightMargin(&value));
    return value;
}

template <typename D> void impl_IHtmlPrintDocumentSource<D>::RightMargin(float value) const
{
    check_hresult(static_cast<const IHtmlPrintDocumentSource &>(static_cast<const D &>(*this))->put_RightMargin(value));
}

template <typename D> float impl_IHtmlPrintDocumentSource<D>::BottomMargin() const
{
    float value {};
    check_hresult(static_cast<const IHtmlPrintDocumentSource &>(static_cast<const D &>(*this))->get_BottomMargin(&value));
    return value;
}

template <typename D> void impl_IHtmlPrintDocumentSource<D>::BottomMargin(float value) const
{
    check_hresult(static_cast<const IHtmlPrintDocumentSource &>(static_cast<const D &>(*this))->put_BottomMargin(value));
}

template <typename D> bool impl_IHtmlPrintDocumentSource<D>::EnableHeaderFooter() const
{
    bool value {};
    check_hresult(static_cast<const IHtmlPrintDocumentSource &>(static_cast<const D &>(*this))->get_EnableHeaderFooter(&value));
    return value;
}

template <typename D> void impl_IHtmlPrintDocumentSource<D>::EnableHeaderFooter(bool value) const
{
    check_hresult(static_cast<const IHtmlPrintDocumentSource &>(static_cast<const D &>(*this))->put_EnableHeaderFooter(value));
}

template <typename D> bool impl_IHtmlPrintDocumentSource<D>::ShrinkToFit() const
{
    bool value {};
    check_hresult(static_cast<const IHtmlPrintDocumentSource &>(static_cast<const D &>(*this))->get_ShrinkToFit(&value));
    return value;
}

template <typename D> void impl_IHtmlPrintDocumentSource<D>::ShrinkToFit(bool value) const
{
    check_hresult(static_cast<const IHtmlPrintDocumentSource &>(static_cast<const D &>(*this))->put_ShrinkToFit(value));
}

template <typename D> float impl_IHtmlPrintDocumentSource<D>::PercentScale() const
{
    float pScalePercent {};
    check_hresult(static_cast<const IHtmlPrintDocumentSource &>(static_cast<const D &>(*this))->get_PercentScale(&pScalePercent));
    return pScalePercent;
}

template <typename D> void impl_IHtmlPrintDocumentSource<D>::PercentScale(float scalePercent) const
{
    check_hresult(static_cast<const IHtmlPrintDocumentSource &>(static_cast<const D &>(*this))->put_PercentScale(scalePercent));
}

template <typename D> hstring impl_IHtmlPrintDocumentSource<D>::PageRange() const
{
    hstring pstrPageRange;
    check_hresult(static_cast<const IHtmlPrintDocumentSource &>(static_cast<const D &>(*this))->get_PageRange(put(pstrPageRange)));
    return pstrPageRange;
}

template <typename D> bool impl_IHtmlPrintDocumentSource<D>::TrySetPageRange(hstring_ref strPageRange) const
{
    bool pfSuccess {};
    check_hresult(static_cast<const IHtmlPrintDocumentSource &>(static_cast<const D &>(*this))->abi_TrySetPageRange(get(strPageRange), &pfSuccess));
    return pfSuccess;
}

inline event_token WebUIApplication::Activated(const Windows::UI::WebUI::ActivatedEventHandler & handler)
{
    return get_activation_factory<WebUIApplication, IWebUIActivationStatics>().Activated(handler);
}

inline factory_event_revoker<IWebUIActivationStatics> WebUIApplication::Activated(auto_revoke_t, const Windows::UI::WebUI::ActivatedEventHandler & handler)
{
    auto factory = get_activation_factory<WebUIApplication, IWebUIActivationStatics>();
    return { factory, &ABI::Windows::UI::WebUI::IWebUIActivationStatics::remove_Activated, factory.Activated(handler) };
}

inline void WebUIApplication::Activated(event_token token)
{
    get_activation_factory<WebUIApplication, IWebUIActivationStatics>().Activated(token);
}

inline event_token WebUIApplication::Suspending(const Windows::UI::WebUI::SuspendingEventHandler & handler)
{
    return get_activation_factory<WebUIApplication, IWebUIActivationStatics>().Suspending(handler);
}

inline factory_event_revoker<IWebUIActivationStatics> WebUIApplication::Suspending(auto_revoke_t, const Windows::UI::WebUI::SuspendingEventHandler & handler)
{
    auto factory = get_activation_factory<WebUIApplication, IWebUIActivationStatics>();
    return { factory, &ABI::Windows::UI::WebUI::IWebUIActivationStatics::remove_Suspending, factory.Suspending(handler) };
}

inline void WebUIApplication::Suspending(event_token token)
{
    get_activation_factory<WebUIApplication, IWebUIActivationStatics>().Suspending(token);
}

inline event_token WebUIApplication::Resuming(const Windows::UI::WebUI::ResumingEventHandler & handler)
{
    return get_activation_factory<WebUIApplication, IWebUIActivationStatics>().Resuming(handler);
}

inline factory_event_revoker<IWebUIActivationStatics> WebUIApplication::Resuming(auto_revoke_t, const Windows::UI::WebUI::ResumingEventHandler & handler)
{
    auto factory = get_activation_factory<WebUIApplication, IWebUIActivationStatics>();
    return { factory, &ABI::Windows::UI::WebUI::IWebUIActivationStatics::remove_Resuming, factory.Resuming(handler) };
}

inline void WebUIApplication::Resuming(event_token token)
{
    get_activation_factory<WebUIApplication, IWebUIActivationStatics>().Resuming(token);
}

inline event_token WebUIApplication::Navigated(const Windows::UI::WebUI::NavigatedEventHandler & handler)
{
    return get_activation_factory<WebUIApplication, IWebUIActivationStatics>().Navigated(handler);
}

inline factory_event_revoker<IWebUIActivationStatics> WebUIApplication::Navigated(auto_revoke_t, const Windows::UI::WebUI::NavigatedEventHandler & handler)
{
    auto factory = get_activation_factory<WebUIApplication, IWebUIActivationStatics>();
    return { factory, &ABI::Windows::UI::WebUI::IWebUIActivationStatics::remove_Navigated, factory.Navigated(handler) };
}

inline void WebUIApplication::Navigated(event_token token)
{
    get_activation_factory<WebUIApplication, IWebUIActivationStatics>().Navigated(token);
}

inline event_token WebUIApplication::LeavingBackground(const Windows::UI::WebUI::LeavingBackgroundEventHandler & handler)
{
    return get_activation_factory<WebUIApplication, IWebUIActivationStatics2>().LeavingBackground(handler);
}

inline factory_event_revoker<IWebUIActivationStatics2> WebUIApplication::LeavingBackground(auto_revoke_t, const Windows::UI::WebUI::LeavingBackgroundEventHandler & handler)
{
    auto factory = get_activation_factory<WebUIApplication, IWebUIActivationStatics2>();
    return { factory, &ABI::Windows::UI::WebUI::IWebUIActivationStatics2::remove_LeavingBackground, factory.LeavingBackground(handler) };
}

inline void WebUIApplication::LeavingBackground(event_token token)
{
    get_activation_factory<WebUIApplication, IWebUIActivationStatics2>().LeavingBackground(token);
}

inline event_token WebUIApplication::EnteredBackground(const Windows::UI::WebUI::EnteredBackgroundEventHandler & handler)
{
    return get_activation_factory<WebUIApplication, IWebUIActivationStatics2>().EnteredBackground(handler);
}

inline factory_event_revoker<IWebUIActivationStatics2> WebUIApplication::EnteredBackground(auto_revoke_t, const Windows::UI::WebUI::EnteredBackgroundEventHandler & handler)
{
    auto factory = get_activation_factory<WebUIApplication, IWebUIActivationStatics2>();
    return { factory, &ABI::Windows::UI::WebUI::IWebUIActivationStatics2::remove_EnteredBackground, factory.EnteredBackground(handler) };
}

inline void WebUIApplication::EnteredBackground(event_token token)
{
    get_activation_factory<WebUIApplication, IWebUIActivationStatics2>().EnteredBackground(token);
}

inline void WebUIApplication::EnablePrelaunch(bool value)
{
    get_activation_factory<WebUIApplication, IWebUIActivationStatics2>().EnablePrelaunch(value);
}

inline Windows::UI::WebUI::IWebUIBackgroundTaskInstance WebUIBackgroundTaskInstance::Current()
{
    return get_activation_factory<WebUIBackgroundTaskInstance, IWebUIBackgroundTaskInstanceStatics>().Current();
}

}

}
