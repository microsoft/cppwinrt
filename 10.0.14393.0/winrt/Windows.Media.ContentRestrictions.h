// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Media.ContentRestrictions.3.h"
#include "Windows.Media.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy> : produce_base<D, Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy>
{
    HRESULT __stdcall get_GeographicRegion(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GeographicRegion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxBrowsableAgeRating(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxBrowsableAgeRating());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreferredAgeRating(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PreferredAgeRating());
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
    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Id(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Id(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Title(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Image(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Image());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Image(abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            this->shim().Image(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Category(Windows::Media::ContentRestrictions::RatedContentCategory * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Category());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Category(Windows::Media::ContentRestrictions::RatedContentCategory value) noexcept override
    {
        try
        {
            this->shim().Category(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ratings(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Ratings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Ratings(abi_arg_in<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            this->shim().Ratings(*reinterpret_cast<const Windows::Foundation::Collections::IVector<hstring> *>(&value));
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
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> id, abi_arg_in<hstring> title, Windows::Media::ContentRestrictions::RatedContentCategory category, abi_arg_out<Windows::Media::ContentRestrictions::IRatedContentDescription> RatedContentDescription) noexcept override
    {
        try
        {
            *RatedContentDescription = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&id), *reinterpret_cast<const hstring *>(&title), category));
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
    HRESULT __stdcall abi_GetBrowsePolicyAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::ContentRestrictions::ContentRestrictionsBrowsePolicy>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetBrowsePolicyAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetRestrictionLevelAsync(abi_arg_in<Windows::Media::ContentRestrictions::IRatedContentDescription> RatedContentDescription, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Media::ContentRestrictions::ContentAccessRestrictionLevel>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetRestrictionLevelAsync(*reinterpret_cast<const Windows::Media::ContentRestrictions::RatedContentDescription *>(&RatedContentDescription)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestContentAccessAsync(abi_arg_in<Windows::Media::ContentRestrictions::IRatedContentDescription> RatedContentDescription, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestContentAccessAsync(*reinterpret_cast<const Windows::Media::ContentRestrictions::RatedContentDescription *>(&RatedContentDescription)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RestrictionsChanged(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().RestrictionsChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RestrictionsChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().RestrictionsChanged(token);
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
    HRESULT __stdcall abi_CreateWithMaxAgeRating(uint32_t maxAgeRating, abi_arg_out<Windows::Media::ContentRestrictions::IRatedContentRestrictions> ratedContentRestrictions) noexcept override
    {
        try
        {
            *ratedContentRestrictions = detach(this->shim().CreateWithMaxAgeRating(maxAgeRating));
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

namespace Windows::Media::ContentRestrictions {

template <typename D> hstring impl_IRatedContentDescription<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IRatedContentDescription &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> void impl_IRatedContentDescription<D>::Id(hstring_ref value) const
{
    check_hresult(static_cast<const IRatedContentDescription &>(static_cast<const D &>(*this))->put_Id(get(value)));
}

template <typename D> hstring impl_IRatedContentDescription<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const IRatedContentDescription &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> void impl_IRatedContentDescription<D>::Title(hstring_ref value) const
{
    check_hresult(static_cast<const IRatedContentDescription &>(static_cast<const D &>(*this))->put_Title(get(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IRatedContentDescription<D>::Image() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value;
    check_hresult(static_cast<const IRatedContentDescription &>(static_cast<const D &>(*this))->get_Image(put(value)));
    return value;
}

template <typename D> void impl_IRatedContentDescription<D>::Image(const Windows::Storage::Streams::IRandomAccessStreamReference & value) const
{
    check_hresult(static_cast<const IRatedContentDescription &>(static_cast<const D &>(*this))->put_Image(get(value)));
}

template <typename D> Windows::Media::ContentRestrictions::RatedContentCategory impl_IRatedContentDescription<D>::Category() const
{
    Windows::Media::ContentRestrictions::RatedContentCategory value {};
    check_hresult(static_cast<const IRatedContentDescription &>(static_cast<const D &>(*this))->get_Category(&value));
    return value;
}

template <typename D> void impl_IRatedContentDescription<D>::Category(Windows::Media::ContentRestrictions::RatedContentCategory value) const
{
    check_hresult(static_cast<const IRatedContentDescription &>(static_cast<const D &>(*this))->put_Category(value));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IRatedContentDescription<D>::Ratings() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IRatedContentDescription &>(static_cast<const D &>(*this))->get_Ratings(put(value)));
    return value;
}

template <typename D> void impl_IRatedContentDescription<D>::Ratings(const Windows::Foundation::Collections::IVector<hstring> & value) const
{
    check_hresult(static_cast<const IRatedContentDescription &>(static_cast<const D &>(*this))->put_Ratings(get(value)));
}

template <typename D> Windows::Media::ContentRestrictions::RatedContentDescription impl_IRatedContentDescriptionFactory<D>::Create(hstring_ref id, hstring_ref title, Windows::Media::ContentRestrictions::RatedContentCategory category) const
{
    Windows::Media::ContentRestrictions::RatedContentDescription RatedContentDescription { nullptr };
    check_hresult(static_cast<const IRatedContentDescriptionFactory &>(static_cast<const D &>(*this))->abi_Create(get(id), get(title), category, put(RatedContentDescription)));
    return RatedContentDescription;
}

template <typename D> hstring impl_IContentRestrictionsBrowsePolicy<D>::GeographicRegion() const
{
    hstring value;
    check_hresult(static_cast<const IContentRestrictionsBrowsePolicy &>(static_cast<const D &>(*this))->get_GeographicRegion(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IContentRestrictionsBrowsePolicy<D>::MaxBrowsableAgeRating() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(static_cast<const IContentRestrictionsBrowsePolicy &>(static_cast<const D &>(*this))->get_MaxBrowsableAgeRating(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IContentRestrictionsBrowsePolicy<D>::PreferredAgeRating() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(static_cast<const IContentRestrictionsBrowsePolicy &>(static_cast<const D &>(*this))->get_PreferredAgeRating(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::ContentRestrictions::ContentRestrictionsBrowsePolicy> impl_IRatedContentRestrictions<D>::GetBrowsePolicyAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::ContentRestrictions::ContentRestrictionsBrowsePolicy> operation;
    check_hresult(static_cast<const IRatedContentRestrictions &>(static_cast<const D &>(*this))->abi_GetBrowsePolicyAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Media::ContentRestrictions::ContentAccessRestrictionLevel> impl_IRatedContentRestrictions<D>::GetRestrictionLevelAsync(const Windows::Media::ContentRestrictions::RatedContentDescription & RatedContentDescription) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Media::ContentRestrictions::ContentAccessRestrictionLevel> operation;
    check_hresult(static_cast<const IRatedContentRestrictions &>(static_cast<const D &>(*this))->abi_GetRestrictionLevelAsync(get(RatedContentDescription), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IRatedContentRestrictions<D>::RequestContentAccessAsync(const Windows::Media::ContentRestrictions::RatedContentDescription & RatedContentDescription) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const IRatedContentRestrictions &>(static_cast<const D &>(*this))->abi_RequestContentAccessAsync(get(RatedContentDescription), put(operation)));
    return operation;
}

template <typename D> event_token impl_IRatedContentRestrictions<D>::RestrictionsChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IRatedContentRestrictions &>(static_cast<const D &>(*this))->add_RestrictionsChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IRatedContentRestrictions> impl_IRatedContentRestrictions<D>::RestrictionsChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IRatedContentRestrictions>(this, &ABI::Windows::Media::ContentRestrictions::IRatedContentRestrictions::remove_RestrictionsChanged, RestrictionsChanged(handler));
}

template <typename D> void impl_IRatedContentRestrictions<D>::RestrictionsChanged(event_token token) const
{
    check_hresult(static_cast<const IRatedContentRestrictions &>(static_cast<const D &>(*this))->remove_RestrictionsChanged(token));
}

template <typename D> Windows::Media::ContentRestrictions::RatedContentRestrictions impl_IRatedContentRestrictionsFactory<D>::CreateWithMaxAgeRating(uint32_t maxAgeRating) const
{
    Windows::Media::ContentRestrictions::RatedContentRestrictions ratedContentRestrictions { nullptr };
    check_hresult(static_cast<const IRatedContentRestrictionsFactory &>(static_cast<const D &>(*this))->abi_CreateWithMaxAgeRating(maxAgeRating, put(ratedContentRestrictions)));
    return ratedContentRestrictions;
}

inline RatedContentDescription::RatedContentDescription(hstring_ref id, hstring_ref title, Windows::Media::ContentRestrictions::RatedContentCategory category) :
    RatedContentDescription(get_activation_factory<RatedContentDescription, IRatedContentDescriptionFactory>().Create(id, title, category))
{}

inline RatedContentRestrictions::RatedContentRestrictions() :
    RatedContentRestrictions(activate_instance<RatedContentRestrictions>())
{}

inline RatedContentRestrictions::RatedContentRestrictions(uint32_t maxAgeRating) :
    RatedContentRestrictions(get_activation_factory<RatedContentRestrictions, IRatedContentRestrictionsFactory>().CreateWithMaxAgeRating(maxAgeRating))
{}

}

}
