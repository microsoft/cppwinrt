// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Perception.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Media.2.h"
#include "winrt/impl/Windows.Devices.Perception.Provider.2.h"
#include "winrt/Windows.Devices.Perception.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Devices_Perception_Provider_IKnownPerceptionFrameKindStatics<D>::Color() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IKnownPerceptionFrameKindStatics)->get_Color(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_Provider_IKnownPerceptionFrameKindStatics<D>::Depth() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IKnownPerceptionFrameKindStatics)->get_Depth(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_Provider_IKnownPerceptionFrameKindStatics<D>::Infrared() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IKnownPerceptionFrameKindStatics)->get_Infrared(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Devices_Perception_Provider_IPerceptionControlGroup<D>::FrameProviderIds() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionControlGroup)->get_FrameProviderIds(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::Provider::PerceptionControlGroup consume_Windows_Devices_Perception_Provider_IPerceptionControlGroupFactory<D>::Create(param::iterable<hstring> const& ids) const
{
    Windows::Devices::Perception::Provider::PerceptionControlGroup result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionControlGroupFactory)->Create(get_abi(ids), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_Perception_Provider_IPerceptionCorrelation<D>::TargetId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionCorrelation)->get_TargetId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Devices_Perception_Provider_IPerceptionCorrelation<D>::Position() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionCorrelation)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::quaternion consume_Windows_Devices_Perception_Provider_IPerceptionCorrelation<D>::Orientation() const
{
    Windows::Foundation::Numerics::quaternion value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionCorrelation)->get_Orientation(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::Provider::PerceptionCorrelation consume_Windows_Devices_Perception_Provider_IPerceptionCorrelationFactory<D>::Create(param::hstring const& targetId, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::quaternion const& orientation) const
{
    Windows::Devices::Perception::Provider::PerceptionCorrelation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionCorrelationFactory)->Create(get_abi(targetId), get_abi(position), get_abi(orientation), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::Provider::PerceptionCorrelation> consume_Windows_Devices_Perception_Provider_IPerceptionCorrelationGroup<D>::RelativeLocations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::Provider::PerceptionCorrelation> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionCorrelationGroup)->get_RelativeLocations(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::Provider::PerceptionCorrelationGroup consume_Windows_Devices_Perception_Provider_IPerceptionCorrelationGroupFactory<D>::Create(param::iterable<Windows::Devices::Perception::Provider::PerceptionCorrelation> const& relativeLocations) const
{
    Windows::Devices::Perception::Provider::PerceptionCorrelationGroup result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionCorrelationGroupFactory)->Create(get_abi(relativeLocations), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Devices_Perception_Provider_IPerceptionFaceAuthenticationGroup<D>::FrameProviderIds() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroup)->get_FrameProviderIds(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup consume_Windows_Devices_Perception_Provider_IPerceptionFaceAuthenticationGroupFactory<D>::Create(param::iterable<hstring> const& ids, Windows::Devices::Perception::Provider::PerceptionStartFaceAuthenticationHandler const& startHandler, Windows::Devices::Perception::Provider::PerceptionStopFaceAuthenticationHandler const& stopHandler) const
{
    Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroupFactory)->Create(get_abi(ids), get_abi(startHandler), get_abi(stopHandler), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Perception_Provider_IPerceptionFrame<D>::RelativeTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrame)->get_RelativeTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Perception_Provider_IPerceptionFrame<D>::RelativeTime(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrame)->put_RelativeTime(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_Devices_Perception_Provider_IPerceptionFrame<D>::Properties() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrame)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IMemoryBuffer consume_Windows_Devices_Perception_Provider_IPerceptionFrame<D>::FrameData() const
{
    Windows::Foundation::IMemoryBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrame)->get_FrameData(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo consume_Windows_Devices_Perception_Provider_IPerceptionFrameProvider<D>::FrameProviderInfo() const
{
    Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProvider)->get_FrameProviderInfo(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Devices_Perception_Provider_IPerceptionFrameProvider<D>::Available() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProvider)->get_Available(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IPropertySet consume_Windows_Devices_Perception_Provider_IPerceptionFrameProvider<D>::Properties() const
{
    Windows::Foundation::Collections::IPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProvider)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Perception_Provider_IPerceptionFrameProvider<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProvider)->Start());
}

template <typename D> void consume_Windows_Devices_Perception_Provider_IPerceptionFrameProvider<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProvider)->Stop());
}

