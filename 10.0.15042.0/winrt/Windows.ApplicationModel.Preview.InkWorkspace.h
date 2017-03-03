// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Graphics.Imaging.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.ApplicationModel.Preview.InkWorkspace.3.h"
#include "Windows.ApplicationModel.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager> : produce_base<D, Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager>
{
    HRESULT __stdcall abi_SetThumbnailAsync(impl::abi_arg_in<Windows::Graphics::Imaging::ISoftwareBitmap> bitmap, impl::abi_arg_out<Windows::Foundation::IAsyncAction> action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().SetThumbnailAsync(*reinterpret_cast<const Windows::Graphics::Imaging::SoftwareBitmap *>(&bitmap)));
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
    HRESULT __stdcall abi_GetForCurrentApp(impl::abi_arg_out<Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager> current) noexcept override
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

namespace Windows::ApplicationModel::Preview::InkWorkspace {

template <typename D> Windows::Foundation::IAsyncAction impl_IInkWorkspaceHostedAppManager<D>::SetThumbnailAsync(const Windows::Graphics::Imaging::SoftwareBitmap & bitmap) const
{
    Windows::Foundation::IAsyncAction action;
    check_hresult(WINRT_SHIM(IInkWorkspaceHostedAppManager)->abi_SetThumbnailAsync(get_abi(bitmap), put_abi(action)));
    return action;
}

template <typename D> Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager impl_IInkWorkspaceHostedAppManagerStatics<D>::GetForCurrentApp() const
{
    Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager current { nullptr };
    check_hresult(WINRT_SHIM(IInkWorkspaceHostedAppManagerStatics)->abi_GetForCurrentApp(put_abi(current)));
    return current;
}

inline Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager InkWorkspaceHostedAppManager::GetForCurrentApp()
{
    return get_activation_factory<InkWorkspaceHostedAppManager, IInkWorkspaceHostedAppManagerStatics>().GetForCurrentApp();
}

}

}

template<>
struct std::hash<winrt::Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
