// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Security.Credentials.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Security.Cryptography.Core.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.System.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Security::Credentials {

struct __declspec(uuid("54ef13a1-bf26-47b5-97dd-de779b7cad58")) __declspec(novtable) ICredentialFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreatePasswordCredential(hstring resource, hstring userName, hstring password, Windows::Security::Credentials::IPasswordCredential ** credential) = 0;
};

struct __declspec(uuid("9585ef8d-457b-4847-b11a-fa960bbdb138")) __declspec(novtable) IKeyCredential : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall abi_RetrievePublicKeyWithDefaultBlobType(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall abi_RetrievePublicKeyWithBlobType(winrt::Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType blobType, Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall abi_RequestSignAsync(Windows::Storage::Streams::IBuffer * data, Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialOperationResult> ** value) = 0;
    virtual HRESULT __stdcall abi_GetAttestationAsync(Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialAttestationResult> ** value) = 0;
};

struct __declspec(uuid("78aab3a1-a3c1-4103-b6cc-472c44171cbb")) __declspec(novtable) IKeyCredentialAttestationResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CertificateChainBuffer(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall get_AttestationBuffer(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::Security::Credentials::KeyCredentialAttestationStatus * value) = 0;
};

struct __declspec(uuid("6aac468b-0ef1-4ce0-8290-4106da6a63b5")) __declspec(novtable) IKeyCredentialManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_IsSupportedAsync(Windows::Foundation::IAsyncOperation<bool> ** value) = 0;
    virtual HRESULT __stdcall abi_RenewAttestationAsync(Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestCreateAsync(hstring name, winrt::Windows::Security::Credentials::KeyCredentialCreationOption option, Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialRetrievalResult> ** value) = 0;
    virtual HRESULT __stdcall abi_OpenAsync(hstring name, Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialRetrievalResult> ** value) = 0;
    virtual HRESULT __stdcall abi_DeleteAsync(hstring name, Windows::Foundation::IAsyncAction ** operation) = 0;
};

struct __declspec(uuid("f53786c1-5261-4cdd-976d-cc909ac71620")) __declspec(novtable) IKeyCredentialOperationResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Result(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::Security::Credentials::KeyCredentialStatus * value) = 0;
};

struct __declspec(uuid("58cd7703-8d87-4249-9b58-f6598cc9644e")) __declspec(novtable) IKeyCredentialRetrievalResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Credential(Windows::Security::Credentials::IKeyCredential ** value) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::Security::Credentials::KeyCredentialStatus * value) = 0;
};

struct __declspec(uuid("6ab18989-c720-41a7-a6c1-feadb36329a0")) __declspec(novtable) IPasswordCredential : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Resource(hstring * resource) = 0;
    virtual HRESULT __stdcall put_Resource(hstring resource) = 0;
    virtual HRESULT __stdcall get_UserName(hstring * userName) = 0;
    virtual HRESULT __stdcall put_UserName(hstring userName) = 0;
    virtual HRESULT __stdcall get_Password(hstring * password) = 0;
    virtual HRESULT __stdcall put_Password(hstring password) = 0;
    virtual HRESULT __stdcall abi_RetrievePassword() = 0;
    virtual HRESULT __stdcall get_Properties(Windows::Foundation::Collections::IPropertySet ** props) = 0;
};

struct __declspec(uuid("61fd2c0b-c8d4-48c1-a54f-bc5a64205af2")) __declspec(novtable) IPasswordVault : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Add(Windows::Security::Credentials::IPasswordCredential * credential) = 0;
    virtual HRESULT __stdcall abi_Remove(Windows::Security::Credentials::IPasswordCredential * credential) = 0;
    virtual HRESULT __stdcall abi_Retrieve(hstring resource, hstring userName, Windows::Security::Credentials::IPasswordCredential ** credential) = 0;
    virtual HRESULT __stdcall abi_FindAllByResource(hstring resource, Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::PasswordCredential> ** credentials) = 0;
    virtual HRESULT __stdcall abi_FindAllByUserName(hstring userName, Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::PasswordCredential> ** credentials) = 0;
    virtual HRESULT __stdcall abi_RetrieveAll(Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::PasswordCredential> ** credentials) = 0;
};

struct __declspec(uuid("69473eb2-8031-49be-80bb-96cb46d99aba")) __declspec(novtable) IWebAccount : Windows::IInspectable
{
    virtual HRESULT __stdcall get_WebAccountProvider(Windows::Security::Credentials::IWebAccountProvider ** value) = 0;
    virtual HRESULT __stdcall get_UserName(hstring * value) = 0;
    virtual HRESULT __stdcall get_State(winrt::Windows::Security::Credentials::WebAccountState * value) = 0;
};

