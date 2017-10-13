// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Web.1.h"

WINRT_EXPORT namespace winrt::Windows::Web {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Web {

struct WebError
{
    WebError() = delete;
    static Windows::Web::WebErrorStatus GetStatus(int32_t hresult);
};

}