template <typename D> void consume_Windows_Devices_Perception_Provider_IPerceptionFrameProvider<D>::SetProperty(Windows::Devices::Perception::Provider::PerceptionPropertyChangeRequest const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProvider)->SetProperty(get_abi(value)));
}

template <typename D> hstring consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderInfo<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo)->get_Id(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderInfo<D>::Id(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo)->put_Id(get_abi(value)));
}

template <typename D> hstring consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderInfo<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderInfo<D>::DisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo)->put_DisplayName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderInfo<D>::DeviceKind() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo)->get_DeviceKind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderInfo<D>::DeviceKind(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo)->put_DeviceKind(get_abi(value)));
}

template <typename D> hstring consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderInfo<D>::FrameKind() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo)->get_FrameKind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderInfo<D>::FrameKind(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo)->put_FrameKind(get_abi(value)));
}

template <typename D> bool consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderInfo<D>::Hidden() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo)->get_Hidden(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderInfo<D>::Hidden(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo)->put_Hidden(value));
}

template <typename D> Windows::Devices::Perception::Provider::IPerceptionFrameProvider consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderManager<D>::GetFrameProvider(Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo const& frameProviderInfo) const
{
    Windows::Devices::Perception::Provider::IPerceptionFrameProvider result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager)->GetFrameProvider(get_abi(frameProviderInfo), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderManagerServiceStatics<D>::RegisterFrameProviderInfo(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo const& frameProviderInfo) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics)->RegisterFrameProviderInfo(get_abi(manager), get_abi(frameProviderInfo)));
}

template <typename D> void consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderManagerServiceStatics<D>::UnregisterFrameProviderInfo(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo const& frameProviderInfo) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics)->UnregisterFrameProviderInfo(get_abi(manager), get_abi(frameProviderInfo)));
}

template <typename D> void consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderManagerServiceStatics<D>::RegisterFaceAuthenticationGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup const& faceAuthenticationGroup) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics)->RegisterFaceAuthenticationGroup(get_abi(manager), get_abi(faceAuthenticationGroup)));
}

template <typename D> void consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderManagerServiceStatics<D>::UnregisterFaceAuthenticationGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup const& faceAuthenticationGroup) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics)->UnregisterFaceAuthenticationGroup(get_abi(manager), get_abi(faceAuthenticationGroup)));
}

template <typename D> void consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderManagerServiceStatics<D>::RegisterControlGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionControlGroup const& controlGroup) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics)->RegisterControlGroup(get_abi(manager), get_abi(controlGroup)));
}

template <typename D> void consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderManagerServiceStatics<D>::UnregisterControlGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionControlGroup const& controlGroup) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics)->UnregisterControlGroup(get_abi(manager), get_abi(controlGroup)));
}

template <typename D> void consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderManagerServiceStatics<D>::RegisterCorrelationGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionCorrelationGroup const& correlationGroup) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics)->RegisterCorrelationGroup(get_abi(manager), get_abi(correlationGroup)));
}

template <typename D> void consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderManagerServiceStatics<D>::UnregisterCorrelationGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionCorrelationGroup const& correlationGroup) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics)->UnregisterCorrelationGroup(get_abi(manager), get_abi(correlationGroup)));
}

template <typename D> void consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderManagerServiceStatics<D>::UpdateAvailabilityForProvider(Windows::Devices::Perception::Provider::IPerceptionFrameProvider const& provider, bool available) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics)->UpdateAvailabilityForProvider(get_abi(provider), available));
}

template <typename D> void consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderManagerServiceStatics<D>::PublishFrameForProvider(Windows::Devices::Perception::Provider::IPerceptionFrameProvider const& provider, Windows::Devices::Perception::Provider::PerceptionFrame const& frame) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics)->PublishFrameForProvider(get_abi(provider), get_abi(frame)));
}

