// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Provider.2.h"
#include "winrt/Windows.Storage.h"

namespace winrt::impl {

template <typename D> void consume_Windows_Storage_Provider_ICachedFileUpdaterStatics<D>::SetUpdateInformation(Windows::Storage::IStorageFile const& file, param::hstring const& contentId, Windows::Storage::Provider::ReadActivationMode const& readMode, Windows::Storage::Provider::WriteActivationMode const& writeMode, Windows::Storage::Provider::CachedFileOptions const& options) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::ICachedFileUpdaterStatics)->SetUpdateInformation(get_abi(file), get_abi(contentId), get_abi(readMode), get_abi(writeMode), get_abi(options)));
}

template <typename D> hstring consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->put_Title(get_abi(value)));
}

template <typename D> Windows::Storage::Provider::CachedFileTarget consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::UpdateTarget() const
{
    Windows::Storage::Provider::CachedFileTarget value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->get_UpdateTarget(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::FileUpdateRequested(Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Storage::Provider::FileUpdateRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->add_FileUpdateRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Storage::Provider::ICachedFileUpdaterUI> consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::FileUpdateRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Storage::Provider::FileUpdateRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Storage::Provider::ICachedFileUpdaterUI>(this, &abi_t<Windows::Storage::Provider::ICachedFileUpdaterUI>::remove_FileUpdateRequested, FileUpdateRequested(handler));
}

template <typename D> void consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::FileUpdateRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->remove_FileUpdateRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::UIRequested(Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->add_UIRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Storage::Provider::ICachedFileUpdaterUI> consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::UIRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Storage::Provider::ICachedFileUpdaterUI>(this, &abi_t<Windows::Storage::Provider::ICachedFileUpdaterUI>::remove_UIRequested, UIRequested(handler));
}

template <typename D> void consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::UIRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->remove_UIRequested(get_abi(token)));
}

template <typename D> Windows::Storage::Provider::UIStatus consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::UIStatus() const
{
    Windows::Storage::Provider::UIStatus value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->get_UIStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Provider::FileUpdateRequest consume_Windows_Storage_Provider_ICachedFileUpdaterUI2<D>::UpdateRequest() const
{
    Windows::Storage::Provider::FileUpdateRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI2)->get_UpdateRequest(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Provider::FileUpdateRequestDeferral consume_Windows_Storage_Provider_ICachedFileUpdaterUI2<D>::GetDeferral() const
{
    Windows::Storage::Provider::FileUpdateRequestDeferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI2)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_Provider_IFileUpdateRequest<D>::ContentId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IFileUpdateRequest)->get_ContentId(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFile consume_Windows_Storage_Provider_IFileUpdateRequest<D>::File() const
{
    Windows::Storage::StorageFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IFileUpdateRequest)->get_File(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Provider::FileUpdateStatus consume_Windows_Storage_Provider_IFileUpdateRequest<D>::Status() const
{
    Windows::Storage::Provider::FileUpdateStatus value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IFileUpdateRequest)->get_Status(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IFileUpdateRequest<D>::Status(Windows::Storage::Provider::FileUpdateStatus const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IFileUpdateRequest)->put_Status(get_abi(value)));
}

template <typename D> Windows::Storage::Provider::FileUpdateRequestDeferral consume_Windows_Storage_Provider_IFileUpdateRequest<D>::GetDeferral() const
{
    Windows::Storage::Provider::FileUpdateRequestDeferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IFileUpdateRequest)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IFileUpdateRequest<D>::UpdateLocalFile(Windows::Storage::IStorageFile const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IFileUpdateRequest)->UpdateLocalFile(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Provider_IFileUpdateRequest2<D>::UserInputNeededMessage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IFileUpdateRequest2)->get_UserInputNeededMessage(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IFileUpdateRequest2<D>::UserInputNeededMessage(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IFileUpdateRequest2)->put_UserInputNeededMessage(get_abi(value)));
}

template <typename D> void consume_Windows_Storage_Provider_IFileUpdateRequestDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IFileUpdateRequestDeferral)->Complete());
}

