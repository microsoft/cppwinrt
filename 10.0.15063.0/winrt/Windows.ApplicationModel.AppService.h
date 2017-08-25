// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.ApplicationModel.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.System.RemoteSystems.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.ApplicationModel.AppService.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> consume_Windows_ApplicationModel_AppService_IAppServiceCatalogStatics<D>::FindAppServiceProvidersAsync(param::hstring const& appServiceName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceCatalogStatics)->FindAppServiceProvidersAsync(get_abi(appServiceName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::AppService::AppServiceClosedStatus consume_Windows_ApplicationModel_AppService_IAppServiceClosedEventArgs<D>::Status() const
{
    Windows::ApplicationModel::AppService::AppServiceClosedStatus value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs)->get_Status(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_AppService_IAppServiceConnection<D>::AppServiceName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceConnection)->get_AppServiceName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_AppService_IAppServiceConnection<D>::AppServiceName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceConnection)->put_AppServiceName(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_AppService_IAppServiceConnection<D>::PackageFamilyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceConnection)->get_PackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_AppService_IAppServiceConnection<D>::PackageFamilyName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceConnection)->put_PackageFamilyName(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceConnectionStatus> consume_Windows_ApplicationModel_AppService_IAppServiceConnection<D>::OpenAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceConnectionStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceConnection)->OpenAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponse> consume_Windows_ApplicationModel_AppService_IAppServiceConnection<D>::SendMessageAsync(Windows::Foundation::Collections::ValueSet const& message) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponse> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceConnection)->SendMessageAsync(get_abi(message), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_ApplicationModel_AppService_IAppServiceConnection<D>::RequestReceived(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceConnection)->add_RequestReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::AppService::IAppServiceConnection> consume_Windows_ApplicationModel_AppService_IAppServiceConnection<D>::RequestReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::AppService::IAppServiceConnection>(this, &abi_t<Windows::ApplicationModel::AppService::IAppServiceConnection>::remove_RequestReceived, RequestReceived(handler));
}

template <typename D> void consume_Windows_ApplicationModel_AppService_IAppServiceConnection<D>::RequestReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceConnection)->remove_RequestReceived(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_AppService_IAppServiceConnection<D>::ServiceClosed(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceClosedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceConnection)->add_ServiceClosed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::AppService::IAppServiceConnection> consume_Windows_ApplicationModel_AppService_IAppServiceConnection<D>::ServiceClosed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceClosedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::AppService::IAppServiceConnection>(this, &abi_t<Windows::ApplicationModel::AppService::IAppServiceConnection>::remove_ServiceClosed, ServiceClosed(handler));
}

template <typename D> void consume_Windows_ApplicationModel_AppService_IAppServiceConnection<D>::ServiceClosed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceConnection)->remove_ServiceClosed(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceConnectionStatus> consume_Windows_ApplicationModel_AppService_IAppServiceConnection2<D>::OpenRemoteAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceConnectionStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceConnection2)->OpenRemoteAsync(get_abi(remoteSystemConnectionRequest), put_abi(operation)));
    return operation;
}

