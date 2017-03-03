// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.ApplicationModel.Preview.InkWorkspace.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Graphics.Imaging.0.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Preview::InkWorkspace {

struct __declspec(uuid("fe0a7990-5e59-4bb7-8a63-7d218cd96300")) __declspec(novtable) IInkWorkspaceHostedAppManager : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_SetThumbnailAsync(Windows::Graphics::Imaging::ISoftwareBitmap * bitmap, Windows::Foundation::IAsyncAction ** action) = 0;
};

struct __declspec(uuid("cbfd8cc5-a162-4bc4-84ee-e8716d5233c5")) __declspec(novtable) IInkWorkspaceHostedAppManagerStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetForCurrentApp(Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager ** current) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager> { using default_interface = Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager; };

}

namespace Windows::ApplicationModel::Preview::InkWorkspace {

template <typename D>
struct WINRT_EBO impl_IInkWorkspaceHostedAppManager
{
    Windows::Foundation::IAsyncAction SetThumbnailAsync(const Windows::Graphics::Imaging::SoftwareBitmap & bitmap) const;
};

template <typename D>
struct WINRT_EBO impl_IInkWorkspaceHostedAppManagerStatics
{
    Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager GetForCurrentApp() const;
};

}

namespace impl {

template <> struct traits<Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager>
{
    using abi = ABI::Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager;
    template <typename D> using consume = Windows::ApplicationModel::Preview::InkWorkspace::impl_IInkWorkspaceHostedAppManager<D>;
};

template <> struct traits<Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics>
{
    using abi = ABI::Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics;
    template <typename D> using consume = Windows::ApplicationModel::Preview::InkWorkspace::impl_IInkWorkspaceHostedAppManagerStatics<D>;
};

template <> struct traits<Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager>
{
    using abi = ABI::Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Preview.InkWorkspace.InkWorkspaceHostedAppManager"; }
};

}

}
