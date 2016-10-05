// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.System.Display.0.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::System::Display {

struct __declspec(uuid("e5732044-f49f-4b60-8dd4-5e7e3a632ac0")) __declspec(novtable) IDisplayRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_RequestActive() = 0;
    virtual HRESULT __stdcall abi_RequestRelease() = 0;
};

}

namespace ABI {

template <> struct traits<Windows::System::Display::DisplayRequest> { using default_interface = Windows::System::Display::IDisplayRequest; };

}

namespace Windows::System::Display {

template <typename T> struct impl_IDisplayRequest;

}

namespace impl {

template <> struct traits<Windows::System::Display::IDisplayRequest>
{
    using abi = ABI::Windows::System::Display::IDisplayRequest;
    template <typename D> using consume = Windows::System::Display::impl_IDisplayRequest<D>;
};

template <> struct traits<Windows::System::Display::DisplayRequest>
{
    using abi = ABI::Windows::System::Display::DisplayRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.Display.DisplayRequest"; }
};

}

}
