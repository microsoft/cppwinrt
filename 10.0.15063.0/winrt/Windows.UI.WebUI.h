// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.ApplicationModel.2.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.2.h"
#include "winrt/impl/Windows.ApplicationModel.Appointments.AppointmentsProvider.2.h"
#include "winrt/impl/Windows.ApplicationModel.Background.2.h"
#include "winrt/impl/Windows.ApplicationModel.Calls.2.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.2.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.Provider.2.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.ShareTarget.2.h"
#include "winrt/impl/Windows.ApplicationModel.Search.2.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.Provider.2.h"
#include "winrt/impl/Windows.ApplicationModel.Wallet.2.h"
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Devices.Printers.Extensions.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Media.SpeechRecognition.2.h"
#include "winrt/impl/Windows.Security.Authentication.Web.2.h"
#include "winrt/impl/Windows.Security.Authentication.Web.Provider.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Pickers.Provider.2.h"
#include "winrt/impl/Windows.Storage.Provider.2.h"
#include "winrt/impl/Windows.Storage.Search.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Graphics.Printing.2.h"
#include "winrt/impl/Windows.UI.WebUI.2.h"
#include "winrt/Windows.UI.h"

namespace winrt::impl {

template <typename D> void consume_Windows_UI_WebUI_IActivatedDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IActivatedDeferral)->Complete());
}

template <typename D> Windows::UI::WebUI::ActivatedOperation consume_Windows_UI_WebUI_IActivatedEventArgsDeferral<D>::ActivatedOperation() const
{
    Windows::UI::WebUI::ActivatedOperation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IActivatedEventArgsDeferral)->get_ActivatedOperation(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::WebUI::ActivatedDeferral consume_Windows_UI_WebUI_IActivatedOperation<D>::GetDeferral() const
{
    Windows::UI::WebUI::ActivatedDeferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IActivatedOperation)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> Windows::UI::WebUI::PrintContent consume_Windows_UI_WebUI_IHtmlPrintDocumentSource<D>::Content() const
{
    Windows::UI::WebUI::PrintContent value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IHtmlPrintDocumentSource)->get_Content(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_WebUI_IHtmlPrintDocumentSource<D>::Content(Windows::UI::WebUI::PrintContent const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IHtmlPrintDocumentSource)->put_Content(get_abi(value)));
}

template <typename D> float consume_Windows_UI_WebUI_IHtmlPrintDocumentSource<D>::LeftMargin() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IHtmlPrintDocumentSource)->get_LeftMargin(&value));
    return value;
}

template <typename D> void consume_Windows_UI_WebUI_IHtmlPrintDocumentSource<D>::LeftMargin(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IHtmlPrintDocumentSource)->put_LeftMargin(value));
}

template <typename D> float consume_Windows_UI_WebUI_IHtmlPrintDocumentSource<D>::TopMargin() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IHtmlPrintDocumentSource)->get_TopMargin(&value));
    return value;
}

template <typename D> void consume_Windows_UI_WebUI_IHtmlPrintDocumentSource<D>::TopMargin(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IHtmlPrintDocumentSource)->put_TopMargin(value));
}

template <typename D> float consume_Windows_UI_WebUI_IHtmlPrintDocumentSource<D>::RightMargin() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IHtmlPrintDocumentSource)->get_RightMargin(&value));
    return value;
}

template <typename D> void consume_Windows_UI_WebUI_IHtmlPrintDocumentSource<D>::RightMargin(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IHtmlPrintDocumentSource)->put_RightMargin(value));
}

template <typename D> float consume_Windows_UI_WebUI_IHtmlPrintDocumentSource<D>::BottomMargin() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IHtmlPrintDocumentSource)->get_BottomMargin(&value));
    return value;
}

template <typename D> void consume_Windows_UI_WebUI_IHtmlPrintDocumentSource<D>::BottomMargin(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IHtmlPrintDocumentSource)->put_BottomMargin(value));
}

