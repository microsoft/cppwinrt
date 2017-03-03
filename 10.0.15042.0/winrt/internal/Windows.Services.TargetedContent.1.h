// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Services.TargetedContent.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Services::TargetedContent {

struct __declspec(uuid("d75b691e-6cd6-4ca0-9d8f-4728b0b7e6b6")) __declspec(novtable) ITargetedContentAction : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_InvokeAsync(Windows::Foundation::IAsyncAction ** asyncAction) = 0;
};

struct __declspec(uuid("e0f59d26-5927-4450-965c-1ceb7becde65")) __declspec(novtable) ITargetedContentAvailabilityChangedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Foundation::IDeferral ** value) = 0;
};

struct __declspec(uuid("99d488c9-587e-4586-8ef7-b54ca9453a16")) __declspec(novtable) ITargetedContentChangedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Foundation::IDeferral ** value) = 0;
    virtual HRESULT __stdcall get_HasPreviousContentExpired(bool * value) = 0;
};

struct __declspec(uuid("2d4b66c5-f163-44ba-9f6e-e1a4c2bb559d")) __declspec(novtable) ITargetedContentCollection : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall abi_ReportInteraction(winrt::Windows::Services::TargetedContent::TargetedContentInteraction interaction) = 0;
    virtual HRESULT __stdcall abi_ReportCustomInteraction(hstring customInteractionName) = 0;
    virtual HRESULT __stdcall get_Path(hstring * value) = 0;
    virtual HRESULT __stdcall get_Properties(Windows::Foundation::Collections::IMapView<hstring, Windows::Services::TargetedContent::TargetedContentValue> ** value) = 0;
    virtual HRESULT __stdcall get_Collections(Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentCollection> ** value) = 0;
    virtual HRESULT __stdcall get_Items(Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentItem> ** value) = 0;
};

struct __declspec(uuid("bc2494c9-8837-47c2-850f-d79d64595926")) __declspec(novtable) ITargetedContentContainer : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_Availability(winrt::Windows::Services::TargetedContent::TargetedContentAvailability * value) = 0;
    virtual HRESULT __stdcall get_Content(Windows::Services::TargetedContent::ITargetedContentCollection ** value) = 0;
    virtual HRESULT __stdcall abi_SelectSingleObject(hstring path, Windows::Services::TargetedContent::ITargetedContentObject ** value) = 0;
};

struct __declspec(uuid("5b47e7fb-2140-4c1f-a736-c59583f227d8")) __declspec(novtable) ITargetedContentContainerStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetAsync(hstring contentId, Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer> ** asyncOperation) = 0;
};

struct __declspec(uuid("a7a585d9-779f-4b1e-bbb1-8eaf53fbeab2")) __declspec(novtable) ITargetedContentImage : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Height(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Width(uint32_t * value) = 0;
};

struct __declspec(uuid("38168dc4-276c-4c32-96ba-565c6e406e74")) __declspec(novtable) ITargetedContentItem : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Path(hstring * value) = 0;
    virtual HRESULT __stdcall abi_ReportInteraction(winrt::Windows::Services::TargetedContent::TargetedContentInteraction interaction) = 0;
    virtual HRESULT __stdcall abi_ReportCustomInteraction(hstring customInteractionName) = 0;
    virtual HRESULT __stdcall get_State(Windows::Services::TargetedContent::ITargetedContentItemState ** value) = 0;
    virtual HRESULT __stdcall get_Properties(Windows::Foundation::Collections::IMapView<hstring, Windows::Services::TargetedContent::TargetedContentValue> ** value) = 0;
    virtual HRESULT __stdcall get_Collections(Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentCollection> ** value) = 0;
};

struct __declspec(uuid("73935454-4c65-4b47-a441-472de53c79b6")) __declspec(novtable) ITargetedContentItemState : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_ShouldDisplay(bool * value) = 0;
    virtual HRESULT __stdcall get_AppInstallationState(winrt::Windows::Services::TargetedContent::TargetedContentAppInstallationState * value) = 0;
};

struct __declspec(uuid("041d7969-2212-42d1-9dfa-88a8e3033aa3")) __declspec(novtable) ITargetedContentObject : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_ObjectKind(winrt::Windows::Services::TargetedContent::TargetedContentObjectKind * value) = 0;
    virtual HRESULT __stdcall get_Collection(Windows::Services::TargetedContent::ITargetedContentCollection ** value) = 0;
    virtual HRESULT __stdcall get_Item(Windows::Services::TargetedContent::ITargetedContentItem ** value) = 0;
    virtual HRESULT __stdcall get_Value(Windows::Services::TargetedContent::ITargetedContentValue ** value) = 0;
};

