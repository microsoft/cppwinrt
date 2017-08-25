// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.System.Display.2.h"
#include "winrt/Windows.System.h"

namespace winrt::impl {

template <typename D> void consume_Windows_System_Display_IDisplayRequest<D>::RequestActive() const
{
    check_hresult(WINRT_SHIM(Windows::System::Display::IDisplayRequest)->RequestActive());
}

template <typename D> void consume_Windows_System_Display_IDisplayRequest<D>::RequestRelease() const
{
    check_hresult(WINRT_SHIM(Windows::System::Display::IDisplayRequest)->RequestRelease());
}

template <typename D>
struct produce<D, Windows::System::Display::IDisplayRequest> : produce_base<D, Windows::System::Display::IDisplayRequest>
{
    HRESULT __stdcall RequestActive() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestActive();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestRelease() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestRelease();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::System::Display {

inline DisplayRequest::DisplayRequest() :
    DisplayRequest(activate_instance<DisplayRequest>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::System::Display::IDisplayRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Display::IDisplayRequest> {};

template<> struct hash<winrt::Windows::System::Display::DisplayRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Display::DisplayRequest> {};

}

WINRT_WARNING_POP
