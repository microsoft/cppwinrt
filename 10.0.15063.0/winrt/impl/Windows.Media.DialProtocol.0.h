// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration {

struct DeviceInformation;
struct DevicePickerAppearance;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::UI::Popups {

enum class Placement;

}

WINRT_EXPORT namespace winrt::Windows::Media::DialProtocol {

enum class DialAppLaunchResult
{
    Launched = 0,
    FailedToLaunch = 1,
    NotFound = 2,
    NetworkFailure = 3,
};

enum class DialAppState
{
    Unknown = 0,
    Stopped = 1,
    Running = 2,
    NetworkFailure = 3,
};

enum class DialAppStopResult
{
    Stopped = 0,
    StopFailed = 1,
    OperationNotSupported = 2,
    NetworkFailure = 3,
};

enum class DialDeviceDisplayStatus
{
    None = 0,
    Connecting = 1,
    Connected = 2,
    Disconnecting = 3,
    Disconnected = 4,
    Error = 5,
};

struct IDialApp;
struct IDialAppStateDetails;
struct IDialDevice;
struct IDialDevice2;
struct IDialDevicePicker;
struct IDialDevicePickerFilter;
struct IDialDeviceSelectedEventArgs;
struct IDialDeviceStatics;
struct IDialDisconnectButtonClickedEventArgs;
struct DialApp;
struct DialAppStateDetails;
struct DialDevice;
struct DialDevicePicker;
struct DialDevicePickerFilter;
struct DialDeviceSelectedEventArgs;
struct DialDisconnectButtonClickedEventArgs;

}

