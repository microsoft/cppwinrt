// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct IPropertySet;

}

WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::Core {

enum class CryptographicPublicKeyBlobType;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;
struct IRandomAccessStream;

}

WINRT_EXPORT namespace winrt::Windows::System {

struct User;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct IPropertySet;

}

WINRT_EXPORT namespace winrt::Windows::Security::Credentials {

enum class KeyCredentialAttestationStatus
{
    Success = 0,
    UnknownError = 1,
    NotSupported = 2,
    TemporaryFailure = 3,
};

enum class KeyCredentialCreationOption
{
    ReplaceExisting = 0,
    FailIfExists = 1,
};

enum class KeyCredentialStatus
{
    Success = 0,
    UnknownError = 1,
    NotFound = 2,
    UserCanceled = 3,
    UserPrefersPassword = 4,
    CredentialAlreadyExists = 5,
    SecurityDeviceLocked = 6,
};

enum class WebAccountPictureSize
{
    Size64x64 = 64,
    Size208x208 = 208,
    Size424x424 = 424,
    Size1080x1080 = 1080,
};

enum class WebAccountState
{
    None = 0,
    Connected = 1,
    Error = 2,
};

struct ICredentialFactory;
struct IKeyCredential;
struct IKeyCredentialAttestationResult;
struct IKeyCredentialManagerStatics;
struct IKeyCredentialOperationResult;
struct IKeyCredentialRetrievalResult;
struct IPasswordCredential;
struct IPasswordVault;
struct IWebAccount;
struct IWebAccount2;
struct IWebAccountFactory;
struct IWebAccountProvider;
struct IWebAccountProvider2;
struct IWebAccountProvider3;
struct IWebAccountProviderFactory;
struct KeyCredential;
struct KeyCredentialAttestationResult;
struct KeyCredentialManager;
struct KeyCredentialOperationResult;
struct KeyCredentialRetrievalResult;
struct PasswordCredential;
struct PasswordCredentialPropertyStore;
struct PasswordVault;
struct WebAccount;
struct WebAccountProvider;

}

