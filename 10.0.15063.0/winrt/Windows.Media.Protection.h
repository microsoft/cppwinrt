// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Media.Playback.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Media.Protection.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> Windows::Media::Protection::RevocationAndRenewalInformation consume_Windows_Media_Protection_IComponentLoadFailedEventArgs<D>::Information() const
{
    Windows::Media::Protection::RevocationAndRenewalInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IComponentLoadFailedEventArgs)->get_Information(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Protection::MediaProtectionServiceCompletion consume_Windows_Media_Protection_IComponentLoadFailedEventArgs<D>::Completion() const
{
    Windows::Media::Protection::MediaProtectionServiceCompletion value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IComponentLoadFailedEventArgs)->get_Completion(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Protection::RenewalStatus, uint32_t> consume_Windows_Media_Protection_IComponentRenewalStatics<D>::RenewSystemComponentsAsync(Windows::Media::Protection::RevocationAndRenewalInformation const& information) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Protection::RenewalStatus, uint32_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IComponentRenewalStatics)->RenewSystemComponentsAsync(get_abi(information), put_abi(operation)));
    return operation;
}

template <typename D> bool consume_Windows_Media_Protection_IHdcpSession<D>::IsEffectiveProtectionAtLeast(Windows::Media::Protection::HdcpProtection const& protection) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IHdcpSession)->IsEffectiveProtectionAtLeast(get_abi(protection), &value));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Media::Protection::HdcpProtection> consume_Windows_Media_Protection_IHdcpSession<D>::GetEffectiveProtection() const
{
    Windows::Foundation::IReference<Windows::Media::Protection::HdcpProtection> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IHdcpSession)->GetEffectiveProtection(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Protection::HdcpSetProtectionResult> consume_Windows_Media_Protection_IHdcpSession<D>::SetDesiredMinProtectionAsync(Windows::Media::Protection::HdcpProtection const& protection) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Protection::HdcpSetProtectionResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IHdcpSession)->SetDesiredMinProtectionAsync(get_abi(protection), put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Protection_IHdcpSession<D>::ProtectionChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Protection::HdcpSession, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IHdcpSession)->add_ProtectionChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Protection::IHdcpSession> consume_Windows_Media_Protection_IHdcpSession<D>::ProtectionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Protection::HdcpSession, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Protection::IHdcpSession>(this, &abi_t<Windows::Media::Protection::IHdcpSession>::remove_ProtectionChanged, ProtectionChanged(handler));
}

