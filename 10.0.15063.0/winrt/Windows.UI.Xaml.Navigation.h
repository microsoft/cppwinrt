// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.2.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Animation.2.h"
#include "winrt/impl/Windows.UI.Xaml.Navigation.2.h"
#include "winrt/Windows.UI.Xaml.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_UI_Xaml_Navigation_INavigatingCancelEventArgs<D>::Cancel() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs)->get_Cancel(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Navigation_INavigatingCancelEventArgs<D>::Cancel(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs)->put_Cancel(value));
}

template <typename D> Windows::UI::Xaml::Navigation::NavigationMode consume_Windows_UI_Xaml_Navigation_INavigatingCancelEventArgs<D>::NavigationMode() const
{
    Windows::UI::Xaml::Navigation::NavigationMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs)->get_NavigationMode(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Interop::TypeName consume_Windows_UI_Xaml_Navigation_INavigatingCancelEventArgs<D>::SourcePageType() const
{
    Windows::UI::Xaml::Interop::TypeName value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs)->get_SourcePageType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Navigation_INavigatingCancelEventArgs2<D>::Parameter() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2)->get_Parameter(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo consume_Windows_UI_Xaml_Navigation_INavigatingCancelEventArgs2<D>::NavigationTransitionInfo() const
{
    Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2)->get_NavigationTransitionInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Navigation_INavigationEventArgs<D>::Content() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Navigation::INavigationEventArgs)->get_Content(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Navigation_INavigationEventArgs<D>::Parameter() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Navigation::INavigationEventArgs)->get_Parameter(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Interop::TypeName consume_Windows_UI_Xaml_Navigation_INavigationEventArgs<D>::SourcePageType() const
{
    Windows::UI::Xaml::Interop::TypeName value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Navigation::INavigationEventArgs)->get_SourcePageType(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Navigation::NavigationMode consume_Windows_UI_Xaml_Navigation_INavigationEventArgs<D>::NavigationMode() const
{
    Windows::UI::Xaml::Navigation::NavigationMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Navigation::INavigationEventArgs)->get_NavigationMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_Xaml_Navigation_INavigationEventArgs<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Navigation::INavigationEventArgs)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Navigation_INavigationEventArgs<D>::Uri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Navigation::INavigationEventArgs)->put_Uri(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo consume_Windows_UI_Xaml_Navigation_INavigationEventArgs2<D>::NavigationTransitionInfo() const
{
    Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Navigation::INavigationEventArgs2)->get_NavigationTransitionInfo(put_abi(value)));
    return value;
}

template <typename D> HRESULT consume_Windows_UI_Xaml_Navigation_INavigationFailedEventArgs<D>::Exception() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Navigation::INavigationFailedEventArgs)->get_Exception(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Navigation_INavigationFailedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Navigation::INavigationFailedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Navigation_INavigationFailedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Navigation::INavigationFailedEventArgs)->put_Handled(value));
}

template <typename D> Windows::UI::Xaml::Interop::TypeName consume_Windows_UI_Xaml_Navigation_INavigationFailedEventArgs<D>::SourcePageType() const
{
    Windows::UI::Xaml::Interop::TypeName value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Navigation::INavigationFailedEventArgs)->get_SourcePageType(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Interop::TypeName consume_Windows_UI_Xaml_Navigation_IPageStackEntry<D>::SourcePageType() const
{
    Windows::UI::Xaml::Interop::TypeName value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Navigation::IPageStackEntry)->get_SourcePageType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Navigation_IPageStackEntry<D>::Parameter() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Navigation::IPageStackEntry)->get_Parameter(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo consume_Windows_UI_Xaml_Navigation_IPageStackEntry<D>::NavigationTransitionInfo() const
{
    Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Navigation::IPageStackEntry)->get_NavigationTransitionInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Navigation::PageStackEntry consume_Windows_UI_Xaml_Navigation_IPageStackEntryFactory<D>::CreateInstance(Windows::UI::Xaml::Interop::TypeName const& sourcePageType, Windows::Foundation::IInspectable const& parameter, Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo const& navigationTransitionInfo) const
{
    Windows::UI::Xaml::Navigation::PageStackEntry instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Navigation::IPageStackEntryFactory)->CreateInstance(get_abi(sourcePageType), get_abi(parameter), get_abi(navigationTransitionInfo), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Navigation_IPageStackEntryStatics<D>::SourcePageTypeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Navigation::IPageStackEntryStatics)->get_SourcePageTypeProperty(put_abi(value)));
    return value;
}

