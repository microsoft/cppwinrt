// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Phone.System.UserProfile.GameServices.Core.2.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::Uri consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService<D>::ServiceUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::System::UserProfile::GameServices::Core::IGameService)->get_ServiceUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService<D>::GetGamerProfileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::System::UserProfile::GameServices::Core::IGameService)->GetGamerProfileAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService<D>::GetInstalledGameItemsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::System::UserProfile::GameServices::Core::IGameService)->GetInstalledGameItemsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService<D>::GetPartnerTokenAsync(Windows::Foundation::Uri const& audienceUri) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::System::UserProfile::GameServices::Core::IGameService)->GetPartnerTokenAsync(get_abi(audienceUri), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService<D>::GetPrivilegesAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::System::UserProfile::GameServices::Core::IGameService)->GetPrivilegesAsync(put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService<D>::GrantAchievement(uint32_t achievementId) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::System::UserProfile::GameServices::Core::IGameService)->GrantAchievement(achievementId));
}

template <typename D> void consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService<D>::GrantAvatarAward(uint32_t avatarAwardId) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::System::UserProfile::GameServices::Core::IGameService)->GrantAvatarAward(avatarAwardId));
}

template <typename D> void consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService<D>::PostResult(uint32_t gameVariant, Windows::Phone::System::UserProfile::GameServices::Core::GameServiceScoreKind const& scoreKind, int64_t scoreValue, Windows::Phone::System::UserProfile::GameServices::Core::GameServiceGameOutcome const& gameOutcome, Windows::Storage::Streams::IBuffer const& buffer) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::System::UserProfile::GameServices::Core::IGameService)->PostResult(gameVariant, get_abi(scoreKind), scoreValue, get_abi(gameOutcome), get_abi(buffer)));
}

template <typename D> void consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService2<D>::NotifyPartnerTokenExpired(Windows::Foundation::Uri const& audienceUri) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::System::UserProfile::GameServices::Core::IGameService2)->NotifyPartnerTokenExpired(get_abi(audienceUri)));
}

template <typename D> uint32_t consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService2<D>::GetAuthenticationStatus() const
{
    uint32_t status{};
    check_hresult(WINRT_SHIM(Windows::Phone::System::UserProfile::GameServices::Core::IGameService2)->GetAuthenticationStatus(&status));
    return status;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::IInspectable> consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameServicePropertyCollection<D>::GetPropertyAsync(param::hstring const& propertyName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::IInspectable> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection)->GetPropertyAsync(get_abi(propertyName), put_abi(operation)));
    return operation;
}

template <typename D>
struct produce<D, Windows::Phone::System::UserProfile::GameServices::Core::IGameService> : produce_base<D, Windows::Phone::System::UserProfile::GameServices::Core::IGameService>
{
    HRESULT __stdcall get_ServiceUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetGamerProfileAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetGamerProfileAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetInstalledGameItemsAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetInstalledGameItemsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPartnerTokenAsync(::IUnknown* audienceUri, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetPartnerTokenAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&audienceUri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPrivilegesAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetPrivilegesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GrantAchievement(uint32_t achievementId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GrantAchievement(achievementId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GrantAvatarAward(uint32_t avatarAwardId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GrantAvatarAward(avatarAwardId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PostResult(uint32_t gameVariant, abi_t<Windows::Phone::System::UserProfile::GameServices::Core::GameServiceScoreKind> scoreKind, int64_t scoreValue, abi_t<Windows::Phone::System::UserProfile::GameServices::Core::GameServiceGameOutcome> gameOutcome, ::IUnknown* buffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PostResult(gameVariant, *reinterpret_cast<Windows::Phone::System::UserProfile::GameServices::Core::GameServiceScoreKind const*>(&scoreKind), scoreValue, *reinterpret_cast<Windows::Phone::System::UserProfile::GameServices::Core::GameServiceGameOutcome const*>(&gameOutcome), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer));
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
    HRESULT __stdcall NotifyPartnerTokenExpired(::IUnknown* audienceUri) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyPartnerTokenExpired(*reinterpret_cast<Windows::Foundation::Uri const*>(&audienceUri));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAuthenticationStatus(uint32_t* status) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_abi(this->shim().GetAuthenticationStatus());
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
    HRESULT __stdcall GetPropertyAsync(HSTRING propertyName, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetPropertyAsync(*reinterpret_cast<hstring const*>(&propertyName)));
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

WINRT_EXPORT namespace winrt::Windows::Phone::System::UserProfile::GameServices::Core {

inline Windows::Foundation::Uri GameService::ServiceUri()
{
    return get_activation_factory<GameService, Windows::Phone::System::UserProfile::GameServices::Core::IGameService>().ServiceUri();
}

inline Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> GameService::GetGamerProfileAsync()
{
    return get_activation_factory<GameService, Windows::Phone::System::UserProfile::GameServices::Core::IGameService>().GetGamerProfileAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> GameService::GetInstalledGameItemsAsync()
{
    return get_activation_factory<GameService, Windows::Phone::System::UserProfile::GameServices::Core::IGameService>().GetInstalledGameItemsAsync();
}

inline Windows::Foundation::IAsyncOperation<hstring> GameService::GetPartnerTokenAsync(Windows::Foundation::Uri const& audienceUri)
{
    return get_activation_factory<GameService, Windows::Phone::System::UserProfile::GameServices::Core::IGameService>().GetPartnerTokenAsync(audienceUri);
}

inline Windows::Foundation::IAsyncOperation<hstring> GameService::GetPrivilegesAsync()
{
    return get_activation_factory<GameService, Windows::Phone::System::UserProfile::GameServices::Core::IGameService>().GetPrivilegesAsync();
}

inline void GameService::GrantAchievement(uint32_t achievementId)
{
    get_activation_factory<GameService, Windows::Phone::System::UserProfile::GameServices::Core::IGameService>().GrantAchievement(achievementId);
}

inline void GameService::GrantAvatarAward(uint32_t avatarAwardId)
{
    get_activation_factory<GameService, Windows::Phone::System::UserProfile::GameServices::Core::IGameService>().GrantAvatarAward(avatarAwardId);
}

inline void GameService::PostResult(uint32_t gameVariant, Windows::Phone::System::UserProfile::GameServices::Core::GameServiceScoreKind const& scoreKind, int64_t scoreValue, Windows::Phone::System::UserProfile::GameServices::Core::GameServiceGameOutcome const& gameOutcome, Windows::Storage::Streams::IBuffer const& buffer)
{
    get_activation_factory<GameService, Windows::Phone::System::UserProfile::GameServices::Core::IGameService>().PostResult(gameVariant, scoreKind, scoreValue, gameOutcome, buffer);
}

inline void GameService::NotifyPartnerTokenExpired(Windows::Foundation::Uri const& audienceUri)
{
    get_activation_factory<GameService, Windows::Phone::System::UserProfile::GameServices::Core::IGameService2>().NotifyPartnerTokenExpired(audienceUri);
}

inline uint32_t GameService::GetAuthenticationStatus()
{
    return get_activation_factory<GameService, Windows::Phone::System::UserProfile::GameServices::Core::IGameService2>().GetAuthenticationStatus();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameService> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameService> {};

template<> struct hash<winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameService2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameService2> {};

template<> struct hash<winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection> {};

template<> struct hash<winrt::Windows::Phone::System::UserProfile::GameServices::Core::GameService> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::System::UserProfile::GameServices::Core::GameService> {};

template<> struct hash<winrt::Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> {};

}

WINRT_WARNING_POP
