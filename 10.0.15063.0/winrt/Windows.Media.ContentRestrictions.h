// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Media.ContentRestrictions.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Media_ContentRestrictions_IContentRestrictionsBrowsePolicy<D>::GeographicRegion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy)->get_GeographicRegion(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_ContentRestrictions_IContentRestrictionsBrowsePolicy<D>::MaxBrowsableAgeRating() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy)->get_MaxBrowsableAgeRating(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_ContentRestrictions_IContentRestrictionsBrowsePolicy<D>::PreferredAgeRating() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy)->get_PreferredAgeRating(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_ContentRestrictions_IRatedContentDescription<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::ContentRestrictions::IRatedContentDescription)->get_Id(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_ContentRestrictions_IRatedContentDescription<D>::Id(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ContentRestrictions::IRatedContentDescription)->put_Id(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_ContentRestrictions_IRatedContentDescription<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::ContentRestrictions::IRatedContentDescription)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_ContentRestrictions_IRatedContentDescription<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ContentRestrictions::IRatedContentDescription)->put_Title(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_Media_ContentRestrictions_IRatedContentDescription<D>::Image() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::ContentRestrictions::IRatedContentDescription)->get_Image(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_ContentRestrictions_IRatedContentDescription<D>::Image(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ContentRestrictions::IRatedContentDescription)->put_Image(get_abi(value)));
}

template <typename D> Windows::Media::ContentRestrictions::RatedContentCategory consume_Windows_Media_ContentRestrictions_IRatedContentDescription<D>::Category() const
{
    Windows::Media::ContentRestrictions::RatedContentCategory value{};
    check_hresult(WINRT_SHIM(Windows::Media::ContentRestrictions::IRatedContentDescription)->get_Category(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_ContentRestrictions_IRatedContentDescription<D>::Category(Windows::Media::ContentRestrictions::RatedContentCategory const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ContentRestrictions::IRatedContentDescription)->put_Category(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Media_ContentRestrictions_IRatedContentDescription<D>::Ratings() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::ContentRestrictions::IRatedContentDescription)->get_Ratings(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_ContentRestrictions_IRatedContentDescription<D>::Ratings(param::vector<hstring> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ContentRestrictions::IRatedContentDescription)->put_Ratings(get_abi(value)));
}

template <typename D> Windows::Media::ContentRestrictions::RatedContentDescription consume_Windows_Media_ContentRestrictions_IRatedContentDescriptionFactory<D>::Create(param::hstring const& id, param::hstring const& title, Windows::Media::ContentRestrictions::RatedContentCategory const& category) const
{
    Windows::Media::ContentRestrictions::RatedContentDescription RatedContentDescription{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::ContentRestrictions::IRatedContentDescriptionFactory)->Create(get_abi(id), get_abi(title), get_abi(category), put_abi(RatedContentDescription)));
    return RatedContentDescription;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::ContentRestrictions::ContentRestrictionsBrowsePolicy> consume_Windows_Media_ContentRestrictions_IRatedContentRestrictions<D>::GetBrowsePolicyAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::ContentRestrictions::ContentRestrictionsBrowsePolicy> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::ContentRestrictions::IRatedContentRestrictions)->GetBrowsePolicyAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::ContentRestrictions::ContentAccessRestrictionLevel> consume_Windows_Media_ContentRestrictions_IRatedContentRestrictions<D>::GetRestrictionLevelAsync(Windows::Media::ContentRestrictions::RatedContentDescription const& RatedContentDescription) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::ContentRestrictions::ContentAccessRestrictionLevel> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::ContentRestrictions::IRatedContentRestrictions)->GetRestrictionLevelAsync(get_abi(RatedContentDescription), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Media_ContentRestrictions_IRatedContentRestrictions<D>::RequestContentAccessAsync(Windows::Media::ContentRestrictions::RatedContentDescription const& RatedContentDescription) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::ContentRestrictions::IRatedContentRestrictions)->RequestContentAccessAsync(get_abi(RatedContentDescription), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Media_ContentRestrictions_IRatedContentRestrictions<D>::RestrictionsChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::ContentRestrictions::IRatedContentRestrictions)->add_RestrictionsChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::ContentRestrictions::IRatedContentRestrictions> consume_Windows_Media_ContentRestrictions_IRatedContentRestrictions<D>::RestrictionsChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::ContentRestrictions::IRatedContentRestrictions>(this, &abi_t<Windows::Media::ContentRestrictions::IRatedContentRestrictions>::remove_RestrictionsChanged, RestrictionsChanged(handler));
}

template <typename D> void consume_Windows_Media_ContentRestrictions_IRatedContentRestrictions<D>::RestrictionsChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ContentRestrictions::IRatedContentRestrictions)->remove_RestrictionsChanged(get_abi(token)));
}

template <typename D> Windows::Media::ContentRestrictions::RatedContentRestrictions consume_Windows_Media_ContentRestrictions_IRatedContentRestrictionsFactory<D>::CreateWithMaxAgeRating(uint32_t maxAgeRating) const
{
    Windows::Media::ContentRestrictions::RatedContentRestrictions ratedContentRestrictions{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::ContentRestrictions::IRatedContentRestrictionsFactory)->CreateWithMaxAgeRating(maxAgeRating, put_abi(ratedContentRestrictions)));
    return ratedContentRestrictions;
}

