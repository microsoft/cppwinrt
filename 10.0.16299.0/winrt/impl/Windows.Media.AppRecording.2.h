// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Media.AppRecording.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::AppRecording {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Media::AppRecording {

struct WINRT_EBO AppRecordingManager :
    Windows::Media::AppRecording::IAppRecordingManager
{
    AppRecordingManager(std::nullptr_t) noexcept {}
    static Windows::Media::AppRecording::AppRecordingManager GetDefault();
};

struct WINRT_EBO AppRecordingResult :
    Windows::Media::AppRecording::IAppRecordingResult
{
    AppRecordingResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppRecordingSaveScreenshotResult :
    Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult
{
    AppRecordingSaveScreenshotResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppRecordingSavedScreenshotInfo :
    Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo
{
    AppRecordingSavedScreenshotInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppRecordingStatus :
    Windows::Media::AppRecording::IAppRecordingStatus
{
    AppRecordingStatus(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppRecordingStatusDetails :
    Windows::Media::AppRecording::IAppRecordingStatusDetails
{
    AppRecordingStatusDetails(std::nullptr_t) noexcept {}
};

}
