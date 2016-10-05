// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.ApplicationModel.Calls.Provider.3.h"
#include "Windows.ApplicationModel.Calls.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin> : produce_base<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin>
{
    HRESULT __stdcall get_Category(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Category());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Category(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Category(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CategoryDescription(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CategoryDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CategoryDescription(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().CategoryDescription(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Location(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Location());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Location(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Location(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2> : produce_base<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2>
{
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

    HRESULT __stdcall put_DisplayName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().DisplayName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3> : produce_base<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3>
{
    HRESULT __stdcall get_DisplayPicture(abi_arg_out<Windows::Storage::IStorageFile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayPicture());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayPicture(abi_arg_in<Windows::Storage::IStorageFile> value) noexcept override
    {
        try
        {
            this->shim().DisplayPicture(*reinterpret_cast<const Windows::Storage::StorageFile *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics> : produce_base<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>
{
    HRESULT __stdcall get_IsCurrentAppActiveCallOriginApp(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCurrentAppActiveCallOriginApp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowPhoneCallOriginSettingsUI() noexcept override
    {
        try
        {
            this->shim().ShowPhoneCallOriginSettingsUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetCallOrigin(GUID requestId, abi_arg_in<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin> callOrigin) noexcept override
    {
        try
        {
            this->shim().SetCallOrigin(requestId, *reinterpret_cast<const Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin *>(&callOrigin));
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
    HRESULT __stdcall abi_RequestSetAsActiveCallOriginAppAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RequestSetAsActiveCallOriginAppAsync());
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

namespace Windows::ApplicationModel::Calls::Provider {

template <typename D> hstring impl_IPhoneCallOrigin<D>::Category() const
{
    hstring value;
    check_hresult(static_cast<const IPhoneCallOrigin &>(static_cast<const D &>(*this))->get_Category(put(value)));
    return value;
}

template <typename D> void impl_IPhoneCallOrigin<D>::Category(hstring_ref value) const
{
    check_hresult(static_cast<const IPhoneCallOrigin &>(static_cast<const D &>(*this))->put_Category(get(value)));
}

template <typename D> hstring impl_IPhoneCallOrigin<D>::CategoryDescription() const
{
    hstring value;
    check_hresult(static_cast<const IPhoneCallOrigin &>(static_cast<const D &>(*this))->get_CategoryDescription(put(value)));
    return value;
}

template <typename D> void impl_IPhoneCallOrigin<D>::CategoryDescription(hstring_ref value) const
{
    check_hresult(static_cast<const IPhoneCallOrigin &>(static_cast<const D &>(*this))->put_CategoryDescription(get(value)));
}

template <typename D> hstring impl_IPhoneCallOrigin<D>::Location() const
{
    hstring value;
    check_hresult(static_cast<const IPhoneCallOrigin &>(static_cast<const D &>(*this))->get_Location(put(value)));
    return value;
}

template <typename D> void impl_IPhoneCallOrigin<D>::Location(hstring_ref value) const
{
    check_hresult(static_cast<const IPhoneCallOrigin &>(static_cast<const D &>(*this))->put_Location(get(value)));
}

template <typename D> hstring impl_IPhoneCallOrigin2<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IPhoneCallOrigin2 &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> void impl_IPhoneCallOrigin2<D>::DisplayName(hstring_ref value) const
{
    check_hresult(static_cast<const IPhoneCallOrigin2 &>(static_cast<const D &>(*this))->put_DisplayName(get(value)));
}

template <typename D> Windows::Storage::StorageFile impl_IPhoneCallOrigin3<D>::DisplayPicture() const
{
    Windows::Storage::StorageFile value { nullptr };
    check_hresult(static_cast<const IPhoneCallOrigin3 &>(static_cast<const D &>(*this))->get_DisplayPicture(put(value)));
    return value;
}

template <typename D> void impl_IPhoneCallOrigin3<D>::DisplayPicture(const Windows::Storage::StorageFile & value) const
{
    check_hresult(static_cast<const IPhoneCallOrigin3 &>(static_cast<const D &>(*this))->put_DisplayPicture(get(value)));
}

template <typename D> bool impl_IPhoneCallOriginManagerStatics<D>::IsCurrentAppActiveCallOriginApp() const
{
    bool value {};
    check_hresult(static_cast<const IPhoneCallOriginManagerStatics &>(static_cast<const D &>(*this))->get_IsCurrentAppActiveCallOriginApp(&value));
    return value;
}

template <typename D> void impl_IPhoneCallOriginManagerStatics<D>::ShowPhoneCallOriginSettingsUI() const
{
    check_hresult(static_cast<const IPhoneCallOriginManagerStatics &>(static_cast<const D &>(*this))->abi_ShowPhoneCallOriginSettingsUI());
}

template <typename D> void impl_IPhoneCallOriginManagerStatics<D>::SetCallOrigin(GUID requestId, const Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin & callOrigin) const
{
    check_hresult(static_cast<const IPhoneCallOriginManagerStatics &>(static_cast<const D &>(*this))->abi_SetCallOrigin(requestId, get(callOrigin)));
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IPhoneCallOriginManagerStatics2<D>::RequestSetAsActiveCallOriginAppAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(static_cast<const IPhoneCallOriginManagerStatics2 &>(static_cast<const D &>(*this))->abi_RequestSetAsActiveCallOriginAppAsync(put(result)));
    return result;
}

inline PhoneCallOrigin::PhoneCallOrigin() :
    PhoneCallOrigin(activate_instance<PhoneCallOrigin>())
{}

inline bool PhoneCallOriginManager::IsCurrentAppActiveCallOriginApp()
{
    return get_activation_factory<PhoneCallOriginManager, IPhoneCallOriginManagerStatics>().IsCurrentAppActiveCallOriginApp();
}

inline void PhoneCallOriginManager::ShowPhoneCallOriginSettingsUI()
{
    get_activation_factory<PhoneCallOriginManager, IPhoneCallOriginManagerStatics>().ShowPhoneCallOriginSettingsUI();
}

inline void PhoneCallOriginManager::SetCallOrigin(GUID requestId, const Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin & callOrigin)
{
    get_activation_factory<PhoneCallOriginManager, IPhoneCallOriginManagerStatics>().SetCallOrigin(requestId, callOrigin);
}

inline Windows::Foundation::IAsyncOperation<bool> PhoneCallOriginManager::RequestSetAsActiveCallOriginAppAsync()
{
    return get_activation_factory<PhoneCallOriginManager, IPhoneCallOriginManagerStatics2>().RequestSetAsActiveCallOriginAppAsync();
}

}

}
