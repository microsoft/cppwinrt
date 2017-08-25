// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::Media::ContentRestrictions {

enum class ContentAccessRestrictionLevel
{
    Allow = 0,
    Warn = 1,
    Block = 2,
    Hide = 3,
};

enum class RatedContentCategory
{
    General = 0,
    Application = 1,
    Game = 2,
    Movie = 3,
    Television = 4,
    Music = 5,
};

struct IContentRestrictionsBrowsePolicy;
struct IRatedContentDescription;
struct IRatedContentDescriptionFactory;
struct IRatedContentRestrictions;
struct IRatedContentRestrictionsFactory;
struct ContentRestrictionsBrowsePolicy;
struct RatedContentDescription;
struct RatedContentRestrictions;

}

namespace winrt::impl {

template <> struct category<Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy>{ using type = interface_category; };
template <> struct category<Windows::Media::ContentRestrictions::IRatedContentDescription>{ using type = interface_category; };
template <> struct category<Windows::Media::ContentRestrictions::IRatedContentDescriptionFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::ContentRestrictions::IRatedContentRestrictions>{ using type = interface_category; };
template <> struct category<Windows::Media::ContentRestrictions::IRatedContentRestrictionsFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::ContentRestrictions::ContentRestrictionsBrowsePolicy>{ using type = class_category; };
template <> struct category<Windows::Media::ContentRestrictions::RatedContentDescription>{ using type = class_category; };
template <> struct category<Windows::Media::ContentRestrictions::RatedContentRestrictions>{ using type = class_category; };
template <> struct category<Windows::Media::ContentRestrictions::ContentAccessRestrictionLevel>{ using type = enum_category; };
template <> struct category<Windows::Media::ContentRestrictions::RatedContentCategory>{ using type = enum_category; };
template <> struct name<Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy>{ static constexpr auto & value{ L"Windows.Media.ContentRestrictions.IContentRestrictionsBrowsePolicy" }; };
template <> struct name<Windows::Media::ContentRestrictions::IRatedContentDescription>{ static constexpr auto & value{ L"Windows.Media.ContentRestrictions.IRatedContentDescription" }; };
template <> struct name<Windows::Media::ContentRestrictions::IRatedContentDescriptionFactory>{ static constexpr auto & value{ L"Windows.Media.ContentRestrictions.IRatedContentDescriptionFactory" }; };
template <> struct name<Windows::Media::ContentRestrictions::IRatedContentRestrictions>{ static constexpr auto & value{ L"Windows.Media.ContentRestrictions.IRatedContentRestrictions" }; };
template <> struct name<Windows::Media::ContentRestrictions::IRatedContentRestrictionsFactory>{ static constexpr auto & value{ L"Windows.Media.ContentRestrictions.IRatedContentRestrictionsFactory" }; };
template <> struct name<Windows::Media::ContentRestrictions::ContentRestrictionsBrowsePolicy>{ static constexpr auto & value{ L"Windows.Media.ContentRestrictions.ContentRestrictionsBrowsePolicy" }; };
template <> struct name<Windows::Media::ContentRestrictions::RatedContentDescription>{ static constexpr auto & value{ L"Windows.Media.ContentRestrictions.RatedContentDescription" }; };
template <> struct name<Windows::Media::ContentRestrictions::RatedContentRestrictions>{ static constexpr auto & value{ L"Windows.Media.ContentRestrictions.RatedContentRestrictions" }; };
template <> struct name<Windows::Media::ContentRestrictions::ContentAccessRestrictionLevel>{ static constexpr auto & value{ L"Windows.Media.ContentRestrictions.ContentAccessRestrictionLevel" }; };
template <> struct name<Windows::Media::ContentRestrictions::RatedContentCategory>{ static constexpr auto & value{ L"Windows.Media.ContentRestrictions.RatedContentCategory" }; };
template <> struct guid<Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy>{ static constexpr GUID value{ 0x8C0133A4,0x442E,0x461A,{ 0x87,0x57,0xFA,0xD2,0xF5,0xBD,0x37,0xE4 } }; };
template <> struct guid<Windows::Media::ContentRestrictions::IRatedContentDescription>{ static constexpr GUID value{ 0x694866DF,0x66B2,0x4DC3,{ 0x96,0xB1,0xF0,0x90,0xEE,0xDE,0xE2,0x55 } }; };
template <> struct guid<Windows::Media::ContentRestrictions::IRatedContentDescriptionFactory>{ static constexpr GUID value{ 0x2E38DF62,0x9B90,0x4FA6,{ 0x89,0xC1,0x4B,0x8D,0x2F,0xFB,0x35,0x73 } }; };
template <> struct guid<Windows::Media::ContentRestrictions::IRatedContentRestrictions>{ static constexpr GUID value{ 0x3F7F23CB,0xBA07,0x4401,{ 0xA4,0x9D,0x8B,0x92,0x22,0x20,0x57,0x23 } }; };
template <> struct guid<Windows::Media::ContentRestrictions::IRatedContentRestrictionsFactory>{ static constexpr GUID value{ 0xFB4B2996,0xC3BD,0x4910,{ 0x96,0x19,0x97,0xCF,0xD0,0x69,0x4D,0x56 } }; };
template <> struct default_interface<Windows::Media::ContentRestrictions::ContentRestrictionsBrowsePolicy>{ using type = Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy; };
template <> struct default_interface<Windows::Media::ContentRestrictions::RatedContentDescription>{ using type = Windows::Media::ContentRestrictions::IRatedContentDescription; };
template <> struct default_interface<Windows::Media::ContentRestrictions::RatedContentRestrictions>{ using type = Windows::Media::ContentRestrictions::IRatedContentRestrictions; };

template <typename D>
struct consume_Windows_Media_ContentRestrictions_IContentRestrictionsBrowsePolicy
{
    hstring GeographicRegion() const;
    Windows::Foundation::IReference<uint32_t> MaxBrowsableAgeRating() const;
    Windows::Foundation::IReference<uint32_t> PreferredAgeRating() const;
};
template <> struct consume<Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy> { template <typename D> using type = consume_Windows_Media_ContentRestrictions_IContentRestrictionsBrowsePolicy<D>; };

template <typename D>
struct consume_Windows_Media_ContentRestrictions_IRatedContentDescription
{
    hstring Id() const;
    void Id(param::hstring const& value) const;
    hstring Title() const;
    void Title(param::hstring const& value) const;
    Windows::Storage::Streams::IRandomAccessStreamReference Image() const;
    void Image(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
    Windows::Media::ContentRestrictions::RatedContentCategory Category() const;
    void Category(Windows::Media::ContentRestrictions::RatedContentCategory const& value) const;
    Windows::Foundation::Collections::IVector<hstring> Ratings() const;
    void Ratings(param::vector<hstring> const& value) const;
};
template <> struct consume<Windows::Media::ContentRestrictions::IRatedContentDescription> { template <typename D> using type = consume_Windows_Media_ContentRestrictions_IRatedContentDescription<D>; };

template <typename D>
struct consume_Windows_Media_ContentRestrictions_IRatedContentDescriptionFactory
{
    Windows::Media::ContentRestrictions::RatedContentDescription Create(param::hstring const& id, param::hstring const& title, Windows::Media::ContentRestrictions::RatedContentCategory const& category) const;
};
template <> struct consume<Windows::Media::ContentRestrictions::IRatedContentDescriptionFactory> { template <typename D> using type = consume_Windows_Media_ContentRestrictions_IRatedContentDescriptionFactory<D>; };

template <typename D>
struct consume_Windows_Media_ContentRestrictions_IRatedContentRestrictions
{
    Windows::Foundation::IAsyncOperation<Windows::Media::ContentRestrictions::ContentRestrictionsBrowsePolicy> GetBrowsePolicyAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::ContentRestrictions::ContentAccessRestrictionLevel> GetRestrictionLevelAsync(Windows::Media::ContentRestrictions::RatedContentDescription const& RatedContentDescription) const;
    Windows::Foundation::IAsyncOperation<bool> RequestContentAccessAsync(Windows::Media::ContentRestrictions::RatedContentDescription const& RatedContentDescription) const;
    event_token RestrictionsChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using RestrictionsChanged_revoker = event_revoker<Windows::Media::ContentRestrictions::IRatedContentRestrictions>;
    RestrictionsChanged_revoker RestrictionsChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void RestrictionsChanged(event_token const& token) const;
};
template <> struct consume<Windows::Media::ContentRestrictions::IRatedContentRestrictions> { template <typename D> using type = consume_Windows_Media_ContentRestrictions_IRatedContentRestrictions<D>; };

template <typename D>
struct consume_Windows_Media_ContentRestrictions_IRatedContentRestrictionsFactory
{
    Windows::Media::ContentRestrictions::RatedContentRestrictions CreateWithMaxAgeRating(uint32_t maxAgeRating) const;
};
template <> struct consume<Windows::Media::ContentRestrictions::IRatedContentRestrictionsFactory> { template <typename D> using type = consume_Windows_Media_ContentRestrictions_IRatedContentRestrictionsFactory<D>; };

template <> struct abi<Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_GeographicRegion(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MaxBrowsableAgeRating(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PreferredAgeRating(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::ContentRestrictions::IRatedContentDescription>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Id(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Title(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Image(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Image(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Category(abi_t<Windows::Media::ContentRestrictions::RatedContentCategory>* value) = 0;
    virtual HRESULT __stdcall put_Category(abi_t<Windows::Media::ContentRestrictions::RatedContentCategory> value) = 0;
    virtual HRESULT __stdcall get_Ratings(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Ratings(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Media::ContentRestrictions::IRatedContentDescriptionFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING id, HSTRING title, abi_t<Windows::Media::ContentRestrictions::RatedContentCategory> category, ::IUnknown** RatedContentDescription) = 0;
};};

template <> struct abi<Windows::Media::ContentRestrictions::IRatedContentRestrictions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetBrowsePolicyAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetRestrictionLevelAsync(::IUnknown* RatedContentDescription, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestContentAccessAsync(::IUnknown* RatedContentDescription, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_RestrictionsChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RestrictionsChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Media::ContentRestrictions::IRatedContentRestrictionsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithMaxAgeRating(uint32_t maxAgeRating, ::IUnknown** ratedContentRestrictions) = 0;
};};

}