namespace winrt::impl {

template <> struct category<Windows::Media::DialProtocol::IDialApp>{ using type = interface_category; };
template <> struct category<Windows::Media::DialProtocol::IDialAppStateDetails>{ using type = interface_category; };
template <> struct category<Windows::Media::DialProtocol::IDialDevice>{ using type = interface_category; };
template <> struct category<Windows::Media::DialProtocol::IDialDevice2>{ using type = interface_category; };
template <> struct category<Windows::Media::DialProtocol::IDialDevicePicker>{ using type = interface_category; };
template <> struct category<Windows::Media::DialProtocol::IDialDevicePickerFilter>{ using type = interface_category; };
template <> struct category<Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::DialProtocol::IDialDeviceStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::DialProtocol::DialApp>{ using type = class_category; };
template <> struct category<Windows::Media::DialProtocol::DialAppStateDetails>{ using type = class_category; };
template <> struct category<Windows::Media::DialProtocol::DialDevice>{ using type = class_category; };
template <> struct category<Windows::Media::DialProtocol::DialDevicePicker>{ using type = class_category; };
template <> struct category<Windows::Media::DialProtocol::DialDevicePickerFilter>{ using type = class_category; };
template <> struct category<Windows::Media::DialProtocol::DialDeviceSelectedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::DialProtocol::DialDisconnectButtonClickedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::DialProtocol::DialAppLaunchResult>{ using type = enum_category; };
template <> struct category<Windows::Media::DialProtocol::DialAppState>{ using type = enum_category; };
template <> struct category<Windows::Media::DialProtocol::DialAppStopResult>{ using type = enum_category; };
template <> struct category<Windows::Media::DialProtocol::DialDeviceDisplayStatus>{ using type = enum_category; };
template <> struct name<Windows::Media::DialProtocol::IDialApp>{ static constexpr auto & value{ L"Windows.Media.DialProtocol.IDialApp" }; };
template <> struct name<Windows::Media::DialProtocol::IDialAppStateDetails>{ static constexpr auto & value{ L"Windows.Media.DialProtocol.IDialAppStateDetails" }; };
template <> struct name<Windows::Media::DialProtocol::IDialDevice>{ static constexpr auto & value{ L"Windows.Media.DialProtocol.IDialDevice" }; };
template <> struct name<Windows::Media::DialProtocol::IDialDevice2>{ static constexpr auto & value{ L"Windows.Media.DialProtocol.IDialDevice2" }; };
template <> struct name<Windows::Media::DialProtocol::IDialDevicePicker>{ static constexpr auto & value{ L"Windows.Media.DialProtocol.IDialDevicePicker" }; };
template <> struct name<Windows::Media::DialProtocol::IDialDevicePickerFilter>{ static constexpr auto & value{ L"Windows.Media.DialProtocol.IDialDevicePickerFilter" }; };
template <> struct name<Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs>{ static constexpr auto & value{ L"Windows.Media.DialProtocol.IDialDeviceSelectedEventArgs" }; };
template <> struct name<Windows::Media::DialProtocol::IDialDeviceStatics>{ static constexpr auto & value{ L"Windows.Media.DialProtocol.IDialDeviceStatics" }; };
template <> struct name<Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs>{ static constexpr auto & value{ L"Windows.Media.DialProtocol.IDialDisconnectButtonClickedEventArgs" }; };
template <> struct name<Windows::Media::DialProtocol::DialApp>{ static constexpr auto & value{ L"Windows.Media.DialProtocol.DialApp" }; };
template <> struct name<Windows::Media::DialProtocol::DialAppStateDetails>{ static constexpr auto & value{ L"Windows.Media.DialProtocol.DialAppStateDetails" }; };
template <> struct name<Windows::Media::DialProtocol::DialDevice>{ static constexpr auto & value{ L"Windows.Media.DialProtocol.DialDevice" }; };
template <> struct name<Windows::Media::DialProtocol::DialDevicePicker>{ static constexpr auto & value{ L"Windows.Media.DialProtocol.DialDevicePicker" }; };
template <> struct name<Windows::Media::DialProtocol::DialDevicePickerFilter>{ static constexpr auto & value{ L"Windows.Media.DialProtocol.DialDevicePickerFilter" }; };
template <> struct name<Windows::Media::DialProtocol::DialDeviceSelectedEventArgs>{ static constexpr auto & value{ L"Windows.Media.DialProtocol.DialDeviceSelectedEventArgs" }; };
template <> struct name<Windows::Media::DialProtocol::DialDisconnectButtonClickedEventArgs>{ static constexpr auto & value{ L"Windows.Media.DialProtocol.DialDisconnectButtonClickedEventArgs" }; };
template <> struct name<Windows::Media::DialProtocol::DialAppLaunchResult>{ static constexpr auto & value{ L"Windows.Media.DialProtocol.DialAppLaunchResult" }; };
template <> struct name<Windows::Media::DialProtocol::DialAppState>{ static constexpr auto & value{ L"Windows.Media.DialProtocol.DialAppState" }; };
template <> struct name<Windows::Media::DialProtocol::DialAppStopResult>{ static constexpr auto & value{ L"Windows.Media.DialProtocol.DialAppStopResult" }; };
template <> struct name<Windows::Media::DialProtocol::DialDeviceDisplayStatus>{ static constexpr auto & value{ L"Windows.Media.DialProtocol.DialDeviceDisplayStatus" }; };
template <> struct guid<Windows::Media::DialProtocol::IDialApp>{ static constexpr GUID value{ 0x555FFBD3,0x45B7,0x49F3,{ 0xBB,0xD7,0x30,0x2D,0xB6,0x08,0x46,0x46 } }; };
template <> struct guid<Windows::Media::DialProtocol::IDialAppStateDetails>{ static constexpr GUID value{ 0xDDC4A4A1,0xF5DE,0x400D,{ 0xBE,0xA4,0x8C,0x84,0x66,0xBB,0x29,0x61 } }; };
template <> struct guid<Windows::Media::DialProtocol::IDialDevice>{ static constexpr GUID value{ 0xFFF0EDAF,0x759F,0x41D2,{ 0xA2,0x0A,0x7F,0x29,0xCE,0x0B,0x37,0x84 } }; };
template <> struct guid<Windows::Media::DialProtocol::IDialDevice2>{ static constexpr GUID value{ 0xBAB7F3D5,0x5BFB,0x4EBA,{ 0x8B,0x32,0xB5,0x7C,0x5C,0x5E,0xE5,0xC9 } }; };
template <> struct guid<Windows::Media::DialProtocol::IDialDevicePicker>{ static constexpr GUID value{ 0xBA7E520A,0xFF59,0x4F4B,{ 0xBD,0xAC,0xD8,0x9F,0x49,0x5A,0xD6,0xE1 } }; };
template <> struct guid<Windows::Media::DialProtocol::IDialDevicePickerFilter>{ static constexpr GUID value{ 0xC17C93BA,0x86C0,0x485D,{ 0xB8,0xD6,0x0F,0x9A,0x8F,0x64,0x15,0x90 } }; };
template <> struct guid<Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs>{ static constexpr GUID value{ 0x480B92AD,0xAC76,0x47EB,{ 0x9C,0x06,0xA1,0x93,0x04,0xDA,0x02,0x47 } }; };
template <> struct guid<Windows::Media::DialProtocol::IDialDeviceStatics>{ static constexpr GUID value{ 0xAA69CC95,0x01F8,0x4758,{ 0x84,0x61,0x2B,0xBD,0x1C,0xDC,0x3C,0xF3 } }; };
template <> struct guid<Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs>{ static constexpr GUID value{ 0x52765152,0x9C81,0x4E55,{ 0xAD,0xC2,0x0E,0xBE,0x99,0xCD,0xE3,0xB6 } }; };
template <> struct default_interface<Windows::Media::DialProtocol::DialApp>{ using type = Windows::Media::DialProtocol::IDialApp; };
template <> struct default_interface<Windows::Media::DialProtocol::DialAppStateDetails>{ using type = Windows::Media::DialProtocol::IDialAppStateDetails; };
template <> struct default_interface<Windows::Media::DialProtocol::DialDevice>{ using type = Windows::Media::DialProtocol::IDialDevice; };
template <> struct default_interface<Windows::Media::DialProtocol::DialDevicePicker>{ using type = Windows::Media::DialProtocol::IDialDevicePicker; };
template <> struct default_interface<Windows::Media::DialProtocol::DialDevicePickerFilter>{ using type = Windows::Media::DialProtocol::IDialDevicePickerFilter; };
template <> struct default_interface<Windows::Media::DialProtocol::DialDeviceSelectedEventArgs>{ using type = Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs; };
template <> struct default_interface<Windows::Media::DialProtocol::DialDisconnectButtonClickedEventArgs>{ using type = Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs; };

template <typename D>
struct consume_Windows_Media_DialProtocol_IDialApp
{
    hstring AppName() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialAppLaunchResult> RequestLaunchAsync(param::hstring const& appArgument) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialAppStopResult> StopAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialAppStateDetails> GetAppStateAsync() const;
};
template <> struct consume<Windows::Media::DialProtocol::IDialApp> { template <typename D> using type = consume_Windows_Media_DialProtocol_IDialApp<D>; };

template <typename D>
struct consume_Windows_Media_DialProtocol_IDialAppStateDetails
{
    Windows::Media::DialProtocol::DialAppState State() const;
    hstring FullXml() const;
};
template <> struct consume<Windows::Media::DialProtocol::IDialAppStateDetails> { template <typename D> using type = consume_Windows_Media_DialProtocol_IDialAppStateDetails<D>; };

template <typename D>
struct consume_Windows_Media_DialProtocol_IDialDevice
{
    hstring Id() const;
    Windows::Media::DialProtocol::DialApp GetDialApp(param::hstring const& appName) const;
};
template <> struct consume<Windows::Media::DialProtocol::IDialDevice> { template <typename D> using type = consume_Windows_Media_DialProtocol_IDialDevice<D>; };

template <typename D>
struct consume_Windows_Media_DialProtocol_IDialDevice2
{
    hstring FriendlyName() const;
    Windows::Storage::Streams::IRandomAccessStreamReference Thumbnail() const;
};
template <> struct consume<Windows::Media::DialProtocol::IDialDevice2> { template <typename D> using type = consume_Windows_Media_DialProtocol_IDialDevice2<D>; };

template <typename D>
struct consume_Windows_Media_DialProtocol_IDialDevicePicker
{
    Windows::Media::DialProtocol::DialDevicePickerFilter Filter() const;
    Windows::Devices::Enumeration::DevicePickerAppearance Appearance() const;
    event_token DialDeviceSelected(Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Media::DialProtocol::DialDeviceSelectedEventArgs> const& handler) const;
    using DialDeviceSelected_revoker = event_revoker<Windows::Media::DialProtocol::IDialDevicePicker>;
    DialDeviceSelected_revoker DialDeviceSelected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Media::DialProtocol::DialDeviceSelectedEventArgs> const& handler) const;
    void DialDeviceSelected(event_token const& token) const;
    event_token DisconnectButtonClicked(Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Media::DialProtocol::DialDisconnectButtonClickedEventArgs> const& handler) const;
    using DisconnectButtonClicked_revoker = event_revoker<Windows::Media::DialProtocol::IDialDevicePicker>;
    DisconnectButtonClicked_revoker DisconnectButtonClicked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Media::DialProtocol::DialDisconnectButtonClickedEventArgs> const& handler) const;
    void DisconnectButtonClicked(event_token const& token) const;
    event_token DialDevicePickerDismissed(Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Foundation::IInspectable> const& handler) const;
    using DialDevicePickerDismissed_revoker = event_revoker<Windows::Media::DialProtocol::IDialDevicePicker>;
    DialDevicePickerDismissed_revoker DialDevicePickerDismissed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Foundation::IInspectable> const& handler) const;
    void DialDevicePickerDismissed(event_token const& token) const;
    void Show(Windows::Foundation::Rect const& selection) const;
    void Show(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialDevice> PickSingleDialDeviceAsync(Windows::Foundation::Rect const& selection) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialDevice> PickSingleDialDeviceAsync(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
    void Hide() const;
    void SetDisplayStatus(Windows::Media::DialProtocol::DialDevice const& device, Windows::Media::DialProtocol::DialDeviceDisplayStatus const& status) const;
};
template <> struct consume<Windows::Media::DialProtocol::IDialDevicePicker> { template <typename D> using type = consume_Windows_Media_DialProtocol_IDialDevicePicker<D>; };

template <typename D>
struct consume_Windows_Media_DialProtocol_IDialDevicePickerFilter
{
    Windows::Foundation::Collections::IVector<hstring> SupportedAppNames() const;
};
template <> struct consume<Windows::Media::DialProtocol::IDialDevicePickerFilter> { template <typename D> using type = consume_Windows_Media_DialProtocol_IDialDevicePickerFilter<D>; };

template <typename D>
struct consume_Windows_Media_DialProtocol_IDialDeviceSelectedEventArgs
{
    Windows::Media::DialProtocol::DialDevice SelectedDialDevice() const;
};
template <> struct consume<Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs> { template <typename D> using type = consume_Windows_Media_DialProtocol_IDialDeviceSelectedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_DialProtocol_IDialDeviceStatics
{
    hstring GetDeviceSelector(param::hstring const& appName) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialDevice> FromIdAsync(param::hstring const& value) const;
    Windows::Foundation::IAsyncOperation<bool> DeviceInfoSupportsDialAsync(Windows::Devices::Enumeration::DeviceInformation const& device) const;
};
template <> struct consume<Windows::Media::DialProtocol::IDialDeviceStatics> { template <typename D> using type = consume_Windows_Media_DialProtocol_IDialDeviceStatics<D>; };

template <typename D>
struct consume_Windows_Media_DialProtocol_IDialDisconnectButtonClickedEventArgs
{
    Windows::Media::DialProtocol::DialDevice Device() const;
};
template <> struct consume<Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs> { template <typename D> using type = consume_Windows_Media_DialProtocol_IDialDisconnectButtonClickedEventArgs<D>; };

template <> struct abi<Windows::Media::DialProtocol::IDialApp>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppName(HSTRING* value) = 0;
    virtual HRESULT __stdcall RequestLaunchAsync(HSTRING appArgument, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall StopAsync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetAppStateAsync(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::DialProtocol::IDialAppStateDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_State(abi_t<Windows::Media::DialProtocol::DialAppState>* value) = 0;
    virtual HRESULT __stdcall get_FullXml(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Media::DialProtocol::IDialDevice>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetDialApp(HSTRING appName, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::DialProtocol::IDialDevice2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FriendlyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::DialProtocol::IDialDevicePicker>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Filter(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Appearance(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_DialDeviceSelected(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_DialDeviceSelected(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_DisconnectButtonClicked(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_DisconnectButtonClicked(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_DialDevicePickerDismissed(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_DialDevicePickerDismissed(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall Show(abi_t<Windows::Foundation::Rect> selection) = 0;
    virtual HRESULT __stdcall ShowWithPlacement(abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement) = 0;
    virtual HRESULT __stdcall PickSingleDialDeviceAsync(abi_t<Windows::Foundation::Rect> selection, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall PickSingleDialDeviceAsyncWithPlacement(abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall Hide() = 0;
    virtual HRESULT __stdcall SetDisplayStatus(::IUnknown* device, abi_t<Windows::Media::DialProtocol::DialDeviceDisplayStatus> status) = 0;
};};

template <> struct abi<Windows::Media::DialProtocol::IDialDevicePickerFilter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SupportedAppNames(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SelectedDialDevice(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::DialProtocol::IDialDeviceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING appName, HSTRING* selector) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING value, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall DeviceInfoSupportsDialAsync(::IUnknown* device, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Device(::IUnknown** value) = 0;
};};

}