struct __declspec(uuid("9a1cef3d-8073-4416-8df2-546835a6414f")) __declspec(novtable) ITargetedContentStateChangedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Foundation::IDeferral ** value) = 0;
};

struct __declspec(uuid("882c2c49-c652-4c7a-acad-1f7fa2986c73")) __declspec(novtable) ITargetedContentSubscription : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall abi_GetContentContainerAsync(Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer> ** asyncOperation) = 0;
    virtual HRESULT __stdcall add_ContentChanged(Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentChangedEventArgs> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_ContentChanged(event_token cookie) = 0;
    virtual HRESULT __stdcall add_AvailabilityChanged(Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_AvailabilityChanged(event_token cookie) = 0;
    virtual HRESULT __stdcall add_StateChanged(Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_StateChanged(event_token cookie) = 0;
};

struct __declspec(uuid("61ee6ad0-2c83-421b-8467-413eaf1aeb97")) __declspec(novtable) ITargetedContentSubscriptionOptions : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_SubscriptionId(hstring * value) = 0;
    virtual HRESULT __stdcall get_AllowPartialContentAvailability(bool * value) = 0;
    virtual HRESULT __stdcall put_AllowPartialContentAvailability(bool value) = 0;
    virtual HRESULT __stdcall get_CloudQueryParameters(Windows::Foundation::Collections::IMap<hstring, hstring> ** value) = 0;
    virtual HRESULT __stdcall get_LocalFilters(Windows::Foundation::Collections::IVector<hstring> ** value) = 0;
    virtual HRESULT __stdcall abi_Update() = 0;
};

struct __declspec(uuid("faddfe80-360d-4916-b53c-7ea27090d02a")) __declspec(novtable) ITargetedContentSubscriptionStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetAsync(hstring subscriptionId, Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentSubscription> ** asyncOperation) = 0;
    virtual HRESULT __stdcall abi_GetOptions(hstring subscriptionId, Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions ** value) = 0;
};

