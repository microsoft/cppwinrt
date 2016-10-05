// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Phone.StartScreen.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
#define WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
template <> struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a")) __declspec(novtable) IAsyncOperation<bool> : impl_IAsyncOperation<bool> {};
#endif

#ifndef WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
#define WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
template <> struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a")) __declspec(novtable) AsyncOperationCompletedHandler<bool> : impl_AsyncOperationCompletedHandler<bool> {};
#endif


}

namespace Windows::Phone::StartScreen {

template <typename D>
struct WINRT_EBO impl_IDualSimTile
{
    void DisplayName(hstring_ref value) const;
    hstring DisplayName() const;
    bool IsPinnedToStart() const;
    Windows::Foundation::IAsyncOperation<bool> CreateAsync() const;
    Windows::Foundation::IAsyncOperation<bool> UpdateAsync() const;
    Windows::Foundation::IAsyncOperation<bool> DeleteAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IDualSimTileStatics
{
    Windows::Phone::StartScreen::DualSimTile GetTileForSim2() const;
    Windows::Foundation::IAsyncOperation<bool> UpdateDisplayNameForSim1Async(hstring_ref name) const;
    Windows::UI::Notifications::TileUpdater CreateTileUpdaterForSim1() const;
    Windows::UI::Notifications::TileUpdater CreateTileUpdaterForSim2() const;
    Windows::UI::Notifications::BadgeUpdater CreateBadgeUpdaterForSim1() const;
    Windows::UI::Notifications::BadgeUpdater CreateBadgeUpdaterForSim2() const;
    Windows::UI::Notifications::ToastNotifier CreateToastNotifierForSim1() const;
    Windows::UI::Notifications::ToastNotifier CreateToastNotifierForSim2() const;
};

template <typename D>
struct WINRT_EBO impl_IToastNotificationManagerStatics3
{
    Windows::UI::Notifications::ToastNotifier CreateToastNotifierForSecondaryTile(hstring_ref tileId) const;
};

struct IDualSimTile :
    Windows::IInspectable,
    impl::consume<IDualSimTile>
{
    IDualSimTile(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDualSimTile>(m_ptr); }
};

struct IDualSimTileStatics :
    Windows::IInspectable,
    impl::consume<IDualSimTileStatics>
{
    IDualSimTileStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDualSimTileStatics>(m_ptr); }
};

struct IToastNotificationManagerStatics3 :
    Windows::IInspectable,
    impl::consume<IToastNotificationManagerStatics3>
{
    IToastNotificationManagerStatics3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToastNotificationManagerStatics3>(m_ptr); }
};

}

}
