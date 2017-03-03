// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.System.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Management.Policies.3.h"
#include "Windows.Management.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Management::Policies::INamedPolicyData> : produce_base<D, Windows::Management::Policies::INamedPolicyData>
{
    HRESULT __stdcall get_Area(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Area());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_Kind(Windows::Management::Policies::NamedPolicyKind * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsManaged(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsManaged());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsUserPolicy(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsUserPolicy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(impl::abi_arg_out<Windows::System::IUser> value) noexcept override
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

    HRESULT __stdcall abi_GetBoolean(bool * result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetBoolean());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetBinary(impl::abi_arg_out<Windows::Storage::Streams::IBuffer> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetBinary());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetInt32(int32_t * result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetInt32());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetInt64(int64_t * result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetInt64());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetString(impl::abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Changed(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Management::Policies::NamedPolicyData, Windows::Foundation::IInspectable>> changedHandler, event_token * cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().Changed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Management::Policies::NamedPolicyData, Windows::Foundation::IInspectable> *>(&changedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Changed(event_token cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Changed(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Policies::INamedPolicyStatics> : produce_base<D, Windows::Management::Policies::INamedPolicyStatics>
{
    HRESULT __stdcall abi_GetPolicyFromPath(impl::abi_arg_in<hstring> area, impl::abi_arg_in<hstring> name, impl::abi_arg_out<Windows::Management::Policies::INamedPolicyData> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetPolicyFromPath(*reinterpret_cast<const hstring *>(&area), *reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPolicyFromPathForUser(impl::abi_arg_in<Windows::System::IUser> user, impl::abi_arg_in<hstring> area, impl::abi_arg_in<hstring> name, impl::abi_arg_out<Windows::Management::Policies::INamedPolicyData> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetPolicyFromPathForUser(*reinterpret_cast<const Windows::System::User *>(&user), *reinterpret_cast<const hstring *>(&area), *reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Management::Policies {

template <typename D> hstring impl_INamedPolicyData<D>::Area() const
{
    hstring value;
    check_hresult(WINRT_SHIM(INamedPolicyData)->get_Area(put_abi(value)));
    return value;
}

template <typename D> hstring impl_INamedPolicyData<D>::Name() const
{
    hstring value;
    check_hresult(WINRT_SHIM(INamedPolicyData)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Management::Policies::NamedPolicyKind impl_INamedPolicyData<D>::Kind() const
{
    Windows::Management::Policies::NamedPolicyKind value {};
    check_hresult(WINRT_SHIM(INamedPolicyData)->get_Kind(&value));
    return value;
}

template <typename D> bool impl_INamedPolicyData<D>::IsManaged() const
{
    bool value {};
    check_hresult(WINRT_SHIM(INamedPolicyData)->get_IsManaged(&value));
    return value;
}

template <typename D> bool impl_INamedPolicyData<D>::IsUserPolicy() const
{
    bool value {};
    check_hresult(WINRT_SHIM(INamedPolicyData)->get_IsUserPolicy(&value));
    return value;
}

template <typename D> Windows::System::User impl_INamedPolicyData<D>::User() const
{
    Windows::System::User value { nullptr };
    check_hresult(WINRT_SHIM(INamedPolicyData)->get_User(put_abi(value)));
    return value;
}

template <typename D> bool impl_INamedPolicyData<D>::GetBoolean() const
{
    bool result {};
    check_hresult(WINRT_SHIM(INamedPolicyData)->abi_GetBoolean(&result));
    return result;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_INamedPolicyData<D>::GetBinary() const
{
    Windows::Storage::Streams::IBuffer result;
    check_hresult(WINRT_SHIM(INamedPolicyData)->abi_GetBinary(put_abi(result)));
    return result;
}

template <typename D> int32_t impl_INamedPolicyData<D>::GetInt32() const
{
    int32_t result {};
    check_hresult(WINRT_SHIM(INamedPolicyData)->abi_GetInt32(&result));
    return result;
}

template <typename D> int64_t impl_INamedPolicyData<D>::GetInt64() const
{
    int64_t result {};
    check_hresult(WINRT_SHIM(INamedPolicyData)->abi_GetInt64(&result));
    return result;
}

template <typename D> hstring impl_INamedPolicyData<D>::GetString() const
{
    hstring result;
    check_hresult(WINRT_SHIM(INamedPolicyData)->abi_GetString(put_abi(result)));
    return result;
}

template <typename D> event_token impl_INamedPolicyData<D>::Changed(const Windows::Foundation::TypedEventHandler<Windows::Management::Policies::NamedPolicyData, Windows::Foundation::IInspectable> & changedHandler) const
{
    event_token cookie {};
    check_hresult(WINRT_SHIM(INamedPolicyData)->add_Changed(get_abi(changedHandler), &cookie));
    return cookie;
}

template <typename D> event_revoker<INamedPolicyData> impl_INamedPolicyData<D>::Changed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Management::Policies::NamedPolicyData, Windows::Foundation::IInspectable> & changedHandler) const
{
    return impl::make_event_revoker<D, INamedPolicyData>(this, &ABI::Windows::Management::Policies::INamedPolicyData::remove_Changed, Changed(changedHandler));
}

template <typename D> void impl_INamedPolicyData<D>::Changed(event_token cookie) const
{
    check_hresult(WINRT_SHIM(INamedPolicyData)->remove_Changed(cookie));
}

template <typename D> Windows::Management::Policies::NamedPolicyData impl_INamedPolicyStatics<D>::GetPolicyFromPath(hstring_view area, hstring_view name) const
{
    Windows::Management::Policies::NamedPolicyData result { nullptr };
    check_hresult(WINRT_SHIM(INamedPolicyStatics)->abi_GetPolicyFromPath(get_abi(area), get_abi(name), put_abi(result)));
    return result;
}

template <typename D> Windows::Management::Policies::NamedPolicyData impl_INamedPolicyStatics<D>::GetPolicyFromPathForUser(const Windows::System::User & user, hstring_view area, hstring_view name) const
{
    Windows::Management::Policies::NamedPolicyData result { nullptr };
    check_hresult(WINRT_SHIM(INamedPolicyStatics)->abi_GetPolicyFromPathForUser(get_abi(user), get_abi(area), get_abi(name), put_abi(result)));
    return result;
}

inline Windows::Management::Policies::NamedPolicyData NamedPolicy::GetPolicyFromPath(hstring_view area, hstring_view name)
{
    return get_activation_factory<NamedPolicy, INamedPolicyStatics>().GetPolicyFromPath(area, name);
}

inline Windows::Management::Policies::NamedPolicyData NamedPolicy::GetPolicyFromPathForUser(const Windows::System::User & user, hstring_view area, hstring_view name)
{
    return get_activation_factory<NamedPolicy, INamedPolicyStatics>().GetPolicyFromPathForUser(user, area, name);
}

}

}

template<>
struct std::hash<winrt::Windows::Management::Policies::INamedPolicyData>
{
    size_t operator()(const winrt::Windows::Management::Policies::INamedPolicyData & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Management::Policies::INamedPolicyStatics>
{
    size_t operator()(const winrt::Windows::Management::Policies::INamedPolicyStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Management::Policies::NamedPolicyData>
{
    size_t operator()(const winrt::Windows::Management::Policies::NamedPolicyData & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
