// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::System {

struct User;

}

WINRT_EXPORT namespace winrt::Windows::Media::AppBroadcasting {

struct IAppBroadcastingMonitor;
struct IAppBroadcastingStatus;
struct IAppBroadcastingStatusDetails;
struct IAppBroadcastingUI;
struct IAppBroadcastingUIStatics;
struct AppBroadcastingMonitor;
struct AppBroadcastingStatus;
struct AppBroadcastingStatusDetails;
struct AppBroadcastingUI;

}

namespace winrt::impl {

template <> struct category<Windows::Media::AppBroadcasting::IAppBroadcastingMonitor>{ using type = interface_category; };
template <> struct category<Windows::Media::AppBroadcasting::IAppBroadcastingStatus>{ using type = interface_category; };
template <> struct category<Windows::Media::AppBroadcasting::IAppBroadcastingStatusDetails>{ using type = interface_category; };
template <> struct category<Windows::Media::AppBroadcasting::IAppBroadcastingUI>{ using type = interface_category; };
template <> struct category<Windows::Media::AppBroadcasting::IAppBroadcastingUIStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::AppBroadcasting::AppBroadcastingMonitor>{ using type = class_category; };
template <> struct category<Windows::Media::AppBroadcasting::AppBroadcastingStatus>{ using type = class_category; };
template <> struct category<Windows::Media::AppBroadcasting::AppBroadcastingStatusDetails>{ using type = class_category; };
template <> struct category<Windows::Media::AppBroadcasting::AppBroadcastingUI>{ using type = class_category; };
template <> struct name<Windows::Media::AppBroadcasting::IAppBroadcastingMonitor>{ static constexpr auto & value{ L"Windows.Media.AppBroadcasting.IAppBroadcastingMonitor" }; };
template <> struct name<Windows::Media::AppBroadcasting::IAppBroadcastingStatus>{ static constexpr auto & value{ L"Windows.Media.AppBroadcasting.IAppBroadcastingStatus" }; };
template <> struct name<Windows::Media::AppBroadcasting::IAppBroadcastingStatusDetails>{ static constexpr auto & value{ L"Windows.Media.AppBroadcasting.IAppBroadcastingStatusDetails" }; };
template <> struct name<Windows::Media::AppBroadcasting::IAppBroadcastingUI>{ static constexpr auto & value{ L"Windows.Media.AppBroadcasting.IAppBroadcastingUI" }; };
template <> struct name<Windows::Media::AppBroadcasting::IAppBroadcastingUIStatics>{ static constexpr auto & value{ L"Windows.Media.AppBroadcasting.IAppBroadcastingUIStatics" }; };
template <> struct name<Windows::Media::AppBroadcasting::AppBroadcastingMonitor>{ static constexpr auto & value{ L"Windows.Media.AppBroadcasting.AppBroadcastingMonitor" }; };
template <> struct name<Windows::Media::AppBroadcasting::AppBroadcastingStatus>{ static constexpr auto & value{ L"Windows.Media.AppBroadcasting.AppBroadcastingStatus" }; };
template <> struct name<Windows::Media::AppBroadcasting::AppBroadcastingStatusDetails>{ static constexpr auto & value{ L"Windows.Media.AppBroadcasting.AppBroadcastingStatusDetails" }; };
template <> struct name<Windows::Media::AppBroadcasting::AppBroadcastingUI>{ static constexpr auto & value{ L"Windows.Media.AppBroadcasting.AppBroadcastingUI" }; };
template <> struct guid<Windows::Media::AppBroadcasting::IAppBroadcastingMonitor>{ static constexpr GUID value{ 0x00F95A68,0x8907,0x48A0,{ 0xB8,0xEF,0x24,0xD2,0x08,0x13,0x75,0x42 } }; };
template <> struct guid<Windows::Media::AppBroadcasting::IAppBroadcastingStatus>{ static constexpr GUID value{ 0x1225E4DF,0x03A1,0x42F8,{ 0x8B,0x80,0xC9,0x22,0x8C,0xD9,0xCF,0x2E } }; };
template <> struct guid<Windows::Media::AppBroadcasting::IAppBroadcastingStatusDetails>{ static constexpr GUID value{ 0x069DADA4,0xB573,0x4E3C,{ 0x8E,0x19,0x1B,0xAF,0xAC,0xD0,0x97,0x13 } }; };
template <> struct guid<Windows::Media::AppBroadcasting::IAppBroadcastingUI>{ static constexpr GUID value{ 0xE56F9F8F,0xEE99,0x4DCA,{ 0xA3,0xC3,0x70,0xAF,0x3D,0xB4,0x4F,0x5F } }; };
template <> struct guid<Windows::Media::AppBroadcasting::IAppBroadcastingUIStatics>{ static constexpr GUID value{ 0x55A8A79D,0x23CB,0x4579,{ 0x9C,0x34,0x88,0x6F,0xE0,0x2C,0x04,0x5A } }; };
template <> struct default_interface<Windows::Media::AppBroadcasting::AppBroadcastingMonitor>{ using type = Windows::Media::AppBroadcasting::IAppBroadcastingMonitor; };
template <> struct default_interface<Windows::Media::AppBroadcasting::AppBroadcastingStatus>{ using type = Windows::Media::AppBroadcasting::IAppBroadcastingStatus; };
template <> struct default_interface<Windows::Media::AppBroadcasting::AppBroadcastingStatusDetails>{ using type = Windows::Media::AppBroadcasting::IAppBroadcastingStatusDetails; };
template <> struct default_interface<Windows::Media::AppBroadcasting::AppBroadcastingUI>{ using type = Windows::Media::AppBroadcasting::IAppBroadcastingUI; };

template <typename D>
struct consume_Windows_Media_AppBroadcasting_IAppBroadcastingMonitor
{
    bool IsCurrentAppBroadcasting() const noexcept;
    event_token IsCurrentAppBroadcastingChanged(Windows::Foundation::TypedEventHandler<Windows::Media::AppBroadcasting::AppBroadcastingMonitor, Windows::Foundation::IInspectable> const& handler) const;
    using IsCurrentAppBroadcastingChanged_revoker = event_revoker<Windows::Media::AppBroadcasting::IAppBroadcastingMonitor>;
    IsCurrentAppBroadcastingChanged_revoker IsCurrentAppBroadcastingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::AppBroadcasting::AppBroadcastingMonitor, Windows::Foundation::IInspectable> const& handler) const;
    void IsCurrentAppBroadcastingChanged(event_token const& token) const;
};
template <> struct consume<Windows::Media::AppBroadcasting::IAppBroadcastingMonitor> { template <typename D> using type = consume_Windows_Media_AppBroadcasting_IAppBroadcastingMonitor<D>; };

