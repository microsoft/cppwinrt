// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Services::TargetedContent {

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

namespace Windows::Services::TargetedContent {

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

namespace Windows::Services::TargetedContent {

template <typename T> struct impl_ITargetedContentAction;
template <typename T> struct impl_ITargetedContentAvailabilityChangedEventArgs;
template <typename T> struct impl_ITargetedContentChangedEventArgs;
template <typename T> struct impl_ITargetedContentCollection;
template <typename T> struct impl_ITargetedContentContainer;
template <typename T> struct impl_ITargetedContentContainerStatics;
template <typename T> struct impl_ITargetedContentImage;
template <typename T> struct impl_ITargetedContentItem;
template <typename T> struct impl_ITargetedContentItemState;
template <typename T> struct impl_ITargetedContentObject;
template <typename T> struct impl_ITargetedContentStateChangedEventArgs;
template <typename T> struct impl_ITargetedContentSubscription;
template <typename T> struct impl_ITargetedContentSubscriptionOptions;
template <typename T> struct impl_ITargetedContentSubscriptionStatics;
template <typename T> struct impl_ITargetedContentValue;

}

namespace Windows::Services::TargetedContent {

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

}

}
