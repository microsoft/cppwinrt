// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Security.Cryptography.Core.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"

namespace winrt::impl {

template <typename D> Windows::Security::Credentials::PasswordCredential consume_Windows_Security_Credentials_ICredentialFactory<D>::CreatePasswordCredential(param::hstring const& resource, param::hstring const& userName, param::hstring const& password) const
{
    Windows::Security::Credentials::PasswordCredential credential{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::ICredentialFactory)->CreatePasswordCredential(get_abi(resource), get_abi(userName), get_abi(password), put_abi(credential)));
    return credential;
}

template <typename D> hstring consume_Windows_Security_Credentials_IKeyCredential<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IKeyCredential)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Credentials_IKeyCredential<D>::RetrievePublicKey() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IKeyCredential)->RetrievePublicKeyWithDefaultBlobType(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Credentials_IKeyCredential<D>::RetrievePublicKey(Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType const& blobType) const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IKeyCredential)->RetrievePublicKeyWithBlobType(get_abi(blobType), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialOperationResult> consume_Windows_Security_Credentials_IKeyCredential<D>::RequestSignAsync(Windows::Storage::Streams::IBuffer const& data) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialOperationResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IKeyCredential)->RequestSignAsync(get_abi(data), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialAttestationResult> consume_Windows_Security_Credentials_IKeyCredential<D>::GetAttestationAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialAttestationResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IKeyCredential)->GetAttestationAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Credentials_IKeyCredentialAttestationResult<D>::CertificateChainBuffer() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IKeyCredentialAttestationResult)->get_CertificateChainBuffer(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Credentials_IKeyCredentialAttestationResult<D>::AttestationBuffer() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IKeyCredentialAttestationResult)->get_AttestationBuffer(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Credentials::KeyCredentialAttestationStatus consume_Windows_Security_Credentials_IKeyCredentialAttestationResult<D>::Status() const
{
    Windows::Security::Credentials::KeyCredentialAttestationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IKeyCredentialAttestationResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Security_Credentials_IKeyCredentialManagerStatics<D>::IsSupportedAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IKeyCredentialManagerStatics)->IsSupportedAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Credentials_IKeyCredentialManagerStatics<D>::RenewAttestationAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IKeyCredentialManagerStatics)->RenewAttestationAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialRetrievalResult> consume_Windows_Security_Credentials_IKeyCredentialManagerStatics<D>::RequestCreateAsync(param::hstring const& name, Windows::Security::Credentials::KeyCredentialCreationOption const& option) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialRetrievalResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IKeyCredentialManagerStatics)->RequestCreateAsync(get_abi(name), get_abi(option), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialRetrievalResult> consume_Windows_Security_Credentials_IKeyCredentialManagerStatics<D>::OpenAsync(param::hstring const& name) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialRetrievalResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IKeyCredentialManagerStatics)->OpenAsync(get_abi(name), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Credentials_IKeyCredentialManagerStatics<D>::DeleteAsync(param::hstring const& name) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IKeyCredentialManagerStatics)->DeleteAsync(get_abi(name), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Credentials_IKeyCredentialOperationResult<D>::Result() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IKeyCredentialOperationResult)->get_Result(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Credentials::KeyCredentialStatus consume_Windows_Security_Credentials_IKeyCredentialOperationResult<D>::Status() const
{
    Windows::Security::Credentials::KeyCredentialStatus value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IKeyCredentialOperationResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Credentials::KeyCredential consume_Windows_Security_Credentials_IKeyCredentialRetrievalResult<D>::Credential() const
{
    Windows::Security::Credentials::KeyCredential value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IKeyCredentialRetrievalResult)->get_Credential(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Credentials::KeyCredentialStatus consume_Windows_Security_Credentials_IKeyCredentialRetrievalResult<D>::Status() const
{
    Windows::Security::Credentials::KeyCredentialStatus value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IKeyCredentialRetrievalResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Credentials_IPasswordCredential<D>::Resource() const
{
    hstring resource{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IPasswordCredential)->get_Resource(put_abi(resource)));
    return resource;
}

template <typename D> void consume_Windows_Security_Credentials_IPasswordCredential<D>::Resource(param::hstring const& resource) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IPasswordCredential)->put_Resource(get_abi(resource)));
}

