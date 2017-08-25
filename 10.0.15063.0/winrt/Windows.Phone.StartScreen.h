// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.UI.Notifications.2.h"
#include "winrt/impl/Windows.Phone.StartScreen.2.h"

namespace winrt::impl {

template <typename D> void consume_Windows_Phone_StartScreen_IDualSimTile<D>::DisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::StartScreen::IDualSimTile)->put_DisplayName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Phone_StartScreen_IDualSimTile<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::StartScreen::IDualSimTile)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Phone_StartScreen_IDualSimTile<D>::IsPinnedToStart() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Phone::StartScreen::IDualSimTile)->get_IsPinnedToStart(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Phone_StartScreen_IDualSimTile<D>::CreateAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::StartScreen::IDualSimTile)->CreateAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Phone_StartScreen_IDualSimTile<D>::UpdateAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::StartScreen::IDualSimTile)->UpdateAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Phone_StartScreen_IDualSimTile<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::StartScreen::IDualSimTile)->DeleteAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Phone::StartScreen::DualSimTile consume_Windows_Phone_StartScreen_IDualSimTileStatics<D>::GetTileForSim2() const
{
    Windows::Phone::StartScreen::DualSimTile result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::StartScreen::IDualSimTileStatics)->GetTileForSim2(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Phone_StartScreen_IDualSimTileStatics<D>::UpdateDisplayNameForSim1Async(param::hstring const& name) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::StartScreen::IDualSimTileStatics)->UpdateDisplayNameForSim1Async(get_abi(name), put_abi(operation)));
    return operation;
}

template <typename D> Windows::UI::Notifications::TileUpdater consume_Windows_Phone_StartScreen_IDualSimTileStatics<D>::CreateTileUpdaterForSim1() const
{
    Windows::UI::Notifications::TileUpdater updater{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::StartScreen::IDualSimTileStatics)->CreateTileUpdaterForSim1(put_abi(updater)));
    return updater;
}

template <typename D> Windows::UI::Notifications::TileUpdater consume_Windows_Phone_StartScreen_IDualSimTileStatics<D>::CreateTileUpdaterForSim2() const
{
    Windows::UI::Notifications::TileUpdater updater{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::StartScreen::IDualSimTileStatics)->CreateTileUpdaterForSim2(put_abi(updater)));
    return updater;
}

template <typename D> Windows::UI::Notifications::BadgeUpdater consume_Windows_Phone_StartScreen_IDualSimTileStatics<D>::CreateBadgeUpdaterForSim1() const
{
    Windows::UI::Notifications::BadgeUpdater updater{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::StartScreen::IDualSimTileStatics)->CreateBadgeUpdaterForSim1(put_abi(updater)));
    return updater;
}

template <typename D> Windows::UI::Notifications::BadgeUpdater consume_Windows_Phone_StartScreen_IDualSimTileStatics<D>::CreateBadgeUpdaterForSim2() const
{
    Windows::UI::Notifications::BadgeUpdater updater{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::StartScreen::IDualSimTileStatics)->CreateBadgeUpdaterForSim2(put_abi(updater)));
    return updater;
}

template <typename D> Windows::UI::Notifications::ToastNotifier consume_Windows_Phone_StartScreen_IDualSimTileStatics<D>::CreateToastNotifierForSim1() const
{
    Windows::UI::Notifications::ToastNotifier notifier{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::StartScreen::IDualSimTileStatics)->CreateToastNotifierForSim1(put_abi(notifier)));
    return notifier;
}

template <typename D> Windows::UI::Notifications::ToastNotifier consume_Windows_Phone_StartScreen_IDualSimTileStatics<D>::CreateToastNotifierForSim2() const
{
    Windows::UI::Notifications::ToastNotifier notifier{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::StartScreen::IDualSimTileStatics)->CreateToastNotifierForSim2(put_abi(notifier)));
    return notifier;
}

template <typename D> Windows::UI::Notifications::ToastNotifier consume_Windows_Phone_StartScreen_IToastNotificationManagerStatics3<D>::CreateToastNotifierForSecondaryTile(param::hstring const& tileId) const
{
    Windows::UI::Notifications::ToastNotifier notifier{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::StartScreen::IToastNotificationManagerStatics3)->CreateToastNotifierForSecondaryTile(get_abi(tileId), put_abi(notifier)));
    return notifier;
}

