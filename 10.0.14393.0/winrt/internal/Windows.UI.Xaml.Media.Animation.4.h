// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Media::Animation {

template <typename D, typename A = ABI::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides>
class INavigationTransitionInfoOverridesT : public A
{
    D & shim() noexcept { return *static_cast<D *>(this); }

public:

    using INavigationTransitionInfoOverrides = winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides;

    hstring GetNavigationStateCore()
    {
        return shim().as<INavigationTransitionInfoOverrides>().GetNavigationStateCore();
    }

    void SetNavigationStateCore(hstring_ref navigationState)
    {
        shim().as<INavigationTransitionInfoOverrides>().SetNavigationStateCore(navigationState);
    }

    HRESULT __stdcall abi_GetNavigationStateCore(abi_arg_out<hstring> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetNavigationStateCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetNavigationStateCore(abi_arg_in<hstring> navigationState) noexcept override
    {
        try
        {
            this->shim().SetNavigationStateCore(*reinterpret_cast<const hstring *>(&navigationState));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

}