namespace winrt::impl {

template <> struct category<Windows::Security::Credentials::ICredentialFactory>{ using type = interface_category; };
template <> struct category<Windows::Security::Credentials::IKeyCredential>{ using type = interface_category; };
template <> struct category<Windows::Security::Credentials::IKeyCredentialAttestationResult>{ using type = interface_category; };
template <> struct category<Windows::Security::Credentials::IKeyCredentialManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Credentials::IKeyCredentialOperationResult>{ using type = interface_category; };
template <> struct category<Windows::Security::Credentials::IKeyCredentialRetrievalResult>{ using type = interface_category; };
template <> struct category<Windows::Security::Credentials::IPasswordCredential>{ using type = interface_category; };
template <> struct category<Windows::Security::Credentials::IPasswordVault>{ using type = interface_category; };
template <> struct category<Windows::Security::Credentials::IWebAccount>{ using type = interface_category; };
template <> struct category<Windows::Security::Credentials::IWebAccount2>{ using type = interface_category; };
template <> struct category<Windows::Security::Credentials::IWebAccountFactory>{ using type = interface_category; };
template <> struct category<Windows::Security::Credentials::IWebAccountProvider>{ using type = interface_category; };
template <> struct category<Windows::Security::Credentials::IWebAccountProvider2>{ using type = interface_category; };
template <> struct category<Windows::Security::Credentials::IWebAccountProvider3>{ using type = interface_category; };
template <> struct category<Windows::Security::Credentials::IWebAccountProviderFactory>{ using type = interface_category; };
template <> struct category<Windows::Security::Credentials::KeyCredential>{ using type = class_category; };
template <> struct category<Windows::Security::Credentials::KeyCredentialAttestationResult>{ using type = class_category; };
template <> struct category<Windows::Security::Credentials::KeyCredentialManager>{ using type = class_category; };
template <> struct category<Windows::Security::Credentials::KeyCredentialOperationResult>{ using type = class_category; };
template <> struct category<Windows::Security::Credentials::KeyCredentialRetrievalResult>{ using type = class_category; };
template <> struct category<Windows::Security::Credentials::PasswordCredential>{ using type = class_category; };
template <> struct category<Windows::Security::Credentials::PasswordCredentialPropertyStore>{ using type = class_category; };
template <> struct category<Windows::Security::Credentials::PasswordVault>{ using type = class_category; };
template <> struct category<Windows::Security::Credentials::WebAccount>{ using type = class_category; };
template <> struct category<Windows::Security::Credentials::WebAccountProvider>{ using type = class_category; };
template <> struct category<Windows::Security::Credentials::KeyCredentialAttestationStatus>{ using type = enum_category; };
template <> struct category<Windows::Security::Credentials::KeyCredentialCreationOption>{ using type = enum_category; };
template <> struct category<Windows::Security::Credentials::KeyCredentialStatus>{ using type = enum_category; };
template <> struct category<Windows::Security::Credentials::WebAccountPictureSize>{ using type = enum_category; };
template <> struct category<Windows::Security::Credentials::WebAccountState>{ using type = enum_category; };
template <> struct name<Windows::Security::Credentials::ICredentialFactory>{ static constexpr auto & value{ L"Windows.Security.Credentials.ICredentialFactory" }; };
template <> struct name<Windows::Security::Credentials::IKeyCredential>{ static constexpr auto & value{ L"Windows.Security.Credentials.IKeyCredential" }; };
template <> struct name<Windows::Security::Credentials::IKeyCredentialAttestationResult>{ static constexpr auto & value{ L"Windows.Security.Credentials.IKeyCredentialAttestationResult" }; };
template <> struct name<Windows::Security::Credentials::IKeyCredentialManagerStatics>{ static constexpr auto & value{ L"Windows.Security.Credentials.IKeyCredentialManagerStatics" }; };
template <> struct name<Windows::Security::Credentials::IKeyCredentialOperationResult>{ static constexpr auto & value{ L"Windows.Security.Credentials.IKeyCredentialOperationResult" }; };
template <> struct name<Windows::Security::Credentials::IKeyCredentialRetrievalResult>{ static constexpr auto & value{ L"Windows.Security.Credentials.IKeyCredentialRetrievalResult" }; };
template <> struct name<Windows::Security::Credentials::IPasswordCredential>{ static constexpr auto & value{ L"Windows.Security.Credentials.IPasswordCredential" }; };
template <> struct name<Windows::Security::Credentials::IPasswordVault>{ static constexpr auto & value{ L"Windows.Security.Credentials.IPasswordVault" }; };
template <> struct name<Windows::Security::Credentials::IWebAccount>{ static constexpr auto & value{ L"Windows.Security.Credentials.IWebAccount" }; };
template <> struct name<Windows::Security::Credentials::IWebAccount2>{ static constexpr auto & value{ L"Windows.Security.Credentials.IWebAccount2" }; };
template <> struct name<Windows::Security::Credentials::IWebAccountFactory>{ static constexpr auto & value{ L"Windows.Security.Credentials.IWebAccountFactory" }; };
template <> struct name<Windows::Security::Credentials::IWebAccountProvider>{ static constexpr auto & value{ L"Windows.Security.Credentials.IWebAccountProvider" }; };
template <> struct name<Windows::Security::Credentials::IWebAccountProvider2>{ static constexpr auto & value{ L"Windows.Security.Credentials.IWebAccountProvider2" }; };
template <> struct name<Windows::Security::Credentials::IWebAccountProvider3>{ static constexpr auto & value{ L"Windows.Security.Credentials.IWebAccountProvider3" }; };
template <> struct name<Windows::Security::Credentials::IWebAccountProviderFactory>{ static constexpr auto & value{ L"Windows.Security.Credentials.IWebAccountProviderFactory" }; };
template <> struct name<Windows::Security::Credentials::KeyCredential>{ static constexpr auto & value{ L"Windows.Security.Credentials.KeyCredential" }; };
template <> struct name<Windows::Security::Credentials::KeyCredentialAttestationResult>{ static constexpr auto & value{ L"Windows.Security.Credentials.KeyCredentialAttestationResult" }; };
template <> struct name<Windows::Security::Credentials::KeyCredentialManager>{ static constexpr auto & value{ L"Windows.Security.Credentials.KeyCredentialManager" }; };
template <> struct name<Windows::Security::Credentials::KeyCredentialOperationResult>{ static constexpr auto & value{ L"Windows.Security.Credentials.KeyCredentialOperationResult" }; };
template <> struct name<Windows::Security::Credentials::KeyCredentialRetrievalResult>{ static constexpr auto & value{ L"Windows.Security.Credentials.KeyCredentialRetrievalResult" }; };
template <> struct name<Windows::Security::Credentials::PasswordCredential>{ static constexpr auto & value{ L"Windows.Security.Credentials.PasswordCredential" }; };
template <> struct name<Windows::Security::Credentials::PasswordCredentialPropertyStore>{ static constexpr auto & value{ L"Windows.Security.Credentials.PasswordCredentialPropertyStore" }; };
template <> struct name<Windows::Security::Credentials::PasswordVault>{ static constexpr auto & value{ L"Windows.Security.Credentials.PasswordVault" }; };
template <> struct name<Windows::Security::Credentials::WebAccount>{ static constexpr auto & value{ L"Windows.Security.Credentials.WebAccount" }; };
template <> struct name<Windows::Security::Credentials::WebAccountProvider>{ static constexpr auto & value{ L"Windows.Security.Credentials.WebAccountProvider" }; };
template <> struct name<Windows::Security::Credentials::KeyCredentialAttestationStatus>{ static constexpr auto & value{ L"Windows.Security.Credentials.KeyCredentialAttestationStatus" }; };
template <> struct name<Windows::Security::Credentials::KeyCredentialCreationOption>{ static constexpr auto & value{ L"Windows.Security.Credentials.KeyCredentialCreationOption" }; };
template <> struct name<Windows::Security::Credentials::KeyCredentialStatus>{ static constexpr auto & value{ L"Windows.Security.Credentials.KeyCredentialStatus" }; };
template <> struct name<Windows::Security::Credentials::WebAccountPictureSize>{ static constexpr auto & value{ L"Windows.Security.Credentials.WebAccountPictureSize" }; };
template <> struct name<Windows::Security::Credentials::WebAccountState>{ static constexpr auto & value{ L"Windows.Security.Credentials.WebAccountState" }; };
template <> struct guid<Windows::Security::Credentials::ICredentialFactory>{ static constexpr GUID value{ 0x54EF13A1,0xBF26,0x47B5,{ 0x97,0xDD,0xDE,0x77,0x9B,0x7C,0xAD,0x58 } }; };
template <> struct guid<Windows::Security::Credentials::IKeyCredential>{ static constexpr GUID value{ 0x9585EF8D,0x457B,0x4847,{ 0xB1,0x1A,0xFA,0x96,0x0B,0xBD,0xB1,0x38 } }; };
template <> struct guid<Windows::Security::Credentials::IKeyCredentialAttestationResult>{ static constexpr GUID value{ 0x78AAB3A1,0xA3C1,0x4103,{ 0xB6,0xCC,0x47,0x2C,0x44,0x17,0x1C,0xBB } }; };
template <> struct guid<Windows::Security::Credentials::IKeyCredentialManagerStatics>{ static constexpr GUID value{ 0x6AAC468B,0x0EF1,0x4CE0,{ 0x82,0x90,0x41,0x06,0xDA,0x6A,0x63,0xB5 } }; };
template <> struct guid<Windows::Security::Credentials::IKeyCredentialOperationResult>{ static constexpr GUID value{ 0xF53786C1,0x5261,0x4CDD,{ 0x97,0x6D,0xCC,0x90,0x9A,0xC7,0x16,0x20 } }; };
template <> struct guid<Windows::Security::Credentials::IKeyCredentialRetrievalResult>{ static constexpr GUID value{ 0x58CD7703,0x8D87,0x4249,{ 0x9B,0x58,0xF6,0x59,0x8C,0xC9,0x64,0x4E } }; };
template <> struct guid<Windows::Security::Credentials::IPasswordCredential>{ static constexpr GUID value{ 0x6AB18989,0xC720,0x41A7,{ 0xA6,0xC1,0xFE,0xAD,0xB3,0x63,0x29,0xA0 } }; };
template <> struct guid<Windows::Security::Credentials::IPasswordVault>{ static constexpr GUID value{ 0x61FD2C0B,0xC8D4,0x48C1,{ 0xA5,0x4F,0xBC,0x5A,0x64,0x20,0x5A,0xF2 } }; };
template <> struct guid<Windows::Security::Credentials::IWebAccount>{ static constexpr GUID value{ 0x69473EB2,0x8031,0x49BE,{ 0x80,0xBB,0x96,0xCB,0x46,0xD9,0x9A,0xBA } }; };
template <> struct guid<Windows::Security::Credentials::IWebAccount2>{ static constexpr GUID value{ 0x7B56D6F8,0x990B,0x4EB5,{ 0x94,0xA7,0x56,0x21,0xF3,0xA8,0xB8,0x24 } }; };
template <> struct guid<Windows::Security::Credentials::IWebAccountFactory>{ static constexpr GUID value{ 0xAC9AFB39,0x1DE9,0x4E92,{ 0xB7,0x8F,0x05,0x81,0xA8,0x7F,0x6E,0x5C } }; };
template <> struct guid<Windows::Security::Credentials::IWebAccountProvider>{ static constexpr GUID value{ 0x29DCC8C3,0x7AB9,0x4A7C,{ 0xA3,0x36,0xB9,0x42,0xF9,0xDB,0xF7,0xC7 } }; };
template <> struct guid<Windows::Security::Credentials::IWebAccountProvider2>{ static constexpr GUID value{ 0x4A01EB05,0x4E42,0x41D4,{ 0xB5,0x18,0xE0,0x08,0xA5,0x16,0x36,0x14 } }; };
template <> struct guid<Windows::Security::Credentials::IWebAccountProvider3>{ static constexpr GUID value{ 0xDA1C518B,0x970D,0x4D49,{ 0x82,0x5C,0xF2,0x70,0x6F,0x8C,0xA7,0xFE } }; };
template <> struct guid<Windows::Security::Credentials::IWebAccountProviderFactory>{ static constexpr GUID value{ 0x1D767DF1,0xE1E1,0x4B9A,{ 0xA7,0x74,0x5C,0x7C,0x7E,0x3B,0xF3,0x71 } }; };
template <> struct default_interface<Windows::Security::Credentials::KeyCredential>{ using type = Windows::Security::Credentials::IKeyCredential; };
template <> struct default_interface<Windows::Security::Credentials::KeyCredentialAttestationResult>{ using type = Windows::Security::Credentials::IKeyCredentialAttestationResult; };
template <> struct default_interface<Windows::Security::Credentials::KeyCredentialOperationResult>{ using type = Windows::Security::Credentials::IKeyCredentialOperationResult; };
template <> struct default_interface<Windows::Security::Credentials::KeyCredentialRetrievalResult>{ using type = Windows::Security::Credentials::IKeyCredentialRetrievalResult; };
template <> struct default_interface<Windows::Security::Credentials::PasswordCredential>{ using type = Windows::Security::Credentials::IPasswordCredential; };
template <> struct default_interface<Windows::Security::Credentials::PasswordCredentialPropertyStore>{ using type = Windows::Foundation::Collections::IPropertySet; };
template <> struct default_interface<Windows::Security::Credentials::PasswordVault>{ using type = Windows::Security::Credentials::IPasswordVault; };
template <> struct default_interface<Windows::Security::Credentials::WebAccount>{ using type = Windows::Security::Credentials::IWebAccount; };
template <> struct default_interface<Windows::Security::Credentials::WebAccountProvider>{ using type = Windows::Security::Credentials::IWebAccountProvider; };

template <typename D>
struct consume_Windows_Security_Credentials_ICredentialFactory
{
    Windows::Security::Credentials::PasswordCredential CreatePasswordCredential(param::hstring const& resource, param::hstring const& userName, param::hstring const& password) const;
};
template <> struct consume<Windows::Security::Credentials::ICredentialFactory> { template <typename D> using type = consume_Windows_Security_Credentials_ICredentialFactory<D>; };

template <typename D>
struct consume_Windows_Security_Credentials_IKeyCredential
{
    hstring Name() const;
    Windows::Storage::Streams::IBuffer RetrievePublicKey() const;
    Windows::Storage::Streams::IBuffer RetrievePublicKey(Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType const& blobType) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialOperationResult> RequestSignAsync(Windows::Storage::Streams::IBuffer const& data) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialAttestationResult> GetAttestationAsync() const;
};
template <> struct consume<Windows::Security::Credentials::IKeyCredential> { template <typename D> using type = consume_Windows_Security_Credentials_IKeyCredential<D>; };

template <typename D>
struct consume_Windows_Security_Credentials_IKeyCredentialAttestationResult
{
    Windows::Storage::Streams::IBuffer CertificateChainBuffer() const;
    Windows::Storage::Streams::IBuffer AttestationBuffer() const;
    Windows::Security::Credentials::KeyCredentialAttestationStatus Status() const;
};
template <> struct consume<Windows::Security::Credentials::IKeyCredentialAttestationResult> { template <typename D> using type = consume_Windows_Security_Credentials_IKeyCredentialAttestationResult<D>; };

template <typename D>
struct consume_Windows_Security_Credentials_IKeyCredentialManagerStatics
{
    Windows::Foundation::IAsyncOperation<bool> IsSupportedAsync() const;
    Windows::Foundation::IAsyncAction RenewAttestationAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialRetrievalResult> RequestCreateAsync(param::hstring const& name, Windows::Security::Credentials::KeyCredentialCreationOption const& option) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialRetrievalResult> OpenAsync(param::hstring const& name) const;
    Windows::Foundation::IAsyncAction DeleteAsync(param::hstring const& name) const;
};
template <> struct consume<Windows::Security::Credentials::IKeyCredentialManagerStatics> { template <typename D> using type = consume_Windows_Security_Credentials_IKeyCredentialManagerStatics<D>; };

template <typename D>
struct consume_Windows_Security_Credentials_IKeyCredentialOperationResult
{
    Windows::Storage::Streams::IBuffer Result() const;
    Windows::Security::Credentials::KeyCredentialStatus Status() const;
};
template <> struct consume<Windows::Security::Credentials::IKeyCredentialOperationResult> { template <typename D> using type = consume_Windows_Security_Credentials_IKeyCredentialOperationResult<D>; };

template <typename D>
struct consume_Windows_Security_Credentials_IKeyCredentialRetrievalResult
{
    Windows::Security::Credentials::KeyCredential Credential() const;
    Windows::Security::Credentials::KeyCredentialStatus Status() const;
};
template <> struct consume<Windows::Security::Credentials::IKeyCredentialRetrievalResult> { template <typename D> using type = consume_Windows_Security_Credentials_IKeyCredentialRetrievalResult<D>; };

template <typename D>
struct consume_Windows_Security_Credentials_IPasswordCredential
{
    hstring Resource() const;
    void Resource(param::hstring const& resource) const;
    hstring UserName() const;
    void UserName(param::hstring const& userName) const;
    hstring Password() const;
    void Password(param::hstring const& password) const;
    void RetrievePassword() const;
    Windows::Foundation::Collections::IPropertySet Properties() const;
};
template <> struct consume<Windows::Security::Credentials::IPasswordCredential> { template <typename D> using type = consume_Windows_Security_Credentials_IPasswordCredential<D>; };

template <typename D>
struct consume_Windows_Security_Credentials_IPasswordVault
{
    void Add(Windows::Security::Credentials::PasswordCredential const& credential) const;
    void Remove(Windows::Security::Credentials::PasswordCredential const& credential) const;
    Windows::Security::Credentials::PasswordCredential Retrieve(param::hstring const& resource, param::hstring const& userName) const;
    Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::PasswordCredential> FindAllByResource(param::hstring const& resource) const;
    Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::PasswordCredential> FindAllByUserName(param::hstring const& userName) const;
    Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::PasswordCredential> RetrieveAll() const;
};
template <> struct consume<Windows::Security::Credentials::IPasswordVault> { template <typename D> using type = consume_Windows_Security_Credentials_IPasswordVault<D>; };

template <typename D>
struct consume_Windows_Security_Credentials_IWebAccount
{
    Windows::Security::Credentials::WebAccountProvider WebAccountProvider() const;
    hstring UserName() const;
    Windows::Security::Credentials::WebAccountState State() const;
};
template <> struct consume<Windows::Security::Credentials::IWebAccount> { template <typename D> using type = consume_Windows_Security_Credentials_IWebAccount<D>; };

template <typename D>
struct consume_Windows_Security_Credentials_IWebAccount2
{
    hstring Id() const;
    Windows::Foundation::Collections::IMapView<hstring, hstring> Properties() const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> GetPictureAsync(Windows::Security::Credentials::WebAccountPictureSize const& desizedSize) const;
    Windows::Foundation::IAsyncAction SignOutAsync() const;
    Windows::Foundation::IAsyncAction SignOutAsync(param::hstring const& clientId) const;
};
template <> struct consume<Windows::Security::Credentials::IWebAccount2> { template <typename D> using type = consume_Windows_Security_Credentials_IWebAccount2<D>; };

template <typename D>
struct consume_Windows_Security_Credentials_IWebAccountFactory
{
    Windows::Security::Credentials::WebAccount CreateWebAccount(Windows::Security::Credentials::WebAccountProvider const& webAccountProvider, param::hstring const& userName, Windows::Security::Credentials::WebAccountState const& state) const;
};
template <> struct consume<Windows::Security::Credentials::IWebAccountFactory> { template <typename D> using type = consume_Windows_Security_Credentials_IWebAccountFactory<D>; };

template <typename D>
struct consume_Windows_Security_Credentials_IWebAccountProvider
{
    hstring Id() const;
    hstring DisplayName() const;
    [[deprecated("IconUri may be altered or unavailable for releases after Windows 8.2. Instead, use Icon.")]] Windows::Foundation::Uri IconUri() const;
};
template <> struct consume<Windows::Security::Credentials::IWebAccountProvider> { template <typename D> using type = consume_Windows_Security_Credentials_IWebAccountProvider<D>; };

template <typename D>
struct consume_Windows_Security_Credentials_IWebAccountProvider2
{
    hstring DisplayPurpose() const;
    hstring Authority() const;
};
template <> struct consume<Windows::Security::Credentials::IWebAccountProvider2> { template <typename D> using type = consume_Windows_Security_Credentials_IWebAccountProvider2<D>; };

template <typename D>
struct consume_Windows_Security_Credentials_IWebAccountProvider3
{
    Windows::System::User User() const;
};
template <> struct consume<Windows::Security::Credentials::IWebAccountProvider3> { template <typename D> using type = consume_Windows_Security_Credentials_IWebAccountProvider3<D>; };

template <typename D>
struct consume_Windows_Security_Credentials_IWebAccountProviderFactory
{
    Windows::Security::Credentials::WebAccountProvider CreateWebAccountProvider(param::hstring const& id, param::hstring const& displayName, Windows::Foundation::Uri const& iconUri) const;
};
template <> struct consume<Windows::Security::Credentials::IWebAccountProviderFactory> { template <typename D> using type = consume_Windows_Security_Credentials_IWebAccountProviderFactory<D>; };

template <> struct abi<Windows::Security::Credentials::ICredentialFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreatePasswordCredential(HSTRING resource, HSTRING userName, HSTRING password, ::IUnknown** credential) = 0;
};};