template <typename D> hstring consume_Windows_Security_Credentials_IPasswordCredential<D>::UserName() const
{
    hstring userName{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IPasswordCredential)->get_UserName(put_abi(userName)));
    return userName;
}

template <typename D> void consume_Windows_Security_Credentials_IPasswordCredential<D>::UserName(param::hstring const& userName) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IPasswordCredential)->put_UserName(get_abi(userName)));
}

template <typename D> hstring consume_Windows_Security_Credentials_IPasswordCredential<D>::Password() const
{
    hstring password{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IPasswordCredential)->get_Password(put_abi(password)));
    return password;
}

template <typename D> void consume_Windows_Security_Credentials_IPasswordCredential<D>::Password(param::hstring const& password) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IPasswordCredential)->put_Password(get_abi(password)));
}

template <typename D> void consume_Windows_Security_Credentials_IPasswordCredential<D>::RetrievePassword() const
{
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IPasswordCredential)->RetrievePassword());
}

template <typename D> Windows::Foundation::Collections::IPropertySet consume_Windows_Security_Credentials_IPasswordCredential<D>::Properties() const
{
    Windows::Foundation::Collections::IPropertySet props{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IPasswordCredential)->get_Properties(put_abi(props)));
    return props;
}

template <typename D> void consume_Windows_Security_Credentials_IPasswordVault<D>::Add(Windows::Security::Credentials::PasswordCredential const& credential) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IPasswordVault)->Add(get_abi(credential)));
}

template <typename D> void consume_Windows_Security_Credentials_IPasswordVault<D>::Remove(Windows::Security::Credentials::PasswordCredential const& credential) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IPasswordVault)->Remove(get_abi(credential)));
}

template <typename D> Windows::Security::Credentials::PasswordCredential consume_Windows_Security_Credentials_IPasswordVault<D>::Retrieve(param::hstring const& resource, param::hstring const& userName) const
{
    Windows::Security::Credentials::PasswordCredential credential{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IPasswordVault)->Retrieve(get_abi(resource), get_abi(userName), put_abi(credential)));
    return credential;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::PasswordCredential> consume_Windows_Security_Credentials_IPasswordVault<D>::FindAllByResource(param::hstring const& resource) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::PasswordCredential> credentials{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IPasswordVault)->FindAllByResource(get_abi(resource), put_abi(credentials)));
    return credentials;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::PasswordCredential> consume_Windows_Security_Credentials_IPasswordVault<D>::FindAllByUserName(param::hstring const& userName) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::PasswordCredential> credentials{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IPasswordVault)->FindAllByUserName(get_abi(userName), put_abi(credentials)));
    return credentials;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::PasswordCredential> consume_Windows_Security_Credentials_IPasswordVault<D>::RetrieveAll() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::PasswordCredential> credentials{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IPasswordVault)->RetrieveAll(put_abi(credentials)));
    return credentials;
}

template <typename D> Windows::Security::Credentials::WebAccountProvider consume_Windows_Security_Credentials_IWebAccount<D>::WebAccountProvider() const
{
    Windows::Security::Credentials::WebAccountProvider value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IWebAccount)->get_WebAccountProvider(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Credentials_IWebAccount<D>::UserName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IWebAccount)->get_UserName(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Credentials::WebAccountState consume_Windows_Security_Credentials_IWebAccount<D>::State() const
{
    Windows::Security::Credentials::WebAccountState value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IWebAccount)->get_State(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Credentials_IWebAccount2<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IWebAccount2)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, hstring> consume_Windows_Security_Credentials_IWebAccount2<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IWebAccount2)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> consume_Windows_Security_Credentials_IWebAccount2<D>::GetPictureAsync(Windows::Security::Credentials::WebAccountPictureSize const& desizedSize) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IWebAccount2)->GetPictureAsync(get_abi(desizedSize), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Credentials_IWebAccount2<D>::SignOutAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IWebAccount2)->SignOutAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Credentials_IWebAccount2<D>::SignOutAsync(param::hstring const& clientId) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IWebAccount2)->SignOutWithClientIdAsync(get_abi(clientId), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Security::Credentials::WebAccount consume_Windows_Security_Credentials_IWebAccountFactory<D>::CreateWebAccount(Windows::Security::Credentials::WebAccountProvider const& webAccountProvider, param::hstring const& userName, Windows::Security::Credentials::WebAccountState const& state) const
{
    Windows::Security::Credentials::WebAccount instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IWebAccountFactory)->CreateWebAccount(get_abi(webAccountProvider), get_abi(userName), get_abi(state), put_abi(instance)));
    return instance;
}

