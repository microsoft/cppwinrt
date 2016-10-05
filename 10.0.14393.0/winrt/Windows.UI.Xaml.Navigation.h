// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.UI.Xaml.Interop.3.h"
#include "internal/Windows.UI.Xaml.Media.Animation.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.UI.Xaml.3.h"
#include "internal/Windows.UI.Xaml.Navigation.3.h"
#include "Windows.UI.Xaml.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Navigation {

template <typename L> LoadCompletedEventHandler::LoadCompletedEventHandler(L lambda) :
    LoadCompletedEventHandler(impl::make_delegate<impl_LoadCompletedEventHandler<L>, LoadCompletedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> LoadCompletedEventHandler::LoadCompletedEventHandler(F * function) :
    LoadCompletedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> LoadCompletedEventHandler::LoadCompletedEventHandler(O * object, M method) :
    LoadCompletedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void LoadCompletedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Navigation::NavigationEventArgs & e) const
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

inline void NavigatedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Navigation::NavigationEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> NavigatingCancelEventHandler::NavigatingCancelEventHandler(L lambda) :
    NavigatingCancelEventHandler(impl::make_delegate<impl_NavigatingCancelEventHandler<L>, NavigatingCancelEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> NavigatingCancelEventHandler::NavigatingCancelEventHandler(F * function) :
    NavigatingCancelEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> NavigatingCancelEventHandler::NavigatingCancelEventHandler(O * object, M method) :
    NavigatingCancelEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void NavigatingCancelEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> NavigationFailedEventHandler::NavigationFailedEventHandler(L lambda) :
    NavigationFailedEventHandler(impl::make_delegate<impl_NavigationFailedEventHandler<L>, NavigationFailedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> NavigationFailedEventHandler::NavigationFailedEventHandler(F * function) :
    NavigationFailedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> NavigationFailedEventHandler::NavigationFailedEventHandler(O * object, M method) :
    NavigationFailedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void NavigationFailedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Navigation::NavigationFailedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> NavigationStoppedEventHandler::NavigationStoppedEventHandler(L lambda) :
    NavigationStoppedEventHandler(impl::make_delegate<impl_NavigationStoppedEventHandler<L>, NavigationStoppedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> NavigationStoppedEventHandler::NavigationStoppedEventHandler(F * function) :
    NavigationStoppedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> NavigationStoppedEventHandler::NavigationStoppedEventHandler(O * object, M method) :
    NavigationStoppedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void NavigationStoppedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Navigation::NavigationEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs> : produce_base<D, Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs>
{
    HRESULT __stdcall get_Cancel(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Cancel());
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
            this->shim().Cancel(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NavigationMode(Windows::UI::Xaml::Navigation::NavigationMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NavigationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourcePageType(abi_arg_out<Windows::UI::Xaml::Interop::TypeName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourcePageType());
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
    HRESULT __stdcall get_Parameter(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Parameter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NavigationTransitionInfo(abi_arg_out<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NavigationTransitionInfo());
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
    HRESULT __stdcall get_Content(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Parameter(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Parameter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourcePageType(abi_arg_out<Windows::UI::Xaml::Interop::TypeName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourcePageType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NavigationMode(Windows::UI::Xaml::Navigation::NavigationMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NavigationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Uri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().Uri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
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
    HRESULT __stdcall get_NavigationTransitionInfo(abi_arg_out<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NavigationTransitionInfo());
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
    HRESULT __stdcall get_Exception(HRESULT * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Exception());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Handled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Handled());
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
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourcePageType(abi_arg_out<Windows::UI::Xaml::Interop::TypeName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourcePageType());
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
    HRESULT __stdcall get_SourcePageType(abi_arg_out<Windows::UI::Xaml::Interop::TypeName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourcePageType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Parameter(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Parameter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NavigationTransitionInfo(abi_arg_out<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NavigationTransitionInfo());
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
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::UI::Xaml::Interop::TypeName> sourcePageType, abi_arg_in<Windows::IInspectable> parameter, abi_arg_in<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo> navigationTransitionInfo, abi_arg_out<Windows::UI::Xaml::Navigation::IPageStackEntry> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::UI::Xaml::Interop::TypeName *>(&sourcePageType), *reinterpret_cast<const Windows::IInspectable *>(&parameter), *reinterpret_cast<const Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo *>(&navigationTransitionInfo)));
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
    HRESULT __stdcall get_SourcePageTypeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourcePageTypeProperty());
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

namespace Windows::UI::Xaml::Navigation {

template <typename D> bool impl_INavigatingCancelEventArgs<D>::Cancel() const
{
    bool value {};
    check_hresult(static_cast<const INavigatingCancelEventArgs &>(static_cast<const D &>(*this))->get_Cancel(&value));
    return value;
}

template <typename D> void impl_INavigatingCancelEventArgs<D>::Cancel(bool value) const
{
    check_hresult(static_cast<const INavigatingCancelEventArgs &>(static_cast<const D &>(*this))->put_Cancel(value));
}

template <typename D> Windows::UI::Xaml::Navigation::NavigationMode impl_INavigatingCancelEventArgs<D>::NavigationMode() const
{
    Windows::UI::Xaml::Navigation::NavigationMode value {};
    check_hresult(static_cast<const INavigatingCancelEventArgs &>(static_cast<const D &>(*this))->get_NavigationMode(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Interop::TypeName impl_INavigatingCancelEventArgs<D>::SourcePageType() const
{
    Windows::UI::Xaml::Interop::TypeName value {};
    check_hresult(static_cast<const INavigatingCancelEventArgs &>(static_cast<const D &>(*this))->get_SourcePageType(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_INavigatingCancelEventArgs2<D>::Parameter() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const INavigatingCancelEventArgs2 &>(static_cast<const D &>(*this))->get_Parameter(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo impl_INavigatingCancelEventArgs2<D>::NavigationTransitionInfo() const
{
    Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo value { nullptr };
    check_hresult(static_cast<const INavigatingCancelEventArgs2 &>(static_cast<const D &>(*this))->get_NavigationTransitionInfo(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_INavigationEventArgs<D>::Content() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const INavigationEventArgs &>(static_cast<const D &>(*this))->get_Content(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_INavigationEventArgs<D>::Parameter() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const INavigationEventArgs &>(static_cast<const D &>(*this))->get_Parameter(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Interop::TypeName impl_INavigationEventArgs<D>::SourcePageType() const
{
    Windows::UI::Xaml::Interop::TypeName value {};
    check_hresult(static_cast<const INavigationEventArgs &>(static_cast<const D &>(*this))->get_SourcePageType(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Navigation::NavigationMode impl_INavigationEventArgs<D>::NavigationMode() const
{
    Windows::UI::Xaml::Navigation::NavigationMode value {};
    check_hresult(static_cast<const INavigationEventArgs &>(static_cast<const D &>(*this))->get_NavigationMode(&value));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_INavigationEventArgs<D>::Uri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const INavigationEventArgs &>(static_cast<const D &>(*this))->get_Uri(put(value)));
    return value;
}

template <typename D> void impl_INavigationEventArgs<D>::Uri(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const INavigationEventArgs &>(static_cast<const D &>(*this))->put_Uri(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo impl_INavigationEventArgs2<D>::NavigationTransitionInfo() const
{
    Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo value { nullptr };
    check_hresult(static_cast<const INavigationEventArgs2 &>(static_cast<const D &>(*this))->get_NavigationTransitionInfo(put(value)));
    return value;
}

template <typename D> HRESULT impl_INavigationFailedEventArgs<D>::Exception() const
{
    HRESULT value {};
    check_hresult(static_cast<const INavigationFailedEventArgs &>(static_cast<const D &>(*this))->get_Exception(&value));
    return value;
}

template <typename D> bool impl_INavigationFailedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const INavigationFailedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_INavigationFailedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const INavigationFailedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> Windows::UI::Xaml::Interop::TypeName impl_INavigationFailedEventArgs<D>::SourcePageType() const
{
    Windows::UI::Xaml::Interop::TypeName value {};
    check_hresult(static_cast<const INavigationFailedEventArgs &>(static_cast<const D &>(*this))->get_SourcePageType(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Interop::TypeName impl_IPageStackEntry<D>::SourcePageType() const
{
    Windows::UI::Xaml::Interop::TypeName value {};
    check_hresult(static_cast<const IPageStackEntry &>(static_cast<const D &>(*this))->get_SourcePageType(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_IPageStackEntry<D>::Parameter() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IPageStackEntry &>(static_cast<const D &>(*this))->get_Parameter(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo impl_IPageStackEntry<D>::NavigationTransitionInfo() const
{
    Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo value { nullptr };
    check_hresult(static_cast<const IPageStackEntry &>(static_cast<const D &>(*this))->get_NavigationTransitionInfo(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPageStackEntryStatics<D>::SourcePageTypeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPageStackEntryStatics &>(static_cast<const D &>(*this))->get_SourcePageTypeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Navigation::PageStackEntry impl_IPageStackEntryFactory<D>::CreateInstance(const Windows::UI::Xaml::Interop::TypeName & sourcePageType, const Windows::IInspectable & parameter, const Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo & navigationTransitionInfo) const
{
    Windows::UI::Xaml::Navigation::PageStackEntry instance { nullptr };
    check_hresult(static_cast<const IPageStackEntryFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(sourcePageType), get(parameter), get(navigationTransitionInfo), put(instance)));
    return instance;
}

inline PageStackEntry::PageStackEntry(const Windows::UI::Xaml::Interop::TypeName & sourcePageType, const Windows::IInspectable & parameter, const Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo & navigationTransitionInfo) :
    PageStackEntry(get_activation_factory<PageStackEntry, IPageStackEntryFactory>().CreateInstance(sourcePageType, parameter, navigationTransitionInfo))
{}

inline Windows::UI::Xaml::DependencyProperty PageStackEntry::SourcePageTypeProperty()
{
    return get_activation_factory<PageStackEntry, IPageStackEntryStatics>().SourcePageTypeProperty();
}

}

}
