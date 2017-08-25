// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Deferral;
struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStreamWithContentType;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::Services::TargetedContent {

enum class TargetedContentAppInstallationState
{
    NotApplicable = 0,
    NotInstalled = 1,
    Installed = 2,
};

enum class TargetedContentAvailability
{
    None = 0,
    Partial = 1,
    All = 2,
};

enum class TargetedContentInteraction
{
    Impression = 0,
    ClickThrough = 1,
    Hover = 2,
    Like = 3,
    Dislike = 4,
    Dismiss = 5,
    Ineligible = 6,
    Accept = 7,
    Decline = 8,
    Defer = 9,
    Canceled = 10,
    Conversion = 11,
    Opportunity = 12,
};

enum class TargetedContentObjectKind
{
    Collection = 0,
    Item = 1,
    Value = 2,
};

enum class TargetedContentValueKind
{
    String = 0,
    Uri = 1,
    Number = 2,
    Boolean = 3,
    File = 4,
    ImageFile = 5,
    Action = 6,
    Strings = 7,
    Uris = 8,
    Numbers = 9,
    Booleans = 10,
    Files = 11,
    ImageFiles = 12,
    Actions = 13,
};

struct ITargetedContentAction;
struct ITargetedContentAvailabilityChangedEventArgs;
struct ITargetedContentChangedEventArgs;
struct ITargetedContentCollection;
struct ITargetedContentContainer;
struct ITargetedContentContainerStatics;
struct ITargetedContentImage;
struct ITargetedContentItem;
struct ITargetedContentItemState;
struct ITargetedContentObject;
struct ITargetedContentStateChangedEventArgs;
struct ITargetedContentSubscription;
struct ITargetedContentSubscriptionOptions;
struct ITargetedContentSubscriptionStatics;
struct ITargetedContentValue;
struct TargetedContentAction;
struct TargetedContentAvailabilityChangedEventArgs;
struct TargetedContentChangedEventArgs;
struct TargetedContentCollection;
struct TargetedContentContainer;
struct TargetedContentFile;
struct TargetedContentImage;
struct TargetedContentItem;
struct TargetedContentItemState;
struct TargetedContentObject;
struct TargetedContentStateChangedEventArgs;
struct TargetedContentSubscription;
struct TargetedContentSubscriptionOptions;
struct TargetedContentValue;

}

