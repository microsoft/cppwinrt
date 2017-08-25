// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.System.Threading.0.h"

WINRT_EXPORT namespace winrt::Windows::System::Threading {

struct WINRT_EBO IThreadPoolStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IThreadPoolStatics>
{
    IThreadPoolStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IThreadPoolTimer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IThreadPoolTimer>
{
    IThreadPoolTimer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IThreadPoolTimerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IThreadPoolTimerStatics>
{
    IThreadPoolTimerStatics(std::nullptr_t = nullptr) noexcept {}
};

}
