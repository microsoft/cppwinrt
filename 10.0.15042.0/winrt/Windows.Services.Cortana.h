// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Services.Cortana.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Services::Cortana::ICortanaPermissionsManager> : produce_base<D, Windows::Services::Cortana::ICortanaPermissionsManager>
{
    HRESULT __stdcall abi_IsSupported(bool * result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ArePermissionsGrantedAsync(impl::abi_arg_in<Windows::Foundation::Collections::IIterable<winrt::Windows::Services::Cortana::CortanaPermission>> permissions, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> getGrantedPermissionsOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *getGrantedPermissionsOperation = detach_abi(this->shim().ArePermissionsGrantedAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<winrt::Windows::Services::Cortana::CortanaPermission> *>(&permissions)));
            return S_OK;
        }
        catch (...)
        {
            *getGrantedPermissionsOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GrantPermissionsAsync(impl::abi_arg_in<Windows::Foundation::Collections::IIterable<winrt::Windows::Services::Cortana::CortanaPermission>> permissions, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Cortana::CortanaPermissionsChangeResult>> grantOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *grantOperation = detach_abi(this->shim().GrantPermissionsAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<winrt::Windows::Services::Cortana::CortanaPermission> *>(&permissions)));
            return S_OK;
        }
        catch (...)
        {
            *grantOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RevokePermissionsAsync(impl::abi_arg_in<Windows::Foundation::Collections::IIterable<winrt::Windows::Services::Cortana::CortanaPermission>> permissions, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Cortana::CortanaPermissionsChangeResult>> revokeOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *revokeOperation = detach_abi(this->shim().RevokePermissionsAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<winrt::Windows::Services::Cortana::CortanaPermission> *>(&permissions)));
            return S_OK;
        }
        catch (...)
        {
            *revokeOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Cortana::ICortanaPermissionsManagerStatics> : produce_base<D, Windows::Services::Cortana::ICortanaPermissionsManagerStatics>
{
    HRESULT __stdcall abi_GetDefault(impl::abi_arg_out<Windows::Services::Cortana::ICortanaPermissionsManager> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Cortana::ICortanaSettings> : produce_base<D, Windows::Services::Cortana::ICortanaSettings>
{
    HRESULT __stdcall get_HasUserConsentToVoiceActivation(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasUserConsentToVoiceActivation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsVoiceActivationEnabled(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsVoiceActivationEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsVoiceActivationEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsVoiceActivationEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Cortana::ICortanaSettingsStatics> : produce_base<D, Windows::Services::Cortana::ICortanaSettingsStatics>
{
    HRESULT __stdcall abi_IsSupported(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDefault(impl::abi_arg_out<Windows::Services::Cortana::ICortanaSettings> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault());
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

namespace Windows::Services::Cortana {

template <typename D> bool impl_ICortanaSettings<D>::HasUserConsentToVoiceActivation() const
{
    bool value {};
    check_hresult(WINRT_SHIM(ICortanaSettings)->get_HasUserConsentToVoiceActivation(&value));
    return value;
}

template <typename D> bool impl_ICortanaSettings<D>::IsVoiceActivationEnabled() const
{
    bool value {};
    check_hresult(WINRT_SHIM(ICortanaSettings)->get_IsVoiceActivationEnabled(&value));
    return value;
}

template <typename D> void impl_ICortanaSettings<D>::IsVoiceActivationEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(ICortanaSettings)->put_IsVoiceActivationEnabled(value));
}

template <typename D> bool impl_ICortanaSettingsStatics<D>::IsSupported() const
{
    bool value {};
    check_hresult(WINRT_SHIM(ICortanaSettingsStatics)->abi_IsSupported(&value));
    return value;
}

template <typename D> Windows::Services::Cortana::CortanaSettings impl_ICortanaSettingsStatics<D>::GetDefault() const
{
    Windows::Services::Cortana::CortanaSettings result { nullptr };
    check_hresult(WINRT_SHIM(ICortanaSettingsStatics)->abi_GetDefault(put_abi(result)));
    return result;
}

template <typename D> bool impl_ICortanaPermissionsManager<D>::IsSupported() const
{
    bool result {};
    check_hresult(WINRT_SHIM(ICortanaPermissionsManager)->abi_IsSupported(&result));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ICortanaPermissionsManager<D>::ArePermissionsGrantedAsync(iterable<winrt::Windows::Services::Cortana::CortanaPermission> permissions) const
{
    Windows::Foundation::IAsyncOperation<bool> getGrantedPermissionsOperation;
    check_hresult(WINRT_SHIM(ICortanaPermissionsManager)->abi_ArePermissionsGrantedAsync(get_abi(permissions), put_abi(getGrantedPermissionsOperation)));
    return getGrantedPermissionsOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Cortana::CortanaPermissionsChangeResult> impl_ICortanaPermissionsManager<D>::GrantPermissionsAsync(iterable<winrt::Windows::Services::Cortana::CortanaPermission> permissions) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Cortana::CortanaPermissionsChangeResult> grantOperation;
    check_hresult(WINRT_SHIM(ICortanaPermissionsManager)->abi_GrantPermissionsAsync(get_abi(permissions), put_abi(grantOperation)));
    return grantOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Cortana::CortanaPermissionsChangeResult> impl_ICortanaPermissionsManager<D>::RevokePermissionsAsync(iterable<winrt::Windows::Services::Cortana::CortanaPermission> permissions) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Services::Cortana::CortanaPermissionsChangeResult> revokeOperation;
    check_hresult(WINRT_SHIM(ICortanaPermissionsManager)->abi_RevokePermissionsAsync(get_abi(permissions), put_abi(revokeOperation)));
    return revokeOperation;
}

template <typename D> Windows::Services::Cortana::CortanaPermissionsManager impl_ICortanaPermissionsManagerStatics<D>::GetDefault() const
{
    Windows::Services::Cortana::CortanaPermissionsManager result { nullptr };
    check_hresult(WINRT_SHIM(ICortanaPermissionsManagerStatics)->abi_GetDefault(put_abi(result)));
    return result;
}

inline Windows::Services::Cortana::CortanaPermissionsManager CortanaPermissionsManager::GetDefault()
{
    return get_activation_factory<CortanaPermissionsManager, ICortanaPermissionsManagerStatics>().GetDefault();
}

inline bool CortanaSettings::IsSupported()
{
    return get_activation_factory<CortanaSettings, ICortanaSettingsStatics>().IsSupported();
}

inline Windows::Services::Cortana::CortanaSettings CortanaSettings::GetDefault()
{
    return get_activation_factory<CortanaSettings, ICortanaSettingsStatics>().GetDefault();
}

}

}

template<>
struct std::hash<winrt::Windows::Services::Cortana::ICortanaPermissionsManager>
{
    size_t operator()(const winrt::Windows::Services::Cortana::ICortanaPermissionsManager & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::Cortana::ICortanaPermissionsManagerStatics>
{
    size_t operator()(const winrt::Windows::Services::Cortana::ICortanaPermissionsManagerStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::Cortana::ICortanaSettings>
{
    size_t operator()(const winrt::Windows::Services::Cortana::ICortanaSettings & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::Cortana::ICortanaSettingsStatics>
{
    size_t operator()(const winrt::Windows::Services::Cortana::ICortanaSettingsStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::Cortana::CortanaPermissionsManager>
{
    size_t operator()(const winrt::Windows::Services::Cortana::CortanaPermissionsManager & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::Cortana::CortanaSettings>
{
    size_t operator()(const winrt::Windows::Services::Cortana::CortanaSettings & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
