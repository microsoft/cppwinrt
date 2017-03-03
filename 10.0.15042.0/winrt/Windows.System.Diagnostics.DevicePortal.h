// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Web.Http.3.h"
#include "internal/Windows.ApplicationModel.AppService.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.System.Diagnostics.DevicePortal.3.h"
#include "Windows.System.Diagnostics.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection> : produce_base<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection>
{
    HRESULT __stdcall add_Closed(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Closed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Closed(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Closed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RequestReceived(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RequestReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs> *>(&handler)));
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
            typename D::abi_guard guard(this->shim());
            this->shim().RequestReceived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs> : produce_base<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs>
{
    HRESULT __stdcall get_Reason(Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedReason * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Reason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs> : produce_base<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs>
{
    HRESULT __stdcall get_RequestMessage(impl::abi_arg_out<Windows::Web::Http::IHttpRequestMessage> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestMessage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResponseMessage(impl::abi_arg_out<Windows::Web::Http::IHttpResponseMessage> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResponseMessage());
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
struct produce<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionStatics> : produce_base<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionStatics>
{
    HRESULT __stdcall abi_GetForAppServiceConnection(impl::abi_arg_in<Windows::ApplicationModel::AppService::IAppServiceConnection> appServiceConnection, impl::abi_arg_out<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetForAppServiceConnection(*reinterpret_cast<const Windows::ApplicationModel::AppService::AppServiceConnection *>(&appServiceConnection)));
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

namespace Windows::System::Diagnostics::DevicePortal {

template <typename D> Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedReason impl_IDevicePortalConnectionClosedEventArgs<D>::Reason() const
{
    Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedReason value {};
    check_hresult(WINRT_SHIM(IDevicePortalConnectionClosedEventArgs)->get_Reason(&value));
    return value;
}

template <typename D> Windows::Web::Http::HttpRequestMessage impl_IDevicePortalConnectionRequestReceivedEventArgs<D>::RequestMessage() const
{
    Windows::Web::Http::HttpRequestMessage value { nullptr };
    check_hresult(WINRT_SHIM(IDevicePortalConnectionRequestReceivedEventArgs)->get_RequestMessage(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpResponseMessage impl_IDevicePortalConnectionRequestReceivedEventArgs<D>::ResponseMessage() const
{
    Windows::Web::Http::HttpResponseMessage value { nullptr };
    check_hresult(WINRT_SHIM(IDevicePortalConnectionRequestReceivedEventArgs)->get_ResponseMessage(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Diagnostics::DevicePortal::DevicePortalConnection impl_IDevicePortalConnectionStatics<D>::GetForAppServiceConnection(const Windows::ApplicationModel::AppService::AppServiceConnection & appServiceConnection) const
{
    Windows::System::Diagnostics::DevicePortal::DevicePortalConnection value { nullptr };
    check_hresult(WINRT_SHIM(IDevicePortalConnectionStatics)->abi_GetForAppServiceConnection(get_abi(appServiceConnection), put_abi(value)));
    return value;
}

template <typename D> event_token impl_IDevicePortalConnection<D>::Closed(const Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IDevicePortalConnection)->add_Closed(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IDevicePortalConnection> impl_IDevicePortalConnection<D>::Closed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IDevicePortalConnection>(this, &ABI::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection::remove_Closed, Closed(handler));
}

template <typename D> void impl_IDevicePortalConnection<D>::Closed(event_token token) const
{
    check_hresult(WINRT_SHIM(IDevicePortalConnection)->remove_Closed(token));
}

template <typename D> event_token impl_IDevicePortalConnection<D>::RequestReceived(const Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IDevicePortalConnection)->add_RequestReceived(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IDevicePortalConnection> impl_IDevicePortalConnection<D>::RequestReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IDevicePortalConnection>(this, &ABI::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection::remove_RequestReceived, RequestReceived(handler));
}

template <typename D> void impl_IDevicePortalConnection<D>::RequestReceived(event_token token) const
{
    check_hresult(WINRT_SHIM(IDevicePortalConnection)->remove_RequestReceived(token));
}

inline Windows::System::Diagnostics::DevicePortal::DevicePortalConnection DevicePortalConnection::GetForAppServiceConnection(const Windows::ApplicationModel::AppService::AppServiceConnection & appServiceConnection)
{
    return get_activation_factory<DevicePortalConnection, IDevicePortalConnectionStatics>().GetForAppServiceConnection(appServiceConnection);
}

}

}

template<>
struct std::hash<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionStatics>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
