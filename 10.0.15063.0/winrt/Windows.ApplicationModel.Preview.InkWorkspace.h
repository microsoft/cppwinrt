// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.ApplicationModel.Preview.InkWorkspace.2.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Preview_InkWorkspace_IInkWorkspaceHostedAppManager<D>::SetThumbnailAsync(Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager)->SetThumbnailAsync(get_abi(bitmap), put_abi(action)));
    return action;
}

template <typename D> Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager consume_Windows_ApplicationModel_Preview_InkWorkspace_IInkWorkspaceHostedAppManagerStatics<D>::GetForCurrentApp() const
{
    Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager current{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics)->GetForCurrentApp(put_abi(current)));
    return current;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager> : produce_base<D, Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager>
{
    HRESULT __stdcall SetThumbnailAsync(::IUnknown* bitmap, ::IUnknown** action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().SetThumbnailAsync(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&bitmap)));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics> : produce_base<D, Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics>
{
    HRESULT __stdcall GetForCurrentApp(::IUnknown** current) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *current = detach_abi(this->shim().GetForCurrentApp());
            return S_OK;
        }
        catch (...)
        {
            *current = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Preview::InkWorkspace {

inline Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager InkWorkspaceHostedAppManager::GetForCurrentApp()
{
    return get_activation_factory<InkWorkspaceHostedAppManager, Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics>().GetForCurrentApp();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager> {};

}

WINRT_WARNING_POP