template <> struct delegate<Windows::UI::Xaml::Navigation::LoadCompletedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Navigation::LoadCompletedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Navigation::LoadCompletedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Navigation::NavigationEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Navigation::NavigatedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Navigation::NavigatedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Navigation::NavigatedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Navigation::NavigationEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Navigation::NavigatingCancelEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Navigation::NavigatingCancelEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Navigation::NavigatingCancelEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Navigation::NavigationFailedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Navigation::NavigationFailedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Navigation::NavigationFailedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Navigation::NavigationFailedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Navigation::NavigationStoppedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Navigation::NavigationStoppedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Navigation::NavigationStoppedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Navigation::NavigationEventArgs const*>(&e));
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
struct produce<D, Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs> : produce_base<D, Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs>
{
    HRESULT __stdcall get_Cancel(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Cancel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Cancel(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Cancel(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NavigationMode(abi_t<Windows::UI::Xaml::Navigation::NavigationMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NavigationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourcePageType(abi_t<Windows::UI::Xaml::Interop::TypeName>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourcePageType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2> : produce_base<D, Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2>
{
    HRESULT __stdcall get_Parameter(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Parameter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NavigationTransitionInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NavigationTransitionInfo());
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
struct produce<D, Windows::UI::Xaml::Navigation::INavigationEventArgs> : produce_base<D, Windows::UI::Xaml::Navigation::INavigationEventArgs>
{
    HRESULT __stdcall get_Content(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Parameter(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Parameter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourcePageType(abi_t<Windows::UI::Xaml::Interop::TypeName>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourcePageType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NavigationMode(abi_t<Windows::UI::Xaml::Navigation::NavigationMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NavigationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Uri(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Uri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Navigation::INavigationEventArgs2> : produce_base<D, Windows::UI::Xaml::Navigation::INavigationEventArgs2>
{
    HRESULT __stdcall get_NavigationTransitionInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NavigationTransitionInfo());
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
struct produce<D, Windows::UI::Xaml::Navigation::INavigationFailedEventArgs> : produce_base<D, Windows::UI::Xaml::Navigation::INavigationFailedEventArgs>
{
    HRESULT __stdcall get_Exception(abi_t<HRESULT>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Exception());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Handled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourcePageType(abi_t<Windows::UI::Xaml::Interop::TypeName>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourcePageType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Navigation::IPageStackEntry> : produce_base<D, Windows::UI::Xaml::Navigation::IPageStackEntry>
{
    HRESULT __stdcall get_SourcePageType(abi_t<Windows::UI::Xaml::Interop::TypeName>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourcePageType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Parameter(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Parameter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NavigationTransitionInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NavigationTransitionInfo());
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
struct produce<D, Windows::UI::Xaml::Navigation::IPageStackEntryFactory> : produce_base<D, Windows::UI::Xaml::Navigation::IPageStackEntryFactory>
{
    HRESULT __stdcall CreateInstance(abi_t<Windows::UI::Xaml::Interop::TypeName> sourcePageType, ::IUnknown* parameter, ::IUnknown* navigationTransitionInfo, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::UI::Xaml::Interop::TypeName const*>(&sourcePageType), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&parameter), *reinterpret_cast<Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo const*>(&navigationTransitionInfo)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Navigation::IPageStackEntryStatics> : produce_base<D, Windows::UI::Xaml::Navigation::IPageStackEntryStatics>
{
    HRESULT __stdcall get_SourcePageTypeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourcePageTypeProperty());
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

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Navigation {

inline PageStackEntry::PageStackEntry(Windows::UI::Xaml::Interop::TypeName const& sourcePageType, Windows::Foundation::IInspectable const& parameter, Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo const& navigationTransitionInfo) :
    PageStackEntry(get_activation_factory<PageStackEntry, Windows::UI::Xaml::Navigation::IPageStackEntryFactory>().CreateInstance(sourcePageType, parameter, navigationTransitionInfo))
{}

inline Windows::UI::Xaml::DependencyProperty PageStackEntry::SourcePageTypeProperty()
{
    return get_activation_factory<PageStackEntry, Windows::UI::Xaml::Navigation::IPageStackEntryStatics>().SourcePageTypeProperty();
}

template <typename L> LoadCompletedEventHandler::LoadCompletedEventHandler(L handler) :
    LoadCompletedEventHandler(impl::make_delegate<LoadCompletedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> LoadCompletedEventHandler::LoadCompletedEventHandler(F* handler) :
    LoadCompletedEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> LoadCompletedEventHandler::LoadCompletedEventHandler(O* object, M method) :
    LoadCompletedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void LoadCompletedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Navigation::NavigationEventArgs const& e) const
{
    check_hresult((*(abi_t<LoadCompletedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
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

inline void NavigatedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Navigation::NavigationEventArgs const& e) const
{
    check_hresult((*(abi_t<NavigatedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> NavigatingCancelEventHandler::NavigatingCancelEventHandler(L handler) :
    NavigatingCancelEventHandler(impl::make_delegate<NavigatingCancelEventHandler>(std::forward<L>(handler)))
{}

template <typename F> NavigatingCancelEventHandler::NavigatingCancelEventHandler(F* handler) :
    NavigatingCancelEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> NavigatingCancelEventHandler::NavigatingCancelEventHandler(O* object, M method) :
    NavigatingCancelEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void NavigatingCancelEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs const& e) const
{
    check_hresult((*(abi_t<NavigatingCancelEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> NavigationFailedEventHandler::NavigationFailedEventHandler(L handler) :
    NavigationFailedEventHandler(impl::make_delegate<NavigationFailedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> NavigationFailedEventHandler::NavigationFailedEventHandler(F* handler) :
    NavigationFailedEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> NavigationFailedEventHandler::NavigationFailedEventHandler(O* object, M method) :
    NavigationFailedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void NavigationFailedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Navigation::NavigationFailedEventArgs const& e) const
{
    check_hresult((*(abi_t<NavigationFailedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> NavigationStoppedEventHandler::NavigationStoppedEventHandler(L handler) :
    NavigationStoppedEventHandler(impl::make_delegate<NavigationStoppedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> NavigationStoppedEventHandler::NavigationStoppedEventHandler(F* handler) :
    NavigationStoppedEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> NavigationStoppedEventHandler::NavigationStoppedEventHandler(O* object, M method) :
    NavigationStoppedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void NavigationStoppedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Navigation::NavigationEventArgs const& e) const
{
    check_hresult((*(abi_t<NavigationStoppedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Navigation::INavigationEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Navigation::INavigationEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Navigation::INavigationEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Navigation::INavigationEventArgs2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Navigation::INavigationFailedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Navigation::INavigationFailedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Navigation::IPageStackEntry> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Navigation::IPageStackEntry> {};

template<> struct hash<winrt::Windows::UI::Xaml::Navigation::IPageStackEntryFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Navigation::IPageStackEntryFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Navigation::IPageStackEntryStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Navigation::IPageStackEntryStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Navigation::NavigationFailedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Navigation::NavigationFailedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Navigation::PageStackEntry> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Navigation::PageStackEntry> {};

}

WINRT_WARNING_POP