template <typename D> hstring consume_Windows_Devices_Perception_Provider_IPerceptionPropertyChangeRequest<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionPropertyChangeRequest)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Devices_Perception_Provider_IPerceptionPropertyChangeRequest<D>::Value() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionPropertyChangeRequest)->get_Value(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus consume_Windows_Devices_Perception_Provider_IPerceptionPropertyChangeRequest<D>::Status() const
{
    Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionPropertyChangeRequest)->get_Status(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Perception_Provider_IPerceptionPropertyChangeRequest<D>::Status(Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionPropertyChangeRequest)->put_Status(get_abi(value)));
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Devices_Perception_Provider_IPerceptionPropertyChangeRequest<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionPropertyChangeRequest)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::Perception::Provider::PerceptionFrame consume_Windows_Devices_Perception_Provider_IPerceptionVideoFrameAllocator<D>::AllocateFrame() const
{
    Windows::Devices::Perception::Provider::PerceptionFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocator)->AllocateFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::Provider::PerceptionFrame consume_Windows_Devices_Perception_Provider_IPerceptionVideoFrameAllocator<D>::CopyFromVideoFrame(Windows::Media::VideoFrame const& frame) const
{
    Windows::Devices::Perception::Provider::PerceptionFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocator)->CopyFromVideoFrame(get_abi(frame), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::Provider::PerceptionVideoFrameAllocator consume_Windows_Devices_Perception_Provider_IPerceptionVideoFrameAllocatorFactory<D>::Create(uint32_t maxOutstandingFrameCountForWrite, Windows::Graphics::Imaging::BitmapPixelFormat const& format, Windows::Foundation::Size const& resolution, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha) const
{
    Windows::Devices::Perception::Provider::PerceptionVideoFrameAllocator result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocatorFactory)->Create(maxOutstandingFrameCountForWrite, get_abi(format), get_abi(resolution), get_abi(alpha), put_abi(result)));
    return result;
}