template <typename D> bool consume_Windows_UI_WebUI_IHtmlPrintDocumentSource<D>::EnableHeaderFooter() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IHtmlPrintDocumentSource)->get_EnableHeaderFooter(&value));
    return value;
}

template <typename D> void consume_Windows_UI_WebUI_IHtmlPrintDocumentSource<D>::EnableHeaderFooter(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IHtmlPrintDocumentSource)->put_EnableHeaderFooter(value));
}

template <typename D> bool consume_Windows_UI_WebUI_IHtmlPrintDocumentSource<D>::ShrinkToFit() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IHtmlPrintDocumentSource)->get_ShrinkToFit(&value));
    return value;
}

template <typename D> void consume_Windows_UI_WebUI_IHtmlPrintDocumentSource<D>::ShrinkToFit(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IHtmlPrintDocumentSource)->put_ShrinkToFit(value));
}

template <typename D> float consume_Windows_UI_WebUI_IHtmlPrintDocumentSource<D>::PercentScale() const
{
    float pScalePercent{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IHtmlPrintDocumentSource)->get_PercentScale(&pScalePercent));
    return pScalePercent;
}

template <typename D> void consume_Windows_UI_WebUI_IHtmlPrintDocumentSource<D>::PercentScale(float scalePercent) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IHtmlPrintDocumentSource)->put_PercentScale(scalePercent));
}

template <typename D> hstring consume_Windows_UI_WebUI_IHtmlPrintDocumentSource<D>::PageRange() const
{
    hstring pstrPageRange{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IHtmlPrintDocumentSource)->get_PageRange(put_abi(pstrPageRange)));
    return pstrPageRange;
}

template <typename D> bool consume_Windows_UI_WebUI_IHtmlPrintDocumentSource<D>::TrySetPageRange(param::hstring const& strPageRange) const
{
    bool pfSuccess{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IHtmlPrintDocumentSource)->TrySetPageRange(get_abi(strPageRange), &pfSuccess));
    return pfSuccess;
}

template <typename D> event_token consume_Windows_UI_WebUI_IWebUIActivationStatics<D>::Activated(Windows::UI::WebUI::ActivatedEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IWebUIActivationStatics)->add_Activated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::WebUI::IWebUIActivationStatics> consume_Windows_UI_WebUI_IWebUIActivationStatics<D>::Activated(auto_revoke_t, Windows::UI::WebUI::ActivatedEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::WebUI::IWebUIActivationStatics>(this, &abi_t<Windows::UI::WebUI::IWebUIActivationStatics>::remove_Activated, Activated(handler));
}