template <typename D> void consume_Windows_Media_Protection_IHdcpSession<D>::ProtectionChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IHdcpSession)->remove_ProtectionChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Protection_IMediaProtectionManager<D>::ServiceRequested(Windows::Media::Protection::ServiceRequestedEventHandler const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IMediaProtectionManager)->add_ServiceRequested(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Media::Protection::IMediaProtectionManager> consume_Windows_Media_Protection_IMediaProtectionManager<D>::ServiceRequested(auto_revoke_t, Windows::Media::Protection::ServiceRequestedEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Protection::IMediaProtectionManager>(this, &abi_t<Windows::Media::Protection::IMediaProtectionManager>::remove_ServiceRequested, ServiceRequested(handler));
}

template <typename D> void consume_Windows_Media_Protection_IMediaProtectionManager<D>::ServiceRequested(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IMediaProtectionManager)->remove_ServiceRequested(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Media_Protection_IMediaProtectionManager<D>::RebootNeeded(Windows::Media::Protection::RebootNeededEventHandler const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IMediaProtectionManager)->add_RebootNeeded(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Media::Protection::IMediaProtectionManager> consume_Windows_Media_Protection_IMediaProtectionManager<D>::RebootNeeded(auto_revoke_t, Windows::Media::Protection::RebootNeededEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Protection::IMediaProtectionManager>(this, &abi_t<Windows::Media::Protection::IMediaProtectionManager>::remove_RebootNeeded, RebootNeeded(handler));
}

template <typename D> void consume_Windows_Media_Protection_IMediaProtectionManager<D>::RebootNeeded(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IMediaProtectionManager)->remove_RebootNeeded(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Media_Protection_IMediaProtectionManager<D>::ComponentLoadFailed(Windows::Media::Protection::ComponentLoadFailedEventHandler const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IMediaProtectionManager)->add_ComponentLoadFailed(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Media::Protection::IMediaProtectionManager> consume_Windows_Media_Protection_IMediaProtectionManager<D>::ComponentLoadFailed(auto_revoke_t, Windows::Media::Protection::ComponentLoadFailedEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Protection::IMediaProtectionManager>(this, &abi_t<Windows::Media::Protection::IMediaProtectionManager>::remove_ComponentLoadFailed, ComponentLoadFailed(handler));
}

template <typename D> void consume_Windows_Media_Protection_IMediaProtectionManager<D>::ComponentLoadFailed(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IMediaProtectionManager)->remove_ComponentLoadFailed(get_abi(cookie)));
}

template <typename D> Windows::Foundation::Collections::IPropertySet consume_Windows_Media_Protection_IMediaProtectionManager<D>::Properties() const
{
    Windows::Foundation::Collections::IPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IMediaProtectionManager)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IPropertySet consume_Windows_Media_Protection_IMediaProtectionPMPServer<D>::Properties() const
{
    Windows::Foundation::Collections::IPropertySet ppProperties{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IMediaProtectionPMPServer)->get_Properties(put_abi(ppProperties)));
    return ppProperties;
}

template <typename D> Windows::Media::Protection::MediaProtectionPMPServer consume_Windows_Media_Protection_IMediaProtectionPMPServerFactory<D>::CreatePMPServer(Windows::Foundation::Collections::IPropertySet const& pProperties) const
{
    Windows::Media::Protection::MediaProtectionPMPServer ppObject{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IMediaProtectionPMPServerFactory)->CreatePMPServer(get_abi(pProperties), put_abi(ppObject)));
    return ppObject;
}

template <typename D> void consume_Windows_Media_Protection_IMediaProtectionServiceCompletion<D>::Complete(bool success) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IMediaProtectionServiceCompletion)->Complete(success));
}

template <typename D> GUID consume_Windows_Media_Protection_IMediaProtectionServiceRequest<D>::ProtectionSystem() const
{
    GUID system{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IMediaProtectionServiceRequest)->get_ProtectionSystem(put_abi(system)));
    return system;
}

template <typename D> GUID consume_Windows_Media_Protection_IMediaProtectionServiceRequest<D>::Type() const
{
    GUID type{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IMediaProtectionServiceRequest)->get_Type(put_abi(type)));
    return type;
}

template <typename D> Windows::Media::Protection::ProtectionCapabilityResult consume_Windows_Media_Protection_IProtectionCapabilities<D>::IsTypeSupported(param::hstring const& type, param::hstring const& keySystem) const
{
    Windows::Media::Protection::ProtectionCapabilityResult value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IProtectionCapabilities)->IsTypeSupported(get_abi(type), get_abi(keySystem), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Media::Protection::RevocationAndRenewalItem> consume_Windows_Media_Protection_IRevocationAndRenewalInformation<D>::Items() const
{
    Windows::Foundation::Collections::IVector<Windows::Media::Protection::RevocationAndRenewalItem> items{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IRevocationAndRenewalInformation)->get_Items(put_abi(items)));
    return items;
}

template <typename D> Windows::Media::Protection::RevocationAndRenewalReasons consume_Windows_Media_Protection_IRevocationAndRenewalItem<D>::Reasons() const
{
    Windows::Media::Protection::RevocationAndRenewalReasons reasons{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IRevocationAndRenewalItem)->get_Reasons(put_abi(reasons)));
    return reasons;
}

