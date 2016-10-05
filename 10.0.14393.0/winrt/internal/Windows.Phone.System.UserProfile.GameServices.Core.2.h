// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Phone.System.UserProfile.GameServices.Core.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_3e1fe603_f897_5263_b328_0806426b8a79
#define WINRT_GENERIC_3e1fe603_f897_5263_b328_0806426b8a79
template <> struct __declspec(uuid("3e1fe603-f897-5263-b328-0806426b8a79")) __declspec(novtable) IAsyncOperation<hstring> : impl_IAsyncOperation<hstring> {};
#endif

#ifndef WINRT_GENERIC_abf53c57_ee50_5342_b52a_26e3b8cc024f
#define WINRT_GENERIC_abf53c57_ee50_5342_b52a_26e3b8cc024f
template <> struct __declspec(uuid("abf53c57-ee50-5342-b52a-26e3b8cc024f")) __declspec(novtable) IAsyncOperation<Windows::IInspectable> : impl_IAsyncOperation<Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_1828e0ec_b3cd_5a12_8664_f72a556de64f
#define WINRT_GENERIC_1828e0ec_b3cd_5a12_8664_f72a556de64f
template <> struct __declspec(uuid("1828e0ec-b3cd-5a12-8664-f72a556de64f")) __declspec(novtable) IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> : impl_IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> {};
#endif

#ifndef WINRT_GENERIC_b79a741f_7fb5_50ae_9e99_911201ec3d41
#define WINRT_GENERIC_b79a741f_7fb5_50ae_9e99_911201ec3d41
template <> struct __declspec(uuid("b79a741f-7fb5-50ae-9e99-911201ec3d41")) __declspec(novtable) AsyncOperationCompletedHandler<hstring> : impl_AsyncOperationCompletedHandler<hstring> {};
#endif

#ifndef WINRT_GENERIC_3f08262e_a2e1_5134_9297_e9211f481a2d
#define WINRT_GENERIC_3f08262e_a2e1_5134_9297_e9211f481a2d
template <> struct __declspec(uuid("3f08262e-a2e1-5134-9297-e9211f481a2d")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::IInspectable> : impl_AsyncOperationCompletedHandler<Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_d309f6e8_435f_5220_9650_e370b04e2a38
#define WINRT_GENERIC_d309f6e8_435f_5220_9650_e370b04e2a38
template <> struct __declspec(uuid("d309f6e8-435f-5220-9650-e370b04e2a38")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> : impl_AsyncOperationCompletedHandler<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> {};
#endif


}

namespace Windows::Phone::System::UserProfile::GameServices::Core {

template <typename D>
struct WINRT_EBO impl_IGameService
{
    Windows::Foundation::Uri ServiceUri() const;
    Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> GetGamerProfileAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> GetInstalledGameItemsAsync() const;
    Windows::Foundation::IAsyncOperation<hstring> GetPartnerTokenAsync(const Windows::Foundation::Uri & audienceUri) const;
    Windows::Foundation::IAsyncOperation<hstring> GetPrivilegesAsync() const;
    void GrantAchievement(uint32_t achievementId) const;
    void GrantAvatarAward(uint32_t avatarAwardId) const;
    void PostResult(uint32_t gameVariant, Windows::Phone::System::UserProfile::GameServices::Core::GameServiceScoreKind scoreKind, int64_t scoreValue, Windows::Phone::System::UserProfile::GameServices::Core::GameServiceGameOutcome gameOutcome, const Windows::Storage::Streams::IBuffer & buffer) const;
};

template <typename D>
struct WINRT_EBO impl_IGameService2
{
    void NotifyPartnerTokenExpired(const Windows::Foundation::Uri & audienceUri) const;
    uint32_t GetAuthenticationStatus() const;
};

template <typename D>
struct WINRT_EBO impl_IGameServicePropertyCollection
{
    Windows::Foundation::IAsyncOperation<Windows::IInspectable> GetPropertyAsync(hstring_ref propertyName) const;
};

struct IGameService :
    Windows::IInspectable,
    impl::consume<IGameService>
{
    IGameService(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGameService>(m_ptr); }
};

struct IGameService2 :
    Windows::IInspectable,
    impl::consume<IGameService2>
{
    IGameService2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGameService2>(m_ptr); }
};

struct IGameServicePropertyCollection :
    Windows::IInspectable,
    impl::consume<IGameServicePropertyCollection>
{
    IGameServicePropertyCollection(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGameServicePropertyCollection>(m_ptr); }
};

}

}