template <typename D> Windows::Storage::Provider::FileUpdateRequest consume_Windows_Storage_Provider_IFileUpdateRequestedEventArgs<D>::Request() const
{
    Windows::Storage::Provider::FileUpdateRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IFileUpdateRequestedEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Storage::Provider::ICachedFileUpdaterStatics> : produce_base<D, Windows::Storage::Provider::ICachedFileUpdaterStatics>
{
    HRESULT __stdcall SetUpdateInformation(::IUnknown* file, HSTRING contentId, abi_t<Windows::Storage::Provider::ReadActivationMode> readMode, abi_t<Windows::Storage::Provider::WriteActivationMode> writeMode, abi_t<Windows::Storage::Provider::CachedFileOptions> options) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetUpdateInformation(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<hstring const*>(&contentId), *reinterpret_cast<Windows::Storage::Provider::ReadActivationMode const*>(&readMode), *reinterpret_cast<Windows::Storage::Provider::WriteActivationMode const*>(&writeMode), *reinterpret_cast<Windows::Storage::Provider::CachedFileOptions const*>(&options));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Provider::ICachedFileUpdaterUI> : produce_base<D, Windows::Storage::Provider::ICachedFileUpdaterUI>
{
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

    HRESULT __stdcall get_UpdateTarget(abi_t<Windows::Storage::Provider::CachedFileTarget>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UpdateTarget());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_FileUpdateRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().FileUpdateRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Storage::Provider::FileUpdateRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FileUpdateRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FileUpdateRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_UIRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().UIRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_UIRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UIRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UIStatus(abi_t<Windows::Storage::Provider::UIStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UIStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Provider::ICachedFileUpdaterUI2> : produce_base<D, Windows::Storage::Provider::ICachedFileUpdaterUI2>
{
    HRESULT __stdcall get_UpdateRequest(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UpdateRequest());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::Storage::Provider::IFileUpdateRequest> : produce_base<D, Windows::Storage::Provider::IFileUpdateRequest>
{
    HRESULT __stdcall get_ContentId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_File(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().File());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::Storage::Provider::FileUpdateStatus>* value) noexcept override
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

    HRESULT __stdcall put_Status(abi_t<Windows::Storage::Provider::FileUpdateStatus> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Status(*reinterpret_cast<Windows::Storage::Provider::FileUpdateStatus const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateLocalFile(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateLocalFile(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Provider::IFileUpdateRequest2> : produce_base<D, Windows::Storage::Provider::IFileUpdateRequest2>
{
    HRESULT __stdcall get_UserInputNeededMessage(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserInputNeededMessage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UserInputNeededMessage(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserInputNeededMessage(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Provider::IFileUpdateRequestDeferral> : produce_base<D, Windows::Storage::Provider::IFileUpdateRequestDeferral>
{
    HRESULT __stdcall Complete() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Provider::IFileUpdateRequestedEventArgs> : produce_base<D, Windows::Storage::Provider::IFileUpdateRequestedEventArgs>
{
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Storage::Provider {

inline void CachedFileUpdater::SetUpdateInformation(Windows::Storage::IStorageFile const& file, param::hstring const& contentId, Windows::Storage::Provider::ReadActivationMode const& readMode, Windows::Storage::Provider::WriteActivationMode const& writeMode, Windows::Storage::Provider::CachedFileOptions const& options)
{
    get_activation_factory<CachedFileUpdater, Windows::Storage::Provider::ICachedFileUpdaterStatics>().SetUpdateInformation(file, contentId, readMode, writeMode, options);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Storage::Provider::ICachedFileUpdaterStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Provider::ICachedFileUpdaterStatics> {};

template<> struct hash<winrt::Windows::Storage::Provider::ICachedFileUpdaterUI> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Provider::ICachedFileUpdaterUI> {};

template<> struct hash<winrt::Windows::Storage::Provider::ICachedFileUpdaterUI2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Provider::ICachedFileUpdaterUI2> {};

template<> struct hash<winrt::Windows::Storage::Provider::IFileUpdateRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Provider::IFileUpdateRequest> {};

template<> struct hash<winrt::Windows::Storage::Provider::IFileUpdateRequest2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Provider::IFileUpdateRequest2> {};

template<> struct hash<winrt::Windows::Storage::Provider::IFileUpdateRequestDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Provider::IFileUpdateRequestDeferral> {};

template<> struct hash<winrt::Windows::Storage::Provider::IFileUpdateRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Provider::IFileUpdateRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Storage::Provider::CachedFileUpdater> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Provider::CachedFileUpdater> {};

template<> struct hash<winrt::Windows::Storage::Provider::CachedFileUpdaterUI> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Provider::CachedFileUpdaterUI> {};

template<> struct hash<winrt::Windows::Storage::Provider::FileUpdateRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Provider::FileUpdateRequest> {};

template<> struct hash<winrt::Windows::Storage::Provider::FileUpdateRequestDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Provider::FileUpdateRequestDeferral> {};

template<> struct hash<winrt::Windows::Storage::Provider::FileUpdateRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Provider::FileUpdateRequestedEventArgs> {};

}

WINRT_WARNING_POP