template <typename D>
struct produce<D, Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy> : produce_base<D, Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy>
{
    HRESULT __stdcall get_GeographicRegion(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GeographicRegion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxBrowsableAgeRating(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxBrowsableAgeRating());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreferredAgeRating(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreferredAgeRating());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::ContentRestrictions::IRatedContentDescription> : produce_base<D, Windows::Media::ContentRestrictions::IRatedContentDescription>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Id(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Id(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Image(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Image());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Image(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Image(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Category(abi_t<Windows::Media::ContentRestrictions::RatedContentCategory>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Category());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Category(abi_t<Windows::Media::ContentRestrictions::RatedContentCategory> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Category(*reinterpret_cast<Windows::Media::ContentRestrictions::RatedContentCategory const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ratings(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ratings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Ratings(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Ratings(*reinterpret_cast<Windows::Foundation::Collections::IVector<hstring> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::ContentRestrictions::IRatedContentDescriptionFactory> : produce_base<D, Windows::Media::ContentRestrictions::IRatedContentDescriptionFactory>
{
    HRESULT __stdcall Create(HSTRING id, HSTRING title, abi_t<Windows::Media::ContentRestrictions::RatedContentCategory> category, ::IUnknown** RatedContentDescription) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *RatedContentDescription = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<hstring const*>(&title), *reinterpret_cast<Windows::Media::ContentRestrictions::RatedContentCategory const*>(&category)));
            return S_OK;
        }
        catch (...)
        {
            *RatedContentDescription = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::ContentRestrictions::IRatedContentRestrictions> : produce_base<D, Windows::Media::ContentRestrictions::IRatedContentRestrictions>
{
    HRESULT __stdcall GetBrowsePolicyAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetBrowsePolicyAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetRestrictionLevelAsync(::IUnknown* RatedContentDescription, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetRestrictionLevelAsync(*reinterpret_cast<Windows::Media::ContentRestrictions::RatedContentDescription const*>(&RatedContentDescription)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestContentAccessAsync(::IUnknown* RatedContentDescription, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestContentAccessAsync(*reinterpret_cast<Windows::Media::ContentRestrictions::RatedContentDescription const*>(&RatedContentDescription)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RestrictionsChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RestrictionsChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RestrictionsChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RestrictionsChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::ContentRestrictions::IRatedContentRestrictionsFactory> : produce_base<D, Windows::Media::ContentRestrictions::IRatedContentRestrictionsFactory>
{
    HRESULT __stdcall CreateWithMaxAgeRating(uint32_t maxAgeRating, ::IUnknown** ratedContentRestrictions) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ratedContentRestrictions = detach_abi(this->shim().CreateWithMaxAgeRating(maxAgeRating));
            return S_OK;
        }
        catch (...)
        {
            *ratedContentRestrictions = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::ContentRestrictions {

inline RatedContentDescription::RatedContentDescription(param::hstring const& id, param::hstring const& title, Windows::Media::ContentRestrictions::RatedContentCategory const& category) :
    RatedContentDescription(get_activation_factory<RatedContentDescription, Windows::Media::ContentRestrictions::IRatedContentDescriptionFactory>().Create(id, title, category))
{}

inline RatedContentRestrictions::RatedContentRestrictions() :
    RatedContentRestrictions(activate_instance<RatedContentRestrictions>())
{}

inline RatedContentRestrictions::RatedContentRestrictions(uint32_t maxAgeRating) :
    RatedContentRestrictions(get_activation_factory<RatedContentRestrictions, Windows::Media::ContentRestrictions::IRatedContentRestrictionsFactory>().CreateWithMaxAgeRating(maxAgeRating))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy> {};

template<> struct hash<winrt::Windows::Media::ContentRestrictions::IRatedContentDescription> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::ContentRestrictions::IRatedContentDescription> {};

template<> struct hash<winrt::Windows::Media::ContentRestrictions::IRatedContentDescriptionFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::ContentRestrictions::IRatedContentDescriptionFactory> {};

template<> struct hash<winrt::Windows::Media::ContentRestrictions::IRatedContentRestrictions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::ContentRestrictions::IRatedContentRestrictions> {};

template<> struct hash<winrt::Windows::Media::ContentRestrictions::IRatedContentRestrictionsFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::ContentRestrictions::IRatedContentRestrictionsFactory> {};

template<> struct hash<winrt::Windows::Media::ContentRestrictions::ContentRestrictionsBrowsePolicy> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::ContentRestrictions::ContentRestrictionsBrowsePolicy> {};

template<> struct hash<winrt::Windows::Media::ContentRestrictions::RatedContentDescription> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::ContentRestrictions::RatedContentDescription> {};

template<> struct hash<winrt::Windows::Media::ContentRestrictions::RatedContentRestrictions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::ContentRestrictions::RatedContentRestrictions> {};

}

WINRT_WARNING_POP
