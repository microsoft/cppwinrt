// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::UI::Shell {

struct IAdaptiveCard;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserActivities {

enum class UserActivityState : int32_t
{
    New = 0,
    Published = 1,
};

struct IUserActivity;
struct IUserActivityAttribution;
struct IUserActivityAttributionFactory;
struct IUserActivityChannel;
struct IUserActivityChannelStatics;
struct IUserActivityContentInfo;
struct IUserActivityContentInfoStatics;
struct IUserActivitySession;
struct IUserActivityVisualElements;
struct UserActivity;
struct UserActivityAttribution;
struct UserActivityChannel;
struct UserActivityContentInfo;
struct UserActivitySession;
struct UserActivityVisualElements;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivity>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityAttribution>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityAttributionFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityChannel>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityContentInfo>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityContentInfoStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivitySession>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityVisualElements>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserActivities::UserActivity>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserActivities::UserActivityAttribution>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserActivities::UserActivityChannel>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserActivities::UserActivityContentInfo>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserActivities::UserActivitySession>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserActivities::UserActivityVisualElements>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserActivities::UserActivityState>{ using type = enum_category; };
template <> struct name<Windows::ApplicationModel::UserActivities::IUserActivity>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserActivities.IUserActivity" }; };
template <> struct name<Windows::ApplicationModel::UserActivities::IUserActivityAttribution>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserActivities.IUserActivityAttribution" }; };
template <> struct name<Windows::ApplicationModel::UserActivities::IUserActivityAttributionFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserActivities.IUserActivityAttributionFactory" }; };
template <> struct name<Windows::ApplicationModel::UserActivities::IUserActivityChannel>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserActivities.IUserActivityChannel" }; };
template <> struct name<Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserActivities.IUserActivityChannelStatics" }; };
template <> struct name<Windows::ApplicationModel::UserActivities::IUserActivityContentInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserActivities.IUserActivityContentInfo" }; };
template <> struct name<Windows::ApplicationModel::UserActivities::IUserActivityContentInfoStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserActivities.IUserActivityContentInfoStatics" }; };
template <> struct name<Windows::ApplicationModel::UserActivities::IUserActivitySession>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserActivities.IUserActivitySession" }; };
template <> struct name<Windows::ApplicationModel::UserActivities::IUserActivityVisualElements>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserActivities.IUserActivityVisualElements" }; };
template <> struct name<Windows::ApplicationModel::UserActivities::UserActivity>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserActivities.UserActivity" }; };
template <> struct name<Windows::ApplicationModel::UserActivities::UserActivityAttribution>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserActivities.UserActivityAttribution" }; };
template <> struct name<Windows::ApplicationModel::UserActivities::UserActivityChannel>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserActivities.UserActivityChannel" }; };
template <> struct name<Windows::ApplicationModel::UserActivities::UserActivityContentInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserActivities.UserActivityContentInfo" }; };
template <> struct name<Windows::ApplicationModel::UserActivities::UserActivitySession>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserActivities.UserActivitySession" }; };
template <> struct name<Windows::ApplicationModel::UserActivities::UserActivityVisualElements>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserActivities.UserActivityVisualElements" }; };
template <> struct name<Windows::ApplicationModel::UserActivities::UserActivityState>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserActivities.UserActivityState" }; };
template <> struct guid<Windows::ApplicationModel::UserActivities::IUserActivity>{ static constexpr GUID value{ 0xFC103E9E,0x2CAB,0x4D36,{ 0xAE,0xA2,0xB4,0xBB,0x55,0x6C,0xEF,0x0F } }; };
template <> struct guid<Windows::ApplicationModel::UserActivities::IUserActivityAttribution>{ static constexpr GUID value{ 0x34A5C8B5,0x86DD,0x4AEC,{ 0xA4,0x91,0x6A,0x4F,0xAE,0xA5,0xD2,0x2E } }; };
template <> struct guid<Windows::ApplicationModel::UserActivities::IUserActivityAttributionFactory>{ static constexpr GUID value{ 0xE62BD252,0xC566,0x4F42,{ 0x99,0x74,0x91,0x6C,0x4D,0x76,0x37,0x7E } }; };
template <> struct guid<Windows::ApplicationModel::UserActivities::IUserActivityChannel>{ static constexpr GUID value{ 0xBAC0F8B8,0xA0E4,0x483B,{ 0xB9,0x48,0x9C,0xBA,0xBD,0x06,0x07,0x0C } }; };
template <> struct guid<Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics>{ static constexpr GUID value{ 0xC8C005AB,0x198D,0x4D80,{ 0xAB,0xB2,0xC9,0x77,0x5E,0xC4,0xA7,0x29 } }; };
template <> struct guid<Windows::ApplicationModel::UserActivities::IUserActivityContentInfo>{ static constexpr GUID value{ 0xB399E5AD,0x137F,0x409D,{ 0x82,0x2D,0xE1,0xAF,0x27,0xCE,0x08,0xDC } }; };
template <> struct guid<Windows::ApplicationModel::UserActivities::IUserActivityContentInfoStatics>{ static constexpr GUID value{ 0x9988C34B,0x0386,0x4BC9,{ 0x96,0x8A,0x82,0x00,0xB0,0x04,0x14,0x4F } }; };
template <> struct guid<Windows::ApplicationModel::UserActivities::IUserActivitySession>{ static constexpr GUID value{ 0xAE434D78,0x24FA,0x44A3,{ 0xAD,0x48,0x6E,0xDA,0x61,0xAA,0x19,0x24 } }; };
template <> struct guid<Windows::ApplicationModel::UserActivities::IUserActivityVisualElements>{ static constexpr GUID value{ 0x94757513,0x262F,0x49EF,{ 0xBB,0xBF,0x9B,0x75,0xD2,0xE8,0x52,0x50 } }; };
template <> struct default_interface<Windows::ApplicationModel::UserActivities::UserActivity>{ using type = Windows::ApplicationModel::UserActivities::IUserActivity; };
template <> struct default_interface<Windows::ApplicationModel::UserActivities::UserActivityAttribution>{ using type = Windows::ApplicationModel::UserActivities::IUserActivityAttribution; };
template <> struct default_interface<Windows::ApplicationModel::UserActivities::UserActivityChannel>{ using type = Windows::ApplicationModel::UserActivities::IUserActivityChannel; };
template <> struct default_interface<Windows::ApplicationModel::UserActivities::UserActivityContentInfo>{ using type = Windows::ApplicationModel::UserActivities::IUserActivityContentInfo; };
template <> struct default_interface<Windows::ApplicationModel::UserActivities::UserActivitySession>{ using type = Windows::ApplicationModel::UserActivities::IUserActivitySession; };
template <> struct default_interface<Windows::ApplicationModel::UserActivities::UserActivityVisualElements>{ using type = Windows::ApplicationModel::UserActivities::IUserActivityVisualElements; };

template <typename D>
struct consume_Windows_ApplicationModel_UserActivities_IUserActivity
{
    Windows::ApplicationModel::UserActivities::UserActivityState State() const noexcept;
    hstring ActivityId() const noexcept;
    Windows::ApplicationModel::UserActivities::UserActivityVisualElements VisualElements() const noexcept;
    Windows::Foundation::Uri ContentUri() const noexcept;
    void ContentUri(Windows::Foundation::Uri const& value) const noexcept;
    hstring ContentType() const noexcept;
    void ContentType(param::hstring const& value) const noexcept;
    Windows::Foundation::Uri FallbackUri() const noexcept;
    void FallbackUri(Windows::Foundation::Uri const& value) const noexcept;
    Windows::Foundation::Uri ActivationUri() const noexcept;
    void ActivationUri(Windows::Foundation::Uri const& value) const noexcept;
    Windows::ApplicationModel::UserActivities::IUserActivityContentInfo ContentInfo() const noexcept;
    void ContentInfo(Windows::ApplicationModel::UserActivities::IUserActivityContentInfo const& value) const noexcept;
    Windows::Foundation::IAsyncAction SaveAsync() const;
    Windows::ApplicationModel::UserActivities::UserActivitySession CreateSession() const;
};
template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivity> { template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserActivities_IUserActivityAttribution
{
    Windows::Foundation::Uri IconUri() const noexcept;
    void IconUri(Windows::Foundation::Uri const& value) const noexcept;
    hstring AlternateText() const noexcept;
    void AlternateText(param::hstring const& value) const noexcept;
    bool AddImageQuery() const noexcept;
    void AddImageQuery(bool value) const noexcept;
};
template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityAttribution> { template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityAttribution<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserActivities_IUserActivityAttributionFactory
{
    Windows::ApplicationModel::UserActivities::UserActivityAttribution CreateWithUri(Windows::Foundation::Uri const& iconUri) const;
};
template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityAttributionFactory> { template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityAttributionFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserActivities_IUserActivityChannel
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserActivities::UserActivity> GetOrCreateUserActivityAsync(param::hstring const& activityId) const;
    Windows::Foundation::IAsyncAction DeleteActivityAsync(param::hstring const& activityId) const;
    Windows::Foundation::IAsyncAction DeleteAllActivitiesAsync() const;
};
template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityChannel> { template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityChannel<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserActivities_IUserActivityChannelStatics
{
    Windows::ApplicationModel::UserActivities::UserActivityChannel GetDefault() const;
};
template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics> { template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityChannelStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserActivities_IUserActivityContentInfo
{
    hstring ToJson() const;
};
template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityContentInfo> { template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityContentInfo<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserActivities_IUserActivityContentInfoStatics
{
    Windows::ApplicationModel::UserActivities::UserActivityContentInfo FromJson(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityContentInfoStatics> { template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityContentInfoStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserActivities_IUserActivitySession
{
    hstring ActivityId() const noexcept;
};
template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivitySession> { template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivitySession<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements
{
    hstring DisplayText() const noexcept;
    void DisplayText(param::hstring const& value) const noexcept;
    hstring Description() const noexcept;
    void Description(param::hstring const& value) const noexcept;
    Windows::UI::Color BackgroundColor() const noexcept;
    void BackgroundColor(Windows::UI::Color const& value) const noexcept;
    Windows::ApplicationModel::UserActivities::UserActivityAttribution Attribution() const noexcept;
    void Attribution(Windows::ApplicationModel::UserActivities::UserActivityAttribution const& value) const noexcept;
    void Content(Windows::UI::Shell::IAdaptiveCard const& value) const noexcept;
    Windows::UI::Shell::IAdaptiveCard Content() const noexcept;
};
template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityVisualElements> { template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements<D>; };

template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivity>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_State(Windows::ApplicationModel::UserActivities::UserActivityState* value) = 0;
    virtual HRESULT __stdcall get_ActivityId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_VisualElements(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ContentUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ContentUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ContentType(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ContentType(HSTRING value) = 0;
    virtual HRESULT __stdcall get_FallbackUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_FallbackUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ActivationUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ActivationUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ContentInfo(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ContentInfo(::IUnknown* value) = 0;
    virtual HRESULT __stdcall SaveAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateSession(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityAttribution>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IconUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_IconUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_AlternateText(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_AlternateText(HSTRING value) = 0;
    virtual HRESULT __stdcall get_AddImageQuery(bool* value) = 0;
    virtual HRESULT __stdcall put_AddImageQuery(bool value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityAttributionFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithUri(::IUnknown* iconUri, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityChannel>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetOrCreateUserActivityAsync(HSTRING activityId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall DeleteActivityAsync(HSTRING activityId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall DeleteAllActivitiesAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityContentInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ToJson(HSTRING* result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityContentInfoStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromJson(HSTRING value, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivitySession>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ActivityId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityVisualElements>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayText(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_DisplayText(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Description(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Description(HSTRING value) = 0;
    virtual HRESULT __stdcall get_BackgroundColor(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_BackgroundColor(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_Attribution(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Attribution(::IUnknown* value) = 0;
    virtual HRESULT __stdcall put_Content(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Content(::IUnknown** value) = 0;
};};

}