template <typename D> hstring consume_Windows_Security_Credentials_IWebAccountProvider<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IWebAccountProvider)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Credentials_IWebAccountProvider<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IWebAccountProvider)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Security_Credentials_IWebAccountProvider<D>::IconUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IWebAccountProvider)->get_IconUri(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Credentials_IWebAccountProvider2<D>::DisplayPurpose() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IWebAccountProvider2)->get_DisplayPurpose(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Credentials_IWebAccountProvider2<D>::Authority() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IWebAccountProvider2)->get_Authority(put_abi(value)));
    return value;
}

template <typename D> Windows::System::User consume_Windows_Security_Credentials_IWebAccountProvider3<D>::User() const
{
    Windows::System::User user{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IWebAccountProvider3)->get_User(put_abi(user)));
    return user;
}

template <typename D> Windows::Security::Credentials::WebAccountProvider consume_Windows_Security_Credentials_IWebAccountProviderFactory<D>::CreateWebAccountProvider(param::hstring const& id, param::hstring const& displayName, Windows::Foundation::Uri const& iconUri) const
{
    Windows::Security::Credentials::WebAccountProvider instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::IWebAccountProviderFactory)->CreateWebAccountProvider(get_abi(id), get_abi(displayName), get_abi(iconUri), put_abi(instance)));
    return instance;
}

