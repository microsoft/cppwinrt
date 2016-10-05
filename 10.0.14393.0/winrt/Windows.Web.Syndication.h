// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Data.Xml.Dom.3.h"
#include "internal/Windows.Security.Credentials.3.h"
#include "internal/Windows.Web.Syndication.3.h"
#include "Windows.Web.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationAttribute> : produce_base<D, Windows::Web::Syndication::ISyndicationAttribute>
{
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Name(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Name(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Namespace(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Namespace());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Namespace(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Namespace(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Value(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationAttributeFactory> : produce_base<D, Windows::Web::Syndication::ISyndicationAttributeFactory>
{
    HRESULT __stdcall abi_CreateSyndicationAttribute(abi_arg_in<hstring> attributeName, abi_arg_in<hstring> attributeNamespace, abi_arg_in<hstring> attributeValue, abi_arg_out<Windows::Web::Syndication::ISyndicationAttribute> syndicationAttribute) noexcept override
    {
        try
        {
            *syndicationAttribute = detach(this->shim().CreateSyndicationAttribute(*reinterpret_cast<const hstring *>(&attributeName), *reinterpret_cast<const hstring *>(&attributeNamespace), *reinterpret_cast<const hstring *>(&attributeValue)));
            return S_OK;
        }
        catch (...)
        {
            *syndicationAttribute = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationCategory> : produce_base<D, Windows::Web::Syndication::ISyndicationCategory>
{
    HRESULT __stdcall get_Label(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Label());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Label(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Label(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Scheme(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Scheme());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Scheme(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Scheme(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Term(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Term());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Term(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Term(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationCategoryFactory> : produce_base<D, Windows::Web::Syndication::ISyndicationCategoryFactory>
{
    HRESULT __stdcall abi_CreateSyndicationCategory(abi_arg_in<hstring> term, abi_arg_out<Windows::Web::Syndication::ISyndicationCategory> category) noexcept override
    {
        try
        {
            *category = detach(this->shim().CreateSyndicationCategory(*reinterpret_cast<const hstring *>(&term)));
            return S_OK;
        }
        catch (...)
        {
            *category = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateSyndicationCategoryEx(abi_arg_in<hstring> term, abi_arg_in<hstring> scheme, abi_arg_in<hstring> label, abi_arg_out<Windows::Web::Syndication::ISyndicationCategory> category) noexcept override
    {
        try
        {
            *category = detach(this->shim().CreateSyndicationCategoryEx(*reinterpret_cast<const hstring *>(&term), *reinterpret_cast<const hstring *>(&scheme), *reinterpret_cast<const hstring *>(&label)));
            return S_OK;
        }
        catch (...)
        {
            *category = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationClient> : produce_base<D, Windows::Web::Syndication::ISyndicationClient>
{
    HRESULT __stdcall get_ServerCredential(abi_arg_out<Windows::Security::Credentials::IPasswordCredential> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerCredential());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ServerCredential(abi_arg_in<Windows::Security::Credentials::IPasswordCredential> value) noexcept override
    {
        try
        {
            this->shim().ServerCredential(*reinterpret_cast<const Windows::Security::Credentials::PasswordCredential *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProxyCredential(abi_arg_out<Windows::Security::Credentials::IPasswordCredential> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProxyCredential());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProxyCredential(abi_arg_in<Windows::Security::Credentials::IPasswordCredential> value) noexcept override
    {
        try
        {
            this->shim().ProxyCredential(*reinterpret_cast<const Windows::Security::Credentials::PasswordCredential *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxResponseBufferSize(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxResponseBufferSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxResponseBufferSize(uint32_t value) noexcept override
    {
        try
        {
            this->shim().MaxResponseBufferSize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timeout(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Timeout());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Timeout(uint32_t value) noexcept override
    {
        try
        {
            this->shim().Timeout(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BypassCacheOnRetrieve(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BypassCacheOnRetrieve());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BypassCacheOnRetrieve(bool value) noexcept override
    {
        try
        {
            this->shim().BypassCacheOnRetrieve(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetRequestHeader(abi_arg_in<hstring> name, abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SetRequestHeader(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RetrieveFeedAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationFeed, Windows::Web::Syndication::RetrievalProgress>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RetrieveFeedAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationClientFactory> : produce_base<D, Windows::Web::Syndication::ISyndicationClientFactory>
{
    HRESULT __stdcall abi_CreateSyndicationClient(abi_arg_in<Windows::Security::Credentials::IPasswordCredential> serverCredential, abi_arg_out<Windows::Web::Syndication::ISyndicationClient> syndicationClient) noexcept override
    {
        try
        {
            *syndicationClient = detach(this->shim().CreateSyndicationClient(*reinterpret_cast<const Windows::Security::Credentials::PasswordCredential *>(&serverCredential)));
            return S_OK;
        }
        catch (...)
        {
            *syndicationClient = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationContent> : produce_base<D, Windows::Web::Syndication::ISyndicationContent>
{
    HRESULT __stdcall get_SourceUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourceUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SourceUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().SourceUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationContentFactory> : produce_base<D, Windows::Web::Syndication::ISyndicationContentFactory>
{
    HRESULT __stdcall abi_CreateSyndicationContent(abi_arg_in<hstring> text, Windows::Web::Syndication::SyndicationTextType type, abi_arg_out<Windows::Web::Syndication::ISyndicationContent> content) noexcept override
    {
        try
        {
            *content = detach(this->shim().CreateSyndicationContent(*reinterpret_cast<const hstring *>(&text), type));
            return S_OK;
        }
        catch (...)
        {
            *content = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateSyndicationContentWithSourceUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> sourceUri, abi_arg_out<Windows::Web::Syndication::ISyndicationContent> content) noexcept override
    {
        try
        {
            *content = detach(this->shim().CreateSyndicationContentWithSourceUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&sourceUri)));
            return S_OK;
        }
        catch (...)
        {
            *content = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationErrorStatics> : produce_base<D, Windows::Web::Syndication::ISyndicationErrorStatics>
{
    HRESULT __stdcall abi_GetStatus(int32_t hresult, Windows::Web::Syndication::SyndicationErrorStatus * status) noexcept override
    {
        try
        {
            *status = detach(this->shim().GetStatus(hresult));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationFeed> : produce_base<D, Windows::Web::Syndication::ISyndicationFeed>
{
    HRESULT __stdcall get_Authors(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Authors());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Categories(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationCategory>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Categories());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Contributors(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Contributors());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Generator(abi_arg_out<Windows::Web::Syndication::ISyndicationGenerator> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Generator());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Generator(abi_arg_in<Windows::Web::Syndication::ISyndicationGenerator> value) noexcept override
    {
        try
        {
            this->shim().Generator(*reinterpret_cast<const Windows::Web::Syndication::SyndicationGenerator *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IconUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IconUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IconUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().IconUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_Items(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationItem>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Items());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastUpdatedTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastUpdatedTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastUpdatedTime(abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            this->shim().LastUpdatedTime(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Links(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationLink>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Links());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImageUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ImageUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ImageUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().ImageUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rights(abi_arg_out<Windows::Web::Syndication::ISyndicationText> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Rights());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Rights(abi_arg_in<Windows::Web::Syndication::ISyndicationText> value) noexcept override
    {
        try
        {
            this->shim().Rights(*reinterpret_cast<const Windows::Web::Syndication::ISyndicationText *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subtitle(abi_arg_out<Windows::Web::Syndication::ISyndicationText> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Subtitle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Subtitle(abi_arg_in<Windows::Web::Syndication::ISyndicationText> value) noexcept override
    {
        try
        {
            this->shim().Subtitle(*reinterpret_cast<const Windows::Web::Syndication::ISyndicationText *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(abi_arg_out<Windows::Web::Syndication::ISyndicationText> value) noexcept override
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

    HRESULT __stdcall put_Title(abi_arg_in<Windows::Web::Syndication::ISyndicationText> value) noexcept override
    {
        try
        {
            this->shim().Title(*reinterpret_cast<const Windows::Web::Syndication::ISyndicationText *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FirstUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NextUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NextUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreviousUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PreviousUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceFormat(Windows::Web::Syndication::SyndicationFormat * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourceFormat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Load(abi_arg_in<hstring> feed) noexcept override
    {
        try
        {
            this->shim().Load(*reinterpret_cast<const hstring *>(&feed));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadFromXml(abi_arg_in<Windows::Data::Xml::Dom::IXmlDocument> feedDocument) noexcept override
    {
        try
        {
            this->shim().LoadFromXml(*reinterpret_cast<const Windows::Data::Xml::Dom::XmlDocument *>(&feedDocument));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationFeedFactory> : produce_base<D, Windows::Web::Syndication::ISyndicationFeedFactory>
{
    HRESULT __stdcall abi_CreateSyndicationFeed(abi_arg_in<hstring> title, abi_arg_in<hstring> subtitle, abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Web::Syndication::ISyndicationFeed> feed) noexcept override
    {
        try
        {
            *feed = detach(this->shim().CreateSyndicationFeed(*reinterpret_cast<const hstring *>(&title), *reinterpret_cast<const hstring *>(&subtitle), *reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *feed = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationGenerator> : produce_base<D, Windows::Web::Syndication::ISyndicationGenerator>
{
    HRESULT __stdcall get_Text(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Text(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Text(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Uri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().Uri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Version(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Version());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Version(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Version(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationGeneratorFactory> : produce_base<D, Windows::Web::Syndication::ISyndicationGeneratorFactory>
{
    HRESULT __stdcall abi_CreateSyndicationGenerator(abi_arg_in<hstring> text, abi_arg_out<Windows::Web::Syndication::ISyndicationGenerator> generator) noexcept override
    {
        try
        {
            *generator = detach(this->shim().CreateSyndicationGenerator(*reinterpret_cast<const hstring *>(&text)));
            return S_OK;
        }
        catch (...)
        {
            *generator = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationItem> : produce_base<D, Windows::Web::Syndication::ISyndicationItem>
{
    HRESULT __stdcall get_Authors(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Authors());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Categories(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationCategory>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Categories());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Contributors(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Contributors());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Content(abi_arg_out<Windows::Web::Syndication::ISyndicationContent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Content(abi_arg_in<Windows::Web::Syndication::ISyndicationContent> value) noexcept override
    {
        try
        {
            this->shim().Content(*reinterpret_cast<const Windows::Web::Syndication::SyndicationContent *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_LastUpdatedTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastUpdatedTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastUpdatedTime(abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            this->shim().LastUpdatedTime(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Links(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationLink>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Links());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PublishedDate(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PublishedDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PublishedDate(abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            this->shim().PublishedDate(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rights(abi_arg_out<Windows::Web::Syndication::ISyndicationText> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Rights());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Rights(abi_arg_in<Windows::Web::Syndication::ISyndicationText> value) noexcept override
    {
        try
        {
            this->shim().Rights(*reinterpret_cast<const Windows::Web::Syndication::ISyndicationText *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(abi_arg_out<Windows::Web::Syndication::ISyndicationFeed> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(abi_arg_in<Windows::Web::Syndication::ISyndicationFeed> value) noexcept override
    {
        try
        {
            this->shim().Source(*reinterpret_cast<const Windows::Web::Syndication::SyndicationFeed *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Summary(abi_arg_out<Windows::Web::Syndication::ISyndicationText> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Summary());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Summary(abi_arg_in<Windows::Web::Syndication::ISyndicationText> value) noexcept override
    {
        try
        {
            this->shim().Summary(*reinterpret_cast<const Windows::Web::Syndication::ISyndicationText *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(abi_arg_out<Windows::Web::Syndication::ISyndicationText> value) noexcept override
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

    HRESULT __stdcall put_Title(abi_arg_in<Windows::Web::Syndication::ISyndicationText> value) noexcept override
    {
        try
        {
            this->shim().Title(*reinterpret_cast<const Windows::Web::Syndication::ISyndicationText *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CommentsUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CommentsUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CommentsUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().CommentsUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EditUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EditUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EditMediaUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EditMediaUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ETag(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ETag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Load(abi_arg_in<hstring> item) noexcept override
    {
        try
        {
            this->shim().Load(*reinterpret_cast<const hstring *>(&item));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadFromXml(abi_arg_in<Windows::Data::Xml::Dom::IXmlDocument> itemDocument) noexcept override
    {
        try
        {
            this->shim().LoadFromXml(*reinterpret_cast<const Windows::Data::Xml::Dom::XmlDocument *>(&itemDocument));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationItemFactory> : produce_base<D, Windows::Web::Syndication::ISyndicationItemFactory>
{
    HRESULT __stdcall abi_CreateSyndicationItem(abi_arg_in<hstring> title, abi_arg_in<Windows::Web::Syndication::ISyndicationContent> content, abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Web::Syndication::ISyndicationItem> item) noexcept override
    {
        try
        {
            *item = detach(this->shim().CreateSyndicationItem(*reinterpret_cast<const hstring *>(&title), *reinterpret_cast<const Windows::Web::Syndication::SyndicationContent *>(&content), *reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *item = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationLink> : produce_base<D, Windows::Web::Syndication::ISyndicationLink>
{
    HRESULT __stdcall get_Length(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Length());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Length(uint32_t value) noexcept override
    {
        try
        {
            this->shim().Length(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaType(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediaType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MediaType(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().MediaType(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Relationship(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Relationship());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Relationship(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Relationship(*reinterpret_cast<const hstring *>(&value));
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

    HRESULT __stdcall get_Uri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Uri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().Uri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceLanguage(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResourceLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ResourceLanguage(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ResourceLanguage(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationLinkFactory> : produce_base<D, Windows::Web::Syndication::ISyndicationLinkFactory>
{
    HRESULT __stdcall abi_CreateSyndicationLink(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Web::Syndication::ISyndicationLink> link) noexcept override
    {
        try
        {
            *link = detach(this->shim().CreateSyndicationLink(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *link = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateSyndicationLinkEx(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<hstring> relationship, abi_arg_in<hstring> title, abi_arg_in<hstring> mediaType, uint32_t length, abi_arg_out<Windows::Web::Syndication::ISyndicationLink> link) noexcept override
    {
        try
        {
            *link = detach(this->shim().CreateSyndicationLinkEx(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const hstring *>(&relationship), *reinterpret_cast<const hstring *>(&title), *reinterpret_cast<const hstring *>(&mediaType), length));
            return S_OK;
        }
        catch (...)
        {
            *link = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationNode> : produce_base<D, Windows::Web::Syndication::ISyndicationNode>
{
    HRESULT __stdcall get_NodeName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NodeName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NodeName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().NodeName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NodeNamespace(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NodeNamespace());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NodeNamespace(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().NodeNamespace(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NodeValue(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NodeValue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NodeValue(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().NodeValue(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Language(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Language(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Language(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BaseUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BaseUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BaseUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().BaseUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AttributeExtensions(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationAttribute>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AttributeExtensions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ElementExtensions(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Web::Syndication::ISyndicationNode>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ElementExtensions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetXmlDocument(Windows::Web::Syndication::SyndicationFormat format, abi_arg_out<Windows::Data::Xml::Dom::IXmlDocument> xmlDocument) noexcept override
    {
        try
        {
            *xmlDocument = detach(this->shim().GetXmlDocument(format));
            return S_OK;
        }
        catch (...)
        {
            *xmlDocument = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationNodeFactory> : produce_base<D, Windows::Web::Syndication::ISyndicationNodeFactory>
{
    HRESULT __stdcall abi_CreateSyndicationNode(abi_arg_in<hstring> nodeName, abi_arg_in<hstring> nodeNamespace, abi_arg_in<hstring> nodeValue, abi_arg_out<Windows::Web::Syndication::ISyndicationNode> node) noexcept override
    {
        try
        {
            *node = detach(this->shim().CreateSyndicationNode(*reinterpret_cast<const hstring *>(&nodeName), *reinterpret_cast<const hstring *>(&nodeNamespace), *reinterpret_cast<const hstring *>(&nodeValue)));
            return S_OK;
        }
        catch (...)
        {
            *node = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationPerson> : produce_base<D, Windows::Web::Syndication::ISyndicationPerson>
{
    HRESULT __stdcall get_Email(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Email());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Email(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Email(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Name(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Name(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Uri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().Uri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationPersonFactory> : produce_base<D, Windows::Web::Syndication::ISyndicationPersonFactory>
{
    HRESULT __stdcall abi_CreateSyndicationPerson(abi_arg_in<hstring> name, abi_arg_out<Windows::Web::Syndication::ISyndicationPerson> person) noexcept override
    {
        try
        {
            *person = detach(this->shim().CreateSyndicationPerson(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *person = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateSyndicationPersonEx(abi_arg_in<hstring> name, abi_arg_in<hstring> email, abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Web::Syndication::ISyndicationPerson> person) noexcept override
    {
        try
        {
            *person = detach(this->shim().CreateSyndicationPersonEx(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&email), *reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *person = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationText> : produce_base<D, Windows::Web::Syndication::ISyndicationText>
{
    HRESULT __stdcall get_Text(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Text(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Text(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Type(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Type(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Xml(abi_arg_out<Windows::Data::Xml::Dom::IXmlDocument> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Xml());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Xml(abi_arg_in<Windows::Data::Xml::Dom::IXmlDocument> value) noexcept override
    {
        try
        {
            this->shim().Xml(*reinterpret_cast<const Windows::Data::Xml::Dom::XmlDocument *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationTextFactory> : produce_base<D, Windows::Web::Syndication::ISyndicationTextFactory>
{
    HRESULT __stdcall abi_CreateSyndicationText(abi_arg_in<hstring> text, abi_arg_out<Windows::Web::Syndication::ISyndicationText> syndicationText) noexcept override
    {
        try
        {
            *syndicationText = detach(this->shim().CreateSyndicationText(*reinterpret_cast<const hstring *>(&text)));
            return S_OK;
        }
        catch (...)
        {
            *syndicationText = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateSyndicationTextEx(abi_arg_in<hstring> text, Windows::Web::Syndication::SyndicationTextType type, abi_arg_out<Windows::Web::Syndication::ISyndicationText> syndicationText) noexcept override
    {
        try
        {
            *syndicationText = detach(this->shim().CreateSyndicationTextEx(*reinterpret_cast<const hstring *>(&text), type));
            return S_OK;
        }
        catch (...)
        {
            *syndicationText = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Web::Syndication {

template <typename D> hstring impl_ISyndicationAttribute<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const ISyndicationAttribute &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationAttribute<D>::Name(hstring_ref value) const
{
    check_hresult(static_cast<const ISyndicationAttribute &>(static_cast<const D &>(*this))->put_Name(get(value)));
}

template <typename D> hstring impl_ISyndicationAttribute<D>::Namespace() const
{
    hstring value;
    check_hresult(static_cast<const ISyndicationAttribute &>(static_cast<const D &>(*this))->get_Namespace(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationAttribute<D>::Namespace(hstring_ref value) const
{
    check_hresult(static_cast<const ISyndicationAttribute &>(static_cast<const D &>(*this))->put_Namespace(get(value)));
}

template <typename D> hstring impl_ISyndicationAttribute<D>::Value() const
{
    hstring value;
    check_hresult(static_cast<const ISyndicationAttribute &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationAttribute<D>::Value(hstring_ref value) const
{
    check_hresult(static_cast<const ISyndicationAttribute &>(static_cast<const D &>(*this))->put_Value(get(value)));
}

template <typename D> Windows::Web::Syndication::SyndicationAttribute impl_ISyndicationAttributeFactory<D>::CreateSyndicationAttribute(hstring_ref attributeName, hstring_ref attributeNamespace, hstring_ref attributeValue) const
{
    Windows::Web::Syndication::SyndicationAttribute syndicationAttribute { nullptr };
    check_hresult(static_cast<const ISyndicationAttributeFactory &>(static_cast<const D &>(*this))->abi_CreateSyndicationAttribute(get(attributeName), get(attributeNamespace), get(attributeValue), put(syndicationAttribute)));
    return syndicationAttribute;
}

template <typename D> hstring impl_ISyndicationNode<D>::NodeName() const
{
    hstring value;
    check_hresult(static_cast<const ISyndicationNode &>(static_cast<const D &>(*this))->get_NodeName(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationNode<D>::NodeName(hstring_ref value) const
{
    check_hresult(static_cast<const ISyndicationNode &>(static_cast<const D &>(*this))->put_NodeName(get(value)));
}

template <typename D> hstring impl_ISyndicationNode<D>::NodeNamespace() const
{
    hstring value;
    check_hresult(static_cast<const ISyndicationNode &>(static_cast<const D &>(*this))->get_NodeNamespace(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationNode<D>::NodeNamespace(hstring_ref value) const
{
    check_hresult(static_cast<const ISyndicationNode &>(static_cast<const D &>(*this))->put_NodeNamespace(get(value)));
}

template <typename D> hstring impl_ISyndicationNode<D>::NodeValue() const
{
    hstring value;
    check_hresult(static_cast<const ISyndicationNode &>(static_cast<const D &>(*this))->get_NodeValue(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationNode<D>::NodeValue(hstring_ref value) const
{
    check_hresult(static_cast<const ISyndicationNode &>(static_cast<const D &>(*this))->put_NodeValue(get(value)));
}

template <typename D> hstring impl_ISyndicationNode<D>::Language() const
{
    hstring value;
    check_hresult(static_cast<const ISyndicationNode &>(static_cast<const D &>(*this))->get_Language(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationNode<D>::Language(hstring_ref value) const
{
    check_hresult(static_cast<const ISyndicationNode &>(static_cast<const D &>(*this))->put_Language(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISyndicationNode<D>::BaseUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISyndicationNode &>(static_cast<const D &>(*this))->get_BaseUri(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationNode<D>::BaseUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const ISyndicationNode &>(static_cast<const D &>(*this))->put_BaseUri(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationAttribute> impl_ISyndicationNode<D>::AttributeExtensions() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationAttribute> value;
    check_hresult(static_cast<const ISyndicationNode &>(static_cast<const D &>(*this))->get_AttributeExtensions(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Syndication::ISyndicationNode> impl_ISyndicationNode<D>::ElementExtensions() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::ISyndicationNode> value;
    check_hresult(static_cast<const ISyndicationNode &>(static_cast<const D &>(*this))->get_ElementExtensions(put(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument impl_ISyndicationNode<D>::GetXmlDocument(Windows::Web::Syndication::SyndicationFormat format) const
{
    Windows::Data::Xml::Dom::XmlDocument xmlDocument { nullptr };
    check_hresult(static_cast<const ISyndicationNode &>(static_cast<const D &>(*this))->abi_GetXmlDocument(format, put(xmlDocument)));
    return xmlDocument;
}

template <typename D> Windows::Web::Syndication::SyndicationNode impl_ISyndicationNodeFactory<D>::CreateSyndicationNode(hstring_ref nodeName, hstring_ref nodeNamespace, hstring_ref nodeValue) const
{
    Windows::Web::Syndication::SyndicationNode node { nullptr };
    check_hresult(static_cast<const ISyndicationNodeFactory &>(static_cast<const D &>(*this))->abi_CreateSyndicationNode(get(nodeName), get(nodeNamespace), get(nodeValue), put(node)));
    return node;
}

template <typename D> hstring impl_ISyndicationGenerator<D>::Text() const
{
    hstring value;
    check_hresult(static_cast<const ISyndicationGenerator &>(static_cast<const D &>(*this))->get_Text(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationGenerator<D>::Text(hstring_ref value) const
{
    check_hresult(static_cast<const ISyndicationGenerator &>(static_cast<const D &>(*this))->put_Text(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISyndicationGenerator<D>::Uri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISyndicationGenerator &>(static_cast<const D &>(*this))->get_Uri(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationGenerator<D>::Uri(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const ISyndicationGenerator &>(static_cast<const D &>(*this))->put_Uri(get(value)));
}

template <typename D> hstring impl_ISyndicationGenerator<D>::Version() const
{
    hstring value;
    check_hresult(static_cast<const ISyndicationGenerator &>(static_cast<const D &>(*this))->get_Version(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationGenerator<D>::Version(hstring_ref value) const
{
    check_hresult(static_cast<const ISyndicationGenerator &>(static_cast<const D &>(*this))->put_Version(get(value)));
}

template <typename D> Windows::Web::Syndication::SyndicationGenerator impl_ISyndicationGeneratorFactory<D>::CreateSyndicationGenerator(hstring_ref text) const
{
    Windows::Web::Syndication::SyndicationGenerator generator { nullptr };
    check_hresult(static_cast<const ISyndicationGeneratorFactory &>(static_cast<const D &>(*this))->abi_CreateSyndicationGenerator(get(text), put(generator)));
    return generator;
}

template <typename D> hstring impl_ISyndicationText<D>::Text() const
{
    hstring value;
    check_hresult(static_cast<const ISyndicationText &>(static_cast<const D &>(*this))->get_Text(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationText<D>::Text(hstring_ref value) const
{
    check_hresult(static_cast<const ISyndicationText &>(static_cast<const D &>(*this))->put_Text(get(value)));
}

template <typename D> hstring impl_ISyndicationText<D>::Type() const
{
    hstring value;
    check_hresult(static_cast<const ISyndicationText &>(static_cast<const D &>(*this))->get_Type(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationText<D>::Type(hstring_ref value) const
{
    check_hresult(static_cast<const ISyndicationText &>(static_cast<const D &>(*this))->put_Type(get(value)));
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument impl_ISyndicationText<D>::Xml() const
{
    Windows::Data::Xml::Dom::XmlDocument value { nullptr };
    check_hresult(static_cast<const ISyndicationText &>(static_cast<const D &>(*this))->get_Xml(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationText<D>::Xml(const Windows::Data::Xml::Dom::XmlDocument & value) const
{
    check_hresult(static_cast<const ISyndicationText &>(static_cast<const D &>(*this))->put_Xml(get(value)));
}

template <typename D> Windows::Web::Syndication::SyndicationText impl_ISyndicationTextFactory<D>::CreateSyndicationText(hstring_ref text) const
{
    Windows::Web::Syndication::SyndicationText syndicationText { nullptr };
    check_hresult(static_cast<const ISyndicationTextFactory &>(static_cast<const D &>(*this))->abi_CreateSyndicationText(get(text), put(syndicationText)));
    return syndicationText;
}

template <typename D> Windows::Web::Syndication::SyndicationText impl_ISyndicationTextFactory<D>::CreateSyndicationTextEx(hstring_ref text, Windows::Web::Syndication::SyndicationTextType type) const
{
    Windows::Web::Syndication::SyndicationText syndicationText { nullptr };
    check_hresult(static_cast<const ISyndicationTextFactory &>(static_cast<const D &>(*this))->abi_CreateSyndicationTextEx(get(text), type, put(syndicationText)));
    return syndicationText;
}

template <typename D> Windows::Foundation::Uri impl_ISyndicationContent<D>::SourceUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISyndicationContent &>(static_cast<const D &>(*this))->get_SourceUri(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationContent<D>::SourceUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const ISyndicationContent &>(static_cast<const D &>(*this))->put_SourceUri(get(value)));
}

template <typename D> Windows::Web::Syndication::SyndicationContent impl_ISyndicationContentFactory<D>::CreateSyndicationContent(hstring_ref text, Windows::Web::Syndication::SyndicationTextType type) const
{
    Windows::Web::Syndication::SyndicationContent content { nullptr };
    check_hresult(static_cast<const ISyndicationContentFactory &>(static_cast<const D &>(*this))->abi_CreateSyndicationContent(get(text), type, put(content)));
    return content;
}

template <typename D> Windows::Web::Syndication::SyndicationContent impl_ISyndicationContentFactory<D>::CreateSyndicationContentWithSourceUri(const Windows::Foundation::Uri & sourceUri) const
{
    Windows::Web::Syndication::SyndicationContent content { nullptr };
    check_hresult(static_cast<const ISyndicationContentFactory &>(static_cast<const D &>(*this))->abi_CreateSyndicationContentWithSourceUri(get(sourceUri), put(content)));
    return content;
}

template <typename D> uint32_t impl_ISyndicationLink<D>::Length() const
{
    uint32_t value {};
    check_hresult(static_cast<const ISyndicationLink &>(static_cast<const D &>(*this))->get_Length(&value));
    return value;
}

template <typename D> void impl_ISyndicationLink<D>::Length(uint32_t value) const
{
    check_hresult(static_cast<const ISyndicationLink &>(static_cast<const D &>(*this))->put_Length(value));
}

template <typename D> hstring impl_ISyndicationLink<D>::MediaType() const
{
    hstring value;
    check_hresult(static_cast<const ISyndicationLink &>(static_cast<const D &>(*this))->get_MediaType(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationLink<D>::MediaType(hstring_ref value) const
{
    check_hresult(static_cast<const ISyndicationLink &>(static_cast<const D &>(*this))->put_MediaType(get(value)));
}

template <typename D> hstring impl_ISyndicationLink<D>::Relationship() const
{
    hstring value;
    check_hresult(static_cast<const ISyndicationLink &>(static_cast<const D &>(*this))->get_Relationship(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationLink<D>::Relationship(hstring_ref value) const
{
    check_hresult(static_cast<const ISyndicationLink &>(static_cast<const D &>(*this))->put_Relationship(get(value)));
}

template <typename D> hstring impl_ISyndicationLink<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const ISyndicationLink &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationLink<D>::Title(hstring_ref value) const
{
    check_hresult(static_cast<const ISyndicationLink &>(static_cast<const D &>(*this))->put_Title(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISyndicationLink<D>::Uri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISyndicationLink &>(static_cast<const D &>(*this))->get_Uri(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationLink<D>::Uri(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const ISyndicationLink &>(static_cast<const D &>(*this))->put_Uri(get(value)));
}

template <typename D> hstring impl_ISyndicationLink<D>::ResourceLanguage() const
{
    hstring value;
    check_hresult(static_cast<const ISyndicationLink &>(static_cast<const D &>(*this))->get_ResourceLanguage(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationLink<D>::ResourceLanguage(hstring_ref value) const
{
    check_hresult(static_cast<const ISyndicationLink &>(static_cast<const D &>(*this))->put_ResourceLanguage(get(value)));
}

template <typename D> Windows::Web::Syndication::SyndicationLink impl_ISyndicationLinkFactory<D>::CreateSyndicationLink(const Windows::Foundation::Uri & uri) const
{
    Windows::Web::Syndication::SyndicationLink link { nullptr };
    check_hresult(static_cast<const ISyndicationLinkFactory &>(static_cast<const D &>(*this))->abi_CreateSyndicationLink(get(uri), put(link)));
    return link;
}

template <typename D> Windows::Web::Syndication::SyndicationLink impl_ISyndicationLinkFactory<D>::CreateSyndicationLinkEx(const Windows::Foundation::Uri & uri, hstring_ref relationship, hstring_ref title, hstring_ref mediaType, uint32_t length) const
{
    Windows::Web::Syndication::SyndicationLink link { nullptr };
    check_hresult(static_cast<const ISyndicationLinkFactory &>(static_cast<const D &>(*this))->abi_CreateSyndicationLinkEx(get(uri), get(relationship), get(title), get(mediaType), length, put(link)));
    return link;
}

template <typename D> hstring impl_ISyndicationPerson<D>::Email() const
{
    hstring value;
    check_hresult(static_cast<const ISyndicationPerson &>(static_cast<const D &>(*this))->get_Email(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationPerson<D>::Email(hstring_ref value) const
{
    check_hresult(static_cast<const ISyndicationPerson &>(static_cast<const D &>(*this))->put_Email(get(value)));
}

template <typename D> hstring impl_ISyndicationPerson<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const ISyndicationPerson &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationPerson<D>::Name(hstring_ref value) const
{
    check_hresult(static_cast<const ISyndicationPerson &>(static_cast<const D &>(*this))->put_Name(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISyndicationPerson<D>::Uri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISyndicationPerson &>(static_cast<const D &>(*this))->get_Uri(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationPerson<D>::Uri(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const ISyndicationPerson &>(static_cast<const D &>(*this))->put_Uri(get(value)));
}

template <typename D> Windows::Web::Syndication::SyndicationPerson impl_ISyndicationPersonFactory<D>::CreateSyndicationPerson(hstring_ref name) const
{
    Windows::Web::Syndication::SyndicationPerson person { nullptr };
    check_hresult(static_cast<const ISyndicationPersonFactory &>(static_cast<const D &>(*this))->abi_CreateSyndicationPerson(get(name), put(person)));
    return person;
}

template <typename D> Windows::Web::Syndication::SyndicationPerson impl_ISyndicationPersonFactory<D>::CreateSyndicationPersonEx(hstring_ref name, hstring_ref email, const Windows::Foundation::Uri & uri) const
{
    Windows::Web::Syndication::SyndicationPerson person { nullptr };
    check_hresult(static_cast<const ISyndicationPersonFactory &>(static_cast<const D &>(*this))->abi_CreateSyndicationPersonEx(get(name), get(email), get(uri), put(person)));
    return person;
}

template <typename D> hstring impl_ISyndicationCategory<D>::Label() const
{
    hstring value;
    check_hresult(static_cast<const ISyndicationCategory &>(static_cast<const D &>(*this))->get_Label(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationCategory<D>::Label(hstring_ref value) const
{
    check_hresult(static_cast<const ISyndicationCategory &>(static_cast<const D &>(*this))->put_Label(get(value)));
}

template <typename D> hstring impl_ISyndicationCategory<D>::Scheme() const
{
    hstring value;
    check_hresult(static_cast<const ISyndicationCategory &>(static_cast<const D &>(*this))->get_Scheme(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationCategory<D>::Scheme(hstring_ref value) const
{
    check_hresult(static_cast<const ISyndicationCategory &>(static_cast<const D &>(*this))->put_Scheme(get(value)));
}

template <typename D> hstring impl_ISyndicationCategory<D>::Term() const
{
    hstring value;
    check_hresult(static_cast<const ISyndicationCategory &>(static_cast<const D &>(*this))->get_Term(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationCategory<D>::Term(hstring_ref value) const
{
    check_hresult(static_cast<const ISyndicationCategory &>(static_cast<const D &>(*this))->put_Term(get(value)));
}

template <typename D> Windows::Web::Syndication::SyndicationCategory impl_ISyndicationCategoryFactory<D>::CreateSyndicationCategory(hstring_ref term) const
{
    Windows::Web::Syndication::SyndicationCategory category { nullptr };
    check_hresult(static_cast<const ISyndicationCategoryFactory &>(static_cast<const D &>(*this))->abi_CreateSyndicationCategory(get(term), put(category)));
    return category;
}

template <typename D> Windows::Web::Syndication::SyndicationCategory impl_ISyndicationCategoryFactory<D>::CreateSyndicationCategoryEx(hstring_ref term, hstring_ref scheme, hstring_ref label) const
{
    Windows::Web::Syndication::SyndicationCategory category { nullptr };
    check_hresult(static_cast<const ISyndicationCategoryFactory &>(static_cast<const D &>(*this))->abi_CreateSyndicationCategoryEx(get(term), get(scheme), get(label), put(category)));
    return category;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> impl_ISyndicationItem<D>::Authors() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> value;
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->get_Authors(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationCategory> impl_ISyndicationItem<D>::Categories() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationCategory> value;
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->get_Categories(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> impl_ISyndicationItem<D>::Contributors() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> value;
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->get_Contributors(put(value)));
    return value;
}

template <typename D> Windows::Web::Syndication::SyndicationContent impl_ISyndicationItem<D>::Content() const
{
    Windows::Web::Syndication::SyndicationContent value { nullptr };
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->get_Content(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationItem<D>::Content(const Windows::Web::Syndication::SyndicationContent & value) const
{
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->put_Content(get(value)));
}

template <typename D> hstring impl_ISyndicationItem<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationItem<D>::Id(hstring_ref value) const
{
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->put_Id(get(value)));
}

template <typename D> Windows::Foundation::DateTime impl_ISyndicationItem<D>::LastUpdatedTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->get_LastUpdatedTime(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationItem<D>::LastUpdatedTime(const Windows::Foundation::DateTime & value) const
{
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->put_LastUpdatedTime(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationLink> impl_ISyndicationItem<D>::Links() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationLink> value;
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->get_Links(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_ISyndicationItem<D>::PublishedDate() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->get_PublishedDate(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationItem<D>::PublishedDate(const Windows::Foundation::DateTime & value) const
{
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->put_PublishedDate(get(value)));
}

template <typename D> Windows::Web::Syndication::ISyndicationText impl_ISyndicationItem<D>::Rights() const
{
    Windows::Web::Syndication::ISyndicationText value;
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->get_Rights(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationItem<D>::Rights(const Windows::Web::Syndication::ISyndicationText & value) const
{
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->put_Rights(get(value)));
}

template <typename D> Windows::Web::Syndication::SyndicationFeed impl_ISyndicationItem<D>::Source() const
{
    Windows::Web::Syndication::SyndicationFeed value { nullptr };
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->get_Source(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationItem<D>::Source(const Windows::Web::Syndication::SyndicationFeed & value) const
{
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->put_Source(get(value)));
}

template <typename D> Windows::Web::Syndication::ISyndicationText impl_ISyndicationItem<D>::Summary() const
{
    Windows::Web::Syndication::ISyndicationText value;
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->get_Summary(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationItem<D>::Summary(const Windows::Web::Syndication::ISyndicationText & value) const
{
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->put_Summary(get(value)));
}

template <typename D> Windows::Web::Syndication::ISyndicationText impl_ISyndicationItem<D>::Title() const
{
    Windows::Web::Syndication::ISyndicationText value;
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationItem<D>::Title(const Windows::Web::Syndication::ISyndicationText & value) const
{
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->put_Title(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISyndicationItem<D>::CommentsUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->get_CommentsUri(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationItem<D>::CommentsUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->put_CommentsUri(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISyndicationItem<D>::EditUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->get_EditUri(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_ISyndicationItem<D>::EditMediaUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->get_EditMediaUri(put(value)));
    return value;
}

template <typename D> hstring impl_ISyndicationItem<D>::ETag() const
{
    hstring value;
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->get_ETag(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_ISyndicationItem<D>::ItemUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->get_ItemUri(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationItem<D>::Load(hstring_ref item) const
{
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->abi_Load(get(item)));
}

template <typename D> void impl_ISyndicationItem<D>::LoadFromXml(const Windows::Data::Xml::Dom::XmlDocument & itemDocument) const
{
    check_hresult(static_cast<const ISyndicationItem &>(static_cast<const D &>(*this))->abi_LoadFromXml(get(itemDocument)));
}

template <typename D> Windows::Web::Syndication::SyndicationItem impl_ISyndicationItemFactory<D>::CreateSyndicationItem(hstring_ref title, const Windows::Web::Syndication::SyndicationContent & content, const Windows::Foundation::Uri & uri) const
{
    Windows::Web::Syndication::SyndicationItem item { nullptr };
    check_hresult(static_cast<const ISyndicationItemFactory &>(static_cast<const D &>(*this))->abi_CreateSyndicationItem(get(title), get(content), get(uri), put(item)));
    return item;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> impl_ISyndicationFeed<D>::Authors() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> value;
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->get_Authors(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationCategory> impl_ISyndicationFeed<D>::Categories() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationCategory> value;
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->get_Categories(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> impl_ISyndicationFeed<D>::Contributors() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> value;
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->get_Contributors(put(value)));
    return value;
}

template <typename D> Windows::Web::Syndication::SyndicationGenerator impl_ISyndicationFeed<D>::Generator() const
{
    Windows::Web::Syndication::SyndicationGenerator value { nullptr };
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->get_Generator(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationFeed<D>::Generator(const Windows::Web::Syndication::SyndicationGenerator & value) const
{
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->put_Generator(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISyndicationFeed<D>::IconUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->get_IconUri(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationFeed<D>::IconUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->put_IconUri(get(value)));
}

template <typename D> hstring impl_ISyndicationFeed<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationFeed<D>::Id(hstring_ref value) const
{
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->put_Id(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationItem> impl_ISyndicationFeed<D>::Items() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationItem> value;
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->get_Items(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_ISyndicationFeed<D>::LastUpdatedTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->get_LastUpdatedTime(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationFeed<D>::LastUpdatedTime(const Windows::Foundation::DateTime & value) const
{
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->put_LastUpdatedTime(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationLink> impl_ISyndicationFeed<D>::Links() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationLink> value;
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->get_Links(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_ISyndicationFeed<D>::ImageUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->get_ImageUri(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationFeed<D>::ImageUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->put_ImageUri(get(value)));
}

template <typename D> Windows::Web::Syndication::ISyndicationText impl_ISyndicationFeed<D>::Rights() const
{
    Windows::Web::Syndication::ISyndicationText value;
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->get_Rights(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationFeed<D>::Rights(const Windows::Web::Syndication::ISyndicationText & value) const
{
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->put_Rights(get(value)));
}

template <typename D> Windows::Web::Syndication::ISyndicationText impl_ISyndicationFeed<D>::Subtitle() const
{
    Windows::Web::Syndication::ISyndicationText value;
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->get_Subtitle(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationFeed<D>::Subtitle(const Windows::Web::Syndication::ISyndicationText & value) const
{
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->put_Subtitle(get(value)));
}

template <typename D> Windows::Web::Syndication::ISyndicationText impl_ISyndicationFeed<D>::Title() const
{
    Windows::Web::Syndication::ISyndicationText value;
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationFeed<D>::Title(const Windows::Web::Syndication::ISyndicationText & value) const
{
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->put_Title(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISyndicationFeed<D>::FirstUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->get_FirstUri(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_ISyndicationFeed<D>::LastUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->get_LastUri(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_ISyndicationFeed<D>::NextUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->get_NextUri(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_ISyndicationFeed<D>::PreviousUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->get_PreviousUri(put(value)));
    return value;
}

template <typename D> Windows::Web::Syndication::SyndicationFormat impl_ISyndicationFeed<D>::SourceFormat() const
{
    Windows::Web::Syndication::SyndicationFormat value {};
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->get_SourceFormat(&value));
    return value;
}

template <typename D> void impl_ISyndicationFeed<D>::Load(hstring_ref feed) const
{
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->abi_Load(get(feed)));
}

template <typename D> void impl_ISyndicationFeed<D>::LoadFromXml(const Windows::Data::Xml::Dom::XmlDocument & feedDocument) const
{
    check_hresult(static_cast<const ISyndicationFeed &>(static_cast<const D &>(*this))->abi_LoadFromXml(get(feedDocument)));
}

template <typename D> Windows::Web::Syndication::SyndicationFeed impl_ISyndicationFeedFactory<D>::CreateSyndicationFeed(hstring_ref title, hstring_ref subtitle, const Windows::Foundation::Uri & uri) const
{
    Windows::Web::Syndication::SyndicationFeed feed { nullptr };
    check_hresult(static_cast<const ISyndicationFeedFactory &>(static_cast<const D &>(*this))->abi_CreateSyndicationFeed(get(title), get(subtitle), get(uri), put(feed)));
    return feed;
}

template <typename D> Windows::Security::Credentials::PasswordCredential impl_ISyndicationClient<D>::ServerCredential() const
{
    Windows::Security::Credentials::PasswordCredential value { nullptr };
    check_hresult(static_cast<const ISyndicationClient &>(static_cast<const D &>(*this))->get_ServerCredential(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationClient<D>::ServerCredential(const Windows::Security::Credentials::PasswordCredential & value) const
{
    check_hresult(static_cast<const ISyndicationClient &>(static_cast<const D &>(*this))->put_ServerCredential(get(value)));
}

template <typename D> Windows::Security::Credentials::PasswordCredential impl_ISyndicationClient<D>::ProxyCredential() const
{
    Windows::Security::Credentials::PasswordCredential value { nullptr };
    check_hresult(static_cast<const ISyndicationClient &>(static_cast<const D &>(*this))->get_ProxyCredential(put(value)));
    return value;
}

template <typename D> void impl_ISyndicationClient<D>::ProxyCredential(const Windows::Security::Credentials::PasswordCredential & value) const
{
    check_hresult(static_cast<const ISyndicationClient &>(static_cast<const D &>(*this))->put_ProxyCredential(get(value)));
}

template <typename D> uint32_t impl_ISyndicationClient<D>::MaxResponseBufferSize() const
{
    uint32_t value {};
    check_hresult(static_cast<const ISyndicationClient &>(static_cast<const D &>(*this))->get_MaxResponseBufferSize(&value));
    return value;
}

template <typename D> void impl_ISyndicationClient<D>::MaxResponseBufferSize(uint32_t value) const
{
    check_hresult(static_cast<const ISyndicationClient &>(static_cast<const D &>(*this))->put_MaxResponseBufferSize(value));
}

template <typename D> uint32_t impl_ISyndicationClient<D>::Timeout() const
{
    uint32_t value {};
    check_hresult(static_cast<const ISyndicationClient &>(static_cast<const D &>(*this))->get_Timeout(&value));
    return value;
}

template <typename D> void impl_ISyndicationClient<D>::Timeout(uint32_t value) const
{
    check_hresult(static_cast<const ISyndicationClient &>(static_cast<const D &>(*this))->put_Timeout(value));
}

template <typename D> bool impl_ISyndicationClient<D>::BypassCacheOnRetrieve() const
{
    bool value {};
    check_hresult(static_cast<const ISyndicationClient &>(static_cast<const D &>(*this))->get_BypassCacheOnRetrieve(&value));
    return value;
}

template <typename D> void impl_ISyndicationClient<D>::BypassCacheOnRetrieve(bool value) const
{
    check_hresult(static_cast<const ISyndicationClient &>(static_cast<const D &>(*this))->put_BypassCacheOnRetrieve(value));
}

template <typename D> void impl_ISyndicationClient<D>::SetRequestHeader(hstring_ref name, hstring_ref value) const
{
    check_hresult(static_cast<const ISyndicationClient &>(static_cast<const D &>(*this))->abi_SetRequestHeader(get(name), get(value)));
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationFeed, Windows::Web::Syndication::RetrievalProgress> impl_ISyndicationClient<D>::RetrieveFeedAsync(const Windows::Foundation::Uri & uri) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationFeed, Windows::Web::Syndication::RetrievalProgress> operation;
    check_hresult(static_cast<const ISyndicationClient &>(static_cast<const D &>(*this))->abi_RetrieveFeedAsync(get(uri), put(operation)));
    return operation;
}

template <typename D> Windows::Web::Syndication::SyndicationClient impl_ISyndicationClientFactory<D>::CreateSyndicationClient(const Windows::Security::Credentials::PasswordCredential & serverCredential) const
{
    Windows::Web::Syndication::SyndicationClient syndicationClient { nullptr };
    check_hresult(static_cast<const ISyndicationClientFactory &>(static_cast<const D &>(*this))->abi_CreateSyndicationClient(get(serverCredential), put(syndicationClient)));
    return syndicationClient;
}

template <typename D> Windows::Web::Syndication::SyndicationErrorStatus impl_ISyndicationErrorStatics<D>::GetStatus(int32_t hresult) const
{
    Windows::Web::Syndication::SyndicationErrorStatus status {};
    check_hresult(static_cast<const ISyndicationErrorStatics &>(static_cast<const D &>(*this))->abi_GetStatus(hresult, &status));
    return status;
}

inline SyndicationAttribute::SyndicationAttribute() :
    SyndicationAttribute(activate_instance<SyndicationAttribute>())
{}

inline SyndicationAttribute::SyndicationAttribute(hstring_ref attributeName, hstring_ref attributeNamespace, hstring_ref attributeValue) :
    SyndicationAttribute(get_activation_factory<SyndicationAttribute, ISyndicationAttributeFactory>().CreateSyndicationAttribute(attributeName, attributeNamespace, attributeValue))
{}

inline SyndicationCategory::SyndicationCategory() :
    SyndicationCategory(activate_instance<SyndicationCategory>())
{}

inline SyndicationCategory::SyndicationCategory(hstring_ref term) :
    SyndicationCategory(get_activation_factory<SyndicationCategory, ISyndicationCategoryFactory>().CreateSyndicationCategory(term))
{}

inline SyndicationCategory::SyndicationCategory(hstring_ref term, hstring_ref scheme, hstring_ref label) :
    SyndicationCategory(get_activation_factory<SyndicationCategory, ISyndicationCategoryFactory>().CreateSyndicationCategoryEx(term, scheme, label))
{}

inline SyndicationClient::SyndicationClient() :
    SyndicationClient(activate_instance<SyndicationClient>())
{}

inline SyndicationClient::SyndicationClient(const Windows::Security::Credentials::PasswordCredential & serverCredential) :
    SyndicationClient(get_activation_factory<SyndicationClient, ISyndicationClientFactory>().CreateSyndicationClient(serverCredential))
{}

inline SyndicationContent::SyndicationContent() :
    SyndicationContent(activate_instance<SyndicationContent>())
{}

inline SyndicationContent::SyndicationContent(hstring_ref text, Windows::Web::Syndication::SyndicationTextType type) :
    SyndicationContent(get_activation_factory<SyndicationContent, ISyndicationContentFactory>().CreateSyndicationContent(text, type))
{}

inline SyndicationContent::SyndicationContent(const Windows::Foundation::Uri & sourceUri) :
    SyndicationContent(get_activation_factory<SyndicationContent, ISyndicationContentFactory>().CreateSyndicationContentWithSourceUri(sourceUri))
{}

inline Windows::Web::Syndication::SyndicationErrorStatus SyndicationError::GetStatus(int32_t hresult)
{
    return get_activation_factory<SyndicationError, ISyndicationErrorStatics>().GetStatus(hresult);
}

inline SyndicationFeed::SyndicationFeed() :
    SyndicationFeed(activate_instance<SyndicationFeed>())
{}

inline SyndicationFeed::SyndicationFeed(hstring_ref title, hstring_ref subtitle, const Windows::Foundation::Uri & uri) :
    SyndicationFeed(get_activation_factory<SyndicationFeed, ISyndicationFeedFactory>().CreateSyndicationFeed(title, subtitle, uri))
{}

inline SyndicationGenerator::SyndicationGenerator() :
    SyndicationGenerator(activate_instance<SyndicationGenerator>())
{}

inline SyndicationGenerator::SyndicationGenerator(hstring_ref text) :
    SyndicationGenerator(get_activation_factory<SyndicationGenerator, ISyndicationGeneratorFactory>().CreateSyndicationGenerator(text))
{}

inline SyndicationItem::SyndicationItem() :
    SyndicationItem(activate_instance<SyndicationItem>())
{}

inline SyndicationItem::SyndicationItem(hstring_ref title, const Windows::Web::Syndication::SyndicationContent & content, const Windows::Foundation::Uri & uri) :
    SyndicationItem(get_activation_factory<SyndicationItem, ISyndicationItemFactory>().CreateSyndicationItem(title, content, uri))
{}

inline SyndicationLink::SyndicationLink() :
    SyndicationLink(activate_instance<SyndicationLink>())
{}

inline SyndicationLink::SyndicationLink(const Windows::Foundation::Uri & uri) :
    SyndicationLink(get_activation_factory<SyndicationLink, ISyndicationLinkFactory>().CreateSyndicationLink(uri))
{}

inline SyndicationLink::SyndicationLink(const Windows::Foundation::Uri & uri, hstring_ref relationship, hstring_ref title, hstring_ref mediaType, uint32_t length) :
    SyndicationLink(get_activation_factory<SyndicationLink, ISyndicationLinkFactory>().CreateSyndicationLinkEx(uri, relationship, title, mediaType, length))
{}

inline SyndicationNode::SyndicationNode() :
    SyndicationNode(activate_instance<SyndicationNode>())
{}

inline SyndicationNode::SyndicationNode(hstring_ref nodeName, hstring_ref nodeNamespace, hstring_ref nodeValue) :
    SyndicationNode(get_activation_factory<SyndicationNode, ISyndicationNodeFactory>().CreateSyndicationNode(nodeName, nodeNamespace, nodeValue))
{}

inline SyndicationPerson::SyndicationPerson() :
    SyndicationPerson(activate_instance<SyndicationPerson>())
{}

inline SyndicationPerson::SyndicationPerson(hstring_ref name) :
    SyndicationPerson(get_activation_factory<SyndicationPerson, ISyndicationPersonFactory>().CreateSyndicationPerson(name))
{}

inline SyndicationPerson::SyndicationPerson(hstring_ref name, hstring_ref email, const Windows::Foundation::Uri & uri) :
    SyndicationPerson(get_activation_factory<SyndicationPerson, ISyndicationPersonFactory>().CreateSyndicationPersonEx(name, email, uri))
{}

inline SyndicationText::SyndicationText() :
    SyndicationText(activate_instance<SyndicationText>())
{}

inline SyndicationText::SyndicationText(hstring_ref text) :
    SyndicationText(get_activation_factory<SyndicationText, ISyndicationTextFactory>().CreateSyndicationText(text))
{}

inline SyndicationText::SyndicationText(hstring_ref text, Windows::Web::Syndication::SyndicationTextType type) :
    SyndicationText(get_activation_factory<SyndicationText, ISyndicationTextFactory>().CreateSyndicationTextEx(text, type))
{}

}

}
