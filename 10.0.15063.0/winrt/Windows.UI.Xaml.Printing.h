// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Graphics.Printing.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Printing.2.h"
#include "winrt/Windows.UI.Xaml.h"

namespace winrt::impl {

template <typename D> Windows::Graphics::Printing::PrintTaskOptions consume_Windows_UI_Xaml_Printing_IAddPagesEventArgs<D>::PrintTaskOptions() const
{
    Windows::Graphics::Printing::PrintTaskOptions value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Printing::IAddPagesEventArgs)->get_PrintTaskOptions(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Printing_IGetPreviewPageEventArgs<D>::PageNumber() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs)->get_PageNumber(&value));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTaskOptions consume_Windows_UI_Xaml_Printing_IPaginateEventArgs<D>::PrintTaskOptions() const
{
    Windows::Graphics::Printing::PrintTaskOptions value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Printing::IPaginateEventArgs)->get_PrintTaskOptions(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Printing_IPaginateEventArgs<D>::CurrentPreviewPageNumber() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Printing::IPaginateEventArgs)->get_CurrentPreviewPageNumber(&value));
    return value;
}

template <typename D> Windows::Graphics::Printing::IPrintDocumentSource consume_Windows_UI_Xaml_Printing_IPrintDocument<D>::DocumentSource() const
{
    Windows::Graphics::Printing::IPrintDocumentSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Printing::IPrintDocument)->get_DocumentSource(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_Xaml_Printing_IPrintDocument<D>::Paginate(Windows::UI::Xaml::Printing::PaginateEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Printing::IPrintDocument)->add_Paginate(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Printing::IPrintDocument> consume_Windows_UI_Xaml_Printing_IPrintDocument<D>::Paginate(auto_revoke_t, Windows::UI::Xaml::Printing::PaginateEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Printing::IPrintDocument>(this, &abi_t<Windows::UI::Xaml::Printing::IPrintDocument>::remove_Paginate, Paginate(value));
}

template <typename D> void consume_Windows_UI_Xaml_Printing_IPrintDocument<D>::Paginate(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Printing::IPrintDocument)->remove_Paginate(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Printing_IPrintDocument<D>::GetPreviewPage(Windows::UI::Xaml::Printing::GetPreviewPageEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Printing::IPrintDocument)->add_GetPreviewPage(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Printing::IPrintDocument> consume_Windows_UI_Xaml_Printing_IPrintDocument<D>::GetPreviewPage(auto_revoke_t, Windows::UI::Xaml::Printing::GetPreviewPageEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Printing::IPrintDocument>(this, &abi_t<Windows::UI::Xaml::Printing::IPrintDocument>::remove_GetPreviewPage, GetPreviewPage(value));
}

template <typename D> void consume_Windows_UI_Xaml_Printing_IPrintDocument<D>::GetPreviewPage(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Printing::IPrintDocument)->remove_GetPreviewPage(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Printing_IPrintDocument<D>::AddPages(Windows::UI::Xaml::Printing::AddPagesEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Printing::IPrintDocument)->add_AddPages(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Printing::IPrintDocument> consume_Windows_UI_Xaml_Printing_IPrintDocument<D>::AddPages(auto_revoke_t, Windows::UI::Xaml::Printing::AddPagesEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Printing::IPrintDocument>(this, &abi_t<Windows::UI::Xaml::Printing::IPrintDocument>::remove_AddPages, AddPages(value));
}

template <typename D> void consume_Windows_UI_Xaml_Printing_IPrintDocument<D>::AddPages(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Printing::IPrintDocument)->remove_AddPages(get_abi(token)));
}

template <typename D> void consume_Windows_UI_Xaml_Printing_IPrintDocument<D>::AddPage(Windows::UI::Xaml::UIElement const& pageVisual) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Printing::IPrintDocument)->AddPage(get_abi(pageVisual)));
}

template <typename D> void consume_Windows_UI_Xaml_Printing_IPrintDocument<D>::AddPagesComplete() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Printing::IPrintDocument)->AddPagesComplete());
}

template <typename D> void consume_Windows_UI_Xaml_Printing_IPrintDocument<D>::SetPreviewPageCount(int32_t count, Windows::UI::Xaml::Printing::PreviewPageCountType const& type) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Printing::IPrintDocument)->SetPreviewPageCount(count, get_abi(type)));
}

template <typename D> void consume_Windows_UI_Xaml_Printing_IPrintDocument<D>::SetPreviewPage(int32_t pageNumber, Windows::UI::Xaml::UIElement const& pageVisual) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Printing::IPrintDocument)->SetPreviewPage(pageNumber, get_abi(pageVisual)));
}

template <typename D> void consume_Windows_UI_Xaml_Printing_IPrintDocument<D>::InvalidatePreview() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Printing::IPrintDocument)->InvalidatePreview());
}

template <typename D> Windows::UI::Xaml::Printing::PrintDocument consume_Windows_UI_Xaml_Printing_IPrintDocumentFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Printing::PrintDocument instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Printing::IPrintDocumentFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Printing_IPrintDocumentStatics<D>::DocumentSourceProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Printing::IPrintDocumentStatics)->get_DocumentSourceProperty(put_abi(value)));
    return value;
}