struct __declspec(uuid("aafde4b3-4215-4bf8-867f-43f04865f9bf")) __declspec(novtable) ITargetedContentValue : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_ValueKind(winrt::Windows::Services::TargetedContent::TargetedContentValueKind * value) = 0;
    virtual HRESULT __stdcall get_Path(hstring * value) = 0;
    virtual HRESULT __stdcall get_String(hstring * value) = 0;
    virtual HRESULT __stdcall get_Uri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_Number(double * value) = 0;
    virtual HRESULT __stdcall get_Boolean(bool * value) = 0;
    virtual HRESULT __stdcall get_File(Windows::Storage::Streams::IRandomAccessStreamReference ** value) = 0;
    virtual HRESULT __stdcall get_ImageFile(Windows::Services::TargetedContent::ITargetedContentImage ** value) = 0;
    virtual HRESULT __stdcall get_Action(Windows::Services::TargetedContent::ITargetedContentAction ** value) = 0;
    virtual HRESULT __stdcall get_Strings(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
    virtual HRESULT __stdcall get_Uris(Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri> ** value) = 0;
    virtual HRESULT __stdcall get_Numbers(Windows::Foundation::Collections::IVectorView<double> ** value) = 0;
    virtual HRESULT __stdcall get_Booleans(Windows::Foundation::Collections::IVectorView<bool> ** value) = 0;
    virtual HRESULT __stdcall get_Files(Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentFile> ** value) = 0;
    virtual HRESULT __stdcall get_ImageFiles(Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentImage> ** value) = 0;
    virtual HRESULT __stdcall get_Actions(Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentAction> ** value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Services::TargetedContent::TargetedContentAction> { using default_interface = Windows::Services::TargetedContent::ITargetedContentAction; };
template <> struct traits<Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs> { using default_interface = Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs; };
template <> struct traits<Windows::Services::TargetedContent::TargetedContentChangedEventArgs> { using default_interface = Windows::Services::TargetedContent::ITargetedContentChangedEventArgs; };
template <> struct traits<Windows::Services::TargetedContent::TargetedContentCollection> { using default_interface = Windows::Services::TargetedContent::ITargetedContentCollection; };
template <> struct traits<Windows::Services::TargetedContent::TargetedContentContainer> { using default_interface = Windows::Services::TargetedContent::ITargetedContentContainer; };
template <> struct traits<Windows::Services::TargetedContent::TargetedContentFile> { using default_interface = Windows::Storage::Streams::IRandomAccessStreamReference; };
template <> struct traits<Windows::Services::TargetedContent::TargetedContentImage> { using default_interface = Windows::Services::TargetedContent::ITargetedContentImage; };
template <> struct traits<Windows::Services::TargetedContent::TargetedContentItem> { using default_interface = Windows::Services::TargetedContent::ITargetedContentItem; };
template <> struct traits<Windows::Services::TargetedContent::TargetedContentItemState> { using default_interface = Windows::Services::TargetedContent::ITargetedContentItemState; };
template <> struct traits<Windows::Services::TargetedContent::TargetedContentObject> { using default_interface = Windows::Services::TargetedContent::ITargetedContentObject; };
template <> struct traits<Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs> { using default_interface = Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs; };
template <> struct traits<Windows::Services::TargetedContent::TargetedContentSubscription> { using default_interface = Windows::Services::TargetedContent::ITargetedContentSubscription; };
template <> struct traits<Windows::Services::TargetedContent::TargetedContentSubscriptionOptions> { using default_interface = Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions; };
template <> struct traits<Windows::Services::TargetedContent::TargetedContentValue> { using default_interface = Windows::Services::TargetedContent::ITargetedContentValue; };

}

namespace Windows::Services::TargetedContent {

template <typename D>
struct WINRT_EBO impl_ITargetedContentAction
{
    Windows::Foundation::IAsyncAction InvokeAsync() const;
};

template <typename D>
struct WINRT_EBO impl_ITargetedContentAvailabilityChangedEventArgs
{
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_ITargetedContentChangedEventArgs
{
    Windows::Foundation::Deferral GetDeferral() const;
    bool HasPreviousContentExpired() const;
};

template <typename D>
struct WINRT_EBO impl_ITargetedContentCollection
{
    hstring Id() const;
    void ReportInteraction(Windows::Services::TargetedContent::TargetedContentInteraction interaction) const;
    void ReportCustomInteraction(hstring_view customInteractionName) const;
    hstring Path() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::Services::TargetedContent::TargetedContentValue> Properties() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentCollection> Collections() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentItem> Items() const;
};

template <typename D>
struct WINRT_EBO impl_ITargetedContentContainer
{
    hstring Id() const;
    Windows::Foundation::DateTime Timestamp() const;
    Windows::Services::TargetedContent::TargetedContentAvailability Availability() const;
    Windows::Services::TargetedContent::TargetedContentCollection Content() const;
    Windows::Services::TargetedContent::TargetedContentObject SelectSingleObject(hstring_view path) const;
};

template <typename D>
struct WINRT_EBO impl_ITargetedContentContainerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer> GetAsync(hstring_view contentId) const;
};

template <typename D>
struct WINRT_EBO impl_ITargetedContentImage
{
    uint32_t Height() const;
    uint32_t Width() const;
};

template <typename D>
struct WINRT_EBO impl_ITargetedContentItem
{
    hstring Path() const;
    void ReportInteraction(Windows::Services::TargetedContent::TargetedContentInteraction interaction) const;
    void ReportCustomInteraction(hstring_view customInteractionName) const;
    Windows::Services::TargetedContent::TargetedContentItemState State() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::Services::TargetedContent::TargetedContentValue> Properties() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentCollection> Collections() const;
};

template <typename D>
struct WINRT_EBO impl_ITargetedContentItemState
{
    bool ShouldDisplay() const;
    Windows::Services::TargetedContent::TargetedContentAppInstallationState AppInstallationState() const;
};

template <typename D>
struct WINRT_EBO impl_ITargetedContentObject
{
    Windows::Services::TargetedContent::TargetedContentObjectKind ObjectKind() const;
    Windows::Services::TargetedContent::TargetedContentCollection Collection() const;
    Windows::Services::TargetedContent::TargetedContentItem Item() const;
    Windows::Services::TargetedContent::TargetedContentValue Value() const;
};

template <typename D>
struct WINRT_EBO impl_ITargetedContentStateChangedEventArgs
{
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_ITargetedContentSubscription
{
    hstring Id() const;
    Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer> GetContentContainerAsync() const;
    event_token ContentChanged(const Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentChangedEventArgs> & handler) const;
    using ContentChanged_revoker = event_revoker<ITargetedContentSubscription>;
    ContentChanged_revoker ContentChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentChangedEventArgs> & handler) const;
    void ContentChanged(event_token cookie) const;
    event_token AvailabilityChanged(const Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs> & handler) const;
    using AvailabilityChanged_revoker = event_revoker<ITargetedContentSubscription>;
    AvailabilityChanged_revoker AvailabilityChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs> & handler) const;
    void AvailabilityChanged(event_token cookie) const;
    event_token StateChanged(const Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs> & handler) const;
    using StateChanged_revoker = event_revoker<ITargetedContentSubscription>;
    StateChanged_revoker StateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs> & handler) const;
    void StateChanged(event_token cookie) const;
};

