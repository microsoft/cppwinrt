// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Graphics.Imaging.3.h"
#include "internal/Windows.Devices.Perception.3.h"
#include "internal/Windows.Media.3.h"
#include "internal/Windows.Devices.Perception.Provider.3.h"
#include "Windows.Devices.Perception.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Devices::Perception::Provider {

template <typename L> PerceptionStartFaceAuthenticationHandler::PerceptionStartFaceAuthenticationHandler(L lambda) :
    PerceptionStartFaceAuthenticationHandler(impl::make_delegate<impl_PerceptionStartFaceAuthenticationHandler<L>, PerceptionStartFaceAuthenticationHandler>(std::forward<L>(lambda)))
{}

template <typename F> PerceptionStartFaceAuthenticationHandler::PerceptionStartFaceAuthenticationHandler(F * function) :
    PerceptionStartFaceAuthenticationHandler([=](auto && ... args) { return function(args ...); })
{}

template <typename O, typename M> PerceptionStartFaceAuthenticationHandler::PerceptionStartFaceAuthenticationHandler(O * object, M method) :
    PerceptionStartFaceAuthenticationHandler([=](auto && ... args) { return ((*object).*(method))(args ...); })
{}

inline bool PerceptionStartFaceAuthenticationHandler::operator()(const Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup & sender) const
{
    bool result {};
    check_hresult((*this)->abi_Invoke(get(sender), &result));
    return result;
}

template <typename L> PerceptionStopFaceAuthenticationHandler::PerceptionStopFaceAuthenticationHandler(L lambda) :
    PerceptionStopFaceAuthenticationHandler(impl::make_delegate<impl_PerceptionStopFaceAuthenticationHandler<L>, PerceptionStopFaceAuthenticationHandler>(std::forward<L>(lambda)))
{}