struct __declspec(uuid("7b56d6f8-990b-4eb5-94a7-5621f3a8b824")) __declspec(novtable) IWebAccount2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_Properties(Windows::Foundation::Collections::IMapView<hstring, hstring> ** value) = 0;
    virtual HRESULT __stdcall abi_GetPictureAsync(winrt::Windows::Security::Credentials::WebAccountPictureSize desizedSize, Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_SignOutAsync(Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_SignOutWithClientIdAsync(hstring clientId, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
};

struct __declspec(uuid("ac9afb39-1de9-4e92-b78f-0581a87f6e5c")) __declspec(novtable) IWebAccountFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateWebAccount(Windows::Security::Credentials::IWebAccountProvider * webAccountProvider, hstring userName, winrt::Windows::Security::Credentials::WebAccountState state, Windows::Security::Credentials::IWebAccount ** instance) = 0;
};

struct __declspec(uuid("29dcc8c3-7ab9-4a7c-a336-b942f9dbf7c7")) __declspec(novtable) IWebAccountProvider : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall get_IconUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
};

struct __declspec(uuid("4a01eb05-4e42-41d4-b518-e008a5163614")) __declspec(novtable) IWebAccountProvider2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DisplayPurpose(hstring * value) = 0;
    virtual HRESULT __stdcall get_Authority(hstring * value) = 0;
};

struct __declspec(uuid("da1c518b-970d-4d49-825c-f2706f8ca7fe")) __declspec(novtable) IWebAccountProvider3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_User(Windows::System::IUser ** user) = 0;
};

struct __declspec(uuid("1d767df1-e1e1-4b9a-a774-5c7c7e3bf371")) __declspec(novtable) IWebAccountProviderFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateWebAccountProvider(hstring id, hstring displayName, Windows::Foundation::IUriRuntimeClass * iconUri, Windows::Security::Credentials::IWebAccountProvider ** instance) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Security::Credentials::KeyCredential> { using default_interface = Windows::Security::Credentials::IKeyCredential; };
template <> struct traits<Windows::Security::Credentials::KeyCredentialAttestationResult> { using default_interface = Windows::Security::Credentials::IKeyCredentialAttestationResult; };
template <> struct traits<Windows::Security::Credentials::KeyCredentialOperationResult> { using default_interface = Windows::Security::Credentials::IKeyCredentialOperationResult; };
template <> struct traits<Windows::Security::Credentials::KeyCredentialRetrievalResult> { using default_interface = Windows::Security::Credentials::IKeyCredentialRetrievalResult; };
template <> struct traits<Windows::Security::Credentials::PasswordCredential> { using default_interface = Windows::Security::Credentials::IPasswordCredential; };
template <> struct traits<Windows::Security::Credentials::PasswordCredentialPropertyStore> { using default_interface = Windows::Foundation::Collections::IPropertySet; };
template <> struct traits<Windows::Security::Credentials::PasswordVault> { using default_interface = Windows::Security::Credentials::IPasswordVault; };
template <> struct traits<Windows::Security::Credentials::WebAccount> { using default_interface = Windows::Security::Credentials::IWebAccount; };
template <> struct traits<Windows::Security::Credentials::WebAccountProvider> { using default_interface = Windows::Security::Credentials::IWebAccountProvider; };

}

namespace Windows::Security::Credentials {

template <typename T> struct impl_ICredentialFactory;
template <typename T> struct impl_IKeyCredential;
template <typename T> struct impl_IKeyCredentialAttestationResult;
template <typename T> struct impl_IKeyCredentialManagerStatics;
template <typename T> struct impl_IKeyCredentialOperationResult;
template <typename T> struct impl_IKeyCredentialRetrievalResult;
template <typename T> struct impl_IPasswordCredential;
template <typename T> struct impl_IPasswordVault;
template <typename T> struct impl_IWebAccount;
template <typename T> struct impl_IWebAccount2;
template <typename T> struct impl_IWebAccountFactory;
template <typename T> struct impl_IWebAccountProvider;
template <typename T> struct impl_IWebAccountProvider2;
template <typename T> struct impl_IWebAccountProvider3;
template <typename T> struct impl_IWebAccountProviderFactory;

}

