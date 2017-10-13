// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Contacts.1.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.ShareTarget.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer::ShareTarget {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer::ShareTarget {

struct WINRT_EBO QuickLink :
    Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink
{
    QuickLink(std::nullptr_t) noexcept {}
    QuickLink();
};

struct WINRT_EBO ShareOperation :
    Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation,
    impl::require<ShareOperation, Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation2, Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation3>
{
    ShareOperation(std::nullptr_t) noexcept {}
};

}
