// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.ApplicationModel.Calls.Provider.2.h"
#include "winrt/Windows.ApplicationModel.Calls.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin<D>::Category() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin)->get_Category(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin<D>::Category(param::hstring const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin)->put_Category(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin<D>::CategoryDescription() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin)->get_CategoryDescription(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin<D>::CategoryDescription(param::hstring const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin)->put_CategoryDescription(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin<D>::Location() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin)->get_Location(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin<D>::Location(param::hstring const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin)->put_Location(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin2<D>::DisplayName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin2<D>::DisplayName(param::hstring const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2)->put_DisplayName(get_abi(value)));
}

template <typename D> Windows::Storage::StorageFile consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin3<D>::DisplayPicture() const noexcept
{
    Windows::Storage::StorageFile value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3)->get_DisplayPicture(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin3<D>::DisplayPicture(Windows::Storage::StorageFile const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3)->put_DisplayPicture(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics<D>::IsCurrentAppActiveCallOriginApp() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics)->get_IsCurrentAppActiveCallOriginApp(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics<D>::ShowPhoneCallOriginSettingsUI() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics)->ShowPhoneCallOriginSettingsUI());
}

template <typename D> void consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics<D>::SetCallOrigin(GUID const& requestId, Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin const& callOrigin) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics)->SetCallOrigin(get_abi(requestId), get_abi(callOrigin)));
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics2<D>::RequestSetAsActiveCallOriginAppAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2)->RequestSetAsActiveCallOriginAppAsync(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin> : produce_base<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin>
{
    HRESULT __stdcall get_Category(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Category());
        return S_OK;
    }

    HRESULT __stdcall put_Category(HSTRING value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().Category(*reinterpret_cast<hstring const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_CategoryDescription(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CategoryDescription());
        return S_OK;
    }

    HRESULT __stdcall put_CategoryDescription(HSTRING value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().CategoryDescription(*reinterpret_cast<hstring const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_Location(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Location());
        return S_OK;
    }

    HRESULT __stdcall put_Location(HSTRING value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().Location(*reinterpret_cast<hstring const*>(&value));
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2> : produce_base<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2>
{
    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DisplayName());
        return S_OK;
    }

    HRESULT __stdcall put_DisplayName(HSTRING value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().DisplayName(*reinterpret_cast<hstring const*>(&value));
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3> : produce_base<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3>
{
    HRESULT __stdcall get_DisplayPicture(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DisplayPicture());
        return S_OK;
    }

    HRESULT __stdcall put_DisplayPicture(::IUnknown* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().DisplayPicture(*reinterpret_cast<Windows::Storage::StorageFile const*>(&value));
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics> : produce_base<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>
{
    HRESULT __stdcall get_IsCurrentAppActiveCallOriginApp(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsCurrentAppActiveCallOriginApp());
        return S_OK;
    }

    HRESULT __stdcall ShowPhoneCallOriginSettingsUI() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowPhoneCallOriginSettingsUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetCallOrigin(GUID requestId, ::IUnknown* callOrigin) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetCallOrigin(*reinterpret_cast<GUID const*>(&requestId), *reinterpret_cast<Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin const*>(&callOrigin));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2> : produce_base<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2>
{
    HRESULT __stdcall RequestSetAsActiveCallOriginAppAsync(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestSetAsActiveCallOriginAppAsync());
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

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls::Provider {

inline PhoneCallOrigin::PhoneCallOrigin() :
    PhoneCallOrigin(activate_instance<PhoneCallOrigin>())
{}

inline bool PhoneCallOriginManager::IsCurrentAppActiveCallOriginApp()
{
    return get_activation_factory<PhoneCallOriginManager, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>().IsCurrentAppActiveCallOriginApp();
}

inline void PhoneCallOriginManager::ShowPhoneCallOriginSettingsUI()
{
    get_activation_factory<PhoneCallOriginManager, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>().ShowPhoneCallOriginSettingsUI();
}

inline void PhoneCallOriginManager::SetCallOrigin(GUID const& requestId, Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin const& callOrigin)
{
    get_activation_factory<PhoneCallOriginManager, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>().SetCallOrigin(requestId, callOrigin);
}

inline Windows::Foundation::IAsyncOperation<bool> PhoneCallOriginManager::RequestSetAsActiveCallOriginAppAsync()
{
    return get_activation_factory<PhoneCallOriginManager, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2>().RequestSetAsActiveCallOriginAppAsync();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin> {};

template<> struct hash<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3> {};

template<> struct hash<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin> {};

template<> struct hash<winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOriginManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOriginManager> {};

}

WINRT_WARNING_POP
