// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.System.RemoteSystems.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.System.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.ApplicationModel.AppService.3.h"
#include "Windows.ApplicationModel.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::AppService::IAppServiceCatalogStatics> : produce_base<D, Windows::ApplicationModel::AppService::IAppServiceCatalogStatics>
{
    HRESULT __stdcall abi_FindAppServiceProvidersAsync(abi_arg_in<hstring> appServiceName, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FindAppServiceProvidersAsync(*reinterpret_cast<const hstring *>(&appServiceName)));
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
    HRESULT __stdcall get_Status(Windows::ApplicationModel::AppService::AppServiceClosedStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
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
    HRESULT __stdcall get_AppServiceName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppServiceName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AppServiceName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().AppServiceName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PackageFamilyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PackageFamilyName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().PackageFamilyName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OpenAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::AppService::AppServiceConnectionStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().OpenAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendMessageAsync(abi_arg_in<Windows::Foundation::Collections::IPropertySet> message, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponse>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SendMessageAsync(*reinterpret_cast<const Windows::Foundation::Collections::ValueSet *>(&message)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RequestReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().RequestReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RequestReceived(event_token token) noexcept override
    {
        try
        {
            this->shim().RequestReceived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ServiceClosed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceClosedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ServiceClosed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceClosedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ServiceClosed(event_token token) noexcept override
    {
        try
        {
            this->shim().ServiceClosed(token);
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
    HRESULT __stdcall abi_OpenRemoteAsync(abi_arg_in<Windows::System::RemoteSystems::IRemoteSystemConnectionRequest> remoteSystemConnectionRequest, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::AppService::AppServiceConnectionStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().OpenRemoteAsync(*reinterpret_cast<const Windows::System::RemoteSystems::RemoteSystemConnectionRequest *>(&remoteSystemConnectionRequest)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(abi_arg_out<Windows::System::IUser> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().User());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_User(abi_arg_in<Windows::System::IUser> value) noexcept override
    {
        try
        {
            this->shim().User(*reinterpret_cast<const Windows::System::User *>(&value));
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
struct produce<D, Windows::ApplicationModel::AppService::IAppServiceRequest> : produce_base<D, Windows::ApplicationModel::AppService::IAppServiceRequest>
{
    HRESULT __stdcall get_Message(abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendResponseAsync(abi_arg_in<Windows::Foundation::Collections::IPropertySet> message, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::AppService::AppServiceResponseStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SendResponseAsync(*reinterpret_cast<const Windows::Foundation::Collections::ValueSet *>(&message)));
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
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::AppService::IAppServiceRequest> value) noexcept override
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

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::ApplicationModel::AppService::IAppServiceDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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
    HRESULT __stdcall get_Message(abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::ApplicationModel::AppService::AppServiceResponseStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
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
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CallerPackageFamilyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CallerPackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppServiceConnection(abi_arg_out<Windows::ApplicationModel::AppService::IAppServiceConnection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppServiceConnection());
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
    HRESULT __stdcall get_IsRemoteSystemConnection(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsRemoteSystemConnection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::AppService {

template <typename D> void impl_IAppServiceDeferral<D>::Complete() const
{
    check_hresult(static_cast<const IAppServiceDeferral &>(static_cast<const D &>(*this))->abi_Complete());
}

template <typename D> Windows::ApplicationModel::AppService::AppServiceClosedStatus impl_IAppServiceClosedEventArgs<D>::Status() const
{
    Windows::ApplicationModel::AppService::AppServiceClosedStatus value {};
    check_hresult(static_cast<const IAppServiceClosedEventArgs &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::AppService::AppServiceRequest impl_IAppServiceRequestReceivedEventArgs<D>::Request() const
{
    Windows::ApplicationModel::AppService::AppServiceRequest value { nullptr };
    check_hresult(static_cast<const IAppServiceRequestReceivedEventArgs &>(static_cast<const D &>(*this))->get_Request(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::AppService::AppServiceDeferral impl_IAppServiceRequestReceivedEventArgs<D>::GetDeferral() const
{
    Windows::ApplicationModel::AppService::AppServiceDeferral value { nullptr };
    check_hresult(static_cast<const IAppServiceRequestReceivedEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::AppService::AppServiceConnectionStatus> impl_IAppServiceConnection2<D>::OpenRemoteAsync(const Windows::System::RemoteSystems::RemoteSystemConnectionRequest & remoteSystemConnectionRequest) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::AppService::AppServiceConnectionStatus> operation;
    check_hresult(static_cast<const IAppServiceConnection2 &>(static_cast<const D &>(*this))->abi_OpenRemoteAsync(get(remoteSystemConnectionRequest), put(operation)));
    return operation;
}

template <typename D> Windows::System::User impl_IAppServiceConnection2<D>::User() const
{
    Windows::System::User value { nullptr };
    check_hresult(static_cast<const IAppServiceConnection2 &>(static_cast<const D &>(*this))->get_User(put(value)));
    return value;
}

template <typename D> void impl_IAppServiceConnection2<D>::User(const Windows::System::User & value) const
{
    check_hresult(static_cast<const IAppServiceConnection2 &>(static_cast<const D &>(*this))->put_User(get(value)));
}

template <typename D> hstring impl_IAppServiceTriggerDetails<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IAppServiceTriggerDetails &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> hstring impl_IAppServiceTriggerDetails<D>::CallerPackageFamilyName() const
{
    hstring value;
    check_hresult(static_cast<const IAppServiceTriggerDetails &>(static_cast<const D &>(*this))->get_CallerPackageFamilyName(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::AppService::AppServiceConnection impl_IAppServiceTriggerDetails<D>::AppServiceConnection() const
{
    Windows::ApplicationModel::AppService::AppServiceConnection value { nullptr };
    check_hresult(static_cast<const IAppServiceTriggerDetails &>(static_cast<const D &>(*this))->get_AppServiceConnection(put(value)));
    return value;
}

template <typename D> bool impl_IAppServiceTriggerDetails2<D>::IsRemoteSystemConnection() const
{
    bool value {};
    check_hresult(static_cast<const IAppServiceTriggerDetails2 &>(static_cast<const D &>(*this))->get_IsRemoteSystemConnection(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::ValueSet impl_IAppServiceRequest<D>::Message() const
{
    Windows::Foundation::Collections::ValueSet value { nullptr };
    check_hresult(static_cast<const IAppServiceRequest &>(static_cast<const D &>(*this))->get_Message(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::AppService::AppServiceResponseStatus> impl_IAppServiceRequest<D>::SendResponseAsync(const Windows::Foundation::Collections::ValueSet & message) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::AppService::AppServiceResponseStatus> operation;
    check_hresult(static_cast<const IAppServiceRequest &>(static_cast<const D &>(*this))->abi_SendResponseAsync(get(message), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::ValueSet impl_IAppServiceResponse<D>::Message() const
{
    Windows::Foundation::Collections::ValueSet value { nullptr };
    check_hresult(static_cast<const IAppServiceResponse &>(static_cast<const D &>(*this))->get_Message(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::AppService::AppServiceResponseStatus impl_IAppServiceResponse<D>::Status() const
{
    Windows::ApplicationModel::AppService::AppServiceResponseStatus value {};
    check_hresult(static_cast<const IAppServiceResponse &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> impl_IAppServiceCatalogStatics<D>::FindAppServiceProvidersAsync(hstring_ref appServiceName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> operation;
    check_hresult(static_cast<const IAppServiceCatalogStatics &>(static_cast<const D &>(*this))->abi_FindAppServiceProvidersAsync(get(appServiceName), put(operation)));
    return operation;
}

template <typename D> hstring impl_IAppServiceConnection<D>::AppServiceName() const
{
    hstring value;
    check_hresult(static_cast<const IAppServiceConnection &>(static_cast<const D &>(*this))->get_AppServiceName(put(value)));
    return value;
}

template <typename D> void impl_IAppServiceConnection<D>::AppServiceName(hstring_ref value) const
{
    check_hresult(static_cast<const IAppServiceConnection &>(static_cast<const D &>(*this))->put_AppServiceName(get(value)));
}

template <typename D> hstring impl_IAppServiceConnection<D>::PackageFamilyName() const
{
    hstring value;
    check_hresult(static_cast<const IAppServiceConnection &>(static_cast<const D &>(*this))->get_PackageFamilyName(put(value)));
    return value;
}

template <typename D> void impl_IAppServiceConnection<D>::PackageFamilyName(hstring_ref value) const
{
    check_hresult(static_cast<const IAppServiceConnection &>(static_cast<const D &>(*this))->put_PackageFamilyName(get(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::AppService::AppServiceConnectionStatus> impl_IAppServiceConnection<D>::OpenAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::AppService::AppServiceConnectionStatus> operation;
    check_hresult(static_cast<const IAppServiceConnection &>(static_cast<const D &>(*this))->abi_OpenAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponse> impl_IAppServiceConnection<D>::SendMessageAsync(const Windows::Foundation::Collections::ValueSet & message) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponse> operation;
    check_hresult(static_cast<const IAppServiceConnection &>(static_cast<const D &>(*this))->abi_SendMessageAsync(get(message), put(operation)));
    return operation;
}

template <typename D> event_token impl_IAppServiceConnection<D>::RequestReceived(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAppServiceConnection &>(static_cast<const D &>(*this))->add_RequestReceived(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppServiceConnection> impl_IAppServiceConnection<D>::RequestReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAppServiceConnection>(this, &ABI::Windows::ApplicationModel::AppService::IAppServiceConnection::remove_RequestReceived, RequestReceived(handler));
}

template <typename D> void impl_IAppServiceConnection<D>::RequestReceived(event_token token) const
{
    check_hresult(static_cast<const IAppServiceConnection &>(static_cast<const D &>(*this))->remove_RequestReceived(token));
}

template <typename D> event_token impl_IAppServiceConnection<D>::ServiceClosed(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceClosedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAppServiceConnection &>(static_cast<const D &>(*this))->add_ServiceClosed(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppServiceConnection> impl_IAppServiceConnection<D>::ServiceClosed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceClosedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAppServiceConnection>(this, &ABI::Windows::ApplicationModel::AppService::IAppServiceConnection::remove_ServiceClosed, ServiceClosed(handler));
}

template <typename D> void impl_IAppServiceConnection<D>::ServiceClosed(event_token token) const
{
    check_hresult(static_cast<const IAppServiceConnection &>(static_cast<const D &>(*this))->remove_ServiceClosed(token));
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> AppServiceCatalog::FindAppServiceProvidersAsync(hstring_ref appServiceName)
{
    return get_activation_factory<AppServiceCatalog, IAppServiceCatalogStatics>().FindAppServiceProvidersAsync(appServiceName);
}

inline AppServiceConnection::AppServiceConnection() :
    AppServiceConnection(activate_instance<AppServiceConnection>())
{}

}

}
