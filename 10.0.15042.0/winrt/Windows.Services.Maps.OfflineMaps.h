// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Devices.Geolocation.3.h"
#include "internal/Windows.Services.Maps.OfflineMaps.3.h"
#include "Windows.Services.Maps.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Services::Maps::OfflineMaps::IOfflineMapPackage> : produce_base<D, Windows::Services::Maps::OfflineMaps::IOfflineMapPackage>
{
    HRESULT __stdcall get_Status(Windows::Services::Maps::OfflineMaps::OfflineMapPackageStatus * value) noexcept override
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

    HRESULT __stdcall get_DisplayName(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_EnclosingRegionName(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnclosingRegionName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EstimatedSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EstimatedSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StatusChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StatusChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StatusChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Services::Maps::OfflineMaps::OfflineMapPackage, Windows::Foundation::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StatusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::OfflineMaps::OfflineMapPackage, Windows::Foundation::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestStartDownloadAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestStartDownloadAsync());
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
struct produce<D, Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult> : produce_base<D, Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult>
{
    HRESULT __stdcall get_Status(Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryStatus * value) noexcept override
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

    HRESULT __stdcall get_Packages(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::OfflineMaps::OfflineMapPackage>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Packages());
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
struct produce<D, Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult> : produce_base<D, Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult>
{
    HRESULT __stdcall get_Status(Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadStatus * value) noexcept override
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
struct produce<D, Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics> : produce_base<D, Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics>
{
    HRESULT __stdcall abi_FindPackagesAsync(impl::abi_arg_in<Windows::Devices::Geolocation::IGeopoint> queryPoint, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindPackagesAsync(*reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&queryPoint)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesInBoundingBoxAsync(impl::abi_arg_in<Windows::Devices::Geolocation::IGeoboundingBox> queryBoundingBox, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindPackagesInBoundingBoxAsync(*reinterpret_cast<const Windows::Devices::Geolocation::GeoboundingBox *>(&queryBoundingBox)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesInGeocircleAsync(impl::abi_arg_in<Windows::Devices::Geolocation::IGeocircle> queryCircle, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindPackagesInGeocircleAsync(*reinterpret_cast<const Windows::Devices::Geolocation::Geocircle *>(&queryCircle)));
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

namespace Windows::Services::Maps::OfflineMaps {

template <typename D> Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryStatus impl_IOfflineMapPackageQueryResult<D>::Status() const
{
    Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryStatus value {};
    check_hresult(WINRT_SHIM(IOfflineMapPackageQueryResult)->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::OfflineMaps::OfflineMapPackage> impl_IOfflineMapPackageQueryResult<D>::Packages() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::OfflineMaps::OfflineMapPackage> value;
    check_hresult(WINRT_SHIM(IOfflineMapPackageQueryResult)->get_Packages(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadStatus impl_IOfflineMapPackageStartDownloadResult<D>::Status() const
{
    Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadStatus value {};
    check_hresult(WINRT_SHIM(IOfflineMapPackageStartDownloadResult)->get_Status(&value));
    return value;
}

template <typename D> Windows::Services::Maps::OfflineMaps::OfflineMapPackageStatus impl_IOfflineMapPackage<D>::Status() const
{
    Windows::Services::Maps::OfflineMaps::OfflineMapPackageStatus value {};
    check_hresult(WINRT_SHIM(IOfflineMapPackage)->get_Status(&value));
    return value;
}

template <typename D> hstring impl_IOfflineMapPackage<D>::DisplayName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IOfflineMapPackage)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IOfflineMapPackage<D>::EnclosingRegionName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IOfflineMapPackage)->get_EnclosingRegionName(put_abi(value)));
    return value;
}

template <typename D> uint64_t impl_IOfflineMapPackage<D>::EstimatedSizeInBytes() const
{
    uint64_t value {};
    check_hresult(WINRT_SHIM(IOfflineMapPackage)->get_EstimatedSizeInBytes(&value));
    return value;
}

template <typename D> void impl_IOfflineMapPackage<D>::StatusChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IOfflineMapPackage)->remove_StatusChanged(token));
}

template <typename D> event_token impl_IOfflineMapPackage<D>::StatusChanged(const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::OfflineMaps::OfflineMapPackage, Windows::Foundation::IInspectable> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IOfflineMapPackage)->add_StatusChanged(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IOfflineMapPackage> impl_IOfflineMapPackage<D>::StatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::OfflineMaps::OfflineMapPackage, Windows::Foundation::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IOfflineMapPackage>(this, &ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage::remove_StatusChanged, StatusChanged(value));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult> impl_IOfflineMapPackage<D>::RequestStartDownloadAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult> value;
    check_hresult(WINRT_SHIM(IOfflineMapPackage)->abi_RequestStartDownloadAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> impl_IOfflineMapPackageStatics<D>::FindPackagesAsync(const Windows::Devices::Geolocation::Geopoint & queryPoint) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> result;
    check_hresult(WINRT_SHIM(IOfflineMapPackageStatics)->abi_FindPackagesAsync(get_abi(queryPoint), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> impl_IOfflineMapPackageStatics<D>::FindPackagesInBoundingBoxAsync(const Windows::Devices::Geolocation::GeoboundingBox & queryBoundingBox) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> result;
    check_hresult(WINRT_SHIM(IOfflineMapPackageStatics)->abi_FindPackagesInBoundingBoxAsync(get_abi(queryBoundingBox), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> impl_IOfflineMapPackageStatics<D>::FindPackagesInGeocircleAsync(const Windows::Devices::Geolocation::Geocircle & queryCircle) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> result;
    check_hresult(WINRT_SHIM(IOfflineMapPackageStatics)->abi_FindPackagesInGeocircleAsync(get_abi(queryCircle), put_abi(result)));
    return result;
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> OfflineMapPackage::FindPackagesAsync(const Windows::Devices::Geolocation::Geopoint & queryPoint)
{
    return get_activation_factory<OfflineMapPackage, IOfflineMapPackageStatics>().FindPackagesAsync(queryPoint);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> OfflineMapPackage::FindPackagesInBoundingBoxAsync(const Windows::Devices::Geolocation::GeoboundingBox & queryBoundingBox)
{
    return get_activation_factory<OfflineMapPackage, IOfflineMapPackageStatics>().FindPackagesInBoundingBoxAsync(queryBoundingBox);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> OfflineMapPackage::FindPackagesInGeocircleAsync(const Windows::Devices::Geolocation::Geocircle & queryCircle)
{
    return get_activation_factory<OfflineMapPackage, IOfflineMapPackageStatics>().FindPackagesInGeocircleAsync(queryCircle);
}

}

}

template<>
struct std::hash<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage>
{
    size_t operator()(const winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult>
{
    size_t operator()(const winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult>
{
    size_t operator()(const winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics>
{
    size_t operator()(const winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackage>
{
    size_t operator()(const winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackage & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult>
{
    size_t operator()(const winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult>
{
    size_t operator()(const winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
