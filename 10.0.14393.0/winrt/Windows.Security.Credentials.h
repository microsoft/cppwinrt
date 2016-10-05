// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.System.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Security.Cryptography.Core.3.h"
#include "internal/Windows.Security.Credentials.3.h"
#include "Windows.Foundation.Collections.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Security::Credentials::ICredentialFactory> : produce_base<D, Windows::Security::Credentials::ICredentialFactory>
{
    HRESULT __stdcall abi_CreatePasswordCredential(abi_arg_in<hstring> resource, abi_arg_in<hstring> userName, abi_arg_in<hstring> password, abi_arg_out<Windows::Security::Credentials::IPasswordCredential> credential) noexcept override
    {
        try
        {
            *credential = detach(this->shim().CreatePasswordCredential(*reinterpret_cast<const hstring *>(&resource), *reinterpret_cast<const hstring *>(&userName), *reinterpret_cast<const hstring *>(&password)));
            return S_OK;
        }
        catch (...)
        {
            *credential = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Credentials::IKeyCredential> : produce_base<D, Windows::Security::Credentials::IKeyCredential>
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

    HRESULT __stdcall abi_RetrievePublicKeyWithDefaultBlobType(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RetrievePublicKey());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RetrievePublicKeyWithBlobType(Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType blobType, abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RetrievePublicKey(blobType));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestSignAsync(abi_arg_in<Windows::Storage::Streams::IBuffer> data, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialOperationResult>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestSignAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&data)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAttestationAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialAttestationResult>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetAttestationAsync());
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
struct produce<D, Windows::Security::Credentials::IKeyCredentialAttestationResult> : produce_base<D, Windows::Security::Credentials::IKeyCredentialAttestationResult>
{
    HRESULT __stdcall get_CertificateChainBuffer(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CertificateChainBuffer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AttestationBuffer(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AttestationBuffer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Security::Credentials::KeyCredentialAttestationStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Credentials::IKeyCredentialManagerStatics> : produce_base<D, Windows::Security::Credentials::IKeyCredentialManagerStatics>
{
    HRESULT __stdcall abi_IsSupportedAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSupportedAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RenewAttestationAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RenewAttestationAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestCreateAsync(abi_arg_in<hstring> name, Windows::Security::Credentials::KeyCredentialCreationOption option, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialRetrievalResult>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestCreateAsync(*reinterpret_cast<const hstring *>(&name), option));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OpenAsync(abi_arg_in<hstring> name, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialRetrievalResult>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OpenAsync(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteAsync(abi_arg_in<hstring> name, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().DeleteAsync(*reinterpret_cast<const hstring *>(&name)));
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
struct produce<D, Windows::Security::Credentials::IKeyCredentialOperationResult> : produce_base<D, Windows::Security::Credentials::IKeyCredentialOperationResult>
{
    HRESULT __stdcall get_Result(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Result());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Security::Credentials::KeyCredentialStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Credentials::IKeyCredentialRetrievalResult> : produce_base<D, Windows::Security::Credentials::IKeyCredentialRetrievalResult>
{
    HRESULT __stdcall get_Credential(abi_arg_out<Windows::Security::Credentials::IKeyCredential> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Credential());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Security::Credentials::KeyCredentialStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Credentials::IPasswordCredential> : produce_base<D, Windows::Security::Credentials::IPasswordCredential>
{
    HRESULT __stdcall get_Resource(abi_arg_out<hstring> resource) noexcept override
    {
        try
        {
            *resource = detach(this->shim().Resource());
            return S_OK;
        }
        catch (...)
        {
            *resource = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Resource(abi_arg_in<hstring> resource) noexcept override
    {
        try
        {
            this->shim().Resource(*reinterpret_cast<const hstring *>(&resource));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserName(abi_arg_out<hstring> userName) noexcept override
    {
        try
        {
            *userName = detach(this->shim().UserName());
            return S_OK;
        }
        catch (...)
        {
            *userName = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UserName(abi_arg_in<hstring> userName) noexcept override
    {
        try
        {
            this->shim().UserName(*reinterpret_cast<const hstring *>(&userName));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Password(abi_arg_out<hstring> password) noexcept override
    {
        try
        {
            *password = detach(this->shim().Password());
            return S_OK;
        }
        catch (...)
        {
            *password = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Password(abi_arg_in<hstring> password) noexcept override
    {
        try
        {
            this->shim().Password(*reinterpret_cast<const hstring *>(&password));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RetrievePassword() noexcept override
    {
        try
        {
            this->shim().RetrievePassword();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IPropertySet> props) noexcept override
    {
        try
        {
            *props = detach(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *props = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Credentials::IPasswordVault> : produce_base<D, Windows::Security::Credentials::IPasswordVault>
{
    HRESULT __stdcall abi_Add(abi_arg_in<Windows::Security::Credentials::IPasswordCredential> credential) noexcept override
    {
        try
        {
            this->shim().Add(*reinterpret_cast<const Windows::Security::Credentials::PasswordCredential *>(&credential));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Remove(abi_arg_in<Windows::Security::Credentials::IPasswordCredential> credential) noexcept override
    {
        try
        {
            this->shim().Remove(*reinterpret_cast<const Windows::Security::Credentials::PasswordCredential *>(&credential));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Retrieve(abi_arg_in<hstring> resource, abi_arg_in<hstring> userName, abi_arg_out<Windows::Security::Credentials::IPasswordCredential> credential) noexcept override
    {
        try
        {
            *credential = detach(this->shim().Retrieve(*reinterpret_cast<const hstring *>(&resource), *reinterpret_cast<const hstring *>(&userName)));
            return S_OK;
        }
        catch (...)
        {
            *credential = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAllByResource(abi_arg_in<hstring> resource, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::PasswordCredential>> credentials) noexcept override
    {
        try
        {
            *credentials = detach(this->shim().FindAllByResource(*reinterpret_cast<const hstring *>(&resource)));
            return S_OK;
        }
        catch (...)
        {
            *credentials = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAllByUserName(abi_arg_in<hstring> userName, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::PasswordCredential>> credentials) noexcept override
    {
        try
        {
            *credentials = detach(this->shim().FindAllByUserName(*reinterpret_cast<const hstring *>(&userName)));
            return S_OK;
        }
        catch (...)
        {
            *credentials = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RetrieveAll(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::PasswordCredential>> credentials) noexcept override
    {
        try
        {
            *credentials = detach(this->shim().RetrieveAll());
            return S_OK;
        }
        catch (...)
        {
            *credentials = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Credentials::IWebAccount> : produce_base<D, Windows::Security::Credentials::IWebAccount>
{
    HRESULT __stdcall get_WebAccountProvider(abi_arg_out<Windows::Security::Credentials::IWebAccountProvider> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WebAccountProvider());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UserName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(Windows::Security::Credentials::WebAccountState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Credentials::IWebAccount2> : produce_base<D, Windows::Security::Credentials::IWebAccount2>
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

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPictureAsync(Windows::Security::Credentials::WebAccountPictureSize desizedSize, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().GetPictureAsync(desizedSize));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SignOutAsync(abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().SignOutAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SignOutWithClientIdAsync(abi_arg_in<hstring> clientId, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().SignOutAsync(*reinterpret_cast<const hstring *>(&clientId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Credentials::IWebAccountFactory> : produce_base<D, Windows::Security::Credentials::IWebAccountFactory>
{
    HRESULT __stdcall abi_CreateWebAccount(abi_arg_in<Windows::Security::Credentials::IWebAccountProvider> webAccountProvider, abi_arg_in<hstring> userName, Windows::Security::Credentials::WebAccountState state, abi_arg_out<Windows::Security::Credentials::IWebAccount> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateWebAccount(*reinterpret_cast<const Windows::Security::Credentials::WebAccountProvider *>(&webAccountProvider), *reinterpret_cast<const hstring *>(&userName), state));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Credentials::IWebAccountProvider> : produce_base<D, Windows::Security::Credentials::IWebAccountProvider>
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

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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
};

template <typename D>
struct produce<D, Windows::Security::Credentials::IWebAccountProvider2> : produce_base<D, Windows::Security::Credentials::IWebAccountProvider2>
{
    HRESULT __stdcall get_DisplayPurpose(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayPurpose());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Authority(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Authority());
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
struct produce<D, Windows::Security::Credentials::IWebAccountProvider3> : produce_base<D, Windows::Security::Credentials::IWebAccountProvider3>
{
    HRESULT __stdcall get_User(abi_arg_out<Windows::System::IUser> user) noexcept override
    {
        try
        {
            *user = detach(this->shim().User());
            return S_OK;
        }
        catch (...)
        {
            *user = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Credentials::IWebAccountProviderFactory> : produce_base<D, Windows::Security::Credentials::IWebAccountProviderFactory>
{
    HRESULT __stdcall abi_CreateWebAccountProvider(abi_arg_in<hstring> id, abi_arg_in<hstring> displayName, abi_arg_in<Windows::Foundation::IUriRuntimeClass> iconUri, abi_arg_out<Windows::Security::Credentials::IWebAccountProvider> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateWebAccountProvider(*reinterpret_cast<const hstring *>(&id), *reinterpret_cast<const hstring *>(&displayName), *reinterpret_cast<const Windows::Foundation::Uri *>(&iconUri)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Security::Credentials {

template <typename D> Windows::Security::Credentials::WebAccount impl_IWebAccountFactory<D>::CreateWebAccount(const Windows::Security::Credentials::WebAccountProvider & webAccountProvider, hstring_ref userName, Windows::Security::Credentials::WebAccountState state) const
{
    Windows::Security::Credentials::WebAccount instance { nullptr };
    check_hresult(static_cast<const IWebAccountFactory &>(static_cast<const D &>(*this))->abi_CreateWebAccount(get(webAccountProvider), get(userName), state, put(instance)));
    return instance;
}

template <typename D> Windows::Security::Credentials::WebAccountProvider impl_IWebAccount<D>::WebAccountProvider() const
{
    Windows::Security::Credentials::WebAccountProvider value { nullptr };
    check_hresult(static_cast<const IWebAccount &>(static_cast<const D &>(*this))->get_WebAccountProvider(put(value)));
    return value;
}

template <typename D> hstring impl_IWebAccount<D>::UserName() const
{
    hstring value;
    check_hresult(static_cast<const IWebAccount &>(static_cast<const D &>(*this))->get_UserName(put(value)));
    return value;
}

template <typename D> Windows::Security::Credentials::WebAccountState impl_IWebAccount<D>::State() const
{
    Windows::Security::Credentials::WebAccountState value {};
    check_hresult(static_cast<const IWebAccount &>(static_cast<const D &>(*this))->get_State(&value));
    return value;
}

template <typename D> hstring impl_IWebAccount2<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IWebAccount2 &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, hstring> impl_IWebAccount2<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, hstring> value;
    check_hresult(static_cast<const IWebAccount2 &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> impl_IWebAccount2<D>::GetPictureAsync(Windows::Security::Credentials::WebAccountPictureSize desizedSize) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> asyncInfo;
    check_hresult(static_cast<const IWebAccount2 &>(static_cast<const D &>(*this))->abi_GetPictureAsync(desizedSize, put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IWebAccount2<D>::SignOutAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IWebAccount2 &>(static_cast<const D &>(*this))->abi_SignOutAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IWebAccount2<D>::SignOutAsync(hstring_ref clientId) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IWebAccount2 &>(static_cast<const D &>(*this))->abi_SignOutWithClientIdAsync(get(clientId), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Security::Credentials::WebAccountProvider impl_IWebAccountProviderFactory<D>::CreateWebAccountProvider(hstring_ref id, hstring_ref displayName, const Windows::Foundation::Uri & iconUri) const
{
    Windows::Security::Credentials::WebAccountProvider instance { nullptr };
    check_hresult(static_cast<const IWebAccountProviderFactory &>(static_cast<const D &>(*this))->abi_CreateWebAccountProvider(get(id), get(displayName), get(iconUri), put(instance)));
    return instance;
}

template <typename D> hstring impl_IWebAccountProvider<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IWebAccountProvider &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IWebAccountProvider<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IWebAccountProvider &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IWebAccountProvider<D>::IconUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IWebAccountProvider &>(static_cast<const D &>(*this))->get_IconUri(put(value)));
    return value;
}

template <typename D> hstring impl_IWebAccountProvider2<D>::DisplayPurpose() const
{
    hstring value;
    check_hresult(static_cast<const IWebAccountProvider2 &>(static_cast<const D &>(*this))->get_DisplayPurpose(put(value)));
    return value;
}

template <typename D> hstring impl_IWebAccountProvider2<D>::Authority() const
{
    hstring value;
    check_hresult(static_cast<const IWebAccountProvider2 &>(static_cast<const D &>(*this))->get_Authority(put(value)));
    return value;
}

template <typename D> Windows::System::User impl_IWebAccountProvider3<D>::User() const
{
    Windows::System::User user { nullptr };
    check_hresult(static_cast<const IWebAccountProvider3 &>(static_cast<const D &>(*this))->get_User(put(user)));
    return user;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IKeyCredentialManagerStatics<D>::IsSupportedAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> value;
    check_hresult(static_cast<const IKeyCredentialManagerStatics &>(static_cast<const D &>(*this))->abi_IsSupportedAsync(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IKeyCredentialManagerStatics<D>::RenewAttestationAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IKeyCredentialManagerStatics &>(static_cast<const D &>(*this))->abi_RenewAttestationAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialRetrievalResult> impl_IKeyCredentialManagerStatics<D>::RequestCreateAsync(hstring_ref name, Windows::Security::Credentials::KeyCredentialCreationOption option) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialRetrievalResult> value;
    check_hresult(static_cast<const IKeyCredentialManagerStatics &>(static_cast<const D &>(*this))->abi_RequestCreateAsync(get(name), option, put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialRetrievalResult> impl_IKeyCredentialManagerStatics<D>::OpenAsync(hstring_ref name) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialRetrievalResult> value;
    check_hresult(static_cast<const IKeyCredentialManagerStatics &>(static_cast<const D &>(*this))->abi_OpenAsync(get(name), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IKeyCredentialManagerStatics<D>::DeleteAsync(hstring_ref name) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IKeyCredentialManagerStatics &>(static_cast<const D &>(*this))->abi_DeleteAsync(get(name), put(operation)));
    return operation;
}

template <typename D> hstring impl_IKeyCredential<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IKeyCredential &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IKeyCredential<D>::RetrievePublicKey() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IKeyCredential &>(static_cast<const D &>(*this))->abi_RetrievePublicKeyWithDefaultBlobType(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IKeyCredential<D>::RetrievePublicKey(Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType blobType) const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IKeyCredential &>(static_cast<const D &>(*this))->abi_RetrievePublicKeyWithBlobType(blobType, put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialOperationResult> impl_IKeyCredential<D>::RequestSignAsync(const Windows::Storage::Streams::IBuffer & data) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialOperationResult> value;
    check_hresult(static_cast<const IKeyCredential &>(static_cast<const D &>(*this))->abi_RequestSignAsync(get(data), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialAttestationResult> impl_IKeyCredential<D>::GetAttestationAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialAttestationResult> value;
    check_hresult(static_cast<const IKeyCredential &>(static_cast<const D &>(*this))->abi_GetAttestationAsync(put(value)));
    return value;
}

template <typename D> Windows::Security::Credentials::KeyCredential impl_IKeyCredentialRetrievalResult<D>::Credential() const
{
    Windows::Security::Credentials::KeyCredential value { nullptr };
    check_hresult(static_cast<const IKeyCredentialRetrievalResult &>(static_cast<const D &>(*this))->get_Credential(put(value)));
    return value;
}

template <typename D> Windows::Security::Credentials::KeyCredentialStatus impl_IKeyCredentialRetrievalResult<D>::Status() const
{
    Windows::Security::Credentials::KeyCredentialStatus value {};
    check_hresult(static_cast<const IKeyCredentialRetrievalResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IKeyCredentialOperationResult<D>::Result() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IKeyCredentialOperationResult &>(static_cast<const D &>(*this))->get_Result(put(value)));
    return value;
}

template <typename D> Windows::Security::Credentials::KeyCredentialStatus impl_IKeyCredentialOperationResult<D>::Status() const
{
    Windows::Security::Credentials::KeyCredentialStatus value {};
    check_hresult(static_cast<const IKeyCredentialOperationResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IKeyCredentialAttestationResult<D>::CertificateChainBuffer() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IKeyCredentialAttestationResult &>(static_cast<const D &>(*this))->get_CertificateChainBuffer(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IKeyCredentialAttestationResult<D>::AttestationBuffer() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IKeyCredentialAttestationResult &>(static_cast<const D &>(*this))->get_AttestationBuffer(put(value)));
    return value;
}

template <typename D> Windows::Security::Credentials::KeyCredentialAttestationStatus impl_IKeyCredentialAttestationResult<D>::Status() const
{
    Windows::Security::Credentials::KeyCredentialAttestationStatus value {};
    check_hresult(static_cast<const IKeyCredentialAttestationResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> hstring impl_IPasswordCredential<D>::Resource() const
{
    hstring resource;
    check_hresult(static_cast<const IPasswordCredential &>(static_cast<const D &>(*this))->get_Resource(put(resource)));
    return resource;
}

template <typename D> void impl_IPasswordCredential<D>::Resource(hstring_ref resource) const
{
    check_hresult(static_cast<const IPasswordCredential &>(static_cast<const D &>(*this))->put_Resource(get(resource)));
}

template <typename D> hstring impl_IPasswordCredential<D>::UserName() const
{
    hstring userName;
    check_hresult(static_cast<const IPasswordCredential &>(static_cast<const D &>(*this))->get_UserName(put(userName)));
    return userName;
}

template <typename D> void impl_IPasswordCredential<D>::UserName(hstring_ref userName) const
{
    check_hresult(static_cast<const IPasswordCredential &>(static_cast<const D &>(*this))->put_UserName(get(userName)));
}

template <typename D> hstring impl_IPasswordCredential<D>::Password() const
{
    hstring password;
    check_hresult(static_cast<const IPasswordCredential &>(static_cast<const D &>(*this))->get_Password(put(password)));
    return password;
}

template <typename D> void impl_IPasswordCredential<D>::Password(hstring_ref password) const
{
    check_hresult(static_cast<const IPasswordCredential &>(static_cast<const D &>(*this))->put_Password(get(password)));
}

template <typename D> void impl_IPasswordCredential<D>::RetrievePassword() const
{
    check_hresult(static_cast<const IPasswordCredential &>(static_cast<const D &>(*this))->abi_RetrievePassword());
}

template <typename D> Windows::Foundation::Collections::IPropertySet impl_IPasswordCredential<D>::Properties() const
{
    Windows::Foundation::Collections::IPropertySet props;
    check_hresult(static_cast<const IPasswordCredential &>(static_cast<const D &>(*this))->get_Properties(put(props)));
    return props;
}

template <typename D> Windows::Security::Credentials::PasswordCredential impl_ICredentialFactory<D>::CreatePasswordCredential(hstring_ref resource, hstring_ref userName, hstring_ref password) const
{
    Windows::Security::Credentials::PasswordCredential credential { nullptr };
    check_hresult(static_cast<const ICredentialFactory &>(static_cast<const D &>(*this))->abi_CreatePasswordCredential(get(resource), get(userName), get(password), put(credential)));
    return credential;
}

template <typename D> void impl_IPasswordVault<D>::Add(const Windows::Security::Credentials::PasswordCredential & credential) const
{
    check_hresult(static_cast<const IPasswordVault &>(static_cast<const D &>(*this))->abi_Add(get(credential)));
}

template <typename D> void impl_IPasswordVault<D>::Remove(const Windows::Security::Credentials::PasswordCredential & credential) const
{
    check_hresult(static_cast<const IPasswordVault &>(static_cast<const D &>(*this))->abi_Remove(get(credential)));
}

template <typename D> Windows::Security::Credentials::PasswordCredential impl_IPasswordVault<D>::Retrieve(hstring_ref resource, hstring_ref userName) const
{
    Windows::Security::Credentials::PasswordCredential credential { nullptr };
    check_hresult(static_cast<const IPasswordVault &>(static_cast<const D &>(*this))->abi_Retrieve(get(resource), get(userName), put(credential)));
    return credential;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::PasswordCredential> impl_IPasswordVault<D>::FindAllByResource(hstring_ref resource) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::PasswordCredential> credentials;
    check_hresult(static_cast<const IPasswordVault &>(static_cast<const D &>(*this))->abi_FindAllByResource(get(resource), put(credentials)));
    return credentials;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::PasswordCredential> impl_IPasswordVault<D>::FindAllByUserName(hstring_ref userName) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::PasswordCredential> credentials;
    check_hresult(static_cast<const IPasswordVault &>(static_cast<const D &>(*this))->abi_FindAllByUserName(get(userName), put(credentials)));
    return credentials;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::PasswordCredential> impl_IPasswordVault<D>::RetrieveAll() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::PasswordCredential> credentials;
    check_hresult(static_cast<const IPasswordVault &>(static_cast<const D &>(*this))->abi_RetrieveAll(put(credentials)));
    return credentials;
}

inline Windows::Foundation::IAsyncOperation<bool> KeyCredentialManager::IsSupportedAsync()
{
    return get_activation_factory<KeyCredentialManager, IKeyCredentialManagerStatics>().IsSupportedAsync();
}

inline Windows::Foundation::IAsyncAction KeyCredentialManager::RenewAttestationAsync()
{
    return get_activation_factory<KeyCredentialManager, IKeyCredentialManagerStatics>().RenewAttestationAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialRetrievalResult> KeyCredentialManager::RequestCreateAsync(hstring_ref name, Windows::Security::Credentials::KeyCredentialCreationOption option)
{
    return get_activation_factory<KeyCredentialManager, IKeyCredentialManagerStatics>().RequestCreateAsync(name, option);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialRetrievalResult> KeyCredentialManager::OpenAsync(hstring_ref name)
{
    return get_activation_factory<KeyCredentialManager, IKeyCredentialManagerStatics>().OpenAsync(name);
}

inline Windows::Foundation::IAsyncAction KeyCredentialManager::DeleteAsync(hstring_ref name)
{
    return get_activation_factory<KeyCredentialManager, IKeyCredentialManagerStatics>().DeleteAsync(name);
}

inline PasswordCredential::PasswordCredential() :
    PasswordCredential(activate_instance<PasswordCredential>())
{}

inline PasswordCredential::PasswordCredential(hstring_ref resource, hstring_ref userName, hstring_ref password) :
    PasswordCredential(get_activation_factory<PasswordCredential, ICredentialFactory>().CreatePasswordCredential(resource, userName, password))
{}

inline PasswordCredentialPropertyStore::PasswordCredentialPropertyStore() :
    PasswordCredentialPropertyStore(activate_instance<PasswordCredentialPropertyStore>())
{}

inline PasswordVault::PasswordVault() :
    PasswordVault(activate_instance<PasswordVault>())
{}

inline WebAccount::WebAccount(const Windows::Security::Credentials::WebAccountProvider & webAccountProvider, hstring_ref userName, Windows::Security::Credentials::WebAccountState state) :
    WebAccount(get_activation_factory<WebAccount, IWebAccountFactory>().CreateWebAccount(webAccountProvider, userName, state))
{}

inline WebAccountProvider::WebAccountProvider(hstring_ref id, hstring_ref displayName, const Windows::Foundation::Uri & iconUri) :
    WebAccountProvider(get_activation_factory<WebAccountProvider, IWebAccountProviderFactory>().CreateWebAccountProvider(id, displayName, iconUri))
{}

}

}
