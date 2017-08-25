// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.ShareTarget.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer::ShareTarget {

struct WINRT_EBO IQuickLink :
    Windows::Foundation::IInspectable,
    impl::consume_t<IQuickLink>
{
    IQuickLink(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IShareOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShareOperation>
{
    IShareOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IShareOperation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShareOperation2>
{
    IShareOperation2(std::nullptr_t = nullptr) noexcept {}
};

}