namespace impl {

template <> struct traits<Windows::Security::Credentials::ICredentialFactory>
{
    using abi = ABI::Windows::Security::Credentials::ICredentialFactory;
    template <typename D> using consume = Windows::Security::Credentials::impl_ICredentialFactory<D>;
};

template <> struct traits<Windows::Security::Credentials::IKeyCredential>
{
    using abi = ABI::Windows::Security::Credentials::IKeyCredential;
    template <typename D> using consume = Windows::Security::Credentials::impl_IKeyCredential<D>;
};

template <> struct traits<Windows::Security::Credentials::IKeyCredentialAttestationResult>
{
    using abi = ABI::Windows::Security::Credentials::IKeyCredentialAttestationResult;
    template <typename D> using consume = Windows::Security::Credentials::impl_IKeyCredentialAttestationResult<D>;
};

template <> struct traits<Windows::Security::Credentials::IKeyCredentialManagerStatics>
{
    using abi = ABI::Windows::Security::Credentials::IKeyCredentialManagerStatics;
    template <typename D> using consume = Windows::Security::Credentials::impl_IKeyCredentialManagerStatics<D>;
};

template <> struct traits<Windows::Security::Credentials::IKeyCredentialOperationResult>
{
    using abi = ABI::Windows::Security::Credentials::IKeyCredentialOperationResult;
    template <typename D> using consume = Windows::Security::Credentials::impl_IKeyCredentialOperationResult<D>;
};

template <> struct traits<Windows::Security::Credentials::IKeyCredentialRetrievalResult>
{
    using abi = ABI::Windows::Security::Credentials::IKeyCredentialRetrievalResult;
    template <typename D> using consume = Windows::Security::Credentials::impl_IKeyCredentialRetrievalResult<D>;
};

template <> struct traits<Windows::Security::Credentials::IPasswordCredential>
{
    using abi = ABI::Windows::Security::Credentials::IPasswordCredential;
    template <typename D> using consume = Windows::Security::Credentials::impl_IPasswordCredential<D>;
};

template <> struct traits<Windows::Security::Credentials::IPasswordVault>
{
    using abi = ABI::Windows::Security::Credentials::IPasswordVault;
    template <typename D> using consume = Windows::Security::Credentials::impl_IPasswordVault<D>;
};

template <> struct traits<Windows::Security::Credentials::IWebAccount>
{
    using abi = ABI::Windows::Security::Credentials::IWebAccount;
    template <typename D> using consume = Windows::Security::Credentials::impl_IWebAccount<D>;
};

template <> struct traits<Windows::Security::Credentials::IWebAccount2>
{
    using abi = ABI::Windows::Security::Credentials::IWebAccount2;
    template <typename D> using consume = Windows::Security::Credentials::impl_IWebAccount2<D>;
};

template <> struct traits<Windows::Security::Credentials::IWebAccountFactory>
{
    using abi = ABI::Windows::Security::Credentials::IWebAccountFactory;
    template <typename D> using consume = Windows::Security::Credentials::impl_IWebAccountFactory<D>;
};

template <> struct traits<Windows::Security::Credentials::IWebAccountProvider>
{
    using abi = ABI::Windows::Security::Credentials::IWebAccountProvider;
    template <typename D> using consume = Windows::Security::Credentials::impl_IWebAccountProvider<D>;
};

template <> struct traits<Windows::Security::Credentials::IWebAccountProvider2>
{
    using abi = ABI::Windows::Security::Credentials::IWebAccountProvider2;
    template <typename D> using consume = Windows::Security::Credentials::impl_IWebAccountProvider2<D>;
};

template <> struct traits<Windows::Security::Credentials::IWebAccountProvider3>
{
    using abi = ABI::Windows::Security::Credentials::IWebAccountProvider3;
    template <typename D> using consume = Windows::Security::Credentials::impl_IWebAccountProvider3<D>;
};

template <> struct traits<Windows::Security::Credentials::IWebAccountProviderFactory>
{
    using abi = ABI::Windows::Security::Credentials::IWebAccountProviderFactory;
    template <typename D> using consume = Windows::Security::Credentials::impl_IWebAccountProviderFactory<D>;
};

template <> struct traits<Windows::Security::Credentials::KeyCredential>
{
    using abi = ABI::Windows::Security::Credentials::KeyCredential;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Credentials.KeyCredential"; }
};

template <> struct traits<Windows::Security::Credentials::KeyCredentialAttestationResult>
{
    using abi = ABI::Windows::Security::Credentials::KeyCredentialAttestationResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Credentials.KeyCredentialAttestationResult"; }
};

template <> struct traits<Windows::Security::Credentials::KeyCredentialManager>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Credentials.KeyCredentialManager"; }
};

template <> struct traits<Windows::Security::Credentials::KeyCredentialOperationResult>
{
    using abi = ABI::Windows::Security::Credentials::KeyCredentialOperationResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Credentials.KeyCredentialOperationResult"; }
};

template <> struct traits<Windows::Security::Credentials::KeyCredentialRetrievalResult>
{
    using abi = ABI::Windows::Security::Credentials::KeyCredentialRetrievalResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Credentials.KeyCredentialRetrievalResult"; }
};

template <> struct traits<Windows::Security::Credentials::PasswordCredential>
{
    using abi = ABI::Windows::Security::Credentials::PasswordCredential;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Credentials.PasswordCredential"; }
};

template <> struct traits<Windows::Security::Credentials::PasswordCredentialPropertyStore>
{
    using abi = ABI::Windows::Security::Credentials::PasswordCredentialPropertyStore;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Credentials.PasswordCredentialPropertyStore"; }
};

template <> struct traits<Windows::Security::Credentials::PasswordVault>
{
    using abi = ABI::Windows::Security::Credentials::PasswordVault;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Credentials.PasswordVault"; }
};

template <> struct traits<Windows::Security::Credentials::WebAccount>
{
    using abi = ABI::Windows::Security::Credentials::WebAccount;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Credentials.WebAccount"; }
};

template <> struct traits<Windows::Security::Credentials::WebAccountProvider>
{
    using abi = ABI::Windows::Security::Credentials::WebAccountProvider;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Credentials.WebAccountProvider"; }
};

}

}