template <typename D> hstring consume_Windows_Media_Protection_IRevocationAndRenewalItem<D>::HeaderHash() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IRevocationAndRenewalItem)->get_HeaderHash(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Protection_IRevocationAndRenewalItem<D>::PublicKeyHash() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IRevocationAndRenewalItem)->get_PublicKeyHash(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Protection_IRevocationAndRenewalItem<D>::Name() const
{
    hstring name{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IRevocationAndRenewalItem)->get_Name(put_abi(name)));
    return name;
}

template <typename D> hstring consume_Windows_Media_Protection_IRevocationAndRenewalItem<D>::RenewalId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IRevocationAndRenewalItem)->get_RenewalId(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Protection::IMediaProtectionServiceRequest consume_Windows_Media_Protection_IServiceRequestedEventArgs<D>::Request() const
{
    Windows::Media::Protection::IMediaProtectionServiceRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IServiceRequestedEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Protection::MediaProtectionServiceCompletion consume_Windows_Media_Protection_IServiceRequestedEventArgs<D>::Completion() const
{
    Windows::Media::Protection::MediaProtectionServiceCompletion value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IServiceRequestedEventArgs)->get_Completion(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem consume_Windows_Media_Protection_IServiceRequestedEventArgs2<D>::MediaPlaybackItem() const
{
    Windows::Media::Playback::MediaPlaybackItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::IServiceRequestedEventArgs2)->get_MediaPlaybackItem(put_abi(value)));
    return value;
}

template <> struct delegate<Windows::Media::Protection::ComponentLoadFailedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Media::Protection::ComponentLoadFailedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Media::Protection::ComponentLoadFailedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Media::Protection::MediaProtectionManager const*>(&sender), *reinterpret_cast<Windows::Media::Protection::ComponentLoadFailedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::Media::Protection::RebootNeededEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Media::Protection::RebootNeededEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Media::Protection::RebootNeededEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Media::Protection::MediaProtectionManager const*>(&sender));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::Media::Protection::ServiceRequestedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Media::Protection::ServiceRequestedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Media::Protection::ServiceRequestedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Media::Protection::MediaProtectionManager const*>(&sender), *reinterpret_cast<Windows::Media::Protection::ServiceRequestedEventArgs const*>(&e));
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
struct produce<D, Windows::Media::Protection::IComponentLoadFailedEventArgs> : produce_base<D, Windows::Media::Protection::IComponentLoadFailedEventArgs>
{
    HRESULT __stdcall get_Information(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Information());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Completion(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Completion());
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
    HRESULT __stdcall RenewSystemComponentsAsync(::IUnknown* information, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RenewSystemComponentsAsync(*reinterpret_cast<Windows::Media::Protection::RevocationAndRenewalInformation const*>(&information)));
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
    HRESULT __stdcall IsEffectiveProtectionAtLeast(abi_t<Windows::Media::Protection::HdcpProtection> protection, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEffectiveProtectionAtLeast(*reinterpret_cast<Windows::Media::Protection::HdcpProtection const*>(&protection)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetEffectiveProtection(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetEffectiveProtection());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetDesiredMinProtectionAsync(abi_t<Windows::Media::Protection::HdcpProtection> protection, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SetDesiredMinProtectionAsync(*reinterpret_cast<Windows::Media::Protection::HdcpProtection const*>(&protection)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ProtectionChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ProtectionChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Protection::HdcpSession, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ProtectionChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProtectionChanged(*reinterpret_cast<event_token const*>(&token));
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
    HRESULT __stdcall add_ServiceRequested(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().ServiceRequested(*reinterpret_cast<Windows::Media::Protection::ServiceRequestedEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ServiceRequested(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServiceRequested(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RebootNeeded(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().RebootNeeded(*reinterpret_cast<Windows::Media::Protection::RebootNeededEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RebootNeeded(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RebootNeeded(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ComponentLoadFailed(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().ComponentLoadFailed(*reinterpret_cast<Windows::Media::Protection::ComponentLoadFailedEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ComponentLoadFailed(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ComponentLoadFailed(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
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
    HRESULT __stdcall get_Properties(::IUnknown** ppProperties) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppProperties = detach_abi(this->shim().Properties());
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
    HRESULT __stdcall CreatePMPServer(::IUnknown* pProperties, ::IUnknown** ppObject) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppObject = detach_abi(this->shim().CreatePMPServer(*reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&pProperties)));
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
    HRESULT __stdcall Complete(bool success) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_ProtectionSystem(abi_t<GUID>* system) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *system = detach_abi(this->shim().ProtectionSystem());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(abi_t<GUID>* type) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *type = detach_abi(this->shim().Type());
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
    HRESULT __stdcall IsTypeSupported(HSTRING type, HSTRING keySystem, abi_t<Windows::Media::Protection::ProtectionCapabilityResult>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsTypeSupported(*reinterpret_cast<hstring const*>(&type), *reinterpret_cast<hstring const*>(&keySystem)));
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
    HRESULT __stdcall get_Items(::IUnknown** items) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *items = detach_abi(this->shim().Items());
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
    HRESULT __stdcall get_Reasons(abi_t<Windows::Media::Protection::RevocationAndRenewalReasons>* reasons) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *reasons = detach_abi(this->shim().Reasons());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeaderHash(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeaderHash());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PublicKeyHash(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PublicKeyHash());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(HSTRING* name) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *name = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *name = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RenewalId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RenewalId());
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
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Completion(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Completion());
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
    HRESULT __stdcall get_MediaPlaybackItem(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediaPlaybackItem());
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

WINRT_EXPORT namespace winrt::Windows::Media::Protection {

inline Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Protection::RenewalStatus, uint32_t> ComponentRenewal::RenewSystemComponentsAsync(Windows::Media::Protection::RevocationAndRenewalInformation const& information)
{
    return get_activation_factory<ComponentRenewal, Windows::Media::Protection::IComponentRenewalStatics>().RenewSystemComponentsAsync(information);
}

inline HdcpSession::HdcpSession() :
    HdcpSession(activate_instance<HdcpSession>())
{}

inline MediaProtectionManager::MediaProtectionManager() :
    MediaProtectionManager(activate_instance<MediaProtectionManager>())
{}

inline MediaProtectionPMPServer::MediaProtectionPMPServer(Windows::Foundation::Collections::IPropertySet const& pProperties) :
    MediaProtectionPMPServer(get_activation_factory<MediaProtectionPMPServer, Windows::Media::Protection::IMediaProtectionPMPServerFactory>().CreatePMPServer(pProperties))
{}

inline ProtectionCapabilities::ProtectionCapabilities() :
    ProtectionCapabilities(activate_instance<ProtectionCapabilities>())
{}

template <typename L> ComponentLoadFailedEventHandler::ComponentLoadFailedEventHandler(L handler) :
    ComponentLoadFailedEventHandler(impl::make_delegate<ComponentLoadFailedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> ComponentLoadFailedEventHandler::ComponentLoadFailedEventHandler(F* handler) :
    ComponentLoadFailedEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> ComponentLoadFailedEventHandler::ComponentLoadFailedEventHandler(O* object, M method) :
    ComponentLoadFailedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void ComponentLoadFailedEventHandler::operator()(Windows::Media::Protection::MediaProtectionManager const& sender, Windows::Media::Protection::ComponentLoadFailedEventArgs const& e) const
{
    check_hresult((*(abi_t<ComponentLoadFailedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> RebootNeededEventHandler::RebootNeededEventHandler(L handler) :
    RebootNeededEventHandler(impl::make_delegate<RebootNeededEventHandler>(std::forward<L>(handler)))
{}

template <typename F> RebootNeededEventHandler::RebootNeededEventHandler(F* handler) :
    RebootNeededEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> RebootNeededEventHandler::RebootNeededEventHandler(O* object, M method) :
    RebootNeededEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void RebootNeededEventHandler::operator()(Windows::Media::Protection::MediaProtectionManager const& sender) const
{
    check_hresult((*(abi_t<RebootNeededEventHandler>**)this)->Invoke(get_abi(sender)));
}

template <typename L> ServiceRequestedEventHandler::ServiceRequestedEventHandler(L handler) :
    ServiceRequestedEventHandler(impl::make_delegate<ServiceRequestedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> ServiceRequestedEventHandler::ServiceRequestedEventHandler(F* handler) :
    ServiceRequestedEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> ServiceRequestedEventHandler::ServiceRequestedEventHandler(O* object, M method) :
    ServiceRequestedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void ServiceRequestedEventHandler::operator()(Windows::Media::Protection::MediaProtectionManager const& sender, Windows::Media::Protection::ServiceRequestedEventArgs const& e) const
{
    check_hresult((*(abi_t<ServiceRequestedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::Protection::IComponentLoadFailedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Protection::IComponentLoadFailedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Protection::IComponentRenewalStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Protection::IComponentRenewalStatics> {};

template<> struct hash<winrt::Windows::Media::Protection::IHdcpSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Protection::IHdcpSession> {};

template<> struct hash<winrt::Windows::Media::Protection::IMediaProtectionManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Protection::IMediaProtectionManager> {};

template<> struct hash<winrt::Windows::Media::Protection::IMediaProtectionPMPServer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Protection::IMediaProtectionPMPServer> {};

template<> struct hash<winrt::Windows::Media::Protection::IMediaProtectionPMPServerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Protection::IMediaProtectionPMPServerFactory> {};

template<> struct hash<winrt::Windows::Media::Protection::IMediaProtectionServiceCompletion> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Protection::IMediaProtectionServiceCompletion> {};

template<> struct hash<winrt::Windows::Media::Protection::IMediaProtectionServiceRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Protection::IMediaProtectionServiceRequest> {};

template<> struct hash<winrt::Windows::Media::Protection::IProtectionCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Protection::IProtectionCapabilities> {};

template<> struct hash<winrt::Windows::Media::Protection::IRevocationAndRenewalInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Protection::IRevocationAndRenewalInformation> {};

template<> struct hash<winrt::Windows::Media::Protection::IRevocationAndRenewalItem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Protection::IRevocationAndRenewalItem> {};

template<> struct hash<winrt::Windows::Media::Protection::IServiceRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Protection::IServiceRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Protection::IServiceRequestedEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Protection::IServiceRequestedEventArgs2> {};

template<> struct hash<winrt::Windows::Media::Protection::ComponentLoadFailedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Protection::ComponentLoadFailedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Protection::ComponentRenewal> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Protection::ComponentRenewal> {};

template<> struct hash<winrt::Windows::Media::Protection::HdcpSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Protection::HdcpSession> {};

template<> struct hash<winrt::Windows::Media::Protection::MediaProtectionManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Protection::MediaProtectionManager> {};

template<> struct hash<winrt::Windows::Media::Protection::MediaProtectionPMPServer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Protection::MediaProtectionPMPServer> {};

template<> struct hash<winrt::Windows::Media::Protection::MediaProtectionServiceCompletion> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Protection::MediaProtectionServiceCompletion> {};

template<> struct hash<winrt::Windows::Media::Protection::ProtectionCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Protection::ProtectionCapabilities> {};

template<> struct hash<winrt::Windows::Media::Protection::RevocationAndRenewalInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Protection::RevocationAndRenewalInformation> {};

template<> struct hash<winrt::Windows::Media::Protection::RevocationAndRenewalItem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Protection::RevocationAndRenewalItem> {};

template<> struct hash<winrt::Windows::Media::Protection::ServiceRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Protection::ServiceRequestedEventArgs> {};

}

WINRT_WARNING_POP