template <typename D> void consume_Windows_UI_WebUI_IWebUIActivationStatics<D>::Activated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IWebUIActivationStatics)->remove_Activated(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_WebUI_IWebUIActivationStatics<D>::Suspending(Windows::UI::WebUI::SuspendingEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IWebUIActivationStatics)->add_Suspending(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::WebUI::IWebUIActivationStatics> consume_Windows_UI_WebUI_IWebUIActivationStatics<D>::Suspending(auto_revoke_t, Windows::UI::WebUI::SuspendingEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::WebUI::IWebUIActivationStatics>(this, &abi_t<Windows::UI::WebUI::IWebUIActivationStatics>::remove_Suspending, Suspending(handler));
}

template <typename D> void consume_Windows_UI_WebUI_IWebUIActivationStatics<D>::Suspending(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IWebUIActivationStatics)->remove_Suspending(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_WebUI_IWebUIActivationStatics<D>::Resuming(Windows::UI::WebUI::ResumingEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IWebUIActivationStatics)->add_Resuming(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::WebUI::IWebUIActivationStatics> consume_Windows_UI_WebUI_IWebUIActivationStatics<D>::Resuming(auto_revoke_t, Windows::UI::WebUI::ResumingEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::WebUI::IWebUIActivationStatics>(this, &abi_t<Windows::UI::WebUI::IWebUIActivationStatics>::remove_Resuming, Resuming(handler));
}

template <typename D> void consume_Windows_UI_WebUI_IWebUIActivationStatics<D>::Resuming(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IWebUIActivationStatics)->remove_Resuming(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_WebUI_IWebUIActivationStatics<D>::Navigated(Windows::UI::WebUI::NavigatedEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IWebUIActivationStatics)->add_Navigated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::WebUI::IWebUIActivationStatics> consume_Windows_UI_WebUI_IWebUIActivationStatics<D>::Navigated(auto_revoke_t, Windows::UI::WebUI::NavigatedEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::WebUI::IWebUIActivationStatics>(this, &abi_t<Windows::UI::WebUI::IWebUIActivationStatics>::remove_Navigated, Navigated(handler));
}

template <typename D> void consume_Windows_UI_WebUI_IWebUIActivationStatics<D>::Navigated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IWebUIActivationStatics)->remove_Navigated(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_WebUI_IWebUIActivationStatics2<D>::LeavingBackground(Windows::UI::WebUI::LeavingBackgroundEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IWebUIActivationStatics2)->add_LeavingBackground(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::WebUI::IWebUIActivationStatics2> consume_Windows_UI_WebUI_IWebUIActivationStatics2<D>::LeavingBackground(auto_revoke_t, Windows::UI::WebUI::LeavingBackgroundEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::WebUI::IWebUIActivationStatics2>(this, &abi_t<Windows::UI::WebUI::IWebUIActivationStatics2>::remove_LeavingBackground, LeavingBackground(handler));
}

template <typename D> void consume_Windows_UI_WebUI_IWebUIActivationStatics2<D>::LeavingBackground(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IWebUIActivationStatics2)->remove_LeavingBackground(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_WebUI_IWebUIActivationStatics2<D>::EnteredBackground(Windows::UI::WebUI::EnteredBackgroundEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IWebUIActivationStatics2)->add_EnteredBackground(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::WebUI::IWebUIActivationStatics2> consume_Windows_UI_WebUI_IWebUIActivationStatics2<D>::EnteredBackground(auto_revoke_t, Windows::UI::WebUI::EnteredBackgroundEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::WebUI::IWebUIActivationStatics2>(this, &abi_t<Windows::UI::WebUI::IWebUIActivationStatics2>::remove_EnteredBackground, EnteredBackground(handler));
}

template <typename D> void consume_Windows_UI_WebUI_IWebUIActivationStatics2<D>::EnteredBackground(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IWebUIActivationStatics2)->remove_EnteredBackground(get_abi(token)));
}

template <typename D> void consume_Windows_UI_WebUI_IWebUIActivationStatics2<D>::EnablePrelaunch(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IWebUIActivationStatics2)->EnablePrelaunch(value));
}

template <typename D> bool consume_Windows_UI_WebUI_IWebUIBackgroundTaskInstance<D>::Succeeded() const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IWebUIBackgroundTaskInstance)->get_Succeeded(&succeeded));
    return succeeded;
}

template <typename D> void consume_Windows_UI_WebUI_IWebUIBackgroundTaskInstance<D>::Succeeded(bool succeeded) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IWebUIBackgroundTaskInstance)->put_Succeeded(succeeded));
}

template <typename D> Windows::UI::WebUI::IWebUIBackgroundTaskInstance consume_Windows_UI_WebUI_IWebUIBackgroundTaskInstanceStatics<D>::Current() const
{
    Windows::UI::WebUI::IWebUIBackgroundTaskInstance backgroundTaskInstance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IWebUIBackgroundTaskInstanceStatics)->get_Current(put_abi(backgroundTaskInstance)));
    return backgroundTaskInstance;
}

template <typename D> void consume_Windows_UI_WebUI_IWebUINavigatedDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IWebUINavigatedDeferral)->Complete());
}

