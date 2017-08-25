// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Security.Credentials.UI.2.h"
#include "winrt/Windows.Security.Credentials.h"

namespace winrt::impl {

template <typename D> void consume_Windows_Security_Credentials_UI_ICredentialPickerOptions<D>::Caption(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerOptions)->put_Caption(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Credentials_UI_ICredentialPickerOptions<D>::Caption() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerOptions)->get_Caption(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Credentials_UI_ICredentialPickerOptions<D>::Message(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerOptions)->put_Message(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Credentials_UI_ICredentialPickerOptions<D>::Message() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerOptions)->get_Message(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Credentials_UI_ICredentialPickerOptions<D>::ErrorCode(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerOptions)->put_ErrorCode(value));
}

template <typename D> uint32_t consume_Windows_Security_Credentials_UI_ICredentialPickerOptions<D>::ErrorCode() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerOptions)->get_ErrorCode(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Credentials_UI_ICredentialPickerOptions<D>::TargetName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerOptions)->put_TargetName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Credentials_UI_ICredentialPickerOptions<D>::TargetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerOptions)->get_TargetName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Credentials_UI_ICredentialPickerOptions<D>::AuthenticationProtocol(Windows::Security::Credentials::UI::AuthenticationProtocol const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerOptions)->put_AuthenticationProtocol(get_abi(value)));
}

template <typename D> Windows::Security::Credentials::UI::AuthenticationProtocol consume_Windows_Security_Credentials_UI_ICredentialPickerOptions<D>::AuthenticationProtocol() const
{
    Windows::Security::Credentials::UI::AuthenticationProtocol value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerOptions)->get_AuthenticationProtocol(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Credentials_UI_ICredentialPickerOptions<D>::CustomAuthenticationProtocol(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerOptions)->put_CustomAuthenticationProtocol(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Credentials_UI_ICredentialPickerOptions<D>::CustomAuthenticationProtocol() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerOptions)->get_CustomAuthenticationProtocol(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Credentials_UI_ICredentialPickerOptions<D>::PreviousCredential(Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerOptions)->put_PreviousCredential(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Credentials_UI_ICredentialPickerOptions<D>::PreviousCredential() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerOptions)->get_PreviousCredential(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Credentials_UI_ICredentialPickerOptions<D>::AlwaysDisplayDialog(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerOptions)->put_AlwaysDisplayDialog(value));
}

template <typename D> bool consume_Windows_Security_Credentials_UI_ICredentialPickerOptions<D>::AlwaysDisplayDialog() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerOptions)->get_AlwaysDisplayDialog(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Credentials_UI_ICredentialPickerOptions<D>::CallerSavesCredential(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerOptions)->put_CallerSavesCredential(value));
}

template <typename D> bool consume_Windows_Security_Credentials_UI_ICredentialPickerOptions<D>::CallerSavesCredential() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerOptions)->get_CallerSavesCredential(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Credentials_UI_ICredentialPickerOptions<D>::CredentialSaveOption(Windows::Security::Credentials::UI::CredentialSaveOption const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerOptions)->put_CredentialSaveOption(get_abi(value)));
}

template <typename D> Windows::Security::Credentials::UI::CredentialSaveOption consume_Windows_Security_Credentials_UI_ICredentialPickerOptions<D>::CredentialSaveOption() const
{
    Windows::Security::Credentials::UI::CredentialSaveOption value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerOptions)->get_CredentialSaveOption(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Security_Credentials_UI_ICredentialPickerResults<D>::ErrorCode() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerResults)->get_ErrorCode(&value));
    return value;
}