template <typename D>
struct produce<D, Windows::Phone::StartScreen::IDualSimTile> : produce_base<D, Windows::Phone::StartScreen::IDualSimTile>
{
    HRESULT __stdcall put_DisplayName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPinnedToStart(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPinnedToStart());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().UpdateAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().DeleteAsync());
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
struct produce<D, Windows::Phone::StartScreen::IDualSimTileStatics> : produce_base<D, Windows::Phone::StartScreen::IDualSimTileStatics>
{
    HRESULT __stdcall GetTileForSim2(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetTileForSim2());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateDisplayNameForSim1Async(HSTRING name, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().UpdateDisplayNameForSim1Async(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateTileUpdaterForSim1(::IUnknown** updater) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *updater = detach_abi(this->shim().CreateTileUpdaterForSim1());
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateTileUpdaterForSim2(::IUnknown** updater) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *updater = detach_abi(this->shim().CreateTileUpdaterForSim2());
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateBadgeUpdaterForSim1(::IUnknown** updater) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *updater = detach_abi(this->shim().CreateBadgeUpdaterForSim1());
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateBadgeUpdaterForSim2(::IUnknown** updater) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *updater = detach_abi(this->shim().CreateBadgeUpdaterForSim2());
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateToastNotifierForSim1(::IUnknown** notifier) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *notifier = detach_abi(this->shim().CreateToastNotifierForSim1());
            return S_OK;
        }
        catch (...)
        {
            *notifier = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateToastNotifierForSim2(::IUnknown** notifier) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *notifier = detach_abi(this->shim().CreateToastNotifierForSim2());
            return S_OK;
        }
        catch (...)
        {
            *notifier = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::StartScreen::IToastNotificationManagerStatics3> : produce_base<D, Windows::Phone::StartScreen::IToastNotificationManagerStatics3>
{
    HRESULT __stdcall CreateToastNotifierForSecondaryTile(HSTRING tileId, ::IUnknown** notifier) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *notifier = detach_abi(this->shim().CreateToastNotifierForSecondaryTile(*reinterpret_cast<hstring const*>(&tileId)));
            return S_OK;
        }
        catch (...)
        {
            *notifier = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Phone::StartScreen {

inline DualSimTile::DualSimTile() :
    DualSimTile(activate_instance<DualSimTile>())
{}

inline Windows::Phone::StartScreen::DualSimTile DualSimTile::GetTileForSim2()
{
    return get_activation_factory<DualSimTile, Windows::Phone::StartScreen::IDualSimTileStatics>().GetTileForSim2();
}

inline Windows::Foundation::IAsyncOperation<bool> DualSimTile::UpdateDisplayNameForSim1Async(param::hstring const& name)
{
    return get_activation_factory<DualSimTile, Windows::Phone::StartScreen::IDualSimTileStatics>().UpdateDisplayNameForSim1Async(name);
}

inline Windows::UI::Notifications::TileUpdater DualSimTile::CreateTileUpdaterForSim1()
{
    return get_activation_factory<DualSimTile, Windows::Phone::StartScreen::IDualSimTileStatics>().CreateTileUpdaterForSim1();
}

inline Windows::UI::Notifications::TileUpdater DualSimTile::CreateTileUpdaterForSim2()
{
    return get_activation_factory<DualSimTile, Windows::Phone::StartScreen::IDualSimTileStatics>().CreateTileUpdaterForSim2();
}

inline Windows::UI::Notifications::BadgeUpdater DualSimTile::CreateBadgeUpdaterForSim1()
{
    return get_activation_factory<DualSimTile, Windows::Phone::StartScreen::IDualSimTileStatics>().CreateBadgeUpdaterForSim1();
}

inline Windows::UI::Notifications::BadgeUpdater DualSimTile::CreateBadgeUpdaterForSim2()
{
    return get_activation_factory<DualSimTile, Windows::Phone::StartScreen::IDualSimTileStatics>().CreateBadgeUpdaterForSim2();
}

inline Windows::UI::Notifications::ToastNotifier DualSimTile::CreateToastNotifierForSim1()
{
    return get_activation_factory<DualSimTile, Windows::Phone::StartScreen::IDualSimTileStatics>().CreateToastNotifierForSim1();
}

inline Windows::UI::Notifications::ToastNotifier DualSimTile::CreateToastNotifierForSim2()
{
    return get_activation_factory<DualSimTile, Windows::Phone::StartScreen::IDualSimTileStatics>().CreateToastNotifierForSim2();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Phone::StartScreen::IDualSimTile> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::StartScreen::IDualSimTile> {};

template<> struct hash<winrt::Windows::Phone::StartScreen::IDualSimTileStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::StartScreen::IDualSimTileStatics> {};

template<> struct hash<winrt::Windows::Phone::StartScreen::IToastNotificationManagerStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::StartScreen::IToastNotificationManagerStatics3> {};

template<> struct hash<winrt::Windows::Phone::StartScreen::DualSimTile> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::StartScreen::DualSimTile> {};

}

WINRT_WARNING_POP