template <typename D> Windows::UI::WebUI::WebUINavigatedOperation consume_Windows_UI_WebUI_IWebUINavigatedEventArgs<D>::NavigatedOperation() const
{
    Windows::UI::WebUI::WebUINavigatedOperation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IWebUINavigatedEventArgs)->get_NavigatedOperation(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::WebUI::WebUINavigatedDeferral consume_Windows_UI_WebUI_IWebUINavigatedOperation<D>::GetDeferral() const
{
    Windows::UI::WebUI::WebUINavigatedDeferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::IWebUINavigatedOperation)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <> struct delegate<Windows::UI::WebUI::ActivatedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::WebUI::ActivatedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::WebUI::ActivatedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* eventArgs) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::ApplicationModel::Activation::IActivatedEventArgs const*>(&eventArgs));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::WebUI::EnteredBackgroundEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::WebUI::EnteredBackgroundEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::WebUI::EnteredBackgroundEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::ApplicationModel::IEnteredBackgroundEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::WebUI::LeavingBackgroundEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::WebUI::LeavingBackgroundEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::WebUI::LeavingBackgroundEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::ApplicationModel::ILeavingBackgroundEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::WebUI::NavigatedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::WebUI::NavigatedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::WebUI::NavigatedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::WebUI::IWebUINavigatedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::WebUI::ResumingEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::WebUI::ResumingEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::WebUI::ResumingEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::WebUI::SuspendingEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::WebUI::SuspendingEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::WebUI::SuspendingEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::ApplicationModel::ISuspendingEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::UI::WebUI::IActivatedDeferral> : produce_base<D, Windows::UI::WebUI::IActivatedDeferral>
{
    HRESULT __stdcall Complete() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_ActivatedOperation(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ActivatedOperation());
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
    HRESULT __stdcall GetDeferral(::IUnknown** deferral) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deferral = detach_abi(this->shim().GetDeferral());
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
    HRESULT __stdcall get_Content(abi_t<Windows::UI::WebUI::PrintContent>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Content(abi_t<Windows::UI::WebUI::PrintContent> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Content(*reinterpret_cast<Windows::UI::WebUI::PrintContent const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LeftMargin(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LeftMargin());
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
            typename D::abi_guard guard(this->shim());
            this->shim().LeftMargin(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TopMargin(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TopMargin());
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
            typename D::abi_guard guard(this->shim());
            this->shim().TopMargin(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RightMargin(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RightMargin());
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
            typename D::abi_guard guard(this->shim());
            this->shim().RightMargin(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BottomMargin(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BottomMargin());
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
            typename D::abi_guard guard(this->shim());
            this->shim().BottomMargin(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnableHeaderFooter(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnableHeaderFooter());
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
            typename D::abi_guard guard(this->shim());
            this->shim().EnableHeaderFooter(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShrinkToFit(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShrinkToFit());
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
            typename D::abi_guard guard(this->shim());
            this->shim().ShrinkToFit(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PercentScale(float* pScalePercent) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pScalePercent = detach_abi(this->shim().PercentScale());
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
            typename D::abi_guard guard(this->shim());
            this->shim().PercentScale(scalePercent);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PageRange(HSTRING* pstrPageRange) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pstrPageRange = detach_abi(this->shim().PageRange());
            return S_OK;
        }
        catch (...)
        {
            *pstrPageRange = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetPageRange(HSTRING strPageRange, bool* pfSuccess) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pfSuccess = detach_abi(this->shim().TrySetPageRange(*reinterpret_cast<hstring const*>(&strPageRange)));
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
    HRESULT __stdcall add_Activated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Activated(*reinterpret_cast<Windows::UI::WebUI::ActivatedEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Activated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Activated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Suspending(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Suspending(*reinterpret_cast<Windows::UI::WebUI::SuspendingEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Suspending(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Suspending(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Resuming(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Resuming(*reinterpret_cast<Windows::UI::WebUI::ResumingEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Resuming(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resuming(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Navigated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Navigated(*reinterpret_cast<Windows::UI::WebUI::NavigatedEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Navigated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Navigated(*reinterpret_cast<event_token const*>(&token));
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
    HRESULT __stdcall add_LeavingBackground(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().LeavingBackground(*reinterpret_cast<Windows::UI::WebUI::LeavingBackgroundEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LeavingBackground(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LeavingBackground(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnteredBackground(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().EnteredBackground(*reinterpret_cast<Windows::UI::WebUI::EnteredBackgroundEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnteredBackground(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnteredBackground(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EnablePrelaunch(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_Succeeded(bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().Succeeded());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_Current(::IUnknown** backgroundTaskInstance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *backgroundTaskInstance = detach_abi(this->shim().Current());
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
    HRESULT __stdcall Complete() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_NavigatedOperation(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NavigatedOperation());
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
    HRESULT __stdcall GetDeferral(::IUnknown** deferral) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deferral = detach_abi(this->shim().GetDeferral());
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

WINRT_EXPORT namespace winrt::Windows::UI::WebUI {

inline event_token WebUIApplication::Activated(Windows::UI::WebUI::ActivatedEventHandler const& handler)
{
    return get_activation_factory<WebUIApplication, Windows::UI::WebUI::IWebUIActivationStatics>().Activated(handler);
}

inline factory_event_revoker<Windows::UI::WebUI::IWebUIActivationStatics> WebUIApplication::Activated(auto_revoke_t, Windows::UI::WebUI::ActivatedEventHandler const& handler)
{
    auto factory = get_activation_factory<WebUIApplication, Windows::UI::WebUI::IWebUIActivationStatics>();
    return { factory, &abi_t<Windows::UI::WebUI::IWebUIActivationStatics>::remove_Activated, factory.Activated(handler) };
}

inline void WebUIApplication::Activated(event_token const& token)
{
    get_activation_factory<WebUIApplication, Windows::UI::WebUI::IWebUIActivationStatics>().Activated(token);
}

inline event_token WebUIApplication::Suspending(Windows::UI::WebUI::SuspendingEventHandler const& handler)
{
    return get_activation_factory<WebUIApplication, Windows::UI::WebUI::IWebUIActivationStatics>().Suspending(handler);
}

inline factory_event_revoker<Windows::UI::WebUI::IWebUIActivationStatics> WebUIApplication::Suspending(auto_revoke_t, Windows::UI::WebUI::SuspendingEventHandler const& handler)
{
    auto factory = get_activation_factory<WebUIApplication, Windows::UI::WebUI::IWebUIActivationStatics>();
    return { factory, &abi_t<Windows::UI::WebUI::IWebUIActivationStatics>::remove_Suspending, factory.Suspending(handler) };
}

inline void WebUIApplication::Suspending(event_token const& token)
{
    get_activation_factory<WebUIApplication, Windows::UI::WebUI::IWebUIActivationStatics>().Suspending(token);
}

inline event_token WebUIApplication::Resuming(Windows::UI::WebUI::ResumingEventHandler const& handler)
{
    return get_activation_factory<WebUIApplication, Windows::UI::WebUI::IWebUIActivationStatics>().Resuming(handler);
}

inline factory_event_revoker<Windows::UI::WebUI::IWebUIActivationStatics> WebUIApplication::Resuming(auto_revoke_t, Windows::UI::WebUI::ResumingEventHandler const& handler)
{
    auto factory = get_activation_factory<WebUIApplication, Windows::UI::WebUI::IWebUIActivationStatics>();
    return { factory, &abi_t<Windows::UI::WebUI::IWebUIActivationStatics>::remove_Resuming, factory.Resuming(handler) };
}

inline void WebUIApplication::Resuming(event_token const& token)
{
    get_activation_factory<WebUIApplication, Windows::UI::WebUI::IWebUIActivationStatics>().Resuming(token);
}

inline event_token WebUIApplication::Navigated(Windows::UI::WebUI::NavigatedEventHandler const& handler)
{
    return get_activation_factory<WebUIApplication, Windows::UI::WebUI::IWebUIActivationStatics>().Navigated(handler);
}

inline factory_event_revoker<Windows::UI::WebUI::IWebUIActivationStatics> WebUIApplication::Navigated(auto_revoke_t, Windows::UI::WebUI::NavigatedEventHandler const& handler)
{
    auto factory = get_activation_factory<WebUIApplication, Windows::UI::WebUI::IWebUIActivationStatics>();
    return { factory, &abi_t<Windows::UI::WebUI::IWebUIActivationStatics>::remove_Navigated, factory.Navigated(handler) };
}

inline void WebUIApplication::Navigated(event_token const& token)
{
    get_activation_factory<WebUIApplication, Windows::UI::WebUI::IWebUIActivationStatics>().Navigated(token);
}

inline event_token WebUIApplication::LeavingBackground(Windows::UI::WebUI::LeavingBackgroundEventHandler const& handler)
{
    return get_activation_factory<WebUIApplication, Windows::UI::WebUI::IWebUIActivationStatics2>().LeavingBackground(handler);
}

inline factory_event_revoker<Windows::UI::WebUI::IWebUIActivationStatics2> WebUIApplication::LeavingBackground(auto_revoke_t, Windows::UI::WebUI::LeavingBackgroundEventHandler const& handler)
{
    auto factory = get_activation_factory<WebUIApplication, Windows::UI::WebUI::IWebUIActivationStatics2>();
    return { factory, &abi_t<Windows::UI::WebUI::IWebUIActivationStatics2>::remove_LeavingBackground, factory.LeavingBackground(handler) };
}

inline void WebUIApplication::LeavingBackground(event_token const& token)
{
    get_activation_factory<WebUIApplication, Windows::UI::WebUI::IWebUIActivationStatics2>().LeavingBackground(token);
}

inline event_token WebUIApplication::EnteredBackground(Windows::UI::WebUI::EnteredBackgroundEventHandler const& handler)
{
    return get_activation_factory<WebUIApplication, Windows::UI::WebUI::IWebUIActivationStatics2>().EnteredBackground(handler);
}

inline factory_event_revoker<Windows::UI::WebUI::IWebUIActivationStatics2> WebUIApplication::EnteredBackground(auto_revoke_t, Windows::UI::WebUI::EnteredBackgroundEventHandler const& handler)
{
    auto factory = get_activation_factory<WebUIApplication, Windows::UI::WebUI::IWebUIActivationStatics2>();
    return { factory, &abi_t<Windows::UI::WebUI::IWebUIActivationStatics2>::remove_EnteredBackground, factory.EnteredBackground(handler) };
}

inline void WebUIApplication::EnteredBackground(event_token const& token)
{
    get_activation_factory<WebUIApplication, Windows::UI::WebUI::IWebUIActivationStatics2>().EnteredBackground(token);
}

inline void WebUIApplication::EnablePrelaunch(bool value)
{
    get_activation_factory<WebUIApplication, Windows::UI::WebUI::IWebUIActivationStatics2>().EnablePrelaunch(value);
}

inline Windows::UI::WebUI::IWebUIBackgroundTaskInstance WebUIBackgroundTaskInstance::Current()
{
    return get_activation_factory<WebUIBackgroundTaskInstance, Windows::UI::WebUI::IWebUIBackgroundTaskInstanceStatics>().Current();
}

template <typename L> ActivatedEventHandler::ActivatedEventHandler(L handler) :
    ActivatedEventHandler(impl::make_delegate<ActivatedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> ActivatedEventHandler::ActivatedEventHandler(F* handler) :
    ActivatedEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> ActivatedEventHandler::ActivatedEventHandler(O* object, M method) :
    ActivatedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void ActivatedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::ApplicationModel::Activation::IActivatedEventArgs const& eventArgs) const
{
    check_hresult((*(abi_t<ActivatedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(eventArgs)));
}

template <typename L> EnteredBackgroundEventHandler::EnteredBackgroundEventHandler(L handler) :
    EnteredBackgroundEventHandler(impl::make_delegate<EnteredBackgroundEventHandler>(std::forward<L>(handler)))
{}

template <typename F> EnteredBackgroundEventHandler::EnteredBackgroundEventHandler(F* handler) :
    EnteredBackgroundEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> EnteredBackgroundEventHandler::EnteredBackgroundEventHandler(O* object, M method) :
    EnteredBackgroundEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void EnteredBackgroundEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::ApplicationModel::IEnteredBackgroundEventArgs const& e) const
{
    check_hresult((*(abi_t<EnteredBackgroundEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> LeavingBackgroundEventHandler::LeavingBackgroundEventHandler(L handler) :
    LeavingBackgroundEventHandler(impl::make_delegate<LeavingBackgroundEventHandler>(std::forward<L>(handler)))
{}

template <typename F> LeavingBackgroundEventHandler::LeavingBackgroundEventHandler(F* handler) :
    LeavingBackgroundEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> LeavingBackgroundEventHandler::LeavingBackgroundEventHandler(O* object, M method) :
    LeavingBackgroundEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void LeavingBackgroundEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::ApplicationModel::ILeavingBackgroundEventArgs const& e) const
{
    check_hresult((*(abi_t<LeavingBackgroundEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> NavigatedEventHandler::NavigatedEventHandler(L handler) :
    NavigatedEventHandler(impl::make_delegate<NavigatedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> NavigatedEventHandler::NavigatedEventHandler(F* handler) :
    NavigatedEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> NavigatedEventHandler::NavigatedEventHandler(O* object, M method) :
    NavigatedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void NavigatedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::WebUI::IWebUINavigatedEventArgs const& e) const
{
    check_hresult((*(abi_t<NavigatedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> ResumingEventHandler::ResumingEventHandler(L handler) :
    ResumingEventHandler(impl::make_delegate<ResumingEventHandler>(std::forward<L>(handler)))
{}

template <typename F> ResumingEventHandler::ResumingEventHandler(F* handler) :
    ResumingEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> ResumingEventHandler::ResumingEventHandler(O* object, M method) :
    ResumingEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void ResumingEventHandler::operator()(Windows::Foundation::IInspectable const& sender) const
{
    check_hresult((*(abi_t<ResumingEventHandler>**)this)->Invoke(get_abi(sender)));
}

template <typename L> SuspendingEventHandler::SuspendingEventHandler(L handler) :
    SuspendingEventHandler(impl::make_delegate<SuspendingEventHandler>(std::forward<L>(handler)))
{}

template <typename F> SuspendingEventHandler::SuspendingEventHandler(F* handler) :
    SuspendingEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> SuspendingEventHandler::SuspendingEventHandler(O* object, M method) :
    SuspendingEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void SuspendingEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::ApplicationModel::ISuspendingEventArgs const& e) const
{
    check_hresult((*(abi_t<SuspendingEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::WebUI::IActivatedDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::IActivatedDeferral> {};

template<> struct hash<winrt::Windows::UI::WebUI::IActivatedEventArgsDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::IActivatedEventArgsDeferral> {};

template<> struct hash<winrt::Windows::UI::WebUI::IActivatedOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::IActivatedOperation> {};

template<> struct hash<winrt::Windows::UI::WebUI::IHtmlPrintDocumentSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::IHtmlPrintDocumentSource> {};

template<> struct hash<winrt::Windows::UI::WebUI::IWebUIActivationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::IWebUIActivationStatics> {};

template<> struct hash<winrt::Windows::UI::WebUI::IWebUIActivationStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::IWebUIActivationStatics2> {};

template<> struct hash<winrt::Windows::UI::WebUI::IWebUIBackgroundTaskInstance> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::IWebUIBackgroundTaskInstance> {};

template<> struct hash<winrt::Windows::UI::WebUI::IWebUIBackgroundTaskInstanceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::IWebUIBackgroundTaskInstanceStatics> {};

template<> struct hash<winrt::Windows::UI::WebUI::IWebUINavigatedDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::IWebUINavigatedDeferral> {};

template<> struct hash<winrt::Windows::UI::WebUI::IWebUINavigatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::IWebUINavigatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::IWebUINavigatedOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::IWebUINavigatedOperation> {};

template<> struct hash<winrt::Windows::UI::WebUI::ActivatedDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::ActivatedDeferral> {};

template<> struct hash<winrt::Windows::UI::WebUI::ActivatedOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::ActivatedOperation> {};

template<> struct hash<winrt::Windows::UI::WebUI::EnteredBackgroundEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::EnteredBackgroundEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::HtmlPrintDocumentSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::HtmlPrintDocumentSource> {};

template<> struct hash<winrt::Windows::UI::WebUI::LeavingBackgroundEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::LeavingBackgroundEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::SuspendingDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::SuspendingDeferral> {};

template<> struct hash<winrt::Windows::UI::WebUI::SuspendingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::SuspendingEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::SuspendingOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::SuspendingOperation> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIApplication> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIApplication> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIAppointmentsProviderAddAppointmentActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIAppointmentsProviderAddAppointmentActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIBackgroundTaskInstance> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIBackgroundTaskInstance> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIBackgroundTaskInstanceRuntimeClass> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIBackgroundTaskInstanceRuntimeClass> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUICachedFileUpdaterActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUICachedFileUpdaterActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUICameraSettingsActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUICameraSettingsActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIContactCallActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIContactCallActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIContactMapActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIContactMapActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIContactMessageActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIContactMessageActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIContactPanelActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIContactPanelActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIContactPickerActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIContactPickerActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIContactPostActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIContactPostActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIContactVideoCallActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIContactVideoCallActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIDeviceActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIDeviceActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIDevicePairingActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIDevicePairingActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIDialReceiverActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIDialReceiverActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIFileActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIFileActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIFileOpenPickerActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIFileOpenPickerActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIFileOpenPickerContinuationEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIFileOpenPickerContinuationEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIFileSavePickerActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIFileSavePickerActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIFileSavePickerContinuationEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIFileSavePickerContinuationEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIFolderPickerContinuationEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIFolderPickerContinuationEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUILaunchActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUILaunchActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUILockScreenActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUILockScreenActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUILockScreenCallActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUILockScreenCallActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUILockScreenComponentActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUILockScreenComponentActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUINavigatedDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUINavigatedDeferral> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUINavigatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUINavigatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUINavigatedOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUINavigatedOperation> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIPrint3DWorkflowActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIPrint3DWorkflowActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIPrintTaskSettingsActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIPrintTaskSettingsActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIPrintWorkflowForegroundTaskActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIPrintWorkflowForegroundTaskActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIProtocolActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIProtocolActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIProtocolForResultsActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIProtocolForResultsActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIRestrictedLaunchActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIRestrictedLaunchActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUISearchActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUISearchActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIShareTargetActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIShareTargetActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIToastNotificationActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIToastNotificationActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIUserDataAccountProviderActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIUserDataAccountProviderActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIVoiceCommandActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIVoiceCommandActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIWalletActionActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIWalletActionActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIWebAccountProviderActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIWebAccountProviderActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::WebUIWebAuthenticationBrokerContinuationEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::WebUIWebAuthenticationBrokerContinuationEventArgs> {};

}

WINRT_WARNING_POP