template <typename D>
struct consume_Windows_Media_AppBroadcasting_IAppBroadcastingStatus
{
    bool CanStartBroadcast() const noexcept;
    Windows::Media::AppBroadcasting::AppBroadcastingStatusDetails Details() const noexcept;
};
template <> struct consume<Windows::Media::AppBroadcasting::IAppBroadcastingStatus> { template <typename D> using type = consume_Windows_Media_AppBroadcasting_IAppBroadcastingStatus<D>; };

template <typename D>
struct consume_Windows_Media_AppBroadcasting_IAppBroadcastingStatusDetails
{
    bool IsAnyAppBroadcasting() const noexcept;
    bool IsCaptureResourceUnavailable() const noexcept;
    bool IsGameStreamInProgress() const noexcept;
    bool IsGpuConstrained() const noexcept;
    bool IsAppInactive() const noexcept;
    bool IsBlockedForApp() const noexcept;
    bool IsDisabledByUser() const noexcept;
    bool IsDisabledBySystem() const noexcept;
};
template <> struct consume<Windows::Media::AppBroadcasting::IAppBroadcastingStatusDetails> { template <typename D> using type = consume_Windows_Media_AppBroadcasting_IAppBroadcastingStatusDetails<D>; };

template <typename D>
struct consume_Windows_Media_AppBroadcasting_IAppBroadcastingUI
{
    Windows::Media::AppBroadcasting::AppBroadcastingStatus GetStatus() const;
    void ShowBroadcastUI() const;
};
template <> struct consume<Windows::Media::AppBroadcasting::IAppBroadcastingUI> { template <typename D> using type = consume_Windows_Media_AppBroadcasting_IAppBroadcastingUI<D>; };

template <typename D>
struct consume_Windows_Media_AppBroadcasting_IAppBroadcastingUIStatics
{
    Windows::Media::AppBroadcasting::AppBroadcastingUI GetDefault() const;
    Windows::Media::AppBroadcasting::AppBroadcastingUI GetForUser(Windows::System::User const& user) const;
};
template <> struct consume<Windows::Media::AppBroadcasting::IAppBroadcastingUIStatics> { template <typename D> using type = consume_Windows_Media_AppBroadcasting_IAppBroadcastingUIStatics<D>; };

template <> struct abi<Windows::Media::AppBroadcasting::IAppBroadcastingMonitor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsCurrentAppBroadcasting(bool* value) = 0;
    virtual HRESULT __stdcall add_IsCurrentAppBroadcastingChanged(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_IsCurrentAppBroadcastingChanged(event_token token) = 0;
};};

template <> struct abi<Windows::Media::AppBroadcasting::IAppBroadcastingStatus>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CanStartBroadcast(bool* value) = 0;
    virtual HRESULT __stdcall get_Details(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::AppBroadcasting::IAppBroadcastingStatusDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsAnyAppBroadcasting(bool* value) = 0;
    virtual HRESULT __stdcall get_IsCaptureResourceUnavailable(bool* value) = 0;
    virtual HRESULT __stdcall get_IsGameStreamInProgress(bool* value) = 0;
    virtual HRESULT __stdcall get_IsGpuConstrained(bool* value) = 0;
    virtual HRESULT __stdcall get_IsAppInactive(bool* value) = 0;
    virtual HRESULT __stdcall get_IsBlockedForApp(bool* value) = 0;
    virtual HRESULT __stdcall get_IsDisabledByUser(bool* value) = 0;
    virtual HRESULT __stdcall get_IsDisabledBySystem(bool* value) = 0;
};};

template <> struct abi<Windows::Media::AppBroadcasting::IAppBroadcastingUI>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetStatus(::IUnknown** result) = 0;
    virtual HRESULT __stdcall ShowBroadcastUI() = 0;
};};

template <> struct abi<Windows::Media::AppBroadcasting::IAppBroadcastingUIStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** result) = 0;
};};

}