template <> struct abi<Windows::Security::Credentials::IKeyCredential>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall RetrievePublicKeyWithDefaultBlobType(::IUnknown** value) = 0;
    virtual HRESULT __stdcall RetrievePublicKeyWithBlobType(abi_t<Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType> blobType, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall RequestSignAsync(::IUnknown* data, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetAttestationAsync(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Credentials::IKeyCredentialAttestationResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CertificateChainBuffer(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AttestationBuffer(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Security::Credentials::KeyCredentialAttestationStatus>* value) = 0;
};};

template <> struct abi<Windows::Security::Credentials::IKeyCredentialManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsSupportedAsync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall RenewAttestationAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestCreateAsync(HSTRING name, abi_t<Windows::Security::Credentials::KeyCredentialCreationOption> option, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall OpenAsync(HSTRING name, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall DeleteAsync(HSTRING name, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Security::Credentials::IKeyCredentialOperationResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Result(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Security::Credentials::KeyCredentialStatus>* value) = 0;
};};

template <> struct abi<Windows::Security::Credentials::IKeyCredentialRetrievalResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Credential(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Security::Credentials::KeyCredentialStatus>* value) = 0;
};};

template <> struct abi<Windows::Security::Credentials::IPasswordCredential>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Resource(HSTRING* resource) = 0;
    virtual HRESULT __stdcall put_Resource(HSTRING resource) = 0;
    virtual HRESULT __stdcall get_UserName(HSTRING* userName) = 0;
    virtual HRESULT __stdcall put_UserName(HSTRING userName) = 0;
    virtual HRESULT __stdcall get_Password(HSTRING* password) = 0;
    virtual HRESULT __stdcall put_Password(HSTRING password) = 0;
    virtual HRESULT __stdcall RetrievePassword() = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** props) = 0;
};};