template <typename D>
struct produce<D, Windows::Security::Credentials::ICredentialFactory> : produce_base<D, Windows::Security::Credentials::ICredentialFactory>
{
    HRESULT __stdcall CreatePasswordCredential(HSTRING resource, HSTRING userName, HSTRING password, ::IUnknown** credential) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *credential = detach_abi(this->shim().CreatePasswordCredential(*reinterpret_cast<hstring const*>(&resource), *reinterpret_cast<hstring const*>(&userName), *reinterpret_cast<hstring const*>(&password)));
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
    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RetrievePublicKeyWithDefaultBlobType(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RetrievePublicKey());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RetrievePublicKeyWithBlobType(abi_t<Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType> blobType, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RetrievePublicKey(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType const*>(&blobType)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestSignAsync(::IUnknown* data, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestSignAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAttestationAsync(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetAttestationAsync());
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
    HRESULT __stdcall get_CertificateChainBuffer(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CertificateChainBuffer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AttestationBuffer(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AttestationBuffer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::Security::Credentials::KeyCredentialAttestationStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
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
    HRESULT __stdcall IsSupportedAsync(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSupportedAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RenewAttestationAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RenewAttestationAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestCreateAsync(HSTRING name, abi_t<Windows::Security::Credentials::KeyCredentialCreationOption> option, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestCreateAsync(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Security::Credentials::KeyCredentialCreationOption const*>(&option)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall OpenAsync(HSTRING name, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OpenAsync(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteAsync(HSTRING name, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().DeleteAsync(*reinterpret_cast<hstring const*>(&name)));
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
    HRESULT __stdcall get_Result(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Result());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::Security::Credentials::KeyCredentialStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
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
    HRESULT __stdcall get_Credential(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Credential());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::Security::Credentials::KeyCredentialStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
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
    HRESULT __stdcall get_Resource(HSTRING* resource) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *resource = detach_abi(this->shim().Resource());
            return S_OK;
        }
        catch (...)
        {
            *resource = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Resource(HSTRING resource) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resource(*reinterpret_cast<hstring const*>(&resource));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserName(HSTRING* userName) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *userName = detach_abi(this->shim().UserName());
            return S_OK;
        }
        catch (...)
        {
            *userName = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UserName(HSTRING userName) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserName(*reinterpret_cast<hstring const*>(&userName));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Password(HSTRING* password) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *password = detach_abi(this->shim().Password());
            return S_OK;
        }
        catch (...)
        {
            *password = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Password(HSTRING password) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Password(*reinterpret_cast<hstring const*>(&password));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RetrievePassword() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RetrievePassword();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** props) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *props = detach_abi(this->shim().Properties());
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
    HRESULT __stdcall Add(::IUnknown* credential) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Add(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&credential));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Remove(::IUnknown* credential) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Remove(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&credential));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Retrieve(HSTRING resource, HSTRING userName, ::IUnknown** credential) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *credential = detach_abi(this->shim().Retrieve(*reinterpret_cast<hstring const*>(&resource), *reinterpret_cast<hstring const*>(&userName)));
            return S_OK;
        }
        catch (...)
        {
            *credential = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllByResource(HSTRING resource, ::IUnknown** credentials) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *credentials = detach_abi(this->shim().FindAllByResource(*reinterpret_cast<hstring const*>(&resource)));
            return S_OK;
        }
        catch (...)
        {
            *credentials = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllByUserName(HSTRING userName, ::IUnknown** credentials) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *credentials = detach_abi(this->shim().FindAllByUserName(*reinterpret_cast<hstring const*>(&userName)));
            return S_OK;
        }
        catch (...)
        {
            *credentials = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RetrieveAll(::IUnknown** credentials) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *credentials = detach_abi(this->shim().RetrieveAll());
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
    HRESULT __stdcall get_WebAccountProvider(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WebAccountProvider());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(abi_t<Windows::Security::Credentials::WebAccountState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
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

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPictureAsync(abi_t<Windows::Security::Credentials::WebAccountPictureSize> desizedSize, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().GetPictureAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccountPictureSize const*>(&desizedSize)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SignOutAsync(::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SignOutAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SignOutWithClientIdAsync(HSTRING clientId, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SignOutAsync(*reinterpret_cast<hstring const*>(&clientId)));
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
    HRESULT __stdcall CreateWebAccount(::IUnknown* webAccountProvider, HSTRING userName, abi_t<Windows::Security::Credentials::WebAccountState> state, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateWebAccount(*reinterpret_cast<Windows::Security::Credentials::WebAccountProvider const*>(&webAccountProvider), *reinterpret_cast<hstring const*>(&userName), *reinterpret_cast<Windows::Security::Credentials::WebAccountState const*>(&state)));
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

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IconUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IconUri());
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
    HRESULT __stdcall get_DisplayPurpose(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayPurpose());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Authority(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Authority());
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
    HRESULT __stdcall get_User(::IUnknown** user) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *user = detach_abi(this->shim().User());
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
    HRESULT __stdcall CreateWebAccountProvider(HSTRING id, HSTRING displayName, ::IUnknown* iconUri, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateWebAccountProvider(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<hstring const*>(&displayName), *reinterpret_cast<Windows::Foundation::Uri const*>(&iconUri)));
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

WINRT_EXPORT namespace winrt::Windows::Security::Credentials {

inline Windows::Foundation::IAsyncOperation<bool> KeyCredentialManager::IsSupportedAsync()
{
    return get_activation_factory<KeyCredentialManager, Windows::Security::Credentials::IKeyCredentialManagerStatics>().IsSupportedAsync();
}

inline Windows::Foundation::IAsyncAction KeyCredentialManager::RenewAttestationAsync()
{
    return get_activation_factory<KeyCredentialManager, Windows::Security::Credentials::IKeyCredentialManagerStatics>().RenewAttestationAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialRetrievalResult> KeyCredentialManager::RequestCreateAsync(param::hstring const& name, Windows::Security::Credentials::KeyCredentialCreationOption const& option)
{
    return get_activation_factory<KeyCredentialManager, Windows::Security::Credentials::IKeyCredentialManagerStatics>().RequestCreateAsync(name, option);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialRetrievalResult> KeyCredentialManager::OpenAsync(param::hstring const& name)
{
    return get_activation_factory<KeyCredentialManager, Windows::Security::Credentials::IKeyCredentialManagerStatics>().OpenAsync(name);
}

inline Windows::Foundation::IAsyncAction KeyCredentialManager::DeleteAsync(param::hstring const& name)
{
    return get_activation_factory<KeyCredentialManager, Windows::Security::Credentials::IKeyCredentialManagerStatics>().DeleteAsync(name);
}

inline PasswordCredential::PasswordCredential() :
    PasswordCredential(activate_instance<PasswordCredential>())
{}

inline PasswordCredential::PasswordCredential(param::hstring const& resource, param::hstring const& userName, param::hstring const& password) :
    PasswordCredential(get_activation_factory<PasswordCredential, Windows::Security::Credentials::ICredentialFactory>().CreatePasswordCredential(resource, userName, password))
{}

inline PasswordCredentialPropertyStore::PasswordCredentialPropertyStore() :
    PasswordCredentialPropertyStore(activate_instance<PasswordCredentialPropertyStore>())
{}

inline PasswordVault::PasswordVault() :
    PasswordVault(activate_instance<PasswordVault>())
{}

inline WebAccount::WebAccount(Windows::Security::Credentials::WebAccountProvider const& webAccountProvider, param::hstring const& userName, Windows::Security::Credentials::WebAccountState const& state) :
    WebAccount(get_activation_factory<WebAccount, Windows::Security::Credentials::IWebAccountFactory>().CreateWebAccount(webAccountProvider, userName, state))
{}

inline WebAccountProvider::WebAccountProvider(param::hstring const& id, param::hstring const& displayName, Windows::Foundation::Uri const& iconUri) :
    WebAccountProvider(get_activation_factory<WebAccountProvider, Windows::Security::Credentials::IWebAccountProviderFactory>().CreateWebAccountProvider(id, displayName, iconUri))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Security::Credentials::ICredentialFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::ICredentialFactory> {};

template<> struct hash<winrt::Windows::Security::Credentials::IKeyCredential> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::IKeyCredential> {};

template<> struct hash<winrt::Windows::Security::Credentials::IKeyCredentialAttestationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::IKeyCredentialAttestationResult> {};

template<> struct hash<winrt::Windows::Security::Credentials::IKeyCredentialManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::IKeyCredentialManagerStatics> {};

template<> struct hash<winrt::Windows::Security::Credentials::IKeyCredentialOperationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::IKeyCredentialOperationResult> {};

template<> struct hash<winrt::Windows::Security::Credentials::IKeyCredentialRetrievalResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::IKeyCredentialRetrievalResult> {};

template<> struct hash<winrt::Windows::Security::Credentials::IPasswordCredential> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::IPasswordCredential> {};

template<> struct hash<winrt::Windows::Security::Credentials::IPasswordVault> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::IPasswordVault> {};

template<> struct hash<winrt::Windows::Security::Credentials::IWebAccount> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::IWebAccount> {};

template<> struct hash<winrt::Windows::Security::Credentials::IWebAccount2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::IWebAccount2> {};

template<> struct hash<winrt::Windows::Security::Credentials::IWebAccountFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::IWebAccountFactory> {};

template<> struct hash<winrt::Windows::Security::Credentials::IWebAccountProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::IWebAccountProvider> {};

template<> struct hash<winrt::Windows::Security::Credentials::IWebAccountProvider2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::IWebAccountProvider2> {};

template<> struct hash<winrt::Windows::Security::Credentials::IWebAccountProvider3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::IWebAccountProvider3> {};

template<> struct hash<winrt::Windows::Security::Credentials::IWebAccountProviderFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::IWebAccountProviderFactory> {};

template<> struct hash<winrt::Windows::Security::Credentials::KeyCredential> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::KeyCredential> {};

template<> struct hash<winrt::Windows::Security::Credentials::KeyCredentialAttestationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::KeyCredentialAttestationResult> {};

template<> struct hash<winrt::Windows::Security::Credentials::KeyCredentialManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::KeyCredentialManager> {};

template<> struct hash<winrt::Windows::Security::Credentials::KeyCredentialOperationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::KeyCredentialOperationResult> {};

template<> struct hash<winrt::Windows::Security::Credentials::KeyCredentialRetrievalResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::KeyCredentialRetrievalResult> {};

template<> struct hash<winrt::Windows::Security::Credentials::PasswordCredential> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::PasswordCredential> {};

template<> struct hash<winrt::Windows::Security::Credentials::PasswordCredentialPropertyStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::PasswordCredentialPropertyStore> {};

template<> struct hash<winrt::Windows::Security::Credentials::PasswordVault> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::PasswordVault> {};

template<> struct hash<winrt::Windows::Security::Credentials::WebAccount> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::WebAccount> {};

template<> struct hash<winrt::Windows::Security::Credentials::WebAccountProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::WebAccountProvider> {};

}

WINRT_WARNING_POP