namespace winrt::impl {

template <> struct category<Windows::Services::TargetedContent::ITargetedContentAction>{ using type = interface_category; };
template <> struct category<Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Services::TargetedContent::ITargetedContentChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Services::TargetedContent::ITargetedContentCollection>{ using type = interface_category; };
template <> struct category<Windows::Services::TargetedContent::ITargetedContentContainer>{ using type = interface_category; };
template <> struct category<Windows::Services::TargetedContent::ITargetedContentContainerStatics>{ using type = interface_category; };
template <> struct category<Windows::Services::TargetedContent::ITargetedContentImage>{ using type = interface_category; };
template <> struct category<Windows::Services::TargetedContent::ITargetedContentItem>{ using type = interface_category; };
template <> struct category<Windows::Services::TargetedContent::ITargetedContentItemState>{ using type = interface_category; };
template <> struct category<Windows::Services::TargetedContent::ITargetedContentObject>{ using type = interface_category; };
template <> struct category<Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Services::TargetedContent::ITargetedContentSubscription>{ using type = interface_category; };
template <> struct category<Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions>{ using type = interface_category; };
template <> struct category<Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics>{ using type = interface_category; };
template <> struct category<Windows::Services::TargetedContent::ITargetedContentValue>{ using type = interface_category; };
template <> struct category<Windows::Services::TargetedContent::TargetedContentAction>{ using type = class_category; };
template <> struct category<Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Services::TargetedContent::TargetedContentChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Services::TargetedContent::TargetedContentCollection>{ using type = class_category; };
template <> struct category<Windows::Services::TargetedContent::TargetedContentContainer>{ using type = class_category; };
template <> struct category<Windows::Services::TargetedContent::TargetedContentFile>{ using type = class_category; };
template <> struct category<Windows::Services::TargetedContent::TargetedContentImage>{ using type = class_category; };
template <> struct category<Windows::Services::TargetedContent::TargetedContentItem>{ using type = class_category; };
template <> struct category<Windows::Services::TargetedContent::TargetedContentItemState>{ using type = class_category; };
template <> struct category<Windows::Services::TargetedContent::TargetedContentObject>{ using type = class_category; };
template <> struct category<Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Services::TargetedContent::TargetedContentSubscription>{ using type = class_category; };
template <> struct category<Windows::Services::TargetedContent::TargetedContentSubscriptionOptions>{ using type = class_category; };
template <> struct category<Windows::Services::TargetedContent::TargetedContentValue>{ using type = class_category; };
template <> struct category<Windows::Services::TargetedContent::TargetedContentAppInstallationState>{ using type = enum_category; };
template <> struct category<Windows::Services::TargetedContent::TargetedContentAvailability>{ using type = enum_category; };
template <> struct category<Windows::Services::TargetedContent::TargetedContentInteraction>{ using type = enum_category; };
template <> struct category<Windows::Services::TargetedContent::TargetedContentObjectKind>{ using type = enum_category; };
template <> struct category<Windows::Services::TargetedContent::TargetedContentValueKind>{ using type = enum_category; };
template <> struct name<Windows::Services::TargetedContent::ITargetedContentAction>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentAction" }; };
template <> struct name<Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentAvailabilityChangedEventArgs" }; };
template <> struct name<Windows::Services::TargetedContent::ITargetedContentChangedEventArgs>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentChangedEventArgs" }; };
template <> struct name<Windows::Services::TargetedContent::ITargetedContentCollection>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentCollection" }; };
template <> struct name<Windows::Services::TargetedContent::ITargetedContentContainer>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentContainer" }; };
template <> struct name<Windows::Services::TargetedContent::ITargetedContentContainerStatics>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentContainerStatics" }; };
template <> struct name<Windows::Services::TargetedContent::ITargetedContentImage>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentImage" }; };
template <> struct name<Windows::Services::TargetedContent::ITargetedContentItem>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentItem" }; };
template <> struct name<Windows::Services::TargetedContent::ITargetedContentItemState>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentItemState" }; };
template <> struct name<Windows::Services::TargetedContent::ITargetedContentObject>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentObject" }; };
template <> struct name<Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentStateChangedEventArgs" }; };
template <> struct name<Windows::Services::TargetedContent::ITargetedContentSubscription>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentSubscription" }; };
template <> struct name<Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentSubscriptionOptions" }; };
template <> struct name<Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentSubscriptionStatics" }; };
template <> struct name<Windows::Services::TargetedContent::ITargetedContentValue>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentValue" }; };
template <> struct name<Windows::Services::TargetedContent::TargetedContentAction>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentAction" }; };
template <> struct name<Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentAvailabilityChangedEventArgs" }; };
template <> struct name<Windows::Services::TargetedContent::TargetedContentChangedEventArgs>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentChangedEventArgs" }; };
template <> struct name<Windows::Services::TargetedContent::TargetedContentCollection>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentCollection" }; };
template <> struct name<Windows::Services::TargetedContent::TargetedContentContainer>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentContainer" }; };
template <> struct name<Windows::Services::TargetedContent::TargetedContentFile>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentFile" }; };
template <> struct name<Windows::Services::TargetedContent::TargetedContentImage>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentImage" }; };
template <> struct name<Windows::Services::TargetedContent::TargetedContentItem>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentItem" }; };
template <> struct name<Windows::Services::TargetedContent::TargetedContentItemState>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentItemState" }; };
template <> struct name<Windows::Services::TargetedContent::TargetedContentObject>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentObject" }; };
template <> struct name<Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentStateChangedEventArgs" }; };
template <> struct name<Windows::Services::TargetedContent::TargetedContentSubscription>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentSubscription" }; };
template <> struct name<Windows::Services::TargetedContent::TargetedContentSubscriptionOptions>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentSubscriptionOptions" }; };
template <> struct name<Windows::Services::TargetedContent::TargetedContentValue>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentValue" }; };
template <> struct name<Windows::Services::TargetedContent::TargetedContentAppInstallationState>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentAppInstallationState" }; };
template <> struct name<Windows::Services::TargetedContent::TargetedContentAvailability>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentAvailability" }; };
template <> struct name<Windows::Services::TargetedContent::TargetedContentInteraction>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentInteraction" }; };
template <> struct name<Windows::Services::TargetedContent::TargetedContentObjectKind>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentObjectKind" }; };
template <> struct name<Windows::Services::TargetedContent::TargetedContentValueKind>{ static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentValueKind" }; };
template <> struct guid<Windows::Services::TargetedContent::ITargetedContentAction>{ static constexpr GUID value{ 0xD75B691E,0x6CD6,0x4CA0,{ 0x9D,0x8F,0x47,0x28,0xB0,0xB7,0xE6,0xB6 } }; };
template <> struct guid<Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs>{ static constexpr GUID value{ 0xE0F59D26,0x5927,0x4450,{ 0x96,0x5C,0x1C,0xEB,0x7B,0xEC,0xDE,0x65 } }; };
template <> struct guid<Windows::Services::TargetedContent::ITargetedContentChangedEventArgs>{ static constexpr GUID value{ 0x99D488C9,0x587E,0x4586,{ 0x8E,0xF7,0xB5,0x4C,0xA9,0x45,0x3A,0x16 } }; };
template <> struct guid<Windows::Services::TargetedContent::ITargetedContentCollection>{ static constexpr GUID value{ 0x2D4B66C5,0xF163,0x44BA,{ 0x9F,0x6E,0xE1,0xA4,0xC2,0xBB,0x55,0x9D } }; };
template <> struct guid<Windows::Services::TargetedContent::ITargetedContentContainer>{ static constexpr GUID value{ 0xBC2494C9,0x8837,0x47C2,{ 0x85,0x0F,0xD7,0x9D,0x64,0x59,0x59,0x26 } }; };
template <> struct guid<Windows::Services::TargetedContent::ITargetedContentContainerStatics>{ static constexpr GUID value{ 0x5B47E7FB,0x2140,0x4C1F,{ 0xA7,0x36,0xC5,0x95,0x83,0xF2,0x27,0xD8 } }; };
template <> struct guid<Windows::Services::TargetedContent::ITargetedContentImage>{ static constexpr GUID value{ 0xA7A585D9,0x779F,0x4B1E,{ 0xBB,0xB1,0x8E,0xAF,0x53,0xFB,0xEA,0xB2 } }; };
template <> struct guid<Windows::Services::TargetedContent::ITargetedContentItem>{ static constexpr GUID value{ 0x38168DC4,0x276C,0x4C32,{ 0x96,0xBA,0x56,0x5C,0x6E,0x40,0x6E,0x74 } }; };
template <> struct guid<Windows::Services::TargetedContent::ITargetedContentItemState>{ static constexpr GUID value{ 0x73935454,0x4C65,0x4B47,{ 0xA4,0x41,0x47,0x2D,0xE5,0x3C,0x79,0xB6 } }; };
template <> struct guid<Windows::Services::TargetedContent::ITargetedContentObject>{ static constexpr GUID value{ 0x041D7969,0x2212,0x42D1,{ 0x9D,0xFA,0x88,0xA8,0xE3,0x03,0x3A,0xA3 } }; };
template <> struct guid<Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs>{ static constexpr GUID value{ 0x9A1CEF3D,0x8073,0x4416,{ 0x8D,0xF2,0x54,0x68,0x35,0xA6,0x41,0x4F } }; };
template <> struct guid<Windows::Services::TargetedContent::ITargetedContentSubscription>{ static constexpr GUID value{ 0x882C2C49,0xC652,0x4C7A,{ 0xAC,0xAD,0x1F,0x7F,0xA2,0x98,0x6C,0x73 } }; };
template <> struct guid<Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions>{ static constexpr GUID value{ 0x61EE6AD0,0x2C83,0x421B,{ 0x84,0x67,0x41,0x3E,0xAF,0x1A,0xEB,0x97 } }; };
template <> struct guid<Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics>{ static constexpr GUID value{ 0xFADDFE80,0x360D,0x4916,{ 0xB5,0x3C,0x7E,0xA2,0x70,0x90,0xD0,0x2A } }; };
template <> struct guid<Windows::Services::TargetedContent::ITargetedContentValue>{ static constexpr GUID value{ 0xAAFDE4B3,0x4215,0x4BF8,{ 0x86,0x7F,0x43,0xF0,0x48,0x65,0xF9,0xBF } }; };
template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentAction>{ using type = Windows::Services::TargetedContent::ITargetedContentAction; };
template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs>{ using type = Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs; };
template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentChangedEventArgs>{ using type = Windows::Services::TargetedContent::ITargetedContentChangedEventArgs; };
template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentCollection>{ using type = Windows::Services::TargetedContent::ITargetedContentCollection; };
template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentContainer>{ using type = Windows::Services::TargetedContent::ITargetedContentContainer; };
template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentFile>{ using type = Windows::Storage::Streams::IRandomAccessStreamReference; };
template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentImage>{ using type = Windows::Services::TargetedContent::ITargetedContentImage; };
template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentItem>{ using type = Windows::Services::TargetedContent::ITargetedContentItem; };
template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentItemState>{ using type = Windows::Services::TargetedContent::ITargetedContentItemState; };
template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentObject>{ using type = Windows::Services::TargetedContent::ITargetedContentObject; };
template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs>{ using type = Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs; };
template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentSubscription>{ using type = Windows::Services::TargetedContent::ITargetedContentSubscription; };
template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentSubscriptionOptions>{ using type = Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions; };
template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentValue>{ using type = Windows::Services::TargetedContent::ITargetedContentValue; };

template <typename D>
struct consume_Windows_Services_TargetedContent_ITargetedContentAction
{
    Windows::Foundation::IAsyncAction InvokeAsync() const;
};
template <> struct consume<Windows::Services::TargetedContent::ITargetedContentAction> { template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentAction<D>; };

template <typename D>
struct consume_Windows_Services_TargetedContent_ITargetedContentAvailabilityChangedEventArgs
{
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs> { template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentAvailabilityChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Services_TargetedContent_ITargetedContentChangedEventArgs
{
    Windows::Foundation::Deferral GetDeferral() const;
    bool HasPreviousContentExpired() const;
};
template <> struct consume<Windows::Services::TargetedContent::ITargetedContentChangedEventArgs> { template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Services_TargetedContent_ITargetedContentCollection
{
    hstring Id() const;
    void ReportInteraction(Windows::Services::TargetedContent::TargetedContentInteraction const& interaction) const;
    void ReportCustomInteraction(param::hstring const& customInteractionName) const;
    hstring Path() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::Services::TargetedContent::TargetedContentValue> Properties() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentCollection> Collections() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentItem> Items() const;
};
template <> struct consume<Windows::Services::TargetedContent::ITargetedContentCollection> { template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentCollection<D>; };

template <typename D>
struct consume_Windows_Services_TargetedContent_ITargetedContentContainer
{
    hstring Id() const;
    Windows::Foundation::DateTime Timestamp() const;
    Windows::Services::TargetedContent::TargetedContentAvailability Availability() const;
    Windows::Services::TargetedContent::TargetedContentCollection Content() const;
    Windows::Services::TargetedContent::TargetedContentObject SelectSingleObject(param::hstring const& path) const;
};
template <> struct consume<Windows::Services::TargetedContent::ITargetedContentContainer> { template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentContainer<D>; };

template <typename D>
struct consume_Windows_Services_TargetedContent_ITargetedContentContainerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer> GetAsync(param::hstring const& contentId) const;
};
template <> struct consume<Windows::Services::TargetedContent::ITargetedContentContainerStatics> { template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentContainerStatics<D>; };

template <typename D>
struct consume_Windows_Services_TargetedContent_ITargetedContentImage
{
    uint32_t Height() const;
    uint32_t Width() const;
};
template <> struct consume<Windows::Services::TargetedContent::ITargetedContentImage> { template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentImage<D>; };

template <typename D>
struct consume_Windows_Services_TargetedContent_ITargetedContentItem
{
    hstring Path() const;
    void ReportInteraction(Windows::Services::TargetedContent::TargetedContentInteraction const& interaction) const;
    void ReportCustomInteraction(param::hstring const& customInteractionName) const;
    Windows::Services::TargetedContent::TargetedContentItemState State() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::Services::TargetedContent::TargetedContentValue> Properties() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentCollection> Collections() const;
};
template <> struct consume<Windows::Services::TargetedContent::ITargetedContentItem> { template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentItem<D>; };

template <typename D>
struct consume_Windows_Services_TargetedContent_ITargetedContentItemState
{
    bool ShouldDisplay() const;
    Windows::Services::TargetedContent::TargetedContentAppInstallationState AppInstallationState() const;
};
template <> struct consume<Windows::Services::TargetedContent::ITargetedContentItemState> { template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentItemState<D>; };

template <typename D>
struct consume_Windows_Services_TargetedContent_ITargetedContentObject
{
    Windows::Services::TargetedContent::TargetedContentObjectKind ObjectKind() const;
    Windows::Services::TargetedContent::TargetedContentCollection Collection() const;
    Windows::Services::TargetedContent::TargetedContentItem Item() const;
    Windows::Services::TargetedContent::TargetedContentValue Value() const;
};
template <> struct consume<Windows::Services::TargetedContent::ITargetedContentObject> { template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentObject<D>; };

template <typename D>
struct consume_Windows_Services_TargetedContent_ITargetedContentStateChangedEventArgs
{
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs> { template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentStateChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Services_TargetedContent_ITargetedContentSubscription
{
    hstring Id() const;
    Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer> GetContentContainerAsync() const;
    event_token ContentChanged(Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentChangedEventArgs> const& handler) const;
    using ContentChanged_revoker = event_revoker<Windows::Services::TargetedContent::ITargetedContentSubscription>;
    ContentChanged_revoker ContentChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentChangedEventArgs> const& handler) const;
    void ContentChanged(event_token const& cookie) const;
    event_token AvailabilityChanged(Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs> const& handler) const;
    using AvailabilityChanged_revoker = event_revoker<Windows::Services::TargetedContent::ITargetedContentSubscription>;
    AvailabilityChanged_revoker AvailabilityChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs> const& handler) const;
    void AvailabilityChanged(event_token const& cookie) const;
    event_token StateChanged(Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs> const& handler) const;
    using StateChanged_revoker = event_revoker<Windows::Services::TargetedContent::ITargetedContentSubscription>;
    StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs> const& handler) const;
    void StateChanged(event_token const& cookie) const;
};
template <> struct consume<Windows::Services::TargetedContent::ITargetedContentSubscription> { template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>; };

template <typename D>
struct consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionOptions
{
    hstring SubscriptionId() const;
    bool AllowPartialContentAvailability() const;
    void AllowPartialContentAvailability(bool value) const;
    Windows::Foundation::Collections::IMap<hstring, hstring> CloudQueryParameters() const;
    Windows::Foundation::Collections::IVector<hstring> LocalFilters() const;
    void Update() const;
};
template <> struct consume<Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions> { template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionOptions<D>; };

template <typename D>
struct consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentSubscription> GetAsync(param::hstring const& subscriptionId) const;
    Windows::Services::TargetedContent::TargetedContentSubscriptionOptions GetOptions(param::hstring const& subscriptionId) const;
};
template <> struct consume<Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics> { template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionStatics<D>; };

template <typename D>
struct consume_Windows_Services_TargetedContent_ITargetedContentValue
{
    Windows::Services::TargetedContent::TargetedContentValueKind ValueKind() const;
    hstring Path() const;
    hstring String() const;
    Windows::Foundation::Uri Uri() const;
    double Number() const;
    bool Boolean() const;
    Windows::Services::TargetedContent::TargetedContentFile File() const;
    Windows::Services::TargetedContent::TargetedContentImage ImageFile() const;
    Windows::Services::TargetedContent::TargetedContentAction Action() const;
    Windows::Foundation::Collections::IVectorView<hstring> Strings() const;
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri> Uris() const;
    Windows::Foundation::Collections::IVectorView<double> Numbers() const;
    Windows::Foundation::Collections::IVectorView<bool> Booleans() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentFile> Files() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentImage> ImageFiles() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentAction> Actions() const;
};
template <> struct consume<Windows::Services::TargetedContent::ITargetedContentValue> { template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentValue<D>; };

template <> struct abi<Windows::Services::TargetedContent::ITargetedContentAction>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall InvokeAsync(::IUnknown** asyncAction) = 0;
};};

