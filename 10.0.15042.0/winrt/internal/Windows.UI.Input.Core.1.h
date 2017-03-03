// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.UI.Input.Core.0.h"
#include "Windows.ApplicationModel.Core.0.h"
#include "Windows.UI.Core.0.h"
#include "Windows.UI.Input.0.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Input::Core {

struct __declspec(uuid("3d577ef6-4cee-11e6-b535-001bdc06ab3b")) __declspec(novtable) IRadialControllerIndependentInputSource : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Controller(Windows::UI::Input::IRadialController ** value) = 0;
    virtual HRESULT __stdcall get_Dispatcher(Windows::UI::Core::ICoreDispatcher ** value) = 0;
};

struct __declspec(uuid("3d577ef5-4cee-11e6-b535-001bdc06ab3b")) __declspec(novtable) IRadialControllerIndependentInputSourceStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_CreateForView(Windows::ApplicationModel::Core::ICoreApplicationView * view, Windows::UI::Input::Core::IRadialControllerIndependentInputSource ** result) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::UI::Input::Core::RadialControllerIndependentInputSource> { using default_interface = Windows::UI::Input::Core::IRadialControllerIndependentInputSource; };

}

namespace Windows::UI::Input::Core {

template <typename D>
struct WINRT_EBO impl_IRadialControllerIndependentInputSource
{
    Windows::UI::Input::RadialController Controller() const;
    Windows::UI::Core::CoreDispatcher Dispatcher() const;
};

template <typename D>
struct WINRT_EBO impl_IRadialControllerIndependentInputSourceStatics
{
    Windows::UI::Input::Core::RadialControllerIndependentInputSource CreateForView(const Windows::ApplicationModel::Core::CoreApplicationView & view) const;
};

}

namespace impl {

template <> struct traits<Windows::UI::Input::Core::IRadialControllerIndependentInputSource>
{
    using abi = ABI::Windows::UI::Input::Core::IRadialControllerIndependentInputSource;
    template <typename D> using consume = Windows::UI::Input::Core::impl_IRadialControllerIndependentInputSource<D>;
};

template <> struct traits<Windows::UI::Input::Core::IRadialControllerIndependentInputSourceStatics>
{
    using abi = ABI::Windows::UI::Input::Core::IRadialControllerIndependentInputSourceStatics;
    template <typename D> using consume = Windows::UI::Input::Core::impl_IRadialControllerIndependentInputSourceStatics<D>;
};

template <> struct traits<Windows::UI::Input::Core::RadialControllerIndependentInputSource>
{
    using abi = ABI::Windows::UI::Input::Core::RadialControllerIndependentInputSource;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Core.RadialControllerIndependentInputSource"; }
};

}

}
