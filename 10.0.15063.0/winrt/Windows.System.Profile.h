// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.System.Profile.2.h"
#include "winrt/Windows.System.h"

namespace winrt::impl {

template <typename D> Windows::System::Profile::AnalyticsVersionInfo consume_Windows_System_Profile_IAnalyticsInfoStatics<D>::VersionInfo() const
{
    Windows::System::Profile::AnalyticsVersionInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Profile::IAnalyticsInfoStatics)->get_VersionInfo(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IAnalyticsInfoStatics<D>::DeviceForm() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IAnalyticsInfoStatics)->get_DeviceForm(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IAnalyticsVersionInfo<D>::DeviceFamily() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IAnalyticsVersionInfo)->get_DeviceFamily(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IAnalyticsVersionInfo<D>::DeviceFamilyVersion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IAnalyticsVersionInfo)->get_DeviceFamilyVersion(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_System_Profile_IEducationSettingsStatics<D>::IsEducationEnvironment() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IEducationSettingsStatics)->get_IsEducationEnvironment(&value));
    return value;
}

template <typename D> Windows::System::Profile::HardwareToken consume_Windows_System_Profile_IHardwareIdentificationStatics<D>::GetPackageSpecificToken(Windows::Storage::Streams::IBuffer const& nonce) const
{
    Windows::System::Profile::HardwareToken packageSpecificHardwareToken{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Profile::IHardwareIdentificationStatics)->GetPackageSpecificToken(get_abi(nonce), put_abi(packageSpecificHardwareToken)));
    return packageSpecificHardwareToken;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_System_Profile_IHardwareToken<D>::Id() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Profile::IHardwareToken)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_System_Profile_IHardwareToken<D>::Signature() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Profile::IHardwareToken)->get_Signature(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_System_Profile_IHardwareToken<D>::Certificate() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Profile::IHardwareToken)->get_Certificate(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::RetailAccessCode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_RetailAccessCode(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::ManufacturerName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_ManufacturerName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::ModelName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_ModelName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::DisplayModelName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_DisplayModelName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::Price() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_Price(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::IsFeatured() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_IsFeatured(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::FormFactor() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_FormFactor(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::ScreenSize() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_ScreenSize(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::Weight() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_Weight(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::DisplayDescription() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_DisplayDescription(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::BatteryLifeDescription() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_BatteryLifeDescription(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::ProcessorDescription() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_ProcessorDescription(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::Memory() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_Memory(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::StorageDescription() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_StorageDescription(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::GraphicsDescription() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_GraphicsDescription(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::FrontCameraDescription() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_FrontCameraDescription(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::RearCameraDescription() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_RearCameraDescription(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::HasNfc() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_HasNfc(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::HasSdSlot() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_HasSdSlot(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::HasOpticalDrive() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_HasOpticalDrive(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::IsOfficeInstalled() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_IsOfficeInstalled(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>::WindowsEdition() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IKnownRetailInfoPropertiesStatics)->get_WindowsEdition(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Profile::PlatformDataCollectionLevel consume_Windows_System_Profile_IPlatformDiagnosticsAndUsageDataSettingsStatics<D>::CollectionLevel() const
{
    Windows::System::Profile::PlatformDataCollectionLevel value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics)->get_CollectionLevel(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_System_Profile_IPlatformDiagnosticsAndUsageDataSettingsStatics<D>::CollectionLevelChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics)->add_CollectionLevelChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics> consume_Windows_System_Profile_IPlatformDiagnosticsAndUsageDataSettingsStatics<D>::CollectionLevelChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>(this, &abi_t<Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>::remove_CollectionLevelChanged, CollectionLevelChanged(handler));
}

template <typename D> void consume_Windows_System_Profile_IPlatformDiagnosticsAndUsageDataSettingsStatics<D>::CollectionLevelChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics)->remove_CollectionLevelChanged(get_abi(token)));
}

template <typename D> bool consume_Windows_System_Profile_IPlatformDiagnosticsAndUsageDataSettingsStatics<D>::CanCollectDiagnostics(Windows::System::Profile::PlatformDataCollectionLevel const& level) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics)->CanCollectDiagnostics(get_abi(level), &result));
    return result;
}

template <typename D> bool consume_Windows_System_Profile_IRetailInfoStatics<D>::IsDemoModeEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IRetailInfoStatics)->get_IsDemoModeEnabled(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_System_Profile_IRetailInfoStatics<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Profile::IRetailInfoStatics)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_System_Profile_ISharedModeSettingsStatics<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::ISharedModeSettingsStatics)->get_IsEnabled(&value));
    return value;
}

template <typename D> bool consume_Windows_System_Profile_ISharedModeSettingsStatics2<D>::ShouldAvoidLocalStorage() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::ISharedModeSettingsStatics2)->get_ShouldAvoidLocalStorage(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_System_Profile_ISystemIdentificationInfo<D>::Id() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Profile::ISystemIdentificationInfo)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Profile::SystemIdentificationSource consume_Windows_System_Profile_ISystemIdentificationInfo<D>::Source() const
{
    Windows::System::Profile::SystemIdentificationSource value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::ISystemIdentificationInfo)->get_Source(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Profile::SystemIdentificationInfo consume_Windows_System_Profile_ISystemIdentificationStatics<D>::GetSystemIdForPublisher() const
{
    Windows::System::Profile::SystemIdentificationInfo result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Profile::ISystemIdentificationStatics)->GetSystemIdForPublisher(put_abi(result)));
    return result;
}

template <typename D> Windows::System::Profile::SystemIdentificationInfo consume_Windows_System_Profile_ISystemIdentificationStatics<D>::GetSystemIdForUser(Windows::System::User const& user) const
{
    Windows::System::Profile::SystemIdentificationInfo result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Profile::ISystemIdentificationStatics)->GetSystemIdForUser(get_abi(user), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::System::Profile::IAnalyticsInfoStatics> : produce_base<D, Windows::System::Profile::IAnalyticsInfoStatics>
{
    HRESULT __stdcall get_VersionInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VersionInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceForm(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceForm());
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
struct produce<D, Windows::System::Profile::IAnalyticsVersionInfo> : produce_base<D, Windows::System::Profile::IAnalyticsVersionInfo>
{
    HRESULT __stdcall get_DeviceFamily(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceFamily());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceFamilyVersion(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceFamilyVersion());
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
struct produce<D, Windows::System::Profile::IEducationSettingsStatics> : produce_base<D, Windows::System::Profile::IEducationSettingsStatics>
{
    HRESULT __stdcall get_IsEducationEnvironment(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEducationEnvironment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Profile::IHardwareIdentificationStatics> : produce_base<D, Windows::System::Profile::IHardwareIdentificationStatics>
{
    HRESULT __stdcall GetPackageSpecificToken(::IUnknown* nonce, ::IUnknown** packageSpecificHardwareToken) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageSpecificHardwareToken = detach_abi(this->shim().GetPackageSpecificToken(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&nonce)));
            return S_OK;
        }
        catch (...)
        {
            *packageSpecificHardwareToken = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Profile::IHardwareToken> : produce_base<D, Windows::System::Profile::IHardwareToken>
{
    HRESULT __stdcall get_Id(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_Signature(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Signature());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Certificate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Certificate());
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
struct produce<D, Windows::System::Profile::IKnownRetailInfoPropertiesStatics> : produce_base<D, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>
{
    HRESULT __stdcall get_RetailAccessCode(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RetailAccessCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ManufacturerName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ManufacturerName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ModelName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ModelName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayModelName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayModelName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Price(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Price());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsFeatured(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsFeatured());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FormFactor(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FormFactor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScreenSize(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScreenSize());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Weight(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Weight());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayDescription(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BatteryLifeDescription(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BatteryLifeDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProcessorDescription(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProcessorDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Memory(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Memory());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StorageDescription(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StorageDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GraphicsDescription(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GraphicsDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrontCameraDescription(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrontCameraDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RearCameraDescription(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RearCameraDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasNfc(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasNfc());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasSdSlot(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasSdSlot());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasOpticalDrive(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasOpticalDrive());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOfficeInstalled(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsOfficeInstalled());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WindowsEdition(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WindowsEdition());
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
struct produce<D, Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics> : produce_base<D, Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>
{
    HRESULT __stdcall get_CollectionLevel(abi_t<Windows::System::Profile::PlatformDataCollectionLevel>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CollectionLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CollectionLevelChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CollectionLevelChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CollectionLevelChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CollectionLevelChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CanCollectDiagnostics(abi_t<Windows::System::Profile::PlatformDataCollectionLevel> level, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CanCollectDiagnostics(*reinterpret_cast<Windows::System::Profile::PlatformDataCollectionLevel const*>(&level)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Profile::IRetailInfoStatics> : produce_base<D, Windows::System::Profile::IRetailInfoStatics>
{
    HRESULT __stdcall get_IsDemoModeEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDemoModeEnabled());
            return S_OK;
        }
        catch (...)
        {
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
};

template <typename D>
struct produce<D, Windows::System::Profile::ISharedModeSettingsStatics> : produce_base<D, Windows::System::Profile::ISharedModeSettingsStatics>
{
    HRESULT __stdcall get_IsEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Profile::ISharedModeSettingsStatics2> : produce_base<D, Windows::System::Profile::ISharedModeSettingsStatics2>
{
    HRESULT __stdcall get_ShouldAvoidLocalStorage(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShouldAvoidLocalStorage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Profile::ISystemIdentificationInfo> : produce_base<D, Windows::System::Profile::ISystemIdentificationInfo>
{
    HRESULT __stdcall get_Id(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_Source(abi_t<Windows::System::Profile::SystemIdentificationSource>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Profile::ISystemIdentificationStatics> : produce_base<D, Windows::System::Profile::ISystemIdentificationStatics>
{
    HRESULT __stdcall GetSystemIdForPublisher(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetSystemIdForPublisher());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSystemIdForUser(::IUnknown* user, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetSystemIdForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
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

WINRT_EXPORT namespace winrt::Windows::System::Profile {

inline Windows::System::Profile::AnalyticsVersionInfo AnalyticsInfo::VersionInfo()
{
    return get_activation_factory<AnalyticsInfo, Windows::System::Profile::IAnalyticsInfoStatics>().VersionInfo();
}

inline hstring AnalyticsInfo::DeviceForm()
{
    return get_activation_factory<AnalyticsInfo, Windows::System::Profile::IAnalyticsInfoStatics>().DeviceForm();
}

inline bool EducationSettings::IsEducationEnvironment()
{
    return get_activation_factory<EducationSettings, Windows::System::Profile::IEducationSettingsStatics>().IsEducationEnvironment();
}

inline Windows::System::Profile::HardwareToken HardwareIdentification::GetPackageSpecificToken(Windows::Storage::Streams::IBuffer const& nonce)
{
    return get_activation_factory<HardwareIdentification, Windows::System::Profile::IHardwareIdentificationStatics>().GetPackageSpecificToken(nonce);
}

inline hstring KnownRetailInfoProperties::RetailAccessCode()
{
    return get_activation_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>().RetailAccessCode();
}

inline hstring KnownRetailInfoProperties::ManufacturerName()
{
    return get_activation_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>().ManufacturerName();
}

inline hstring KnownRetailInfoProperties::ModelName()
{
    return get_activation_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>().ModelName();
}

inline hstring KnownRetailInfoProperties::DisplayModelName()
{
    return get_activation_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>().DisplayModelName();
}

inline hstring KnownRetailInfoProperties::Price()
{
    return get_activation_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>().Price();
}

inline hstring KnownRetailInfoProperties::IsFeatured()
{
    return get_activation_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>().IsFeatured();
}

inline hstring KnownRetailInfoProperties::FormFactor()
{
    return get_activation_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>().FormFactor();
}

inline hstring KnownRetailInfoProperties::ScreenSize()
{
    return get_activation_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>().ScreenSize();
}

inline hstring KnownRetailInfoProperties::Weight()
{
    return get_activation_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>().Weight();
}

inline hstring KnownRetailInfoProperties::DisplayDescription()
{
    return get_activation_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>().DisplayDescription();
}

inline hstring KnownRetailInfoProperties::BatteryLifeDescription()
{
    return get_activation_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>().BatteryLifeDescription();
}

inline hstring KnownRetailInfoProperties::ProcessorDescription()
{
    return get_activation_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>().ProcessorDescription();
}

inline hstring KnownRetailInfoProperties::Memory()
{
    return get_activation_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>().Memory();
}

inline hstring KnownRetailInfoProperties::StorageDescription()
{
    return get_activation_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>().StorageDescription();
}

inline hstring KnownRetailInfoProperties::GraphicsDescription()
{
    return get_activation_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>().GraphicsDescription();
}

inline hstring KnownRetailInfoProperties::FrontCameraDescription()
{
    return get_activation_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>().FrontCameraDescription();
}

inline hstring KnownRetailInfoProperties::RearCameraDescription()
{
    return get_activation_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>().RearCameraDescription();
}

inline hstring KnownRetailInfoProperties::HasNfc()
{
    return get_activation_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>().HasNfc();
}

inline hstring KnownRetailInfoProperties::HasSdSlot()
{
    return get_activation_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>().HasSdSlot();
}

inline hstring KnownRetailInfoProperties::HasOpticalDrive()
{
    return get_activation_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>().HasOpticalDrive();
}

inline hstring KnownRetailInfoProperties::IsOfficeInstalled()
{
    return get_activation_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>().IsOfficeInstalled();
}

inline hstring KnownRetailInfoProperties::WindowsEdition()
{
    return get_activation_factory<KnownRetailInfoProperties, Windows::System::Profile::IKnownRetailInfoPropertiesStatics>().WindowsEdition();
}

inline Windows::System::Profile::PlatformDataCollectionLevel PlatformDiagnosticsAndUsageDataSettings::CollectionLevel()
{
    return get_activation_factory<PlatformDiagnosticsAndUsageDataSettings, Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>().CollectionLevel();
}

inline event_token PlatformDiagnosticsAndUsageDataSettings::CollectionLevelChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<PlatformDiagnosticsAndUsageDataSettings, Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>().CollectionLevelChanged(handler);
}

inline factory_event_revoker<Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics> PlatformDiagnosticsAndUsageDataSettings::CollectionLevelChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<PlatformDiagnosticsAndUsageDataSettings, Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>();
    return { factory, &abi_t<Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>::remove_CollectionLevelChanged, factory.CollectionLevelChanged(handler) };
}

inline void PlatformDiagnosticsAndUsageDataSettings::CollectionLevelChanged(event_token const& token)
{
    get_activation_factory<PlatformDiagnosticsAndUsageDataSettings, Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>().CollectionLevelChanged(token);
}

inline bool PlatformDiagnosticsAndUsageDataSettings::CanCollectDiagnostics(Windows::System::Profile::PlatformDataCollectionLevel const& level)
{
    return get_activation_factory<PlatformDiagnosticsAndUsageDataSettings, Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>().CanCollectDiagnostics(level);
}

inline bool RetailInfo::IsDemoModeEnabled()
{
    return get_activation_factory<RetailInfo, Windows::System::Profile::IRetailInfoStatics>().IsDemoModeEnabled();
}

inline Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> RetailInfo::Properties()
{
    return get_activation_factory<RetailInfo, Windows::System::Profile::IRetailInfoStatics>().Properties();
}

inline bool SharedModeSettings::IsEnabled()
{
    return get_activation_factory<SharedModeSettings, Windows::System::Profile::ISharedModeSettingsStatics>().IsEnabled();
}

inline bool SharedModeSettings::ShouldAvoidLocalStorage()
{
    return get_activation_factory<SharedModeSettings, Windows::System::Profile::ISharedModeSettingsStatics2>().ShouldAvoidLocalStorage();
}

inline Windows::System::Profile::SystemIdentificationInfo SystemIdentification::GetSystemIdForPublisher()
{
    return get_activation_factory<SystemIdentification, Windows::System::Profile::ISystemIdentificationStatics>().GetSystemIdForPublisher();
}

inline Windows::System::Profile::SystemIdentificationInfo SystemIdentification::GetSystemIdForUser(Windows::System::User const& user)
{
    return get_activation_factory<SystemIdentification, Windows::System::Profile::ISystemIdentificationStatics>().GetSystemIdForUser(user);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::System::Profile::IAnalyticsInfoStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::IAnalyticsInfoStatics> {};

template<> struct hash<winrt::Windows::System::Profile::IAnalyticsVersionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::IAnalyticsVersionInfo> {};

template<> struct hash<winrt::Windows::System::Profile::IEducationSettingsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::IEducationSettingsStatics> {};

template<> struct hash<winrt::Windows::System::Profile::IHardwareIdentificationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::IHardwareIdentificationStatics> {};

template<> struct hash<winrt::Windows::System::Profile::IHardwareToken> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::IHardwareToken> {};

template<> struct hash<winrt::Windows::System::Profile::IKnownRetailInfoPropertiesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::IKnownRetailInfoPropertiesStatics> {};

template<> struct hash<winrt::Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics> {};

template<> struct hash<winrt::Windows::System::Profile::IRetailInfoStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::IRetailInfoStatics> {};

template<> struct hash<winrt::Windows::System::Profile::ISharedModeSettingsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::ISharedModeSettingsStatics> {};

template<> struct hash<winrt::Windows::System::Profile::ISharedModeSettingsStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::ISharedModeSettingsStatics2> {};

template<> struct hash<winrt::Windows::System::Profile::ISystemIdentificationInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::ISystemIdentificationInfo> {};

template<> struct hash<winrt::Windows::System::Profile::ISystemIdentificationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::ISystemIdentificationStatics> {};

template<> struct hash<winrt::Windows::System::Profile::AnalyticsInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::AnalyticsInfo> {};

template<> struct hash<winrt::Windows::System::Profile::AnalyticsVersionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::AnalyticsVersionInfo> {};

template<> struct hash<winrt::Windows::System::Profile::EducationSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::EducationSettings> {};

template<> struct hash<winrt::Windows::System::Profile::HardwareIdentification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::HardwareIdentification> {};

template<> struct hash<winrt::Windows::System::Profile::HardwareToken> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::HardwareToken> {};

template<> struct hash<winrt::Windows::System::Profile::KnownRetailInfoProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::KnownRetailInfoProperties> {};

template<> struct hash<winrt::Windows::System::Profile::PlatformDiagnosticsAndUsageDataSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::PlatformDiagnosticsAndUsageDataSettings> {};

template<> struct hash<winrt::Windows::System::Profile::RetailInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::RetailInfo> {};

template<> struct hash<winrt::Windows::System::Profile::SharedModeSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::SharedModeSettings> {};

template<> struct hash<winrt::Windows::System::Profile::SystemIdentification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::SystemIdentification> {};

template<> struct hash<winrt::Windows::System::Profile::SystemIdentificationInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::SystemIdentificationInfo> {};

}

WINRT_WARNING_POP
