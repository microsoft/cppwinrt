// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging {

struct SoftwareBitmap;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Preview::InkWorkspace {

struct IInkWorkspaceHostedAppManager;
struct IInkWorkspaceHostedAppManagerStatics;
struct InkWorkspaceHostedAppManager;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager>{ using type = class_category; };
template <> struct name<Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Preview.InkWorkspace.IInkWorkspaceHostedAppManager" }; };
template <> struct name<Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Preview.InkWorkspace.IInkWorkspaceHostedAppManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Preview.InkWorkspace.InkWorkspaceHostedAppManager" }; };
template <> struct guid<Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager>{ static constexpr GUID value{ 0xFE0A7990,0x5E59,0x4BB7,{ 0x8A,0x63,0x7D,0x21,0x8C,0xD9,0x63,0x00 } }; };
template <> struct guid<Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics>{ static constexpr GUID value{ 0xCBFD8CC5,0xA162,0x4BC4,{ 0x84,0xEE,0xE8,0x71,0x6D,0x52,0x33,0xC5 } }; };
template <> struct default_interface<Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager>{ using type = Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager; };

template <typename D>
struct consume_Windows_ApplicationModel_Preview_InkWorkspace_IInkWorkspaceHostedAppManager
{
    Windows::Foundation::IAsyncAction SetThumbnailAsync(Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const;
};
template <> struct consume<Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager> { template <typename D> using type = consume_Windows_ApplicationModel_Preview_InkWorkspace_IInkWorkspaceHostedAppManager<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Preview_InkWorkspace_IInkWorkspaceHostedAppManagerStatics
{
    Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager GetForCurrentApp() const;
};
template <> struct consume<Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Preview_InkWorkspace_IInkWorkspaceHostedAppManagerStatics<D>; };

template <> struct abi<Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetThumbnailAsync(::IUnknown* bitmap, ::IUnknown** action) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentApp(::IUnknown** current) = 0;
};};

}