template <typename F> PerceptionStopFaceAuthenticationHandler::PerceptionStopFaceAuthenticationHandler(F * function) :
    PerceptionStopFaceAuthenticationHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> PerceptionStopFaceAuthenticationHandler::PerceptionStopFaceAuthenticationHandler(O * object, M method) :
    PerceptionStopFaceAuthenticationHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void PerceptionStopFaceAuthenticationHandler::operator()(const Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup & sender) const
{
    check_hresult((*this)->abi_Invoke(get(sender)));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Perception::Provider::IKnownPerceptionFrameKindStatics> : produce_base<D, Windows::Devices::Perception::Provider::IKnownPerceptionFrameKindStatics>
{
    HRESULT __stdcall get_Color(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Depth(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Depth());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Infrared(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Infrared());
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
    HRESULT __stdcall get_FrameProviderIds(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameProviderIds());
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
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> ids, abi_arg_out<Windows::Devices::Perception::Provider::IPerceptionControlGroup> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&ids)));
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
    HRESULT __stdcall get_TargetId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(abi_arg_out<Windows::Foundation::Numerics::quaternion> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Orientation());
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
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> targetId, abi_arg_in<Windows::Foundation::Numerics::float3> position, abi_arg_in<Windows::Foundation::Numerics::quaternion> orientation, abi_arg_out<Windows::Devices::Perception::Provider::IPerceptionCorrelation> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&targetId), *reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&position), *reinterpret_cast<const Windows::Foundation::Numerics::quaternion *>(&orientation)));
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
    HRESULT __stdcall get_RelativeLocations(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::Provider::PerceptionCorrelation>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RelativeLocations());
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
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Devices::Perception::Provider::PerceptionCorrelation>> relativeLocations, abi_arg_out<Windows::Devices::Perception::Provider::IPerceptionCorrelationGroup> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Devices::Perception::Provider::PerceptionCorrelation> *>(&relativeLocations)));
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
    HRESULT __stdcall get_FrameProviderIds(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameProviderIds());
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
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> ids, abi_arg_in<Windows::Devices::Perception::Provider::PerceptionStartFaceAuthenticationHandler> startHandler, abi_arg_in<Windows::Devices::Perception::Provider::PerceptionStopFaceAuthenticationHandler> stopHandler, abi_arg_out<Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroup> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&ids), *reinterpret_cast<const Windows::Devices::Perception::Provider::PerceptionStartFaceAuthenticationHandler *>(&startHandler), *reinterpret_cast<const Windows::Devices::Perception::Provider::PerceptionStopFaceAuthenticationHandler *>(&stopHandler)));
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
    HRESULT __stdcall get_RelativeTime(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RelativeTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RelativeTime(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().RelativeTime(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameData(abi_arg_out<Windows::Foundation::IMemoryBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameData());
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
    HRESULT __stdcall get_FrameProviderInfo(abi_arg_out<Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FrameProviderInfo());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Available(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Available());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Start() noexcept override
    {
        try
        {
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Stop() noexcept override
    {
        try
        {
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetProperty(abi_arg_in<Windows::Devices::Perception::Provider::IPerceptionPropertyChangeRequest> value) noexcept override
    {
        try
        {
            this->shim().SetProperty(*reinterpret_cast<const Windows::Devices::Perception::Provider::PerceptionPropertyChangeRequest *>(&value));
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
    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Id(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Id(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_DeviceKind(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceKind());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DeviceKind(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().DeviceKind(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameKind(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameKind());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FrameKind(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().FrameKind(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Hidden(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Hidden());
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
    HRESULT __stdcall abi_GetFrameProvider(abi_arg_in<Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo> frameProviderInfo, abi_arg_out<Windows::Devices::Perception::Provider::IPerceptionFrameProvider> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetFrameProvider(*reinterpret_cast<const Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo *>(&frameProviderInfo)));
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
    HRESULT __stdcall abi_RegisterFrameProviderInfo(abi_arg_in<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager> manager, abi_arg_in<Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo> frameProviderInfo) noexcept override
    {
        try
        {
            this->shim().RegisterFrameProviderInfo(*reinterpret_cast<const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager *>(&manager), *reinterpret_cast<const Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo *>(&frameProviderInfo));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnregisterFrameProviderInfo(abi_arg_in<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager> manager, abi_arg_in<Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo> frameProviderInfo) noexcept override
    {
        try
        {
            this->shim().UnregisterFrameProviderInfo(*reinterpret_cast<const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager *>(&manager), *reinterpret_cast<const Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo *>(&frameProviderInfo));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterFaceAuthenticationGroup(abi_arg_in<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager> manager, abi_arg_in<Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroup> faceAuthenticationGroup) noexcept override
    {
        try
        {
            this->shim().RegisterFaceAuthenticationGroup(*reinterpret_cast<const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager *>(&manager), *reinterpret_cast<const Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup *>(&faceAuthenticationGroup));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnregisterFaceAuthenticationGroup(abi_arg_in<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager> manager, abi_arg_in<Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroup> faceAuthenticationGroup) noexcept override
    {
        try
        {
            this->shim().UnregisterFaceAuthenticationGroup(*reinterpret_cast<const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager *>(&manager), *reinterpret_cast<const Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup *>(&faceAuthenticationGroup));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterControlGroup(abi_arg_in<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager> manager, abi_arg_in<Windows::Devices::Perception::Provider::IPerceptionControlGroup> controlGroup) noexcept override
    {
        try
        {
            this->shim().RegisterControlGroup(*reinterpret_cast<const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager *>(&manager), *reinterpret_cast<const Windows::Devices::Perception::Provider::PerceptionControlGroup *>(&controlGroup));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnregisterControlGroup(abi_arg_in<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager> manager, abi_arg_in<Windows::Devices::Perception::Provider::IPerceptionControlGroup> controlGroup) noexcept override
    {
        try
        {
            this->shim().UnregisterControlGroup(*reinterpret_cast<const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager *>(&manager), *reinterpret_cast<const Windows::Devices::Perception::Provider::PerceptionControlGroup *>(&controlGroup));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterCorrelationGroup(abi_arg_in<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager> manager, abi_arg_in<Windows::Devices::Perception::Provider::IPerceptionCorrelationGroup> correlationGroup) noexcept override
    {
        try
        {
            this->shim().RegisterCorrelationGroup(*reinterpret_cast<const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager *>(&manager), *reinterpret_cast<const Windows::Devices::Perception::Provider::PerceptionCorrelationGroup *>(&correlationGroup));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnregisterCorrelationGroup(abi_arg_in<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager> manager, abi_arg_in<Windows::Devices::Perception::Provider::IPerceptionCorrelationGroup> correlationGroup) noexcept override
    {
        try
        {
            this->shim().UnregisterCorrelationGroup(*reinterpret_cast<const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager *>(&manager), *reinterpret_cast<const Windows::Devices::Perception::Provider::PerceptionCorrelationGroup *>(&correlationGroup));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateAvailabilityForProvider(abi_arg_in<Windows::Devices::Perception::Provider::IPerceptionFrameProvider> provider, bool available) noexcept override
    {
        try
        {
            this->shim().UpdateAvailabilityForProvider(*reinterpret_cast<const Windows::Devices::Perception::Provider::IPerceptionFrameProvider *>(&provider), available);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PublishFrameForProvider(abi_arg_in<Windows::Devices::Perception::Provider::IPerceptionFrameProvider> provider, abi_arg_in<Windows::Devices::Perception::Provider::IPerceptionFrame> frame) noexcept override
    {
        try
        {
            this->shim().PublishFrameForProvider(*reinterpret_cast<const Windows::Devices::Perception::Provider::IPerceptionFrameProvider *>(&provider), *reinterpret_cast<const Windows::Devices::Perception::Provider::PerceptionFrame *>(&frame));
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
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Status(Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus value) noexcept override
    {
        try
        {
            this->shim().Status(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDeferral());
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
    HRESULT __stdcall abi_AllocateFrame(abi_arg_out<Windows::Devices::Perception::Provider::IPerceptionFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllocateFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CopyFromVideoFrame(abi_arg_in<Windows::Media::IVideoFrame> frame, abi_arg_out<Windows::Devices::Perception::Provider::IPerceptionFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CopyFromVideoFrame(*reinterpret_cast<const Windows::Media::VideoFrame *>(&frame)));
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
    HRESULT __stdcall abi_Create(uint32_t maxOutstandingFrameCountForWrite, Windows::Graphics::Imaging::BitmapPixelFormat format, abi_arg_in<Windows::Foundation::Size> resolution, Windows::Graphics::Imaging::BitmapAlphaMode alpha, abi_arg_out<Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocator> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(maxOutstandingFrameCountForWrite, format, *reinterpret_cast<const Windows::Foundation::Size *>(&resolution), alpha));
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

namespace Windows::Devices::Perception::Provider {

template <typename D> hstring impl_IKnownPerceptionFrameKindStatics<D>::Color() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionFrameKindStatics &>(static_cast<const D &>(*this))->get_Color(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionFrameKindStatics<D>::Depth() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionFrameKindStatics &>(static_cast<const D &>(*this))->get_Depth(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionFrameKindStatics<D>::Infrared() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionFrameKindStatics &>(static_cast<const D &>(*this))->get_Infrared(put(value)));
    return value;
}

template <typename D> void impl_IPerceptionFrameProviderManagerServiceStatics<D>::RegisterFrameProviderInfo(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo & frameProviderInfo) const
{
    check_hresult(static_cast<const IPerceptionFrameProviderManagerServiceStatics &>(static_cast<const D &>(*this))->abi_RegisterFrameProviderInfo(get(manager), get(frameProviderInfo)));
}

template <typename D> void impl_IPerceptionFrameProviderManagerServiceStatics<D>::UnregisterFrameProviderInfo(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo & frameProviderInfo) const
{
    check_hresult(static_cast<const IPerceptionFrameProviderManagerServiceStatics &>(static_cast<const D &>(*this))->abi_UnregisterFrameProviderInfo(get(manager), get(frameProviderInfo)));
}

template <typename D> void impl_IPerceptionFrameProviderManagerServiceStatics<D>::RegisterFaceAuthenticationGroup(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup & faceAuthenticationGroup) const
{
    check_hresult(static_cast<const IPerceptionFrameProviderManagerServiceStatics &>(static_cast<const D &>(*this))->abi_RegisterFaceAuthenticationGroup(get(manager), get(faceAuthenticationGroup)));
}

template <typename D> void impl_IPerceptionFrameProviderManagerServiceStatics<D>::UnregisterFaceAuthenticationGroup(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup & faceAuthenticationGroup) const
{
    check_hresult(static_cast<const IPerceptionFrameProviderManagerServiceStatics &>(static_cast<const D &>(*this))->abi_UnregisterFaceAuthenticationGroup(get(manager), get(faceAuthenticationGroup)));
}

template <typename D> void impl_IPerceptionFrameProviderManagerServiceStatics<D>::RegisterControlGroup(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionControlGroup & controlGroup) const
{
    check_hresult(static_cast<const IPerceptionFrameProviderManagerServiceStatics &>(static_cast<const D &>(*this))->abi_RegisterControlGroup(get(manager), get(controlGroup)));
}

template <typename D> void impl_IPerceptionFrameProviderManagerServiceStatics<D>::UnregisterControlGroup(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionControlGroup & controlGroup) const
{
    check_hresult(static_cast<const IPerceptionFrameProviderManagerServiceStatics &>(static_cast<const D &>(*this))->abi_UnregisterControlGroup(get(manager), get(controlGroup)));
}

template <typename D> void impl_IPerceptionFrameProviderManagerServiceStatics<D>::RegisterCorrelationGroup(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionCorrelationGroup & correlationGroup) const
{
    check_hresult(static_cast<const IPerceptionFrameProviderManagerServiceStatics &>(static_cast<const D &>(*this))->abi_RegisterCorrelationGroup(get(manager), get(correlationGroup)));
}

template <typename D> void impl_IPerceptionFrameProviderManagerServiceStatics<D>::UnregisterCorrelationGroup(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionCorrelationGroup & correlationGroup) const
{
    check_hresult(static_cast<const IPerceptionFrameProviderManagerServiceStatics &>(static_cast<const D &>(*this))->abi_UnregisterCorrelationGroup(get(manager), get(correlationGroup)));
}

template <typename D> void impl_IPerceptionFrameProviderManagerServiceStatics<D>::UpdateAvailabilityForProvider(const Windows::Devices::Perception::Provider::IPerceptionFrameProvider & provider, bool available) const
{
    check_hresult(static_cast<const IPerceptionFrameProviderManagerServiceStatics &>(static_cast<const D &>(*this))->abi_UpdateAvailabilityForProvider(get(provider), available));
}

template <typename D> void impl_IPerceptionFrameProviderManagerServiceStatics<D>::PublishFrameForProvider(const Windows::Devices::Perception::Provider::IPerceptionFrameProvider & provider, const Windows::Devices::Perception::Provider::PerceptionFrame & frame) const
{
    check_hresult(static_cast<const IPerceptionFrameProviderManagerServiceStatics &>(static_cast<const D &>(*this))->abi_PublishFrameForProvider(get(provider), get(frame)));
}

template <typename D> hstring impl_IPerceptionFrameProviderInfo<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IPerceptionFrameProviderInfo &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> void impl_IPerceptionFrameProviderInfo<D>::Id(hstring_ref value) const
{
    check_hresult(static_cast<const IPerceptionFrameProviderInfo &>(static_cast<const D &>(*this))->put_Id(get(value)));
}

template <typename D> hstring impl_IPerceptionFrameProviderInfo<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IPerceptionFrameProviderInfo &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> void impl_IPerceptionFrameProviderInfo<D>::DisplayName(hstring_ref value) const
{
    check_hresult(static_cast<const IPerceptionFrameProviderInfo &>(static_cast<const D &>(*this))->put_DisplayName(get(value)));
}

template <typename D> hstring impl_IPerceptionFrameProviderInfo<D>::DeviceKind() const
{
    hstring value;
    check_hresult(static_cast<const IPerceptionFrameProviderInfo &>(static_cast<const D &>(*this))->get_DeviceKind(put(value)));
    return value;
}

template <typename D> void impl_IPerceptionFrameProviderInfo<D>::DeviceKind(hstring_ref value) const
{
    check_hresult(static_cast<const IPerceptionFrameProviderInfo &>(static_cast<const D &>(*this))->put_DeviceKind(get(value)));
}

template <typename D> hstring impl_IPerceptionFrameProviderInfo<D>::FrameKind() const
{
    hstring value;
    check_hresult(static_cast<const IPerceptionFrameProviderInfo &>(static_cast<const D &>(*this))->get_FrameKind(put(value)));
    return value;
}

template <typename D> void impl_IPerceptionFrameProviderInfo<D>::FrameKind(hstring_ref value) const
{
    check_hresult(static_cast<const IPerceptionFrameProviderInfo &>(static_cast<const D &>(*this))->put_FrameKind(get(value)));
}

template <typename D> bool impl_IPerceptionFrameProviderInfo<D>::Hidden() const
{
    bool value {};
    check_hresult(static_cast<const IPerceptionFrameProviderInfo &>(static_cast<const D &>(*this))->get_Hidden(&value));
    return value;
}

template <typename D> void impl_IPerceptionFrameProviderInfo<D>::Hidden(bool value) const
{
    check_hresult(static_cast<const IPerceptionFrameProviderInfo &>(static_cast<const D &>(*this))->put_Hidden(value));
}

template <typename D> Windows::Devices::Perception::Provider::PerceptionControlGroup impl_IPerceptionControlGroupFactory<D>::Create(const Windows::Foundation::Collections::IIterable<hstring> & ids) const
{
    Windows::Devices::Perception::Provider::PerceptionControlGroup result { nullptr };
    check_hresult(static_cast<const IPerceptionControlGroupFactory &>(static_cast<const D &>(*this))->abi_Create(get(ids), put(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IPerceptionControlGroup<D>::FrameProviderIds() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IPerceptionControlGroup &>(static_cast<const D &>(*this))->get_FrameProviderIds(put(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup impl_IPerceptionFaceAuthenticationGroupFactory<D>::Create(const Windows::Foundation::Collections::IIterable<hstring> & ids, const Windows::Devices::Perception::Provider::PerceptionStartFaceAuthenticationHandler & startHandler, const Windows::Devices::Perception::Provider::PerceptionStopFaceAuthenticationHandler & stopHandler) const
{
    Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup result { nullptr };
    check_hresult(static_cast<const IPerceptionFaceAuthenticationGroupFactory &>(static_cast<const D &>(*this))->abi_Create(get(ids), get(startHandler), get(stopHandler), put(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IPerceptionFaceAuthenticationGroup<D>::FrameProviderIds() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IPerceptionFaceAuthenticationGroup &>(static_cast<const D &>(*this))->get_FrameProviderIds(put(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::Provider::PerceptionCorrelation impl_IPerceptionCorrelationFactory<D>::Create(hstring_ref targetId, const Windows::Foundation::Numerics::float3 & position, const Windows::Foundation::Numerics::quaternion & orientation) const
{
    Windows::Devices::Perception::Provider::PerceptionCorrelation result { nullptr };
    check_hresult(static_cast<const IPerceptionCorrelationFactory &>(static_cast<const D &>(*this))->abi_Create(get(targetId), get(position), get(orientation), put(result)));
    return result;
}

template <typename D> hstring impl_IPerceptionCorrelation<D>::TargetId() const
{
    hstring value;
    check_hresult(static_cast<const IPerceptionCorrelation &>(static_cast<const D &>(*this))->get_TargetId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 impl_IPerceptionCorrelation<D>::Position() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(static_cast<const IPerceptionCorrelation &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::quaternion impl_IPerceptionCorrelation<D>::Orientation() const
{
    Windows::Foundation::Numerics::quaternion value {};
    check_hresult(static_cast<const IPerceptionCorrelation &>(static_cast<const D &>(*this))->get_Orientation(put(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::Provider::PerceptionCorrelationGroup impl_IPerceptionCorrelationGroupFactory<D>::Create(const Windows::Foundation::Collections::IIterable<Windows::Devices::Perception::Provider::PerceptionCorrelation> & relativeLocations) const
{
    Windows::Devices::Perception::Provider::PerceptionCorrelationGroup result { nullptr };
    check_hresult(static_cast<const IPerceptionCorrelationGroupFactory &>(static_cast<const D &>(*this))->abi_Create(get(relativeLocations), put(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::Provider::PerceptionCorrelation> impl_IPerceptionCorrelationGroup<D>::RelativeLocations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::Provider::PerceptionCorrelation> value;
    check_hresult(static_cast<const IPerceptionCorrelationGroup &>(static_cast<const D &>(*this))->get_RelativeLocations(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IPerceptionFrame<D>::RelativeTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IPerceptionFrame &>(static_cast<const D &>(*this))->get_RelativeTime(put(value)));
    return value;
}

template <typename D> void impl_IPerceptionFrame<D>::RelativeTime(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const IPerceptionFrame &>(static_cast<const D &>(*this))->put_RelativeTime(get(value)));
}

template <typename D> Windows::Foundation::Collections::ValueSet impl_IPerceptionFrame<D>::Properties() const
{
    Windows::Foundation::Collections::ValueSet value { nullptr };
    check_hresult(static_cast<const IPerceptionFrame &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IMemoryBuffer impl_IPerceptionFrame<D>::FrameData() const
{
    Windows::Foundation::IMemoryBuffer value;
    check_hresult(static_cast<const IPerceptionFrame &>(static_cast<const D &>(*this))->get_FrameData(put(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::Provider::PerceptionVideoFrameAllocator impl_IPerceptionVideoFrameAllocatorFactory<D>::Create(uint32_t maxOutstandingFrameCountForWrite, Windows::Graphics::Imaging::BitmapPixelFormat format, const Windows::Foundation::Size & resolution, Windows::Graphics::Imaging::BitmapAlphaMode alpha) const
{
    Windows::Devices::Perception::Provider::PerceptionVideoFrameAllocator result { nullptr };
    check_hresult(static_cast<const IPerceptionVideoFrameAllocatorFactory &>(static_cast<const D &>(*this))->abi_Create(maxOutstandingFrameCountForWrite, format, get(resolution), alpha, put(result)));
    return result;
}

template <typename D> hstring impl_IPerceptionPropertyChangeRequest<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IPerceptionPropertyChangeRequest &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_IPerceptionPropertyChangeRequest<D>::Value() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IPerceptionPropertyChangeRequest &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus impl_IPerceptionPropertyChangeRequest<D>::Status() const
{
    Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus value {};
    check_hresult(static_cast<const IPerceptionPropertyChangeRequest &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> void impl_IPerceptionPropertyChangeRequest<D>::Status(Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus value) const
{
    check_hresult(static_cast<const IPerceptionPropertyChangeRequest &>(static_cast<const D &>(*this))->put_Status(value));
}

template <typename D> Windows::Foundation::Deferral impl_IPerceptionPropertyChangeRequest<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result { nullptr };
    check_hresult(static_cast<const IPerceptionPropertyChangeRequest &>(static_cast<const D &>(*this))->abi_GetDeferral(put(result)));
    return result;
}

template <typename D> Windows::Devices::Perception::Provider::IPerceptionFrameProvider impl_IPerceptionFrameProviderManager<D>::GetFrameProvider(const Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo & frameProviderInfo) const
{
    Windows::Devices::Perception::Provider::IPerceptionFrameProvider result;
    check_hresult(static_cast<const IPerceptionFrameProviderManager &>(static_cast<const D &>(*this))->abi_GetFrameProvider(get(frameProviderInfo), put(result)));
    return result;
}

template <typename D> Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo impl_IPerceptionFrameProvider<D>::FrameProviderInfo() const
{
    Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo result { nullptr };
    check_hresult(static_cast<const IPerceptionFrameProvider &>(static_cast<const D &>(*this))->get_FrameProviderInfo(put(result)));
    return result;
}

template <typename D> bool impl_IPerceptionFrameProvider<D>::Available() const
{
    bool value {};
    check_hresult(static_cast<const IPerceptionFrameProvider &>(static_cast<const D &>(*this))->get_Available(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IPropertySet impl_IPerceptionFrameProvider<D>::Properties() const
{
    Windows::Foundation::Collections::IPropertySet value;
    check_hresult(static_cast<const IPerceptionFrameProvider &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> void impl_IPerceptionFrameProvider<D>::Start() const
{
    check_hresult(static_cast<const IPerceptionFrameProvider &>(static_cast<const D &>(*this))->abi_Start());
}

template <typename D> void impl_IPerceptionFrameProvider<D>::Stop() const
{
    check_hresult(static_cast<const IPerceptionFrameProvider &>(static_cast<const D &>(*this))->abi_Stop());
}

template <typename D> void impl_IPerceptionFrameProvider<D>::SetProperty(const Windows::Devices::Perception::Provider::PerceptionPropertyChangeRequest & value) const
{
    check_hresult(static_cast<const IPerceptionFrameProvider &>(static_cast<const D &>(*this))->abi_SetProperty(get(value)));
}

template <typename D> Windows::Devices::Perception::Provider::PerceptionFrame impl_IPerceptionVideoFrameAllocator<D>::AllocateFrame() const
{
    Windows::Devices::Perception::Provider::PerceptionFrame value { nullptr };
    check_hresult(static_cast<const IPerceptionVideoFrameAllocator &>(static_cast<const D &>(*this))->abi_AllocateFrame(put(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::Provider::PerceptionFrame impl_IPerceptionVideoFrameAllocator<D>::CopyFromVideoFrame(const Windows::Media::VideoFrame & frame) const
{
    Windows::Devices::Perception::Provider::PerceptionFrame value { nullptr };
    check_hresult(static_cast<const IPerceptionVideoFrameAllocator &>(static_cast<const D &>(*this))->abi_CopyFromVideoFrame(get(frame), put(value)));
    return value;
}

inline hstring KnownPerceptionFrameKind::Color()
{
    return get_activation_factory<KnownPerceptionFrameKind, IKnownPerceptionFrameKindStatics>().Color();
}

inline hstring KnownPerceptionFrameKind::Depth()
{
    return get_activation_factory<KnownPerceptionFrameKind, IKnownPerceptionFrameKindStatics>().Depth();
}

inline hstring KnownPerceptionFrameKind::Infrared()
{
    return get_activation_factory<KnownPerceptionFrameKind, IKnownPerceptionFrameKindStatics>().Infrared();
}

inline PerceptionControlGroup::PerceptionControlGroup(const Windows::Foundation::Collections::IIterable<hstring> & ids) :
    PerceptionControlGroup(get_activation_factory<PerceptionControlGroup, IPerceptionControlGroupFactory>().Create(ids))
{}

inline PerceptionCorrelation::PerceptionCorrelation(hstring_ref targetId, const Windows::Foundation::Numerics::float3 & position, const Windows::Foundation::Numerics::quaternion & orientation) :
    PerceptionCorrelation(get_activation_factory<PerceptionCorrelation, IPerceptionCorrelationFactory>().Create(targetId, position, orientation))
{}

inline PerceptionCorrelationGroup::PerceptionCorrelationGroup(const Windows::Foundation::Collections::IIterable<Windows::Devices::Perception::Provider::PerceptionCorrelation> & relativeLocations) :
    PerceptionCorrelationGroup(get_activation_factory<PerceptionCorrelationGroup, IPerceptionCorrelationGroupFactory>().Create(relativeLocations))
{}

inline PerceptionFaceAuthenticationGroup::PerceptionFaceAuthenticationGroup(const Windows::Foundation::Collections::IIterable<hstring> & ids, const Windows::Devices::Perception::Provider::PerceptionStartFaceAuthenticationHandler & startHandler, const Windows::Devices::Perception::Provider::PerceptionStopFaceAuthenticationHandler & stopHandler) :
    PerceptionFaceAuthenticationGroup(get_activation_factory<PerceptionFaceAuthenticationGroup, IPerceptionFaceAuthenticationGroupFactory>().Create(ids, startHandler, stopHandler))
{}

inline PerceptionFrameProviderInfo::PerceptionFrameProviderInfo() :
    PerceptionFrameProviderInfo(activate_instance<PerceptionFrameProviderInfo>())
{}

inline void PerceptionFrameProviderManagerService::RegisterFrameProviderInfo(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo & frameProviderInfo)
{
    get_activation_factory<PerceptionFrameProviderManagerService, IPerceptionFrameProviderManagerServiceStatics>().RegisterFrameProviderInfo(manager, frameProviderInfo);
}

inline void PerceptionFrameProviderManagerService::UnregisterFrameProviderInfo(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo & frameProviderInfo)
{
    get_activation_factory<PerceptionFrameProviderManagerService, IPerceptionFrameProviderManagerServiceStatics>().UnregisterFrameProviderInfo(manager, frameProviderInfo);
}

inline void PerceptionFrameProviderManagerService::RegisterFaceAuthenticationGroup(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup & faceAuthenticationGroup)
{
    get_activation_factory<PerceptionFrameProviderManagerService, IPerceptionFrameProviderManagerServiceStatics>().RegisterFaceAuthenticationGroup(manager, faceAuthenticationGroup);
}

inline void PerceptionFrameProviderManagerService::UnregisterFaceAuthenticationGroup(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup & faceAuthenticationGroup)
{
    get_activation_factory<PerceptionFrameProviderManagerService, IPerceptionFrameProviderManagerServiceStatics>().UnregisterFaceAuthenticationGroup(manager, faceAuthenticationGroup);
}

inline void PerceptionFrameProviderManagerService::RegisterControlGroup(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionControlGroup & controlGroup)
{
    get_activation_factory<PerceptionFrameProviderManagerService, IPerceptionFrameProviderManagerServiceStatics>().RegisterControlGroup(manager, controlGroup);
}

inline void PerceptionFrameProviderManagerService::UnregisterControlGroup(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionControlGroup & controlGroup)
{
    get_activation_factory<PerceptionFrameProviderManagerService, IPerceptionFrameProviderManagerServiceStatics>().UnregisterControlGroup(manager, controlGroup);
}

inline void PerceptionFrameProviderManagerService::RegisterCorrelationGroup(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionCorrelationGroup & correlationGroup)
{
    get_activation_factory<PerceptionFrameProviderManagerService, IPerceptionFrameProviderManagerServiceStatics>().RegisterCorrelationGroup(manager, correlationGroup);
}

inline void PerceptionFrameProviderManagerService::UnregisterCorrelationGroup(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionCorrelationGroup & correlationGroup)
{
    get_activation_factory<PerceptionFrameProviderManagerService, IPerceptionFrameProviderManagerServiceStatics>().UnregisterCorrelationGroup(manager, correlationGroup);
}

inline void PerceptionFrameProviderManagerService::UpdateAvailabilityForProvider(const Windows::Devices::Perception::Provider::IPerceptionFrameProvider & provider, bool available)
{
    get_activation_factory<PerceptionFrameProviderManagerService, IPerceptionFrameProviderManagerServiceStatics>().UpdateAvailabilityForProvider(provider, available);
}

inline void PerceptionFrameProviderManagerService::PublishFrameForProvider(const Windows::Devices::Perception::Provider::IPerceptionFrameProvider & provider, const Windows::Devices::Perception::Provider::PerceptionFrame & frame)
{
    get_activation_factory<PerceptionFrameProviderManagerService, IPerceptionFrameProviderManagerServiceStatics>().PublishFrameForProvider(provider, frame);
}

inline PerceptionVideoFrameAllocator::PerceptionVideoFrameAllocator(uint32_t maxOutstandingFrameCountForWrite, Windows::Graphics::Imaging::BitmapPixelFormat format, const Windows::Foundation::Size & resolution, Windows::Graphics::Imaging::BitmapAlphaMode alpha) :
    PerceptionVideoFrameAllocator(get_activation_factory<PerceptionVideoFrameAllocator, IPerceptionVideoFrameAllocatorFactory>().Create(maxOutstandingFrameCountForWrite, format, resolution, alpha))
{}

}

}
