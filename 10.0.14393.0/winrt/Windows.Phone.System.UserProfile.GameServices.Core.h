// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Phone.System.UserProfile.GameServices.Core.3.h"
#include "Windows.Phone.System.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Phone::System::UserProfile::GameServices::Core::IGameService> : produce_base<D, Windows::Phone::System::UserProfile::GameServices::Core::IGameService>
{
    HRESULT __stdcall get_ServiceUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetGamerProfileAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetGamerProfileAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetInstalledGameItemsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetInstalledGameItemsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPartnerTokenAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> audienceUri, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetPartnerTokenAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&audienceUri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPrivilegesAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetPrivilegesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GrantAchievement(uint32_t achievementId) noexcept override
    {
        try
        {
            this->shim().GrantAchievement(achievementId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GrantAvatarAward(uint32_t avatarAwardId) noexcept override
    {
        try
        {
            this->shim().GrantAvatarAward(avatarAwardId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PostResult(uint32_t gameVariant, Windows::Phone::System::UserProfile::GameServices::Core::GameServiceScoreKind scoreKind, int64_t scoreValue, Windows::Phone::System::UserProfile::GameServices::Core::GameServiceGameOutcome gameOutcome, abi_arg_in<Windows::Storage::Streams::IBuffer> buffer) noexcept override
    {
        try
        {
            this->shim().PostResult(gameVariant, scoreKind, scoreValue, gameOutcome, *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&buffer));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::System::UserProfile::GameServices::Core::IGameService2> : produce_base<D, Windows::Phone::System::UserProfile::GameServices::Core::IGameService2>
{
    HRESULT __stdcall abi_NotifyPartnerTokenExpired(abi_arg_in<Windows::Foundation::IUriRuntimeClass> audienceUri) noexcept override
    {
        try
        {
            this->shim().NotifyPartnerTokenExpired(*reinterpret_cast<const Windows::Foundation::Uri *>(&audienceUri));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAuthenticationStatus(uint32_t * status) noexcept override
    {
        try
        {
            *status = detach(this->shim().GetAuthenticationStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection> : produce_base<D, Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection>
{
    HRESULT __stdcall abi_GetPropertyAsync(abi_arg_in<hstring> propertyName, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::IInspectable>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetPropertyAsync(*reinterpret_cast<const hstring *>(&propertyName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Phone::System::UserProfile::GameServices::Core {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::IInspectable> impl_IGameServicePropertyCollection<D>::GetPropertyAsync(hstring_ref propertyName) const
{
    Windows::Foundation::IAsyncOperation<Windows::IInspectable> operation;
    check_hresult(static_cast<const IGameServicePropertyCollection &>(static_cast<const D &>(*this))->abi_GetPropertyAsync(get(propertyName), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Uri impl_IGameService<D>::ServiceUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IGameService &>(static_cast<const D &>(*this))->get_ServiceUri(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> impl_IGameService<D>::GetGamerProfileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> operation;
    check_hresult(static_cast<const IGameService &>(static_cast<const D &>(*this))->abi_GetGamerProfileAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> impl_IGameService<D>::GetInstalledGameItemsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> operation;
    check_hresult(static_cast<const IGameService &>(static_cast<const D &>(*this))->abi_GetInstalledGameItemsAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IGameService<D>::GetPartnerTokenAsync(const Windows::Foundation::Uri & audienceUri) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(static_cast<const IGameService &>(static_cast<const D &>(*this))->abi_GetPartnerTokenAsync(get(audienceUri), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IGameService<D>::GetPrivilegesAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(static_cast<const IGameService &>(static_cast<const D &>(*this))->abi_GetPrivilegesAsync(put(operation)));
    return operation;
}

template <typename D> void impl_IGameService<D>::GrantAchievement(uint32_t achievementId) const
{
    check_hresult(static_cast<const IGameService &>(static_cast<const D &>(*this))->abi_GrantAchievement(achievementId));
}

template <typename D> void impl_IGameService<D>::GrantAvatarAward(uint32_t avatarAwardId) const
{
    check_hresult(static_cast<const IGameService &>(static_cast<const D &>(*this))->abi_GrantAvatarAward(avatarAwardId));
}

template <typename D> void impl_IGameService<D>::PostResult(uint32_t gameVariant, Windows::Phone::System::UserProfile::GameServices::Core::GameServiceScoreKind scoreKind, int64_t scoreValue, Windows::Phone::System::UserProfile::GameServices::Core::GameServiceGameOutcome gameOutcome, const Windows::Storage::Streams::IBuffer & buffer) const
{
    check_hresult(static_cast<const IGameService &>(static_cast<const D &>(*this))->abi_PostResult(gameVariant, scoreKind, scoreValue, gameOutcome, get(buffer)));
}

template <typename D> void impl_IGameService2<D>::NotifyPartnerTokenExpired(const Windows::Foundation::Uri & audienceUri) const
{
    check_hresult(static_cast<const IGameService2 &>(static_cast<const D &>(*this))->abi_NotifyPartnerTokenExpired(get(audienceUri)));
}

template <typename D> uint32_t impl_IGameService2<D>::GetAuthenticationStatus() const
{
    uint32_t status {};
    check_hresult(static_cast<const IGameService2 &>(static_cast<const D &>(*this))->abi_GetAuthenticationStatus(&status));
    return status;
}

inline Windows::Foundation::Uri GameService::ServiceUri()
{
    return get_activation_factory<GameService, IGameService>().ServiceUri();
}

inline Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> GameService::GetGamerProfileAsync()
{
    return get_activation_factory<GameService, IGameService>().GetGamerProfileAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> GameService::GetInstalledGameItemsAsync()
{
    return get_activation_factory<GameService, IGameService>().GetInstalledGameItemsAsync();
}

inline Windows::Foundation::IAsyncOperation<hstring> GameService::GetPartnerTokenAsync(const Windows::Foundation::Uri & audienceUri)
{
    return get_activation_factory<GameService, IGameService>().GetPartnerTokenAsync(audienceUri);
}

inline Windows::Foundation::IAsyncOperation<hstring> GameService::GetPrivilegesAsync()
{
    return get_activation_factory<GameService, IGameService>().GetPrivilegesAsync();
}

inline void GameService::GrantAchievement(uint32_t achievementId)
{
    get_activation_factory<GameService, IGameService>().GrantAchievement(achievementId);
}

inline void GameService::GrantAvatarAward(uint32_t avatarAwardId)
{
    get_activation_factory<GameService, IGameService>().GrantAvatarAward(avatarAwardId);
}

inline void GameService::PostResult(uint32_t gameVariant, Windows::Phone::System::UserProfile::GameServices::Core::GameServiceScoreKind scoreKind, int64_t scoreValue, Windows::Phone::System::UserProfile::GameServices::Core::GameServiceGameOutcome gameOutcome, const Windows::Storage::Streams::IBuffer & buffer)
{
    get_activation_factory<GameService, IGameService>().PostResult(gameVariant, scoreKind, scoreValue, gameOutcome, buffer);
}

inline void GameService::NotifyPartnerTokenExpired(const Windows::Foundation::Uri & audienceUri)
{
    get_activation_factory<GameService, IGameService2>().NotifyPartnerTokenExpired(audienceUri);
}

inline uint32_t GameService::GetAuthenticationStatus()
{
    return get_activation_factory<GameService, IGameService2>().GetAuthenticationStatus();
}

}

}
