// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.LockScreen.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_513ef3af_e784_5325_a91e_97c2b8111cf3
#define WINRT_GENERIC_513ef3af_e784_5325_a91e_97c2b8111cf3
template <> struct __declspec(uuid("513ef3af-e784-5325-a91e-97c2b8111cf3")) __declspec(novtable) IReference<uint32_t> : impl_IReference<uint32_t> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
#define WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
template <> struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e")) __declspec(novtable) IVectorView<hstring> : impl_IVectorView<hstring> {};
#endif

#ifndef WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
#define WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
template <> struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e")) __declspec(novtable) IIterable<hstring> : impl_IIterable<hstring> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_8be9e6a3_f88a_5429_8da3_676b7d4f1a5b
#define WINRT_GENERIC_8be9e6a3_f88a_5429_8da3_676b7d4f1a5b
template <> struct __declspec(uuid("8be9e6a3-f88a-5429-8da3-676b7d4f1a5b")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable> : impl_TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_a0734995_94c2_50c2_88a2_d070fcd1d338
#define WINRT_GENERIC_a0734995_94c2_50c2_88a2_d070fcd1d338
template <> struct __declspec(uuid("a0734995-94c2-50c2-88a2-d070fcd1d338")) __declspec(novtable) IVectorView<Windows::ApplicationModel::LockScreen::LockScreenBadge> : impl_IVectorView<Windows::ApplicationModel::LockScreen::LockScreenBadge> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_002e5776_8a5b_5b93_8c6c_9c4c8788f5b4
#define WINRT_GENERIC_002e5776_8a5b_5b93_8c6c_9c4c8788f5b4
template <> struct __declspec(uuid("002e5776-8a5b-5b93-8c6c-9c4c8788f5b4")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::LockScreen::LockApplicationHost, Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::LockScreen::LockApplicationHost, Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
#define WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
template <> struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236")) __declspec(novtable) IIterator<hstring> : impl_IIterator<hstring> {};
#endif

#ifndef WINRT_GENERIC_8d38f924_154d_5705_8f0b_ed61353f6ce2
#define WINRT_GENERIC_8d38f924_154d_5705_8f0b_ed61353f6ce2
template <> struct __declspec(uuid("8d38f924-154d-5705-8f0b-ed61353f6ce2")) __declspec(novtable) IIterator<Windows::ApplicationModel::LockScreen::LockScreenBadge> : impl_IIterator<Windows::ApplicationModel::LockScreen::LockScreenBadge> {};
#endif

#ifndef WINRT_GENERIC_6e82dedc_b74e_503a_b00b_9c6f47f12a0f
#define WINRT_GENERIC_6e82dedc_b74e_503a_b00b_9c6f47f12a0f
template <> struct __declspec(uuid("6e82dedc-b74e-503a-b00b-9c6f47f12a0f")) __declspec(novtable) IIterable<Windows::ApplicationModel::LockScreen::LockScreenBadge> : impl_IIterable<Windows::ApplicationModel::LockScreen::LockScreenBadge> {};
#endif


}

namespace Windows::ApplicationModel::LockScreen {

template <typename D>
struct WINRT_EBO impl_ILockApplicationHost
{
    void RequestUnlock() const;
    event_token Unlocking(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockApplicationHost, Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs> & handler) const;
    using Unlocking_revoker = event_revoker<ILockApplicationHost>;
    Unlocking_revoker Unlocking(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockApplicationHost, Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs> & handler) const;
    void Unlocking(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_ILockApplicationHostStatics
{
    Windows::ApplicationModel::LockScreen::LockApplicationHost GetForCurrentView() const;
};

template <typename D>
struct WINRT_EBO impl_ILockScreenBadge
{
    Windows::Storage::Streams::IRandomAccessStream Logo() const;
    Windows::Storage::Streams::IRandomAccessStream Glyph() const;
    Windows::Foundation::IReference<uint32_t> Number() const;
    hstring AutomationName() const;
    void LaunchApp() const;
};

template <typename D>
struct WINRT_EBO impl_ILockScreenInfo
{
    event_token LockScreenImageChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable> & handler) const;
    using LockScreenImageChanged_revoker = event_revoker<ILockScreenInfo>;
    LockScreenImageChanged_revoker LockScreenImageChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable> & handler) const;
    void LockScreenImageChanged(event_token token) const;
    Windows::Storage::Streams::IRandomAccessStream LockScreenImage() const;
    event_token BadgesChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable> & handler) const;
    using BadgesChanged_revoker = event_revoker<ILockScreenInfo>;
    BadgesChanged_revoker BadgesChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable> & handler) const;
    void BadgesChanged(event_token token) const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::LockScreen::LockScreenBadge> Badges() const;
    event_token DetailTextChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable> & handler) const;
    using DetailTextChanged_revoker = event_revoker<ILockScreenInfo>;
    DetailTextChanged_revoker DetailTextChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable> & handler) const;
    void DetailTextChanged(event_token token) const;
    Windows::Foundation::Collections::IVectorView<hstring> DetailText() const;
    event_token AlarmIconChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable> & handler) const;
    using AlarmIconChanged_revoker = event_revoker<ILockScreenInfo>;
    AlarmIconChanged_revoker AlarmIconChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable> & handler) const;
    void AlarmIconChanged(event_token token) const;
    Windows::Storage::Streams::IRandomAccessStream AlarmIcon() const;
};

template <typename D>
struct WINRT_EBO impl_ILockScreenUnlockingDeferral
{
    void Complete() const;
};

template <typename D>
struct WINRT_EBO impl_ILockScreenUnlockingEventArgs
{
    Windows::ApplicationModel::LockScreen::LockScreenUnlockingDeferral GetDeferral() const;
    Windows::Foundation::DateTime Deadline() const;
};

struct ILockApplicationHost :
    Windows::IInspectable,
    impl::consume<ILockApplicationHost>
{
    ILockApplicationHost(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILockApplicationHost>(m_ptr); }
};

struct ILockApplicationHostStatics :
    Windows::IInspectable,
    impl::consume<ILockApplicationHostStatics>
{
    ILockApplicationHostStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILockApplicationHostStatics>(m_ptr); }
};

struct ILockScreenBadge :
    Windows::IInspectable,
    impl::consume<ILockScreenBadge>
{
    ILockScreenBadge(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILockScreenBadge>(m_ptr); }
};

struct ILockScreenInfo :
    Windows::IInspectable,
    impl::consume<ILockScreenInfo>
{
    ILockScreenInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILockScreenInfo>(m_ptr); }
};

struct ILockScreenUnlockingDeferral :
    Windows::IInspectable,
    impl::consume<ILockScreenUnlockingDeferral>
{
    ILockScreenUnlockingDeferral(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILockScreenUnlockingDeferral>(m_ptr); }
};

struct ILockScreenUnlockingEventArgs :
    Windows::IInspectable,
    impl::consume<ILockScreenUnlockingEventArgs>
{
    ILockScreenUnlockingEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILockScreenUnlockingEventArgs>(m_ptr); }
};

}

}