template <typename D> Windows::Security::Credentials::UI::CredentialSaveOption consume_Windows_Security_Credentials_UI_ICredentialPickerResults<D>::CredentialSaveOption() const
{
    Windows::Security::Credentials::UI::CredentialSaveOption value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerResults)->get_CredentialSaveOption(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Security_Credentials_UI_ICredentialPickerResults<D>::CredentialSaved() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerResults)->get_CredentialSaved(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Credentials_UI_ICredentialPickerResults<D>::Credential() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerResults)->get_Credential(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Credentials_UI_ICredentialPickerResults<D>::CredentialDomainName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerResults)->get_CredentialDomainName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Credentials_UI_ICredentialPickerResults<D>::CredentialUserName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerResults)->get_CredentialUserName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Credentials_UI_ICredentialPickerResults<D>::CredentialPassword() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerResults)->get_CredentialPassword(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> consume_Windows_Security_Credentials_UI_ICredentialPickerStatics<D>::PickAsync(Windows::Security::Credentials::UI::CredentialPickerOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerStatics)->PickWithOptionsAsync(get_abi(options), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> consume_Windows_Security_Credentials_UI_ICredentialPickerStatics<D>::PickAsync(param::hstring const& targetName, param::hstring const& message) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerStatics)->PickWithMessageAsync(get_abi(targetName), get_abi(message), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> consume_Windows_Security_Credentials_UI_ICredentialPickerStatics<D>::PickAsync(param::hstring const& targetName, param::hstring const& message, param::hstring const& caption) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::ICredentialPickerStatics)->PickWithCaptionAsync(get_abi(targetName), get_abi(message), get_abi(caption), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::UserConsentVerifierAvailability> consume_Windows_Security_Credentials_UI_IUserConsentVerifierStatics<D>::CheckAvailabilityAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::UserConsentVerifierAvailability> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::IUserConsentVerifierStatics)->CheckAvailabilityAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::UserConsentVerificationResult> consume_Windows_Security_Credentials_UI_IUserConsentVerifierStatics<D>::RequestVerificationAsync(param::hstring const& message) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::UserConsentVerificationResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Credentials::UI::IUserConsentVerifierStatics)->RequestVerificationAsync(get_abi(message), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Security::Credentials::UI::ICredentialPickerOptions> : produce_base<D, Windows::Security::Credentials::UI::ICredentialPickerOptions>
{
    HRESULT __stdcall put_Caption(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Caption(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Caption(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Caption());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Message(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Message(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ErrorCode(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ErrorCode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AuthenticationProtocol(abi_t<Windows::Security::Credentials::UI::AuthenticationProtocol> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthenticationProtocol(*reinterpret_cast<Windows::Security::Credentials::UI::AuthenticationProtocol const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationProtocol(abi_t<Windows::Security::Credentials::UI::AuthenticationProtocol>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AuthenticationProtocol());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CustomAuthenticationProtocol(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomAuthenticationProtocol(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomAuthenticationProtocol(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CustomAuthenticationProtocol());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PreviousCredential(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreviousCredential(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreviousCredential(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreviousCredential());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlwaysDisplayDialog(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlwaysDisplayDialog(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlwaysDisplayDialog(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlwaysDisplayDialog());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CallerSavesCredential(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CallerSavesCredential(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CallerSavesCredential(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CallerSavesCredential());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CredentialSaveOption(abi_t<Windows::Security::Credentials::UI::CredentialSaveOption> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CredentialSaveOption(*reinterpret_cast<Windows::Security::Credentials::UI::CredentialSaveOption const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CredentialSaveOption(abi_t<Windows::Security::Credentials::UI::CredentialSaveOption>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CredentialSaveOption());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Credentials::UI::ICredentialPickerResults> : produce_base<D, Windows::Security::Credentials::UI::ICredentialPickerResults>
{
    HRESULT __stdcall get_ErrorCode(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CredentialSaveOption(abi_t<Windows::Security::Credentials::UI::CredentialSaveOption>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CredentialSaveOption());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CredentialSaved(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CredentialSaved());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_CredentialDomainName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CredentialDomainName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CredentialUserName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CredentialUserName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CredentialPassword(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CredentialPassword());
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
struct produce<D, Windows::Security::Credentials::UI::ICredentialPickerStatics> : produce_base<D, Windows::Security::Credentials::UI::ICredentialPickerStatics>
{
    HRESULT __stdcall PickWithOptionsAsync(::IUnknown* options, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PickAsync(*reinterpret_cast<Windows::Security::Credentials::UI::CredentialPickerOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PickWithMessageAsync(HSTRING targetName, HSTRING message, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PickAsync(*reinterpret_cast<hstring const*>(&targetName), *reinterpret_cast<hstring const*>(&message)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PickWithCaptionAsync(HSTRING targetName, HSTRING message, HSTRING caption, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PickAsync(*reinterpret_cast<hstring const*>(&targetName), *reinterpret_cast<hstring const*>(&message), *reinterpret_cast<hstring const*>(&caption)));
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
struct produce<D, Windows::Security::Credentials::UI::IUserConsentVerifierStatics> : produce_base<D, Windows::Security::Credentials::UI::IUserConsentVerifierStatics>
{
    HRESULT __stdcall CheckAvailabilityAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CheckAvailabilityAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestVerificationAsync(HSTRING message, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestVerificationAsync(*reinterpret_cast<hstring const*>(&message)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Security::Credentials::UI {

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> CredentialPicker::PickAsync(Windows::Security::Credentials::UI::CredentialPickerOptions const& options)
{
    return get_activation_factory<CredentialPicker, Windows::Security::Credentials::UI::ICredentialPickerStatics>().PickAsync(options);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> CredentialPicker::PickAsync(param::hstring const& targetName, param::hstring const& message)
{
    return get_activation_factory<CredentialPicker, Windows::Security::Credentials::UI::ICredentialPickerStatics>().PickAsync(targetName, message);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::CredentialPickerResults> CredentialPicker::PickAsync(param::hstring const& targetName, param::hstring const& message, param::hstring const& caption)
{
    return get_activation_factory<CredentialPicker, Windows::Security::Credentials::UI::ICredentialPickerStatics>().PickAsync(targetName, message, caption);
}

inline CredentialPickerOptions::CredentialPickerOptions() :
    CredentialPickerOptions(activate_instance<CredentialPickerOptions>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::UserConsentVerifierAvailability> UserConsentVerifier::CheckAvailabilityAsync()
{
    return get_activation_factory<UserConsentVerifier, Windows::Security::Credentials::UI::IUserConsentVerifierStatics>().CheckAvailabilityAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::UI::UserConsentVerificationResult> UserConsentVerifier::RequestVerificationAsync(param::hstring const& message)
{
    return get_activation_factory<UserConsentVerifier, Windows::Security::Credentials::UI::IUserConsentVerifierStatics>().RequestVerificationAsync(message);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Security::Credentials::UI::ICredentialPickerOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::UI::ICredentialPickerOptions> {};

template<> struct hash<winrt::Windows::Security::Credentials::UI::ICredentialPickerResults> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::UI::ICredentialPickerResults> {};

template<> struct hash<winrt::Windows::Security::Credentials::UI::ICredentialPickerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::UI::ICredentialPickerStatics> {};

template<> struct hash<winrt::Windows::Security::Credentials::UI::IUserConsentVerifierStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::UI::IUserConsentVerifierStatics> {};

template<> struct hash<winrt::Windows::Security::Credentials::UI::CredentialPicker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::UI::CredentialPicker> {};

template<> struct hash<winrt::Windows::Security::Credentials::UI::CredentialPickerOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::UI::CredentialPickerOptions> {};

template<> struct hash<winrt::Windows::Security::Credentials::UI::CredentialPickerResults> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::UI::CredentialPickerResults> {};

template<> struct hash<winrt::Windows::Security::Credentials::UI::UserConsentVerifier> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Credentials::UI::UserConsentVerifier> {};

}

WINRT_WARNING_POP
