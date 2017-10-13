// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Core {

struct AppListEntry;

}

WINRT_EXPORT namespace winrt::Windows::UI::Shell {

struct IAdaptiveCard;
struct IAdaptiveCardBuilderStatics;
struct ITaskbarManager;
struct ITaskbarManagerStatics;
struct AdaptiveCardBuilder;
struct TaskbarManager;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Shell::IAdaptiveCard>{ using type = interface_category; };
template <> struct category<Windows::UI::Shell::IAdaptiveCardBuilderStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Shell::ITaskbarManager>{ using type = interface_category; };
template <> struct category<Windows::UI::Shell::ITaskbarManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Shell::AdaptiveCardBuilder>{ using type = class_category; };
template <> struct category<Windows::UI::Shell::TaskbarManager>{ using type = class_category; };
template <> struct name<Windows::UI::Shell::IAdaptiveCard>{ static constexpr auto & value{ L"Windows.UI.Shell.IAdaptiveCard" }; };
template <> struct name<Windows::UI::Shell::IAdaptiveCardBuilderStatics>{ static constexpr auto & value{ L"Windows.UI.Shell.IAdaptiveCardBuilderStatics" }; };
template <> struct name<Windows::UI::Shell::ITaskbarManager>{ static constexpr auto & value{ L"Windows.UI.Shell.ITaskbarManager" }; };
template <> struct name<Windows::UI::Shell::ITaskbarManagerStatics>{ static constexpr auto & value{ L"Windows.UI.Shell.ITaskbarManagerStatics" }; };
template <> struct name<Windows::UI::Shell::AdaptiveCardBuilder>{ static constexpr auto & value{ L"Windows.UI.Shell.AdaptiveCardBuilder" }; };
template <> struct name<Windows::UI::Shell::TaskbarManager>{ static constexpr auto & value{ L"Windows.UI.Shell.TaskbarManager" }; };
template <> struct guid<Windows::UI::Shell::IAdaptiveCard>{ static constexpr GUID value{ 0x72D0568C,0xA274,0x41CD,{ 0x82,0xA8,0x98,0x9D,0x40,0xB9,0xB0,0x5E } }; };
template <> struct guid<Windows::UI::Shell::IAdaptiveCardBuilderStatics>{ static constexpr GUID value{ 0x766D8F08,0xD3FE,0x4347,{ 0xA0,0xBC,0xB9,0xEA,0x9A,0x6D,0xC2,0x8E } }; };
template <> struct guid<Windows::UI::Shell::ITaskbarManager>{ static constexpr GUID value{ 0x87490A19,0x1AD9,0x49F4,{ 0xB2,0xE8,0x86,0x73,0x8D,0xC5,0xAC,0x40 } }; };
template <> struct guid<Windows::UI::Shell::ITaskbarManagerStatics>{ static constexpr GUID value{ 0xDB32AB74,0xDE52,0x4FE6,{ 0xB7,0xB6,0x95,0xFF,0x9F,0x83,0x95,0xDF } }; };
template <> struct default_interface<Windows::UI::Shell::TaskbarManager>{ using type = Windows::UI::Shell::ITaskbarManager; };

template <typename D>
struct consume_Windows_UI_Shell_IAdaptiveCard
{
    hstring ToJson() const;
};
template <> struct consume<Windows::UI::Shell::IAdaptiveCard> { template <typename D> using type = consume_Windows_UI_Shell_IAdaptiveCard<D>; };

template <typename D>
struct consume_Windows_UI_Shell_IAdaptiveCardBuilderStatics
{
    Windows::UI::Shell::IAdaptiveCard CreateAdaptiveCardFromJson(param::hstring const& value) const;
};
template <> struct consume<Windows::UI::Shell::IAdaptiveCardBuilderStatics> { template <typename D> using type = consume_Windows_UI_Shell_IAdaptiveCardBuilderStatics<D>; };

template <typename D>
struct consume_Windows_UI_Shell_ITaskbarManager
{
    bool IsSupported() const noexcept;
    bool IsPinningAllowed() const noexcept;
    Windows::Foundation::IAsyncOperation<bool> IsCurrentAppPinnedAsync() const;
    Windows::Foundation::IAsyncOperation<bool> IsAppListEntryPinnedAsync(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const;
    Windows::Foundation::IAsyncOperation<bool> RequestPinCurrentAppAsync() const;
    Windows::Foundation::IAsyncOperation<bool> RequestPinAppListEntryAsync(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const;
};
template <> struct consume<Windows::UI::Shell::ITaskbarManager> { template <typename D> using type = consume_Windows_UI_Shell_ITaskbarManager<D>; };

template <typename D>
struct consume_Windows_UI_Shell_ITaskbarManagerStatics
{
    Windows::UI::Shell::TaskbarManager GetDefault() const;
};
template <> struct consume<Windows::UI::Shell::ITaskbarManagerStatics> { template <typename D> using type = consume_Windows_UI_Shell_ITaskbarManagerStatics<D>; };

template <> struct abi<Windows::UI::Shell::IAdaptiveCard>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ToJson(HSTRING* result) = 0;
};};

template <> struct abi<Windows::UI::Shell::IAdaptiveCardBuilderStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateAdaptiveCardFromJson(HSTRING value, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Shell::ITaskbarManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsPinningAllowed(bool* value) = 0;
    virtual HRESULT __stdcall IsCurrentAppPinnedAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall IsAppListEntryPinnedAsync(::IUnknown* appListEntry, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestPinCurrentAppAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestPinAppListEntryAsync(::IUnknown* appListEntry, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::UI::Shell::ITaskbarManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** result) = 0;
};};

}
