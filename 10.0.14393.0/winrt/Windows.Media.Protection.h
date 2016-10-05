// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Media.Playback.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Media.Protection.3.h"
#include "Windows.Media.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Media::Protection {

template <typename L> ComponentLoadFailedEventHandler::ComponentLoadFailedEventHandler(L lambda) :
    ComponentLoadFailedEventHandler(impl::make_delegate<impl_ComponentLoadFailedEventHandler<L>, ComponentLoadFailedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> ComponentLoadFailedEventHandler::ComponentLoadFailedEventHandler(F * function) :
    ComponentLoadFailedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> ComponentLoadFailedEventHandler::ComponentLoadFailedEventHandler(O * object, M method) :
    ComponentLoadFailedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void ComponentLoadFailedEventHandler::operator()(const Windows::Media::Protection::MediaProtectionManager & sender, const Windows::Media::Protection::ComponentLoadFailedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> RebootNeededEventHandler::RebootNeededEventHandler(L lambda) :
    RebootNeededEventHandler(impl::make_delegate<impl_RebootNeededEventHandler<L>, RebootNeededEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> RebootNeededEventHandler::RebootNeededEventHandler(F * function) :
    RebootNeededEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> RebootNeededEventHandler::RebootNeededEventHandler(O * object, M method) :
    RebootNeededEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void RebootNeededEventHandler::operator()(const Windows::Media::Protection::MediaProtectionManager & sender) const
{
    check_hresult((*this)->abi_Invoke(get(sender)));
}

template <typename L> ServiceRequestedEventHandler::ServiceRequestedEventHandler(L lambda) :
    ServiceRequestedEventHandler(impl::make_delegate<impl_ServiceRequestedEventHandler<L>, ServiceRequestedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> ServiceRequestedEventHandler::ServiceRequestedEventHandler(F * function) :
    ServiceRequestedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> ServiceRequestedEventHandler::ServiceRequestedEventHandler(O * object, M method) :
    ServiceRequestedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void ServiceRequestedEventHandler::operator()(const Windows::Media::Protection::MediaProtectionManager & sender, const Windows::Media::Protection::ServiceRequestedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::Media::Protection::IComponentLoadFailedEventArgs> : produce_base<D, Windows::Media::Protection::IComponentLoadFailedEventArgs>
{
    HRESULT __stdcall get_Information(abi_arg_out<Windows::Media::Protection::IRevocationAndRenewalInformation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Information());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Completion(abi_arg_out<Windows::Media::Protection::IMediaProtectionServiceCompletion> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Completion());
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
struct produce<D, Windows::Media::Protection::IComponentRenewalStatics> : produce_base<D, Windows::Media::Protection::IComponentRenewalStatics>
{
    HRESULT __stdcall abi_RenewSystemComponentsAsync(abi_arg_in<Windows::Media::Protection::IRevocationAndRenewalInformation> information, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Media::Protection::RenewalStatus, uint32_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RenewSystemComponentsAsync(*reinterpret_cast<const Windows::Media::Protection::RevocationAndRenewalInformation *>(&information)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::IHdcpSession> : produce_base<D, Windows::Media::Protection::IHdcpSession>
{
    HRESULT __stdcall abi_IsEffectiveProtectionAtLeast(Windows::Media::Protection::HdcpProtection protection, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsEffectiveProtectionAtLeast(protection));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetEffectiveProtection(abi_arg_out<Windows::Foundation::IReference<winrt::Windows::Media::Protection::HdcpProtection>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetEffectiveProtection());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetDesiredMinProtectionAsync(Windows::Media::Protection::HdcpProtection protection, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Protection::HdcpSetProtectionResult>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SetDesiredMinProtectionAsync(protection));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ProtectionChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Protection::HdcpSession, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ProtectionChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Protection::HdcpSession, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ProtectionChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().ProtectionChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::IMediaProtectionManager> : produce_base<D, Windows::Media::Protection::IMediaProtectionManager>
{
    HRESULT __stdcall add_ServiceRequested(abi_arg_in<Windows::Media::Protection::ServiceRequestedEventHandler> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().ServiceRequested(*reinterpret_cast<const Windows::Media::Protection::ServiceRequestedEventHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ServiceRequested(event_token cookie) noexcept override
    {
        try
        {
            this->shim().ServiceRequested(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RebootNeeded(abi_arg_in<Windows::Media::Protection::RebootNeededEventHandler> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().RebootNeeded(*reinterpret_cast<const Windows::Media::Protection::RebootNeededEventHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RebootNeeded(event_token cookie) noexcept override
    {
        try
        {
            this->shim().RebootNeeded(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ComponentLoadFailed(abi_arg_in<Windows::Media::Protection::ComponentLoadFailedEventHandler> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().ComponentLoadFailed(*reinterpret_cast<const Windows::Media::Protection::ComponentLoadFailedEventHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ComponentLoadFailed(event_token cookie) noexcept override
    {
        try
        {
            this->shim().ComponentLoadFailed(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Properties());
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
struct produce<D, Windows::Media::Protection::IMediaProtectionPMPServer> : produce_base<D, Windows::Media::Protection::IMediaProtectionPMPServer>
{
    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IPropertySet> ppProperties) noexcept override
    {
        try
        {
            *ppProperties = detach(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *ppProperties = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::IMediaProtectionPMPServerFactory> : produce_base<D, Windows::Media::Protection::IMediaProtectionPMPServerFactory>
{
    HRESULT __stdcall abi_CreatePMPServer(abi_arg_in<Windows::Foundation::Collections::IPropertySet> pProperties, abi_arg_out<Windows::Media::Protection::IMediaProtectionPMPServer> ppObject) noexcept override
    {
        try
        {
            *ppObject = detach(this->shim().CreatePMPServer(*reinterpret_cast<const Windows::Foundation::Collections::IPropertySet *>(&pProperties)));
            return S_OK;
        }
        catch (...)
        {
            *ppObject = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::IMediaProtectionServiceCompletion> : produce_base<D, Windows::Media::Protection::IMediaProtectionServiceCompletion>
{
    HRESULT __stdcall abi_Complete(bool success) noexcept override
    {
        try
        {
            this->shim().Complete(success);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::IMediaProtectionServiceRequest> : produce_base<D, Windows::Media::Protection::IMediaProtectionServiceRequest>
{
    HRESULT __stdcall get_ProtectionSystem(GUID * system) noexcept override
    {
        try
        {
            *system = detach(this->shim().ProtectionSystem());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(GUID * type) noexcept override
    {
        try
        {
            *type = detach(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::IProtectionCapabilities> : produce_base<D, Windows::Media::Protection::IProtectionCapabilities>
{
    HRESULT __stdcall abi_IsTypeSupported(abi_arg_in<hstring> type, abi_arg_in<hstring> keySystem, Windows::Media::Protection::ProtectionCapabilityResult * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsTypeSupported(*reinterpret_cast<const hstring *>(&type), *reinterpret_cast<const hstring *>(&keySystem)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::IRevocationAndRenewalInformation> : produce_base<D, Windows::Media::Protection::IRevocationAndRenewalInformation>
{
    HRESULT __stdcall get_Items(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Media::Protection::RevocationAndRenewalItem>> items) noexcept override
    {
        try
        {
            *items = detach(this->shim().Items());
            return S_OK;
        }
        catch (...)
        {
            *items = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::IRevocationAndRenewalItem> : produce_base<D, Windows::Media::Protection::IRevocationAndRenewalItem>
{
    HRESULT __stdcall get_Reasons(Windows::Media::Protection::RevocationAndRenewalReasons * reasons) noexcept override
    {
        try
        {
            *reasons = detach(this->shim().Reasons());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeaderHash(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HeaderHash());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PublicKeyHash(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PublicKeyHash());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(abi_arg_out<hstring> name) noexcept override
    {
        try
        {
            *name = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *name = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RenewalId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RenewalId());
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
struct produce<D, Windows::Media::Protection::IServiceRequestedEventArgs> : produce_base<D, Windows::Media::Protection::IServiceRequestedEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::Media::Protection::IMediaProtectionServiceRequest> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Completion(abi_arg_out<Windows::Media::Protection::IMediaProtectionServiceCompletion> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Completion());
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
struct produce<D, Windows::Media::Protection::IServiceRequestedEventArgs2> : produce_base<D, Windows::Media::Protection::IServiceRequestedEventArgs2>
{
    HRESULT __stdcall get_MediaPlaybackItem(abi_arg_out<Windows::Media::Playback::IMediaPlaybackItem> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediaPlaybackItem());
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

namespace Windows::Media::Protection {

template <typename D> event_token impl_IMediaProtectionManager<D>::ServiceRequested(const Windows::Media::Protection::ServiceRequestedEventHandler & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IMediaProtectionManager &>(static_cast<const D &>(*this))->add_ServiceRequested(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMediaProtectionManager> impl_IMediaProtectionManager<D>::ServiceRequested(auto_revoke_t, const Windows::Media::Protection::ServiceRequestedEventHandler & handler) const
{
    return impl::make_event_revoker<D, IMediaProtectionManager>(this, &ABI::Windows::Media::Protection::IMediaProtectionManager::remove_ServiceRequested, ServiceRequested(handler));
}

template <typename D> void impl_IMediaProtectionManager<D>::ServiceRequested(event_token cookie) const
{
    check_hresult(static_cast<const IMediaProtectionManager &>(static_cast<const D &>(*this))->remove_ServiceRequested(cookie));
}

template <typename D> event_token impl_IMediaProtectionManager<D>::RebootNeeded(const Windows::Media::Protection::RebootNeededEventHandler & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IMediaProtectionManager &>(static_cast<const D &>(*this))->add_RebootNeeded(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMediaProtectionManager> impl_IMediaProtectionManager<D>::RebootNeeded(auto_revoke_t, const Windows::Media::Protection::RebootNeededEventHandler & handler) const
{
    return impl::make_event_revoker<D, IMediaProtectionManager>(this, &ABI::Windows::Media::Protection::IMediaProtectionManager::remove_RebootNeeded, RebootNeeded(handler));
}

template <typename D> void impl_IMediaProtectionManager<D>::RebootNeeded(event_token cookie) const
{
    check_hresult(static_cast<const IMediaProtectionManager &>(static_cast<const D &>(*this))->remove_RebootNeeded(cookie));
}

template <typename D> event_token impl_IMediaProtectionManager<D>::ComponentLoadFailed(const Windows::Media::Protection::ComponentLoadFailedEventHandler & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IMediaProtectionManager &>(static_cast<const D &>(*this))->add_ComponentLoadFailed(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMediaProtectionManager> impl_IMediaProtectionManager<D>::ComponentLoadFailed(auto_revoke_t, const Windows::Media::Protection::ComponentLoadFailedEventHandler & handler) const
{
    return impl::make_event_revoker<D, IMediaProtectionManager>(this, &ABI::Windows::Media::Protection::IMediaProtectionManager::remove_ComponentLoadFailed, ComponentLoadFailed(handler));
}

template <typename D> void impl_IMediaProtectionManager<D>::ComponentLoadFailed(event_token cookie) const
{
    check_hresult(static_cast<const IMediaProtectionManager &>(static_cast<const D &>(*this))->remove_ComponentLoadFailed(cookie));
}

template <typename D> Windows::Foundation::Collections::IPropertySet impl_IMediaProtectionManager<D>::Properties() const
{
    Windows::Foundation::Collections::IPropertySet value;
    check_hresult(static_cast<const IMediaProtectionManager &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> void impl_IMediaProtectionServiceCompletion<D>::Complete(bool success) const
{
    check_hresult(static_cast<const IMediaProtectionServiceCompletion &>(static_cast<const D &>(*this))->abi_Complete(success));
}

template <typename D> Windows::Media::Protection::IMediaProtectionServiceRequest impl_IServiceRequestedEventArgs<D>::Request() const
{
    Windows::Media::Protection::IMediaProtectionServiceRequest value;
    check_hresult(static_cast<const IServiceRequestedEventArgs &>(static_cast<const D &>(*this))->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Media::Protection::MediaProtectionServiceCompletion impl_IServiceRequestedEventArgs<D>::Completion() const
{
    Windows::Media::Protection::MediaProtectionServiceCompletion value { nullptr };
    check_hresult(static_cast<const IServiceRequestedEventArgs &>(static_cast<const D &>(*this))->get_Completion(put(value)));
    return value;
}

template <typename D> GUID impl_IMediaProtectionServiceRequest<D>::ProtectionSystem() const
{
    GUID system {};
    check_hresult(static_cast<const IMediaProtectionServiceRequest &>(static_cast<const D &>(*this))->get_ProtectionSystem(&system));
    return system;
}

template <typename D> GUID impl_IMediaProtectionServiceRequest<D>::Type() const
{
    GUID type {};
    check_hresult(static_cast<const IMediaProtectionServiceRequest &>(static_cast<const D &>(*this))->get_Type(&type));
    return type;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem impl_IServiceRequestedEventArgs2<D>::MediaPlaybackItem() const
{
    Windows::Media::Playback::MediaPlaybackItem value { nullptr };
    check_hresult(static_cast<const IServiceRequestedEventArgs2 &>(static_cast<const D &>(*this))->get_MediaPlaybackItem(put(value)));
    return value;
}

template <typename D> Windows::Media::Protection::RevocationAndRenewalInformation impl_IComponentLoadFailedEventArgs<D>::Information() const
{
    Windows::Media::Protection::RevocationAndRenewalInformation value { nullptr };
    check_hresult(static_cast<const IComponentLoadFailedEventArgs &>(static_cast<const D &>(*this))->get_Information(put(value)));
    return value;
}

template <typename D> Windows::Media::Protection::MediaProtectionServiceCompletion impl_IComponentLoadFailedEventArgs<D>::Completion() const
{
    Windows::Media::Protection::MediaProtectionServiceCompletion value { nullptr };
    check_hresult(static_cast<const IComponentLoadFailedEventArgs &>(static_cast<const D &>(*this))->get_Completion(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Media::Protection::RevocationAndRenewalItem> impl_IRevocationAndRenewalInformation<D>::Items() const
{
    Windows::Foundation::Collections::IVector<Windows::Media::Protection::RevocationAndRenewalItem> items;
    check_hresult(static_cast<const IRevocationAndRenewalInformation &>(static_cast<const D &>(*this))->get_Items(put(items)));
    return items;
}

template <typename D> Windows::Media::Protection::RevocationAndRenewalReasons impl_IRevocationAndRenewalItem<D>::Reasons() const
{
    Windows::Media::Protection::RevocationAndRenewalReasons reasons {};
    check_hresult(static_cast<const IRevocationAndRenewalItem &>(static_cast<const D &>(*this))->get_Reasons(&reasons));
    return reasons;
}

template <typename D> hstring impl_IRevocationAndRenewalItem<D>::HeaderHash() const
{
    hstring value;
    check_hresult(static_cast<const IRevocationAndRenewalItem &>(static_cast<const D &>(*this))->get_HeaderHash(put(value)));
    return value;
}

template <typename D> hstring impl_IRevocationAndRenewalItem<D>::PublicKeyHash() const
{
    hstring value;
    check_hresult(static_cast<const IRevocationAndRenewalItem &>(static_cast<const D &>(*this))->get_PublicKeyHash(put(value)));
    return value;
}

template <typename D> hstring impl_IRevocationAndRenewalItem<D>::Name() const
{
    hstring name;
    check_hresult(static_cast<const IRevocationAndRenewalItem &>(static_cast<const D &>(*this))->get_Name(put(name)));
    return name;
}

template <typename D> hstring impl_IRevocationAndRenewalItem<D>::RenewalId() const
{
    hstring value;
    check_hresult(static_cast<const IRevocationAndRenewalItem &>(static_cast<const D &>(*this))->get_RenewalId(put(value)));
    return value;
}

template <typename D> Windows::Media::Protection::MediaProtectionPMPServer impl_IMediaProtectionPMPServerFactory<D>::CreatePMPServer(const Windows::Foundation::Collections::IPropertySet & pProperties) const
{
    Windows::Media::Protection::MediaProtectionPMPServer ppObject { nullptr };
    check_hresult(static_cast<const IMediaProtectionPMPServerFactory &>(static_cast<const D &>(*this))->abi_CreatePMPServer(get(pProperties), put(ppObject)));
    return ppObject;
}

template <typename D> Windows::Foundation::Collections::IPropertySet impl_IMediaProtectionPMPServer<D>::Properties() const
{
    Windows::Foundation::Collections::IPropertySet ppProperties;
    check_hresult(static_cast<const IMediaProtectionPMPServer &>(static_cast<const D &>(*this))->get_Properties(put(ppProperties)));
    return ppProperties;
}

template <typename D> Windows::Media::Protection::ProtectionCapabilityResult impl_IProtectionCapabilities<D>::IsTypeSupported(hstring_ref type, hstring_ref keySystem) const
{
    Windows::Media::Protection::ProtectionCapabilityResult value {};
    check_hresult(static_cast<const IProtectionCapabilities &>(static_cast<const D &>(*this))->abi_IsTypeSupported(get(type), get(keySystem), &value));
    return value;
}

template <typename D> bool impl_IHdcpSession<D>::IsEffectiveProtectionAtLeast(Windows::Media::Protection::HdcpProtection protection) const
{
    bool value {};
    check_hresult(static_cast<const IHdcpSession &>(static_cast<const D &>(*this))->abi_IsEffectiveProtectionAtLeast(protection, &value));
    return value;
}

template <typename D> Windows::Foundation::IReference<winrt::Windows::Media::Protection::HdcpProtection> impl_IHdcpSession<D>::GetEffectiveProtection() const
{
    Windows::Foundation::IReference<winrt::Windows::Media::Protection::HdcpProtection> value;
    check_hresult(static_cast<const IHdcpSession &>(static_cast<const D &>(*this))->abi_GetEffectiveProtection(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Protection::HdcpSetProtectionResult> impl_IHdcpSession<D>::SetDesiredMinProtectionAsync(Windows::Media::Protection::HdcpProtection protection) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Protection::HdcpSetProtectionResult> value;
    check_hresult(static_cast<const IHdcpSession &>(static_cast<const D &>(*this))->abi_SetDesiredMinProtectionAsync(protection, put(value)));
    return value;
}

template <typename D> event_token impl_IHdcpSession<D>::ProtectionChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Protection::HdcpSession, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IHdcpSession &>(static_cast<const D &>(*this))->add_ProtectionChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IHdcpSession> impl_IHdcpSession<D>::ProtectionChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Protection::HdcpSession, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IHdcpSession>(this, &ABI::Windows::Media::Protection::IHdcpSession::remove_ProtectionChanged, ProtectionChanged(handler));
}

template <typename D> void impl_IHdcpSession<D>::ProtectionChanged(event_token token) const
{
    check_hresult(static_cast<const IHdcpSession &>(static_cast<const D &>(*this))->remove_ProtectionChanged(token));
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Media::Protection::RenewalStatus, uint32_t> impl_IComponentRenewalStatics<D>::RenewSystemComponentsAsync(const Windows::Media::Protection::RevocationAndRenewalInformation & information) const
{
    Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Media::Protection::RenewalStatus, uint32_t> operation;
    check_hresult(static_cast<const IComponentRenewalStatics &>(static_cast<const D &>(*this))->abi_RenewSystemComponentsAsync(get(information), put(operation)));
    return operation;
}

inline Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Media::Protection::RenewalStatus, uint32_t> ComponentRenewal::RenewSystemComponentsAsync(const Windows::Media::Protection::RevocationAndRenewalInformation & information)
{
    return get_activation_factory<ComponentRenewal, IComponentRenewalStatics>().RenewSystemComponentsAsync(information);
}

inline HdcpSession::HdcpSession() :
    HdcpSession(activate_instance<HdcpSession>())
{}

inline MediaProtectionManager::MediaProtectionManager() :
    MediaProtectionManager(activate_instance<MediaProtectionManager>())
{}

inline MediaProtectionPMPServer::MediaProtectionPMPServer(const Windows::Foundation::Collections::IPropertySet & pProperties) :
    MediaProtectionPMPServer(get_activation_factory<MediaProtectionPMPServer, IMediaProtectionPMPServerFactory>().CreatePMPServer(pProperties))
{}

inline ProtectionCapabilities::ProtectionCapabilities() :
    ProtectionCapabilities(activate_instance<ProtectionCapabilities>())
{}

}

}