template <typename D> Windows::System::User consume_Windows_ApplicationModel_AppService_IAppServiceConnection2<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceConnection2)->get_User(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_AppService_IAppServiceConnection2<D>::User(Windows::System::User const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceConnection2)->put_User(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_AppService_IAppServiceDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceDeferral)->Complete());
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_ApplicationModel_AppService_IAppServiceRequest<D>::Message() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceRequest)->get_Message(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponseStatus> consume_Windows_ApplicationModel_AppService_IAppServiceRequest<D>::SendResponseAsync(Windows::Foundation::Collections::ValueSet const& message) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponseStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceRequest)->SendResponseAsync(get_abi(message), put_abi(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::AppService::AppServiceRequest consume_Windows_ApplicationModel_AppService_IAppServiceRequestReceivedEventArgs<D>::Request() const
{
    Windows::ApplicationModel::AppService::AppServiceRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::AppService::AppServiceDeferral consume_Windows_ApplicationModel_AppService_IAppServiceRequestReceivedEventArgs<D>::GetDeferral() const
{
    Windows::ApplicationModel::AppService::AppServiceDeferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_ApplicationModel_AppService_IAppServiceResponse<D>::Message() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceResponse)->get_Message(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::AppService::AppServiceResponseStatus consume_Windows_ApplicationModel_AppService_IAppServiceResponse<D>::Status() const
{
    Windows::ApplicationModel::AppService::AppServiceResponseStatus value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceResponse)->get_Status(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_AppService_IAppServiceTriggerDetails<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceTriggerDetails)->get_Name(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_AppService_IAppServiceTriggerDetails<D>::CallerPackageFamilyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceTriggerDetails)->get_CallerPackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::AppService::AppServiceConnection consume_Windows_ApplicationModel_AppService_IAppServiceTriggerDetails<D>::AppServiceConnection() const
{
    Windows::ApplicationModel::AppService::AppServiceConnection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceTriggerDetails)->get_AppServiceConnection(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_AppService_IAppServiceTriggerDetails2<D>::IsRemoteSystemConnection() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::AppService::IAppServiceTriggerDetails2)->get_IsRemoteSystemConnection(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::AppService::IAppServiceCatalogStatics> : produce_base<D, Windows::ApplicationModel::AppService::IAppServiceCatalogStatics>
{
    HRESULT __stdcall FindAppServiceProvidersAsync(HSTRING appServiceName, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindAppServiceProvidersAsync(*reinterpret_cast<hstring const*>(&appServiceName)));
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
struct produce<D, Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs> : produce_base<D, Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs>
{
    HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::AppService::AppServiceClosedStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::AppService::IAppServiceConnection> : produce_base<D, Windows::ApplicationModel::AppService::IAppServiceConnection>
{
    HRESULT __stdcall get_AppServiceName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppServiceName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AppServiceName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppServiceName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PackageFamilyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PackageFamilyName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageFamilyName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall OpenAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().OpenAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendMessageAsync(::IUnknown* message, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SendMessageAsync(*reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&message)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RequestReceived(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RequestReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RequestReceived(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ServiceClosed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ServiceClosed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceClosedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ServiceClosed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServiceClosed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::AppService::IAppServiceConnection2> : produce_base<D, Windows::ApplicationModel::AppService::IAppServiceConnection2>
{
    HRESULT __stdcall OpenRemoteAsync(::IUnknown* remoteSystemConnectionRequest, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().OpenRemoteAsync(*reinterpret_cast<Windows::System::RemoteSystems::RemoteSystemConnectionRequest const*>(&remoteSystemConnectionRequest)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().User());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_User(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().User(*reinterpret_cast<Windows::System::User const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::AppService::IAppServiceDeferral> : produce_base<D, Windows::ApplicationModel::AppService::IAppServiceDeferral>
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
struct produce<D, Windows::ApplicationModel::AppService::IAppServiceRequest> : produce_base<D, Windows::ApplicationModel::AppService::IAppServiceRequest>
{
    HRESULT __stdcall get_Message(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendResponseAsync(::IUnknown* message, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SendResponseAsync(*reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&message)));
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
struct produce<D, Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs> : produce_base<D, Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs>
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

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::AppService::IAppServiceResponse> : produce_base<D, Windows::ApplicationModel::AppService::IAppServiceResponse>
{
    HRESULT __stdcall get_Message(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::AppService::AppServiceResponseStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::AppService::IAppServiceTriggerDetails> : produce_base<D, Windows::ApplicationModel::AppService::IAppServiceTriggerDetails>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CallerPackageFamilyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CallerPackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppServiceConnection(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppServiceConnection());
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
struct produce<D, Windows::ApplicationModel::AppService::IAppServiceTriggerDetails2> : produce_base<D, Windows::ApplicationModel::AppService::IAppServiceTriggerDetails2>
{
    HRESULT __stdcall get_IsRemoteSystemConnection(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsRemoteSystemConnection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::AppService {

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> AppServiceCatalog::FindAppServiceProvidersAsync(param::hstring const& appServiceName)
{
    return get_activation_factory<AppServiceCatalog, Windows::ApplicationModel::AppService::IAppServiceCatalogStatics>().FindAppServiceProvidersAsync(appServiceName);
}

inline AppServiceConnection::AppServiceConnection() :
    AppServiceConnection(activate_instance<AppServiceConnection>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::AppService::IAppServiceCatalogStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::AppService::IAppServiceCatalogStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::AppService::IAppServiceConnection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::AppService::IAppServiceConnection> {};

template<> struct hash<winrt::Windows::ApplicationModel::AppService::IAppServiceConnection2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::AppService::IAppServiceConnection2> {};

template<> struct hash<winrt::Windows::ApplicationModel::AppService::IAppServiceDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::AppService::IAppServiceDeferral> {};

template<> struct hash<winrt::Windows::ApplicationModel::AppService::IAppServiceRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::AppService::IAppServiceRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::AppService::IAppServiceResponse> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::AppService::IAppServiceResponse> {};

template<> struct hash<winrt::Windows::ApplicationModel::AppService::IAppServiceTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::AppService::IAppServiceTriggerDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::AppService::IAppServiceTriggerDetails2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::AppService::IAppServiceTriggerDetails2> {};

template<> struct hash<winrt::Windows::ApplicationModel::AppService::AppServiceCatalog> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::AppService::AppServiceCatalog> {};

template<> struct hash<winrt::Windows::ApplicationModel::AppService::AppServiceClosedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::AppService::AppServiceClosedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::AppService::AppServiceConnection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::AppService::AppServiceConnection> {};

template<> struct hash<winrt::Windows::ApplicationModel::AppService::AppServiceDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::AppService::AppServiceDeferral> {};

template<> struct hash<winrt::Windows::ApplicationModel::AppService::AppServiceRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::AppService::AppServiceRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::AppService::AppServiceResponse> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::AppService::AppServiceResponse> {};

template<> struct hash<winrt::Windows::ApplicationModel::AppService::AppServiceTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::AppService::AppServiceTriggerDetails> {};

}

WINRT_WARNING_POP