template <> struct delegate<Windows::Devices::Perception::Provider::PerceptionStartFaceAuthenticationHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Devices::Perception::Provider::PerceptionStartFaceAuthenticationHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Devices::Perception::Provider::PerceptionStartFaceAuthenticationHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, bool* result) noexcept final
        {
            try
            {
                *result = detach_abi((*this)(*reinterpret_cast<Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup const*>(&sender)));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::Devices::Perception::Provider::PerceptionStopFaceAuthenticationHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Devices::Perception::Provider::PerceptionStopFaceAuthenticationHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Devices::Perception::Provider::PerceptionStopFaceAuthenticationHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup const*>(&sender));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::Devices::Perception::Provider::IKnownPerceptionFrameKindStatics> : produce_base<D, Windows::Devices::Perception::Provider::IKnownPerceptionFrameKindStatics>
{
    HRESULT __stdcall get_Color(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Depth(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Depth());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Infrared(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Infrared());
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
struct produce<D, Windows::Devices::Perception::Provider::IPerceptionControlGroup> : produce_base<D, Windows::Devices::Perception::Provider::IPerceptionControlGroup>
{
    HRESULT __stdcall get_FrameProviderIds(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameProviderIds());
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
struct produce<D, Windows::Devices::Perception::Provider::IPerceptionControlGroupFactory> : produce_base<D, Windows::Devices::Perception::Provider::IPerceptionControlGroupFactory>
{
    HRESULT __stdcall Create(::IUnknown* ids, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&ids)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::Provider::IPerceptionCorrelation> : produce_base<D, Windows::Devices::Perception::Provider::IPerceptionCorrelation>
{
    HRESULT __stdcall get_TargetId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(abi_t<Windows::Foundation::Numerics::quaternion>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::Provider::IPerceptionCorrelationFactory> : produce_base<D, Windows::Devices::Perception::Provider::IPerceptionCorrelationFactory>
{
    HRESULT __stdcall Create(HSTRING targetId, abi_t<Windows::Foundation::Numerics::float3> position, abi_t<Windows::Foundation::Numerics::quaternion> orientation, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&targetId), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&position), *reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&orientation)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::Provider::IPerceptionCorrelationGroup> : produce_base<D, Windows::Devices::Perception::Provider::IPerceptionCorrelationGroup>
{
    HRESULT __stdcall get_RelativeLocations(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RelativeLocations());
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
struct produce<D, Windows::Devices::Perception::Provider::IPerceptionCorrelationGroupFactory> : produce_base<D, Windows::Devices::Perception::Provider::IPerceptionCorrelationGroupFactory>
{
    HRESULT __stdcall Create(::IUnknown* relativeLocations, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Devices::Perception::Provider::PerceptionCorrelation> const*>(&relativeLocations)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroup> : produce_base<D, Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroup>
{
    HRESULT __stdcall get_FrameProviderIds(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameProviderIds());
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
struct produce<D, Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroupFactory> : produce_base<D, Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroupFactory>
{
    HRESULT __stdcall Create(::IUnknown* ids, ::IUnknown* startHandler, ::IUnknown* stopHandler, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&ids), *reinterpret_cast<Windows::Devices::Perception::Provider::PerceptionStartFaceAuthenticationHandler const*>(&startHandler), *reinterpret_cast<Windows::Devices::Perception::Provider::PerceptionStopFaceAuthenticationHandler const*>(&stopHandler)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::Provider::IPerceptionFrame> : produce_base<D, Windows::Devices::Perception::Provider::IPerceptionFrame>
{
    HRESULT __stdcall get_RelativeTime(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RelativeTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RelativeTime(abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RelativeTime(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
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

    HRESULT __stdcall get_FrameData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameData());
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
struct produce<D, Windows::Devices::Perception::Provider::IPerceptionFrameProvider> : produce_base<D, Windows::Devices::Perception::Provider::IPerceptionFrameProvider>
{
    HRESULT __stdcall get_FrameProviderInfo(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FrameProviderInfo());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Available(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Available());
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

    HRESULT __stdcall Start() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetProperty(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetProperty(*reinterpret_cast<Windows::Devices::Perception::Provider::PerceptionPropertyChangeRequest const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo> : produce_base<D, Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo>
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

    HRESULT __stdcall put_Id(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Id(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall put_DisplayName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceKind(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceKind());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DeviceKind(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeviceKind(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameKind(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameKind());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FrameKind(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FrameKind(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Hidden(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Hidden());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Hidden(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Hidden(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager> : produce_base<D, Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager>
{
    HRESULT __stdcall GetFrameProvider(::IUnknown* frameProviderInfo, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetFrameProvider(*reinterpret_cast<Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo const*>(&frameProviderInfo)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics> : produce_base<D, Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics>
{
    HRESULT __stdcall RegisterFrameProviderInfo(::IUnknown* manager, ::IUnknown* frameProviderInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterFrameProviderInfo(*reinterpret_cast<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const*>(&manager), *reinterpret_cast<Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo const*>(&frameProviderInfo));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UnregisterFrameProviderInfo(::IUnknown* manager, ::IUnknown* frameProviderInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnregisterFrameProviderInfo(*reinterpret_cast<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const*>(&manager), *reinterpret_cast<Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo const*>(&frameProviderInfo));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RegisterFaceAuthenticationGroup(::IUnknown* manager, ::IUnknown* faceAuthenticationGroup) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterFaceAuthenticationGroup(*reinterpret_cast<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const*>(&manager), *reinterpret_cast<Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup const*>(&faceAuthenticationGroup));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UnregisterFaceAuthenticationGroup(::IUnknown* manager, ::IUnknown* faceAuthenticationGroup) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnregisterFaceAuthenticationGroup(*reinterpret_cast<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const*>(&manager), *reinterpret_cast<Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup const*>(&faceAuthenticationGroup));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RegisterControlGroup(::IUnknown* manager, ::IUnknown* controlGroup) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterControlGroup(*reinterpret_cast<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const*>(&manager), *reinterpret_cast<Windows::Devices::Perception::Provider::PerceptionControlGroup const*>(&controlGroup));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UnregisterControlGroup(::IUnknown* manager, ::IUnknown* controlGroup) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnregisterControlGroup(*reinterpret_cast<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const*>(&manager), *reinterpret_cast<Windows::Devices::Perception::Provider::PerceptionControlGroup const*>(&controlGroup));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RegisterCorrelationGroup(::IUnknown* manager, ::IUnknown* correlationGroup) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterCorrelationGroup(*reinterpret_cast<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const*>(&manager), *reinterpret_cast<Windows::Devices::Perception::Provider::PerceptionCorrelationGroup const*>(&correlationGroup));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UnregisterCorrelationGroup(::IUnknown* manager, ::IUnknown* correlationGroup) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnregisterCorrelationGroup(*reinterpret_cast<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const*>(&manager), *reinterpret_cast<Windows::Devices::Perception::Provider::PerceptionCorrelationGroup const*>(&correlationGroup));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateAvailabilityForProvider(::IUnknown* provider, bool available) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateAvailabilityForProvider(*reinterpret_cast<Windows::Devices::Perception::Provider::IPerceptionFrameProvider const*>(&provider), available);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PublishFrameForProvider(::IUnknown* provider, ::IUnknown* frame) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PublishFrameForProvider(*reinterpret_cast<Windows::Devices::Perception::Provider::IPerceptionFrameProvider const*>(&provider), *reinterpret_cast<Windows::Devices::Perception::Provider::PerceptionFrame const*>(&frame));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::Provider::IPerceptionPropertyChangeRequest> : produce_base<D, Windows::Devices::Perception::Provider::IPerceptionPropertyChangeRequest>
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

    HRESULT __stdcall get_Value(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus>* value) noexcept override
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

    HRESULT __stdcall put_Status(abi_t<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Status(*reinterpret_cast<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocator> : produce_base<D, Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocator>
{
    HRESULT __stdcall AllocateFrame(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllocateFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CopyFromVideoFrame(::IUnknown* frame, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CopyFromVideoFrame(*reinterpret_cast<Windows::Media::VideoFrame const*>(&frame)));
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
struct produce<D, Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocatorFactory> : produce_base<D, Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocatorFactory>
{
    HRESULT __stdcall Create(uint32_t maxOutstandingFrameCountForWrite, abi_t<Windows::Graphics::Imaging::BitmapPixelFormat> format, abi_t<Windows::Foundation::Size> resolution, abi_t<Windows::Graphics::Imaging::BitmapAlphaMode> alpha, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(maxOutstandingFrameCountForWrite, *reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&format), *reinterpret_cast<Windows::Foundation::Size const*>(&resolution), *reinterpret_cast<Windows::Graphics::Imaging::BitmapAlphaMode const*>(&alpha)));
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

WINRT_EXPORT namespace winrt::Windows::Devices::Perception::Provider {

inline hstring KnownPerceptionFrameKind::Color()
{
    return get_activation_factory<KnownPerceptionFrameKind, Windows::Devices::Perception::Provider::IKnownPerceptionFrameKindStatics>().Color();
}

inline hstring KnownPerceptionFrameKind::Depth()
{
    return get_activation_factory<KnownPerceptionFrameKind, Windows::Devices::Perception::Provider::IKnownPerceptionFrameKindStatics>().Depth();
}

inline hstring KnownPerceptionFrameKind::Infrared()
{
    return get_activation_factory<KnownPerceptionFrameKind, Windows::Devices::Perception::Provider::IKnownPerceptionFrameKindStatics>().Infrared();
}

inline PerceptionControlGroup::PerceptionControlGroup(param::iterable<hstring> const& ids) :
    PerceptionControlGroup(get_activation_factory<PerceptionControlGroup, Windows::Devices::Perception::Provider::IPerceptionControlGroupFactory>().Create(ids))
{}

inline PerceptionCorrelation::PerceptionCorrelation(param::hstring const& targetId, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::quaternion const& orientation) :
    PerceptionCorrelation(get_activation_factory<PerceptionCorrelation, Windows::Devices::Perception::Provider::IPerceptionCorrelationFactory>().Create(targetId, position, orientation))
{}

inline PerceptionCorrelationGroup::PerceptionCorrelationGroup(param::iterable<Windows::Devices::Perception::Provider::PerceptionCorrelation> const& relativeLocations) :
    PerceptionCorrelationGroup(get_activation_factory<PerceptionCorrelationGroup, Windows::Devices::Perception::Provider::IPerceptionCorrelationGroupFactory>().Create(relativeLocations))
{}

inline PerceptionFaceAuthenticationGroup::PerceptionFaceAuthenticationGroup(param::iterable<hstring> const& ids, Windows::Devices::Perception::Provider::PerceptionStartFaceAuthenticationHandler const& startHandler, Windows::Devices::Perception::Provider::PerceptionStopFaceAuthenticationHandler const& stopHandler) :
    PerceptionFaceAuthenticationGroup(get_activation_factory<PerceptionFaceAuthenticationGroup, Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroupFactory>().Create(ids, startHandler, stopHandler))
{}

inline PerceptionFrameProviderInfo::PerceptionFrameProviderInfo() :
    PerceptionFrameProviderInfo(activate_instance<PerceptionFrameProviderInfo>())
{}

inline void PerceptionFrameProviderManagerService::RegisterFrameProviderInfo(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo const& frameProviderInfo)
{
    get_activation_factory<PerceptionFrameProviderManagerService, Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics>().RegisterFrameProviderInfo(manager, frameProviderInfo);
}

inline void PerceptionFrameProviderManagerService::UnregisterFrameProviderInfo(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo const& frameProviderInfo)
{
    get_activation_factory<PerceptionFrameProviderManagerService, Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics>().UnregisterFrameProviderInfo(manager, frameProviderInfo);
}

inline void PerceptionFrameProviderManagerService::RegisterFaceAuthenticationGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup const& faceAuthenticationGroup)
{
    get_activation_factory<PerceptionFrameProviderManagerService, Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics>().RegisterFaceAuthenticationGroup(manager, faceAuthenticationGroup);
}

inline void PerceptionFrameProviderManagerService::UnregisterFaceAuthenticationGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup const& faceAuthenticationGroup)
{
    get_activation_factory<PerceptionFrameProviderManagerService, Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics>().UnregisterFaceAuthenticationGroup(manager, faceAuthenticationGroup);
}

inline void PerceptionFrameProviderManagerService::RegisterControlGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionControlGroup const& controlGroup)
{
    get_activation_factory<PerceptionFrameProviderManagerService, Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics>().RegisterControlGroup(manager, controlGroup);
}

inline void PerceptionFrameProviderManagerService::UnregisterControlGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionControlGroup const& controlGroup)
{
    get_activation_factory<PerceptionFrameProviderManagerService, Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics>().UnregisterControlGroup(manager, controlGroup);
}

inline void PerceptionFrameProviderManagerService::RegisterCorrelationGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionCorrelationGroup const& correlationGroup)
{
    get_activation_factory<PerceptionFrameProviderManagerService, Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics>().RegisterCorrelationGroup(manager, correlationGroup);
}

inline void PerceptionFrameProviderManagerService::UnregisterCorrelationGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionCorrelationGroup const& correlationGroup)
{
    get_activation_factory<PerceptionFrameProviderManagerService, Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics>().UnregisterCorrelationGroup(manager, correlationGroup);
}

inline void PerceptionFrameProviderManagerService::UpdateAvailabilityForProvider(Windows::Devices::Perception::Provider::IPerceptionFrameProvider const& provider, bool available)
{
    get_activation_factory<PerceptionFrameProviderManagerService, Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics>().UpdateAvailabilityForProvider(provider, available);
}

inline void PerceptionFrameProviderManagerService::PublishFrameForProvider(Windows::Devices::Perception::Provider::IPerceptionFrameProvider const& provider, Windows::Devices::Perception::Provider::PerceptionFrame const& frame)
{
    get_activation_factory<PerceptionFrameProviderManagerService, Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics>().PublishFrameForProvider(provider, frame);
}

inline PerceptionVideoFrameAllocator::PerceptionVideoFrameAllocator(uint32_t maxOutstandingFrameCountForWrite, Windows::Graphics::Imaging::BitmapPixelFormat const& format, Windows::Foundation::Size const& resolution, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha) :
    PerceptionVideoFrameAllocator(get_activation_factory<PerceptionVideoFrameAllocator, Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocatorFactory>().Create(maxOutstandingFrameCountForWrite, format, resolution, alpha))
{}

template <typename L> PerceptionStartFaceAuthenticationHandler::PerceptionStartFaceAuthenticationHandler(L handler) :
    PerceptionStartFaceAuthenticationHandler(impl::make_delegate<PerceptionStartFaceAuthenticationHandler>(std::forward<L>(handler)))
{}

template <typename F> PerceptionStartFaceAuthenticationHandler::PerceptionStartFaceAuthenticationHandler(F* handler) :
    PerceptionStartFaceAuthenticationHandler([=](auto&& ... args) { return handler(args ...); })
{}

template <typename O, typename M> PerceptionStartFaceAuthenticationHandler::PerceptionStartFaceAuthenticationHandler(O* object, M method) :
    PerceptionStartFaceAuthenticationHandler([=](auto&& ... args) { return ((*object).*(method))(args ...); })
{}

inline bool PerceptionStartFaceAuthenticationHandler::operator()(Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup const& sender) const
{
    bool result{};
    check_hresult((*(abi_t<PerceptionStartFaceAuthenticationHandler>**)this)->Invoke(get_abi(sender), &result));
    return result;
}

template <typename L> PerceptionStopFaceAuthenticationHandler::PerceptionStopFaceAuthenticationHandler(L handler) :
    PerceptionStopFaceAuthenticationHandler(impl::make_delegate<PerceptionStopFaceAuthenticationHandler>(std::forward<L>(handler)))
{}

template <typename F> PerceptionStopFaceAuthenticationHandler::PerceptionStopFaceAuthenticationHandler(F* handler) :
    PerceptionStopFaceAuthenticationHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> PerceptionStopFaceAuthenticationHandler::PerceptionStopFaceAuthenticationHandler(O* object, M method) :
    PerceptionStopFaceAuthenticationHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void PerceptionStopFaceAuthenticationHandler::operator()(Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup const& sender) const
{
    check_hresult((*(abi_t<PerceptionStopFaceAuthenticationHandler>**)this)->Invoke(get_abi(sender)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Perception::Provider::IKnownPerceptionFrameKindStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::IKnownPerceptionFrameKindStatics> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::IPerceptionControlGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::IPerceptionControlGroup> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::IPerceptionControlGroupFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::IPerceptionControlGroupFactory> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::IPerceptionCorrelation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::IPerceptionCorrelation> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::IPerceptionCorrelationFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::IPerceptionCorrelationFactory> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::IPerceptionCorrelationGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::IPerceptionCorrelationGroup> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::IPerceptionCorrelationGroupFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::IPerceptionCorrelationGroupFactory> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroup> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroupFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroupFactory> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::IPerceptionFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::IPerceptionFrame> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::IPerceptionFrameProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::IPerceptionFrameProvider> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::IPerceptionPropertyChangeRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::IPerceptionPropertyChangeRequest> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocator> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocatorFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocatorFactory> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::KnownPerceptionFrameKind> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::KnownPerceptionFrameKind> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::PerceptionControlGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::PerceptionControlGroup> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::PerceptionCorrelation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::PerceptionCorrelation> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::PerceptionCorrelationGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::PerceptionCorrelationGroup> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::PerceptionFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::PerceptionFrame> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::PerceptionFrameProviderManagerService> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::PerceptionFrameProviderManagerService> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::PerceptionPropertyChangeRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::PerceptionPropertyChangeRequest> {};

template<> struct hash<winrt::Windows::Devices::Perception::Provider::PerceptionVideoFrameAllocator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::Provider::PerceptionVideoFrameAllocator> {};

}

WINRT_WARNING_POP