template <> struct abi<Windows::Security::Credentials::IPasswordVault>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Add(::IUnknown* credential) = 0;
    virtual HRESULT __stdcall Remove(::IUnknown* credential) = 0;
    virtual HRESULT __stdcall Retrieve(HSTRING resource, HSTRING userName, ::IUnknown** credential) = 0;
    virtual HRESULT __stdcall FindAllByResource(HSTRING resource, ::IUnknown** credentials) = 0;
    virtual HRESULT __stdcall FindAllByUserName(HSTRING userName, ::IUnknown** credentials) = 0;
    virtual HRESULT __stdcall RetrieveAll(::IUnknown** credentials) = 0;
};};

template <> struct abi<Windows::Security::Credentials::IWebAccount>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_WebAccountProvider(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_UserName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_State(abi_t<Windows::Security::Credentials::WebAccountState>* value) = 0;
};};

template <> struct abi<Windows::Security::Credentials::IWebAccount2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetPictureAsync(abi_t<Windows::Security::Credentials::WebAccountPictureSize> desizedSize, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall SignOutAsync(::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall SignOutWithClientIdAsync(HSTRING clientId, ::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Security::Credentials::IWebAccountFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWebAccount(::IUnknown* webAccountProvider, HSTRING userName, abi_t<Windows::Security::Credentials::WebAccountState> state, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::Security::Credentials::IWebAccountProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IconUri(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Credentials::IWebAccountProvider2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayPurpose(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Authority(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Security::Credentials::IWebAccountProvider3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_User(::IUnknown** user) = 0;
};};

template <> struct abi<Windows::Security::Credentials::IWebAccountProviderFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWebAccountProvider(HSTRING id, HSTRING displayName, ::IUnknown* iconUri, ::IUnknown** instance) = 0;
};};

}
