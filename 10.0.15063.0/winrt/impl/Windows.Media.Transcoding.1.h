// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Media.Core.0.h"
#include "winrt/impl/Windows.Media.MediaProperties.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Media.Transcoding.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::Transcoding {

struct WINRT_EBO IMediaTranscoder :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaTranscoder>
{
    IMediaTranscoder(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaTranscoder2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaTranscoder2>
{
    IMediaTranscoder2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrepareTranscodeResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrepareTranscodeResult>
{
    IPrepareTranscodeResult(std::nullptr_t = nullptr) noexcept {}
};

}
