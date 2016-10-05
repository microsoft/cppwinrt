// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Phone.ApplicationModel.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Phone::ApplicationModel {

template <typename D>
struct WINRT_EBO impl_IApplicationProfileStatics
{
    Windows::Phone::ApplicationModel::ApplicationProfileModes Modes() const;
};

struct IApplicationProfileStatics :
    Windows::IInspectable,
    impl::consume<IApplicationProfileStatics>
{
    IApplicationProfileStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationProfileStatics>(m_ptr); }
};

}

}