template <typename D>
struct WINRT_EBO impl_ITargetedContentSubscriptionOptions
{
    hstring SubscriptionId() const;
    bool AllowPartialContentAvailability() const;
    void AllowPartialContentAvailability(bool value) const;
    Windows::Foundation::Collections::IMap<hstring, hstring> CloudQueryParameters() const;
    Windows::Foundation::Collections::IVector<hstring> LocalFilters() const;
    void Update() const;
};

template <typename D>
struct WINRT_EBO impl_ITargetedContentSubscriptionStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentSubscription> GetAsync(hstring_view subscriptionId) const;
    Windows::Services::TargetedContent::TargetedContentSubscriptionOptions GetOptions(hstring_view subscriptionId) const;
};

template <typename D>
struct WINRT_EBO impl_ITargetedContentValue
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

}

namespace impl {

template <> struct traits<Windows::Services::TargetedContent::ITargetedContentAction>
{
    using abi = ABI::Windows::Services::TargetedContent::ITargetedContentAction;
    template <typename D> using consume = Windows::Services::TargetedContent::impl_ITargetedContentAction<D>;
};

template <> struct traits<Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs>
{
    using abi = ABI::Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs;
    template <typename D> using consume = Windows::Services::TargetedContent::impl_ITargetedContentAvailabilityChangedEventArgs<D>;
};

template <> struct traits<Windows::Services::TargetedContent::ITargetedContentChangedEventArgs>
{
    using abi = ABI::Windows::Services::TargetedContent::ITargetedContentChangedEventArgs;
    template <typename D> using consume = Windows::Services::TargetedContent::impl_ITargetedContentChangedEventArgs<D>;
};

template <> struct traits<Windows::Services::TargetedContent::ITargetedContentCollection>
{
    using abi = ABI::Windows::Services::TargetedContent::ITargetedContentCollection;
    template <typename D> using consume = Windows::Services::TargetedContent::impl_ITargetedContentCollection<D>;
};

template <> struct traits<Windows::Services::TargetedContent::ITargetedContentContainer>
{
    using abi = ABI::Windows::Services::TargetedContent::ITargetedContentContainer;
    template <typename D> using consume = Windows::Services::TargetedContent::impl_ITargetedContentContainer<D>;
};

template <> struct traits<Windows::Services::TargetedContent::ITargetedContentContainerStatics>
{
    using abi = ABI::Windows::Services::TargetedContent::ITargetedContentContainerStatics;
    template <typename D> using consume = Windows::Services::TargetedContent::impl_ITargetedContentContainerStatics<D>;
};

template <> struct traits<Windows::Services::TargetedContent::ITargetedContentImage>
{
    using abi = ABI::Windows::Services::TargetedContent::ITargetedContentImage;
    template <typename D> using consume = Windows::Services::TargetedContent::impl_ITargetedContentImage<D>;
};

template <> struct traits<Windows::Services::TargetedContent::ITargetedContentItem>
{
    using abi = ABI::Windows::Services::TargetedContent::ITargetedContentItem;
    template <typename D> using consume = Windows::Services::TargetedContent::impl_ITargetedContentItem<D>;
};

template <> struct traits<Windows::Services::TargetedContent::ITargetedContentItemState>
{
    using abi = ABI::Windows::Services::TargetedContent::ITargetedContentItemState;
    template <typename D> using consume = Windows::Services::TargetedContent::impl_ITargetedContentItemState<D>;
};

template <> struct traits<Windows::Services::TargetedContent::ITargetedContentObject>
{
    using abi = ABI::Windows::Services::TargetedContent::ITargetedContentObject;
    template <typename D> using consume = Windows::Services::TargetedContent::impl_ITargetedContentObject<D>;
};

template <> struct traits<Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs>
{
    using abi = ABI::Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs;
    template <typename D> using consume = Windows::Services::TargetedContent::impl_ITargetedContentStateChangedEventArgs<D>;
};

template <> struct traits<Windows::Services::TargetedContent::ITargetedContentSubscription>
{
    using abi = ABI::Windows::Services::TargetedContent::ITargetedContentSubscription;
    template <typename D> using consume = Windows::Services::TargetedContent::impl_ITargetedContentSubscription<D>;
};

template <> struct traits<Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions>
{
    using abi = ABI::Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions;
    template <typename D> using consume = Windows::Services::TargetedContent::impl_ITargetedContentSubscriptionOptions<D>;
};

template <> struct traits<Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics>
{
    using abi = ABI::Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics;
    template <typename D> using consume = Windows::Services::TargetedContent::impl_ITargetedContentSubscriptionStatics<D>;
};

template <> struct traits<Windows::Services::TargetedContent::ITargetedContentValue>
{
    using abi = ABI::Windows::Services::TargetedContent::ITargetedContentValue;
    template <typename D> using consume = Windows::Services::TargetedContent::impl_ITargetedContentValue<D>;
};

template <> struct traits<Windows::Services::TargetedContent::TargetedContentAction>
{
    using abi = ABI::Windows::Services::TargetedContent::TargetedContentAction;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.TargetedContent.TargetedContentAction"; }
};

template <> struct traits<Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs>
{
    using abi = ABI::Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.TargetedContent.TargetedContentAvailabilityChangedEventArgs"; }
};

template <> struct traits<Windows::Services::TargetedContent::TargetedContentChangedEventArgs>
{
    using abi = ABI::Windows::Services::TargetedContent::TargetedContentChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.TargetedContent.TargetedContentChangedEventArgs"; }
};

template <> struct traits<Windows::Services::TargetedContent::TargetedContentCollection>
{
    using abi = ABI::Windows::Services::TargetedContent::TargetedContentCollection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.TargetedContent.TargetedContentCollection"; }
};

template <> struct traits<Windows::Services::TargetedContent::TargetedContentContainer>
{
    using abi = ABI::Windows::Services::TargetedContent::TargetedContentContainer;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.TargetedContent.TargetedContentContainer"; }
};

template <> struct traits<Windows::Services::TargetedContent::TargetedContentFile>
{
    using abi = ABI::Windows::Services::TargetedContent::TargetedContentFile;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.TargetedContent.TargetedContentFile"; }
};

template <> struct traits<Windows::Services::TargetedContent::TargetedContentImage>
{
    using abi = ABI::Windows::Services::TargetedContent::TargetedContentImage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.TargetedContent.TargetedContentImage"; }
};

template <> struct traits<Windows::Services::TargetedContent::TargetedContentItem>
{
    using abi = ABI::Windows::Services::TargetedContent::TargetedContentItem;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.TargetedContent.TargetedContentItem"; }
};

template <> struct traits<Windows::Services::TargetedContent::TargetedContentItemState>
{
    using abi = ABI::Windows::Services::TargetedContent::TargetedContentItemState;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.TargetedContent.TargetedContentItemState"; }
};

template <> struct traits<Windows::Services::TargetedContent::TargetedContentObject>
{
    using abi = ABI::Windows::Services::TargetedContent::TargetedContentObject;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.TargetedContent.TargetedContentObject"; }
};

template <> struct traits<Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs>
{
    using abi = ABI::Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.TargetedContent.TargetedContentStateChangedEventArgs"; }
};

template <> struct traits<Windows::Services::TargetedContent::TargetedContentSubscription>
{
    using abi = ABI::Windows::Services::TargetedContent::TargetedContentSubscription;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.TargetedContent.TargetedContentSubscription"; }
};

template <> struct traits<Windows::Services::TargetedContent::TargetedContentSubscriptionOptions>
{
    using abi = ABI::Windows::Services::TargetedContent::TargetedContentSubscriptionOptions;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.TargetedContent.TargetedContentSubscriptionOptions"; }
};

template <> struct traits<Windows::Services::TargetedContent::TargetedContentValue>
{
    using abi = ABI::Windows::Services::TargetedContent::TargetedContentValue;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.TargetedContent.TargetedContentValue"; }
};

}

}
