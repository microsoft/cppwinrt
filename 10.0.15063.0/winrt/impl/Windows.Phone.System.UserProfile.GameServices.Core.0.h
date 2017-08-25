// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::Phone::System::UserProfile::GameServices::Core {

enum class GameServiceGameOutcome
{
    None = 0,
    Win = 1,
    Loss = 2,
    Tie = 3,
};

enum class GameServiceScoreKind
{
    Number = 0,
    Time = 1,
};

struct IGameService;
struct IGameService2;
struct IGameServicePropertyCollection;
struct GameService;
struct GameServicePropertyCollection;

}

namespace winrt::impl {

template <> struct category<Windows::Phone::System::UserProfile::GameServices::Core::IGameService>{ using type = interface_category; };
template <> struct category<Windows::Phone::System::UserProfile::GameServices::Core::IGameService2>{ using type = interface_category; };
template <> struct category<Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection>{ using type = interface_category; };
template <> struct category<Windows::Phone::System::UserProfile::GameServices::Core::GameService>{ using type = class_category; };
template <> struct category<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection>{ using type = class_category; };
template <> struct category<Windows::Phone::System::UserProfile::GameServices::Core::GameServiceGameOutcome>{ using type = enum_category; };
template <> struct category<Windows::Phone::System::UserProfile::GameServices::Core::GameServiceScoreKind>{ using type = enum_category; };
template <> struct name<Windows::Phone::System::UserProfile::GameServices::Core::IGameService>{ static constexpr auto & value{ L"Windows.Phone.System.UserProfile.GameServices.Core.IGameService" }; };
template <> struct name<Windows::Phone::System::UserProfile::GameServices::Core::IGameService2>{ static constexpr auto & value{ L"Windows.Phone.System.UserProfile.GameServices.Core.IGameService2" }; };
template <> struct name<Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection>{ static constexpr auto & value{ L"Windows.Phone.System.UserProfile.GameServices.Core.IGameServicePropertyCollection" }; };
template <> struct name<Windows::Phone::System::UserProfile::GameServices::Core::GameService>{ static constexpr auto & value{ L"Windows.Phone.System.UserProfile.GameServices.Core.GameService" }; };
template <> struct name<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection>{ static constexpr auto & value{ L"Windows.Phone.System.UserProfile.GameServices.Core.GameServicePropertyCollection" }; };
template <> struct name<Windows::Phone::System::UserProfile::GameServices::Core::GameServiceGameOutcome>{ static constexpr auto & value{ L"Windows.Phone.System.UserProfile.GameServices.Core.GameServiceGameOutcome" }; };
template <> struct name<Windows::Phone::System::UserProfile::GameServices::Core::GameServiceScoreKind>{ static constexpr auto & value{ L"Windows.Phone.System.UserProfile.GameServices.Core.GameServiceScoreKind" }; };
template <> struct guid<Windows::Phone::System::UserProfile::GameServices::Core::IGameService>{ static constexpr GUID value{ 0x2E2D5098,0x48A9,0x4EFC,{ 0xAF,0xD6,0x8E,0x6D,0xA0,0x90,0x03,0xFB } }; };
template <> struct guid<Windows::Phone::System::UserProfile::GameServices::Core::IGameService2>{ static constexpr GUID value{ 0xD2364EF6,0xEA17,0x4BE5,{ 0x8D,0x8A,0xC8,0x60,0x88,0x5E,0x05,0x1F } }; };
template <> struct guid<Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection>{ static constexpr GUID value{ 0x07E57FC8,0xDEBB,0x4609,{ 0x9C,0xC8,0x52,0x9D,0x16,0xBC,0x2B,0xD9 } }; };
template <> struct default_interface<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection>{ using type = Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection; };

template <typename D>
struct consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService
{
    Windows::Foundation::Uri ServiceUri() const;
    Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> GetGamerProfileAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> GetInstalledGameItemsAsync() const;
    Windows::Foundation::IAsyncOperation<hstring> GetPartnerTokenAsync(Windows::Foundation::Uri const& audienceUri) const;
    Windows::Foundation::IAsyncOperation<hstring> GetPrivilegesAsync() const;
    void GrantAchievement(uint32_t achievementId) const;
    void GrantAvatarAward(uint32_t avatarAwardId) const;
    void PostResult(uint32_t gameVariant, Windows::Phone::System::UserProfile::GameServices::Core::GameServiceScoreKind const& scoreKind, int64_t scoreValue, Windows::Phone::System::UserProfile::GameServices::Core::GameServiceGameOutcome const& gameOutcome, Windows::Storage::Streams::IBuffer const& buffer) const;
};
template <> struct consume<Windows::Phone::System::UserProfile::GameServices::Core::IGameService> { template <typename D> using type = consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService<D>; };

template <typename D>
struct consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService2
{
    void NotifyPartnerTokenExpired(Windows::Foundation::Uri const& audienceUri) const;
    uint32_t GetAuthenticationStatus() const;
};
template <> struct consume<Windows::Phone::System::UserProfile::GameServices::Core::IGameService2> { template <typename D> using type = consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService2<D>; };

template <typename D>
struct consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameServicePropertyCollection
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::IInspectable> GetPropertyAsync(param::hstring const& propertyName) const;
};
template <> struct consume<Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection> { template <typename D> using type = consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameServicePropertyCollection<D>; };

template <> struct abi<Windows::Phone::System::UserProfile::GameServices::Core::IGameService>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ServiceUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetGamerProfileAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetInstalledGameItemsAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetPartnerTokenAsync(::IUnknown* audienceUri, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetPrivilegesAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GrantAchievement(uint32_t achievementId) = 0;
    virtual HRESULT __stdcall GrantAvatarAward(uint32_t avatarAwardId) = 0;
    virtual HRESULT __stdcall PostResult(uint32_t gameVariant, abi_t<Windows::Phone::System::UserProfile::GameServices::Core::GameServiceScoreKind> scoreKind, int64_t scoreValue, abi_t<Windows::Phone::System::UserProfile::GameServices::Core::GameServiceGameOutcome> gameOutcome, ::IUnknown* buffer) = 0;
};};

template <> struct abi<Windows::Phone::System::UserProfile::GameServices::Core::IGameService2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall NotifyPartnerTokenExpired(::IUnknown* audienceUri) = 0;
    virtual HRESULT __stdcall GetAuthenticationStatus(uint32_t* status) = 0;
};};

template <> struct abi<Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetPropertyAsync(HSTRING propertyName, ::IUnknown** operation) = 0;
};};

}
