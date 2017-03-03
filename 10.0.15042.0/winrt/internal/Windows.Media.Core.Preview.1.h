// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Media.Core.Preview.0.h"
#include "Windows.Media.0.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::Core::Preview {

struct __declspec(uuid("6a633961-dbed-464c-a09a-33412f5caa3f")) __declspec(novtable) ISoundLevelBrokerStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_SoundLevel(winrt::Windows::Media::SoundLevel * value) = 0;
    virtual HRESULT __stdcall add_SoundLevelChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SoundLevelChanged(event_token token) = 0;
};

}

namespace ABI {


}

namespace Windows::Media::Core::Preview {

template <typename D>
struct WINRT_EBO impl_ISoundLevelBrokerStatics
{
    Windows::Media::SoundLevel SoundLevel() const;
    event_token SoundLevelChanged(const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler) const;
    using SoundLevelChanged_revoker = event_revoker<ISoundLevelBrokerStatics>;
    SoundLevelChanged_revoker SoundLevelChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler) const;
    void SoundLevelChanged(event_token token) const;
};

}

namespace impl {

template <> struct traits<Windows::Media::Core::Preview::ISoundLevelBrokerStatics>
{
    using abi = ABI::Windows::Media::Core::Preview::ISoundLevelBrokerStatics;
    template <typename D> using consume = Windows::Media::Core::Preview::impl_ISoundLevelBrokerStatics<D>;
};

template <> struct traits<Windows::Media::Core::Preview::SoundLevelBroker>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.Preview.SoundLevelBroker"; }
};

}

}