template <> struct abi<Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Services::TargetedContent::ITargetedContentChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_HasPreviousContentExpired(bool* value) = 0;
};};

template <> struct abi<Windows::Services::TargetedContent::ITargetedContentCollection>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall ReportInteraction(abi_t<Windows::Services::TargetedContent::TargetedContentInteraction> interaction) = 0;
    virtual HRESULT __stdcall ReportCustomInteraction(HSTRING customInteractionName) = 0;
    virtual HRESULT __stdcall get_Path(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Collections(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Items(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Services::TargetedContent::ITargetedContentContainer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_Availability(abi_t<Windows::Services::TargetedContent::TargetedContentAvailability>* value) = 0;
    virtual HRESULT __stdcall get_Content(::IUnknown** value) = 0;
    virtual HRESULT __stdcall SelectSingleObject(HSTRING path, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Services::TargetedContent::ITargetedContentContainerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetAsync(HSTRING contentId, ::IUnknown** asyncOperation) = 0;
};};

template <> struct abi<Windows::Services::TargetedContent::ITargetedContentImage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Height(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Width(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Services::TargetedContent::ITargetedContentItem>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Path(HSTRING* value) = 0;
    virtual HRESULT __stdcall ReportInteraction(abi_t<Windows::Services::TargetedContent::TargetedContentInteraction> interaction) = 0;
    virtual HRESULT __stdcall ReportCustomInteraction(HSTRING customInteractionName) = 0;
    virtual HRESULT __stdcall get_State(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Collections(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Services::TargetedContent::ITargetedContentItemState>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ShouldDisplay(bool* value) = 0;
    virtual HRESULT __stdcall get_AppInstallationState(abi_t<Windows::Services::TargetedContent::TargetedContentAppInstallationState>* value) = 0;
};};

template <> struct abi<Windows::Services::TargetedContent::ITargetedContentObject>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ObjectKind(abi_t<Windows::Services::TargetedContent::TargetedContentObjectKind>* value) = 0;
    virtual HRESULT __stdcall get_Collection(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Item(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Value(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Services::TargetedContent::ITargetedContentSubscription>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetContentContainerAsync(::IUnknown** asyncOperation) = 0;
    virtual HRESULT __stdcall add_ContentChanged(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_ContentChanged(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_AvailabilityChanged(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_AvailabilityChanged(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_StateChanged(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_StateChanged(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SubscriptionId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AllowPartialContentAvailability(bool* value) = 0;
    virtual HRESULT __stdcall put_AllowPartialContentAvailability(bool value) = 0;
    virtual HRESULT __stdcall get_CloudQueryParameters(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LocalFilters(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Update() = 0;
};};

template <> struct abi<Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetAsync(HSTRING subscriptionId, ::IUnknown** asyncOperation) = 0;
    virtual HRESULT __stdcall GetOptions(HSTRING subscriptionId, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Services::TargetedContent::ITargetedContentValue>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ValueKind(abi_t<Windows::Services::TargetedContent::TargetedContentValueKind>* value) = 0;
    virtual HRESULT __stdcall get_Path(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_String(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Uri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Number(double* value) = 0;
    virtual HRESULT __stdcall get_Boolean(bool* value) = 0;
    virtual HRESULT __stdcall get_File(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ImageFile(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Action(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Strings(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Uris(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Numbers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Booleans(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Files(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ImageFiles(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Actions(::IUnknown** value) = 0;
};};

}
