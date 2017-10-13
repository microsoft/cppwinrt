// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage {

struct StorageFile;
struct StorageFolder;

}

WINRT_EXPORT namespace winrt::Windows::Media::AppRecording {

enum class AppRecordingSaveScreenshotOption : int32_t
{
    None = 0,
    HdrContentVisible = 1,
};

struct IAppRecordingManager;
struct IAppRecordingManagerStatics;
struct IAppRecordingResult;
struct IAppRecordingSaveScreenshotResult;
struct IAppRecordingSavedScreenshotInfo;
struct IAppRecordingStatus;
struct IAppRecordingStatusDetails;
struct AppRecordingManager;
struct AppRecordingResult;
struct AppRecordingSaveScreenshotResult;
struct AppRecordingSavedScreenshotInfo;
struct AppRecordingStatus;
struct AppRecordingStatusDetails;

}

namespace winrt::impl {

template <> struct category<Windows::Media::AppRecording::IAppRecordingManager>{ using type = interface_category; };
template <> struct category<Windows::Media::AppRecording::IAppRecordingManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::AppRecording::IAppRecordingResult>{ using type = interface_category; };
template <> struct category<Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult>{ using type = interface_category; };
template <> struct category<Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo>{ using type = interface_category; };
template <> struct category<Windows::Media::AppRecording::IAppRecordingStatus>{ using type = interface_category; };
template <> struct category<Windows::Media::AppRecording::IAppRecordingStatusDetails>{ using type = interface_category; };
template <> struct category<Windows::Media::AppRecording::AppRecordingManager>{ using type = class_category; };
template <> struct category<Windows::Media::AppRecording::AppRecordingResult>{ using type = class_category; };
template <> struct category<Windows::Media::AppRecording::AppRecordingSaveScreenshotResult>{ using type = class_category; };
template <> struct category<Windows::Media::AppRecording::AppRecordingSavedScreenshotInfo>{ using type = class_category; };
template <> struct category<Windows::Media::AppRecording::AppRecordingStatus>{ using type = class_category; };
template <> struct category<Windows::Media::AppRecording::AppRecordingStatusDetails>{ using type = class_category; };
template <> struct category<Windows::Media::AppRecording::AppRecordingSaveScreenshotOption>{ using type = enum_category; };
template <> struct name<Windows::Media::AppRecording::IAppRecordingManager>{ static constexpr auto & value{ L"Windows.Media.AppRecording.IAppRecordingManager" }; };
template <> struct name<Windows::Media::AppRecording::IAppRecordingManagerStatics>{ static constexpr auto & value{ L"Windows.Media.AppRecording.IAppRecordingManagerStatics" }; };
template <> struct name<Windows::Media::AppRecording::IAppRecordingResult>{ static constexpr auto & value{ L"Windows.Media.AppRecording.IAppRecordingResult" }; };
template <> struct name<Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult>{ static constexpr auto & value{ L"Windows.Media.AppRecording.IAppRecordingSaveScreenshotResult" }; };
template <> struct name<Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo>{ static constexpr auto & value{ L"Windows.Media.AppRecording.IAppRecordingSavedScreenshotInfo" }; };
template <> struct name<Windows::Media::AppRecording::IAppRecordingStatus>{ static constexpr auto & value{ L"Windows.Media.AppRecording.IAppRecordingStatus" }; };
template <> struct name<Windows::Media::AppRecording::IAppRecordingStatusDetails>{ static constexpr auto & value{ L"Windows.Media.AppRecording.IAppRecordingStatusDetails" }; };
template <> struct name<Windows::Media::AppRecording::AppRecordingManager>{ static constexpr auto & value{ L"Windows.Media.AppRecording.AppRecordingManager" }; };
template <> struct name<Windows::Media::AppRecording::AppRecordingResult>{ static constexpr auto & value{ L"Windows.Media.AppRecording.AppRecordingResult" }; };
template <> struct name<Windows::Media::AppRecording::AppRecordingSaveScreenshotResult>{ static constexpr auto & value{ L"Windows.Media.AppRecording.AppRecordingSaveScreenshotResult" }; };
template <> struct name<Windows::Media::AppRecording::AppRecordingSavedScreenshotInfo>{ static constexpr auto & value{ L"Windows.Media.AppRecording.AppRecordingSavedScreenshotInfo" }; };
template <> struct name<Windows::Media::AppRecording::AppRecordingStatus>{ static constexpr auto & value{ L"Windows.Media.AppRecording.AppRecordingStatus" }; };
template <> struct name<Windows::Media::AppRecording::AppRecordingStatusDetails>{ static constexpr auto & value{ L"Windows.Media.AppRecording.AppRecordingStatusDetails" }; };
template <> struct name<Windows::Media::AppRecording::AppRecordingSaveScreenshotOption>{ static constexpr auto & value{ L"Windows.Media.AppRecording.AppRecordingSaveScreenshotOption" }; };
template <> struct guid<Windows::Media::AppRecording::IAppRecordingManager>{ static constexpr GUID value{ 0xE7E26076,0xA044,0x48E2,{ 0xA5,0x12,0x30,0x94,0xD5,0x74,0xC7,0xCC } }; };
template <> struct guid<Windows::Media::AppRecording::IAppRecordingManagerStatics>{ static constexpr GUID value{ 0x50E709F7,0x38CE,0x4BD3,{ 0x9D,0xB2,0xE7,0x2B,0xBE,0x9D,0xE1,0x1D } }; };
template <> struct guid<Windows::Media::AppRecording::IAppRecordingResult>{ static constexpr GUID value{ 0x3A900864,0xC66D,0x46F9,{ 0xB2,0xD9,0x5B,0xC2,0xDA,0xD0,0x70,0xD7 } }; };
template <> struct guid<Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult>{ static constexpr GUID value{ 0x9C5B8D0A,0x0ABB,0x4457,{ 0xAA,0xEE,0x24,0xF9,0xC1,0x2E,0xC7,0x78 } }; };
template <> struct guid<Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo>{ static constexpr GUID value{ 0x9B642D0A,0x189A,0x4D00,{ 0xBF,0x25,0xE1,0xBB,0x12,0x49,0xD5,0x94 } }; };
template <> struct guid<Windows::Media::AppRecording::IAppRecordingStatus>{ static constexpr GUID value{ 0x1D0CC82C,0xBC18,0x4B8A,{ 0xA6,0xEF,0x12,0x7E,0xFA,0xB3,0xB5,0xD9 } }; };
template <> struct guid<Windows::Media::AppRecording::IAppRecordingStatusDetails>{ static constexpr GUID value{ 0xB538A9B0,0x14ED,0x4412,{ 0xAC,0x45,0x6D,0x67,0x2C,0x9C,0x99,0x49 } }; };
template <> struct default_interface<Windows::Media::AppRecording::AppRecordingManager>{ using type = Windows::Media::AppRecording::IAppRecordingManager; };
template <> struct default_interface<Windows::Media::AppRecording::AppRecordingResult>{ using type = Windows::Media::AppRecording::IAppRecordingResult; };
template <> struct default_interface<Windows::Media::AppRecording::AppRecordingSaveScreenshotResult>{ using type = Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult; };
template <> struct default_interface<Windows::Media::AppRecording::AppRecordingSavedScreenshotInfo>{ using type = Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo; };
template <> struct default_interface<Windows::Media::AppRecording::AppRecordingStatus>{ using type = Windows::Media::AppRecording::IAppRecordingStatus; };
template <> struct default_interface<Windows::Media::AppRecording::AppRecordingStatusDetails>{ using type = Windows::Media::AppRecording::IAppRecordingStatusDetails; };

template <typename D>
struct consume_Windows_Media_AppRecording_IAppRecordingManager
{
    Windows::Media::AppRecording::AppRecordingStatus GetStatus() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::AppRecording::AppRecordingResult> StartRecordingToFileAsync(Windows::Storage::StorageFile const& file) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::AppRecording::AppRecordingResult> RecordTimeSpanToFileAsync(Windows::Foundation::DateTime const& startTime, Windows::Foundation::TimeSpan const& duration, Windows::Storage::StorageFile const& file) const;
    Windows::Foundation::Collections::IVectorView<hstring> SupportedScreenshotMediaEncodingSubtypes() const noexcept;
    Windows::Foundation::IAsyncOperation<Windows::Media::AppRecording::AppRecordingSaveScreenshotResult> SaveScreenshotToFilesAsync(Windows::Storage::StorageFolder const& folder, param::hstring const& filenamePrefix, Windows::Media::AppRecording::AppRecordingSaveScreenshotOption const& option, param::async_iterable<hstring> const& requestedFormats) const;
};
template <> struct consume<Windows::Media::AppRecording::IAppRecordingManager> { template <typename D> using type = consume_Windows_Media_AppRecording_IAppRecordingManager<D>; };

template <typename D>
struct consume_Windows_Media_AppRecording_IAppRecordingManagerStatics
{
    Windows::Media::AppRecording::AppRecordingManager GetDefault() const;
};
template <> struct consume<Windows::Media::AppRecording::IAppRecordingManagerStatics> { template <typename D> using type = consume_Windows_Media_AppRecording_IAppRecordingManagerStatics<D>; };

template <typename D>
struct consume_Windows_Media_AppRecording_IAppRecordingResult
{
    bool Succeeded() const noexcept;
    HRESULT ExtendedError() const noexcept;
    Windows::Foundation::TimeSpan Duration() const noexcept;
    bool IsFileTruncated() const noexcept;
};
template <> struct consume<Windows::Media::AppRecording::IAppRecordingResult> { template <typename D> using type = consume_Windows_Media_AppRecording_IAppRecordingResult<D>; };

template <typename D>
struct consume_Windows_Media_AppRecording_IAppRecordingSaveScreenshotResult
{
    bool Succeeded() const noexcept;
    HRESULT ExtendedError() const noexcept;
    Windows::Foundation::Collections::IVectorView<Windows::Media::AppRecording::AppRecordingSavedScreenshotInfo> SavedScreenshotInfos() const noexcept;
};
template <> struct consume<Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult> { template <typename D> using type = consume_Windows_Media_AppRecording_IAppRecordingSaveScreenshotResult<D>; };

template <typename D>
struct consume_Windows_Media_AppRecording_IAppRecordingSavedScreenshotInfo
{
    Windows::Storage::StorageFile File() const noexcept;
    hstring MediaEncodingSubtype() const noexcept;
};
template <> struct consume<Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo> { template <typename D> using type = consume_Windows_Media_AppRecording_IAppRecordingSavedScreenshotInfo<D>; };

template <typename D>
struct consume_Windows_Media_AppRecording_IAppRecordingStatus
{
    bool CanRecord() const noexcept;
    bool CanRecordTimeSpan() const noexcept;
    Windows::Foundation::TimeSpan HistoricalBufferDuration() const noexcept;
    Windows::Media::AppRecording::AppRecordingStatusDetails Details() const noexcept;
};
template <> struct consume<Windows::Media::AppRecording::IAppRecordingStatus> { template <typename D> using type = consume_Windows_Media_AppRecording_IAppRecordingStatus<D>; };

template <typename D>
struct consume_Windows_Media_AppRecording_IAppRecordingStatusDetails
{
    bool IsAnyAppBroadcasting() const noexcept;
    bool IsCaptureResourceUnavailable() const noexcept;
    bool IsGameStreamInProgress() const noexcept;
    bool IsTimeSpanRecordingDisabled() const noexcept;
    bool IsGpuConstrained() const noexcept;
    bool IsAppInactive() const noexcept;
    bool IsBlockedForApp() const noexcept;
    bool IsDisabledByUser() const noexcept;
    bool IsDisabledBySystem() const noexcept;
};
template <> struct consume<Windows::Media::AppRecording::IAppRecordingStatusDetails> { template <typename D> using type = consume_Windows_Media_AppRecording_IAppRecordingStatusDetails<D>; };

template <> struct abi<Windows::Media::AppRecording::IAppRecordingManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetStatus(::IUnknown** result) = 0;
    virtual HRESULT __stdcall StartRecordingToFileAsync(::IUnknown* file, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RecordTimeSpanToFileAsync(Windows::Foundation::DateTime startTime, Windows::Foundation::TimeSpan duration, ::IUnknown* file, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_SupportedScreenshotMediaEncodingSubtypes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall SaveScreenshotToFilesAsync(::IUnknown* folder, HSTRING filenamePrefix, Windows::Media::AppRecording::AppRecordingSaveScreenshotOption option, ::IUnknown* requestedFormats, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::AppRecording::IAppRecordingManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Media::AppRecording::IAppRecordingResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Succeeded(bool* value) = 0;
    virtual HRESULT __stdcall get_ExtendedError(HRESULT* value) = 0;
    virtual HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan* value) = 0;
    virtual HRESULT __stdcall get_IsFileTruncated(bool* value) = 0;
};};

template <> struct abi<Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Succeeded(bool* value) = 0;
    virtual HRESULT __stdcall get_ExtendedError(HRESULT* value) = 0;
    virtual HRESULT __stdcall get_SavedScreenshotInfos(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_File(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MediaEncodingSubtype(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Media::AppRecording::IAppRecordingStatus>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CanRecord(bool* value) = 0;
    virtual HRESULT __stdcall get_CanRecordTimeSpan(bool* value) = 0;
    virtual HRESULT __stdcall get_HistoricalBufferDuration(Windows::Foundation::TimeSpan* value) = 0;
    virtual HRESULT __stdcall get_Details(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::AppRecording::IAppRecordingStatusDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsAnyAppBroadcasting(bool* value) = 0;
    virtual HRESULT __stdcall get_IsCaptureResourceUnavailable(bool* value) = 0;
    virtual HRESULT __stdcall get_IsGameStreamInProgress(bool* value) = 0;
    virtual HRESULT __stdcall get_IsTimeSpanRecordingDisabled(bool* value) = 0;
    virtual HRESULT __stdcall get_IsGpuConstrained(bool* value) = 0;
    virtual HRESULT __stdcall get_IsAppInactive(bool* value) = 0;
    virtual HRESULT __stdcall get_IsBlockedForApp(bool* value) = 0;
    virtual HRESULT __stdcall get_IsDisabledByUser(bool* value) = 0;
    virtual HRESULT __stdcall get_IsDisabledBySystem(bool* value) = 0;
};};

}
