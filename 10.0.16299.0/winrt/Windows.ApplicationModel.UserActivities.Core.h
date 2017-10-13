// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.UserActivities.2.h"
#include "winrt/impl/Windows.ApplicationModel.UserActivities.Core.2.h"
#include "winrt/Windows.ApplicationModel.UserActivities.h"

namespace winrt::impl {

template <typename D> Windows::ApplicationModel::UserActivities::UserActivitySession consume_Windows_ApplicationModel_UserActivities_Core_ICoreUserActivityManagerStatics<D>::CreateUserActivitySessionInBackground(Windows::ApplicationModel::UserActivities::UserActivity const& activity) const
{
    Windows::ApplicationModel::UserActivities::UserActivitySession result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics)->CreateUserActivitySessionInBackground(get_abi(activity), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_UserActivities_Core_ICoreUserActivityManagerStatics<D>::DeleteUserActivitySessionsInTimeRangeAsync(Windows::ApplicationModel::UserActivities::UserActivityChannel const& channel, Windows::Foundation::DateTime const& startTime, Windows::Foundation::DateTime const& endTime) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics)->DeleteUserActivitySessionsInTimeRangeAsync(get_abi(channel), get_abi(startTime), get_abi(endTime), put_abi(operation)));
    return operation;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics> : produce_base<D, Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics>
{
    HRESULT __stdcall CreateUserActivitySessionInBackground(::IUnknown* activity, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateUserActivitySessionInBackground(*reinterpret_cast<Windows::ApplicationModel::UserActivities::UserActivity const*>(&activity)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteUserActivitySessionsInTimeRangeAsync(::IUnknown* channel, Windows::Foundation::DateTime startTime, Windows::Foundation::DateTime endTime, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().DeleteUserActivitySessionsInTimeRangeAsync(*reinterpret_cast<Windows::ApplicationModel::UserActivities::UserActivityChannel const*>(&channel), *reinterpret_cast<Windows::Foundation::DateTime const*>(&startTime), *reinterpret_cast<Windows::Foundation::DateTime const*>(&endTime)));
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

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserActivities::Core {

inline Windows::ApplicationModel::UserActivities::UserActivitySession CoreUserActivityManager::CreateUserActivitySessionInBackground(Windows::ApplicationModel::UserActivities::UserActivity const& activity)
{
    return get_activation_factory<CoreUserActivityManager, Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics>().CreateUserActivitySessionInBackground(activity);
}

inline Windows::Foundation::IAsyncAction CoreUserActivityManager::DeleteUserActivitySessionsInTimeRangeAsync(Windows::ApplicationModel::UserActivities::UserActivityChannel const& channel, Windows::Foundation::DateTime const& startTime, Windows::Foundation::DateTime const& endTime)
{
    return get_activation_factory<CoreUserActivityManager, Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics>().DeleteUserActivitySessionsInTimeRangeAsync(channel, startTime, endTime);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::Core::CoreUserActivityManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserActivities::Core::CoreUserActivityManager> {};

}

WINRT_WARNING_POP