template <> struct delegate<Windows::UI::Xaml::Printing::AddPagesEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Printing::AddPagesEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Printing::AddPagesEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Printing::AddPagesEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Printing::GetPreviewPageEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Printing::GetPreviewPageEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Printing::GetPreviewPageEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Printing::GetPreviewPageEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Printing::PaginateEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Printing::PaginateEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Printing::PaginateEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Printing::PaginateEventArgs const*>(&e));
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
struct produce<D, Windows::UI::Xaml::Printing::IAddPagesEventArgs> : produce_base<D, Windows::UI::Xaml::Printing::IAddPagesEventArgs>
{
    HRESULT __stdcall get_PrintTaskOptions(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrintTaskOptions());
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
struct produce<D, Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs> : produce_base<D, Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs>
{
    HRESULT __stdcall get_PageNumber(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PageNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Printing::IPaginateEventArgs> : produce_base<D, Windows::UI::Xaml::Printing::IPaginateEventArgs>
{
    HRESULT __stdcall get_PrintTaskOptions(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrintTaskOptions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentPreviewPageNumber(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentPreviewPageNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Printing::IPrintDocument> : produce_base<D, Windows::UI::Xaml::Printing::IPrintDocument>
{
    HRESULT __stdcall get_DocumentSource(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DocumentSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Paginate(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Paginate(*reinterpret_cast<Windows::UI::Xaml::Printing::PaginateEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Paginate(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Paginate(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_GetPreviewPage(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().GetPreviewPage(*reinterpret_cast<Windows::UI::Xaml::Printing::GetPreviewPageEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_GetPreviewPage(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetPreviewPage(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AddPages(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AddPages(*reinterpret_cast<Windows::UI::Xaml::Printing::AddPagesEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AddPages(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddPages(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddPage(::IUnknown* pageVisual) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddPage(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&pageVisual));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddPagesComplete() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddPagesComplete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPreviewPageCount(int32_t count, abi_t<Windows::UI::Xaml::Printing::PreviewPageCountType> type) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPreviewPageCount(count, *reinterpret_cast<Windows::UI::Xaml::Printing::PreviewPageCountType const*>(&type));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPreviewPage(int32_t pageNumber, ::IUnknown* pageVisual) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPreviewPage(pageNumber, *reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&pageVisual));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InvalidatePreview() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InvalidatePreview();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Printing::IPrintDocumentFactory> : produce_base<D, Windows::UI::Xaml::Printing::IPrintDocumentFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Printing::IPrintDocumentStatics> : produce_base<D, Windows::UI::Xaml::Printing::IPrintDocumentStatics>
{
    HRESULT __stdcall get_DocumentSourceProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DocumentSourceProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Printing {

inline AddPagesEventArgs::AddPagesEventArgs() :
    AddPagesEventArgs(activate_instance<AddPagesEventArgs>())
{}

inline GetPreviewPageEventArgs::GetPreviewPageEventArgs() :
    GetPreviewPageEventArgs(activate_instance<GetPreviewPageEventArgs>())
{}

inline PaginateEventArgs::PaginateEventArgs() :
    PaginateEventArgs(activate_instance<PaginateEventArgs>())
{}

inline PrintDocument::PrintDocument()
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<PrintDocument, Windows::UI::Xaml::Printing::IPrintDocumentFactory>().CreateInstance(outer, inner));
}

inline Windows::UI::Xaml::DependencyProperty PrintDocument::DocumentSourceProperty()
{
    return get_activation_factory<PrintDocument, Windows::UI::Xaml::Printing::IPrintDocumentStatics>().DocumentSourceProperty();
}

template <typename L> AddPagesEventHandler::AddPagesEventHandler(L handler) :
    AddPagesEventHandler(impl::make_delegate<AddPagesEventHandler>(std::forward<L>(handler)))
{}

template <typename F> AddPagesEventHandler::AddPagesEventHandler(F* handler) :
    AddPagesEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> AddPagesEventHandler::AddPagesEventHandler(O* object, M method) :
    AddPagesEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void AddPagesEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Printing::AddPagesEventArgs const& e) const
{
    check_hresult((*(abi_t<AddPagesEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> GetPreviewPageEventHandler::GetPreviewPageEventHandler(L handler) :
    GetPreviewPageEventHandler(impl::make_delegate<GetPreviewPageEventHandler>(std::forward<L>(handler)))
{}

template <typename F> GetPreviewPageEventHandler::GetPreviewPageEventHandler(F* handler) :
    GetPreviewPageEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> GetPreviewPageEventHandler::GetPreviewPageEventHandler(O* object, M method) :
    GetPreviewPageEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void GetPreviewPageEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Printing::GetPreviewPageEventArgs const& e) const
{
    check_hresult((*(abi_t<GetPreviewPageEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> PaginateEventHandler::PaginateEventHandler(L handler) :
    PaginateEventHandler(impl::make_delegate<PaginateEventHandler>(std::forward<L>(handler)))
{}

template <typename F> PaginateEventHandler::PaginateEventHandler(F* handler) :
    PaginateEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> PaginateEventHandler::PaginateEventHandler(O* object, M method) :
    PaginateEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void PaginateEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Printing::PaginateEventArgs const& e) const
{
    check_hresult((*(abi_t<PaginateEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename D, typename ... Interfaces>
struct PrintDocumentT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Printing::IPrintDocument, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = PrintDocument;

protected:
    PrintDocumentT()
    {
        get_activation_factory<Windows::UI::Xaml::Printing::PrintDocument, Windows::UI::Xaml::Printing::IPrintDocumentFactory>().CreateInstance(*this, this->m_inner);
    }
};

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Xaml::Printing::IAddPagesEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Printing::IAddPagesEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Printing::IPaginateEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Printing::IPaginateEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Printing::IPrintDocument> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Printing::IPrintDocument> {};

template<> struct hash<winrt::Windows::UI::Xaml::Printing::IPrintDocumentFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Printing::IPrintDocumentFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Printing::IPrintDocumentStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Printing::IPrintDocumentStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Printing::AddPagesEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Printing::AddPagesEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Printing::GetPreviewPageEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Printing::GetPreviewPageEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Printing::PaginateEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Printing::PaginateEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Printing::PrintDocument> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Printing::PrintDocument> {};

}

WINRT_WARNING_POP
