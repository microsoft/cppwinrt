// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Media.Core.1.h"
#include "winrt/impl/Windows.Media.MediaProperties.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Media.Transcoding.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::Transcoding {

struct WINRT_EBO MediaTranscoder :
    Windows::Media::Transcoding::IMediaTranscoder,
    impl::require<MediaTranscoder, Windows::Media::Transcoding::IMediaTranscoder2>
{
    MediaTranscoder(std::nullptr_t) noexcept {}
    MediaTranscoder();
};

struct WINRT_EBO PrepareTranscodeResult :
    Windows::Media::Transcoding::IPrepareTranscodeResult
{
    PrepareTranscodeResult(std::nullptr_t) noexcept {}
};

}
