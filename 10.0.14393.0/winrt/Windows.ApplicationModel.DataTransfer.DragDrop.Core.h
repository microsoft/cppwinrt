// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.ApplicationModel.DataTransfer.3.h"
#include "internal/Windows.ApplicationModel.DataTransfer.DragDrop.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Graphics.Imaging.3.h"
#include "internal/Windows.ApplicationModel.DataTransfer.DragDrop.Core.3.h"
#include "Windows.ApplicationModel.DataTransfer.DragDrop.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager>
{
    HRESULT __stdcall add_TargetRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs>> value, event_token * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().TargetRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TargetRequested(event_token value) noexcept override
    {
        try
        {
            this->shim().TargetRequested(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AreConcurrentOperationsEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AreConcurrentOperationsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AreConcurrentOperationsEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().AreConcurrentOperationsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics>
{
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetForCurrentView());
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
struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo>
{
    HRESULT __stdcall get_Data(abi_arg_out<Windows::ApplicationModel::DataTransfer::IDataPackageView> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Modifiers(Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Modifiers());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Point> value) noexcept override
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2>
{
    HRESULT __stdcall get_AllowedOperations(Windows::ApplicationModel::DataTransfer::DataPackageOperation * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowedOperations());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation>
{
    HRESULT __stdcall get_Data(abi_arg_out<Windows::ApplicationModel::DataTransfer::IDataPackage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPointerId(uint32_t pointerId) noexcept override
    {
        try
        {
            this->shim().SetPointerId(pointerId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetDragUIContentFromSoftwareBitmap(abi_arg_in<Windows::Graphics::Imaging::ISoftwareBitmap> softwareBitmap) noexcept override
    {
        try
        {
            this->shim().SetDragUIContentFromSoftwareBitmap(*reinterpret_cast<const Windows::Graphics::Imaging::SoftwareBitmap *>(&softwareBitmap));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetDragUIContentFromSoftwareBitmapWithAnchorPoint(abi_arg_in<Windows::Graphics::Imaging::ISoftwareBitmap> softwareBitmap, abi_arg_in<Windows::Foundation::Point> anchorPoint) noexcept override
    {
        try
        {
            this->shim().SetDragUIContentFromSoftwareBitmap(*reinterpret_cast<const Windows::Graphics::Imaging::SoftwareBitmap *>(&softwareBitmap), *reinterpret_cast<const Windows::Foundation::Point *>(&anchorPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DragUIContentMode(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DragUIContentMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DragUIContentMode(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode value) noexcept override
    {
        try
        {
            this->shim().DragUIContentMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StartAsync());
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
struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2>
{
    HRESULT __stdcall get_AllowedOperations(Windows::ApplicationModel::DataTransfer::DataPackageOperation * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowedOperations());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowedOperations(Windows::ApplicationModel::DataTransfer::DataPackageOperation value) noexcept override
    {
        try
        {
            this->shim().AllowedOperations(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride>
{
    HRESULT __stdcall abi_SetContentFromSoftwareBitmap(abi_arg_in<Windows::Graphics::Imaging::ISoftwareBitmap> softwareBitmap) noexcept override
    {
        try
        {
            this->shim().SetContentFromSoftwareBitmap(*reinterpret_cast<const Windows::Graphics::Imaging::SoftwareBitmap *>(&softwareBitmap));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetContentFromSoftwareBitmapWithAnchorPoint(abi_arg_in<Windows::Graphics::Imaging::ISoftwareBitmap> softwareBitmap, abi_arg_in<Windows::Foundation::Point> anchorPoint) noexcept override
    {
        try
        {
            this->shim().SetContentFromSoftwareBitmap(*reinterpret_cast<const Windows::Graphics::Imaging::SoftwareBitmap *>(&softwareBitmap), *reinterpret_cast<const Windows::Foundation::Point *>(&anchorPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsContentVisible(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsContentVisible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsContentVisible(bool value) noexcept override
    {
        try
        {
            this->shim().IsContentVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Caption(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Caption());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Caption(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Caption(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCaptionVisible(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCaptionVisible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsCaptionVisible(bool value) noexcept override
    {
        try
        {
            this->shim().IsCaptionVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsGlyphVisible(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsGlyphVisible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsGlyphVisible(bool value) noexcept override
    {
        try
        {
            this->shim().IsGlyphVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Clear() noexcept override
    {
        try
        {
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget>
{
    HRESULT __stdcall abi_EnterAsync(abi_arg_in<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo> dragInfo, abi_arg_in<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride> dragUIOverride, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().EnterAsync(*reinterpret_cast<const Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo *>(&dragInfo), *reinterpret_cast<const Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride *>(&dragUIOverride)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OverAsync(abi_arg_in<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo> dragInfo, abi_arg_in<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride> dragUIOverride, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().OverAsync(*reinterpret_cast<const Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo *>(&dragInfo), *reinterpret_cast<const Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride *>(&dragUIOverride)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LeaveAsync(abi_arg_in<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo> dragInfo, abi_arg_out<Windows::Foundation::IAsyncAction> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().LeaveAsync(*reinterpret_cast<const Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo *>(&dragInfo)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DropAsync(abi_arg_in<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo> dragInfo, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().DropAsync(*reinterpret_cast<const Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo *>(&dragInfo)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs>
{
    HRESULT __stdcall abi_SetTarget(abi_arg_in<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget> target) noexcept override
    {
        try
        {
            this->shim().SetTarget(*reinterpret_cast<const Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget *>(&target));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::DataTransfer::DragDrop::Core {

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageView impl_ICoreDragInfo<D>::Data() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageView value { nullptr };
    check_hresult(static_cast<const ICoreDragInfo &>(static_cast<const D &>(*this))->get_Data(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers impl_ICoreDragInfo<D>::Modifiers() const
{
    Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers value {};
    check_hresult(static_cast<const ICoreDragInfo &>(static_cast<const D &>(*this))->get_Modifiers(&value));
    return value;
}

template <typename D> Windows::Foundation::Point impl_ICoreDragInfo<D>::Position() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const ICoreDragInfo &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageOperation impl_ICoreDragInfo2<D>::AllowedOperations() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation value {};
    check_hresult(static_cast<const ICoreDragInfo2 &>(static_cast<const D &>(*this))->get_AllowedOperations(&value));
    return value;
}

template <typename D> void impl_ICoreDragUIOverride<D>::SetContentFromSoftwareBitmap(const Windows::Graphics::Imaging::SoftwareBitmap & softwareBitmap) const
{
    check_hresult(static_cast<const ICoreDragUIOverride &>(static_cast<const D &>(*this))->abi_SetContentFromSoftwareBitmap(get(softwareBitmap)));
}

template <typename D> void impl_ICoreDragUIOverride<D>::SetContentFromSoftwareBitmap(const Windows::Graphics::Imaging::SoftwareBitmap & softwareBitmap, const Windows::Foundation::Point & anchorPoint) const
{
    check_hresult(static_cast<const ICoreDragUIOverride &>(static_cast<const D &>(*this))->abi_SetContentFromSoftwareBitmapWithAnchorPoint(get(softwareBitmap), get(anchorPoint)));
}

template <typename D> bool impl_ICoreDragUIOverride<D>::IsContentVisible() const
{
    bool value {};
    check_hresult(static_cast<const ICoreDragUIOverride &>(static_cast<const D &>(*this))->get_IsContentVisible(&value));
    return value;
}

template <typename D> void impl_ICoreDragUIOverride<D>::IsContentVisible(bool value) const
{
    check_hresult(static_cast<const ICoreDragUIOverride &>(static_cast<const D &>(*this))->put_IsContentVisible(value));
}

template <typename D> hstring impl_ICoreDragUIOverride<D>::Caption() const
{
    hstring value;
    check_hresult(static_cast<const ICoreDragUIOverride &>(static_cast<const D &>(*this))->get_Caption(put(value)));
    return value;
}

template <typename D> void impl_ICoreDragUIOverride<D>::Caption(hstring_ref value) const
{
    check_hresult(static_cast<const ICoreDragUIOverride &>(static_cast<const D &>(*this))->put_Caption(get(value)));
}

template <typename D> bool impl_ICoreDragUIOverride<D>::IsCaptionVisible() const
{
    bool value {};
    check_hresult(static_cast<const ICoreDragUIOverride &>(static_cast<const D &>(*this))->get_IsCaptionVisible(&value));
    return value;
}

template <typename D> void impl_ICoreDragUIOverride<D>::IsCaptionVisible(bool value) const
{
    check_hresult(static_cast<const ICoreDragUIOverride &>(static_cast<const D &>(*this))->put_IsCaptionVisible(value));
}

template <typename D> bool impl_ICoreDragUIOverride<D>::IsGlyphVisible() const
{
    bool value {};
    check_hresult(static_cast<const ICoreDragUIOverride &>(static_cast<const D &>(*this))->get_IsGlyphVisible(&value));
    return value;
}

template <typename D> void impl_ICoreDragUIOverride<D>::IsGlyphVisible(bool value) const
{
    check_hresult(static_cast<const ICoreDragUIOverride &>(static_cast<const D &>(*this))->put_IsGlyphVisible(value));
}

template <typename D> void impl_ICoreDragUIOverride<D>::Clear() const
{
    check_hresult(static_cast<const ICoreDragUIOverride &>(static_cast<const D &>(*this))->abi_Clear());
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation> impl_ICoreDropOperationTarget<D>::EnterAsync(const Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo & dragInfo, const Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride & dragUIOverride) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation> returnValue;
    check_hresult(static_cast<const ICoreDropOperationTarget &>(static_cast<const D &>(*this))->abi_EnterAsync(get(dragInfo), get(dragUIOverride), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation> impl_ICoreDropOperationTarget<D>::OverAsync(const Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo & dragInfo, const Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride & dragUIOverride) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation> returnValue;
    check_hresult(static_cast<const ICoreDropOperationTarget &>(static_cast<const D &>(*this))->abi_OverAsync(get(dragInfo), get(dragUIOverride), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ICoreDropOperationTarget<D>::LeaveAsync(const Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo & dragInfo) const
{
    Windows::Foundation::IAsyncAction returnValue;
    check_hresult(static_cast<const ICoreDropOperationTarget &>(static_cast<const D &>(*this))->abi_LeaveAsync(get(dragInfo), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation> impl_ICoreDropOperationTarget<D>::DropAsync(const Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo & dragInfo) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation> returnValue;
    check_hresult(static_cast<const ICoreDropOperationTarget &>(static_cast<const D &>(*this))->abi_DropAsync(get(dragInfo), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackage impl_ICoreDragOperation<D>::Data() const
{
    Windows::ApplicationModel::DataTransfer::DataPackage value { nullptr };
    check_hresult(static_cast<const ICoreDragOperation &>(static_cast<const D &>(*this))->get_Data(put(value)));
    return value;
}

template <typename D> void impl_ICoreDragOperation<D>::SetPointerId(uint32_t pointerId) const
{
    check_hresult(static_cast<const ICoreDragOperation &>(static_cast<const D &>(*this))->abi_SetPointerId(pointerId));
}

template <typename D> void impl_ICoreDragOperation<D>::SetDragUIContentFromSoftwareBitmap(const Windows::Graphics::Imaging::SoftwareBitmap & softwareBitmap) const
{
    check_hresult(static_cast<const ICoreDragOperation &>(static_cast<const D &>(*this))->abi_SetDragUIContentFromSoftwareBitmap(get(softwareBitmap)));
}

template <typename D> void impl_ICoreDragOperation<D>::SetDragUIContentFromSoftwareBitmap(const Windows::Graphics::Imaging::SoftwareBitmap & softwareBitmap, const Windows::Foundation::Point & anchorPoint) const
{
    check_hresult(static_cast<const ICoreDragOperation &>(static_cast<const D &>(*this))->abi_SetDragUIContentFromSoftwareBitmapWithAnchorPoint(get(softwareBitmap), get(anchorPoint)));
}

template <typename D> Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode impl_ICoreDragOperation<D>::DragUIContentMode() const
{
    Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode value {};
    check_hresult(static_cast<const ICoreDragOperation &>(static_cast<const D &>(*this))->get_DragUIContentMode(&value));
    return value;
}

template <typename D> void impl_ICoreDragOperation<D>::DragUIContentMode(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode value) const
{
    check_hresult(static_cast<const ICoreDragOperation &>(static_cast<const D &>(*this))->put_DragUIContentMode(value));
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation> impl_ICoreDragOperation<D>::StartAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation> value;
    check_hresult(static_cast<const ICoreDragOperation &>(static_cast<const D &>(*this))->abi_StartAsync(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageOperation impl_ICoreDragOperation2<D>::AllowedOperations() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation value {};
    check_hresult(static_cast<const ICoreDragOperation2 &>(static_cast<const D &>(*this))->get_AllowedOperations(&value));
    return value;
}

template <typename D> void impl_ICoreDragOperation2<D>::AllowedOperations(Windows::ApplicationModel::DataTransfer::DataPackageOperation value) const
{
    check_hresult(static_cast<const ICoreDragOperation2 &>(static_cast<const D &>(*this))->put_AllowedOperations(value));
}

template <typename D> Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager impl_ICoreDragDropManagerStatics<D>::GetForCurrentView() const
{
    Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager value { nullptr };
    check_hresult(static_cast<const ICoreDragDropManagerStatics &>(static_cast<const D &>(*this))->abi_GetForCurrentView(put(value)));
    return value;
}

template <typename D> event_token impl_ICoreDragDropManager<D>::TargetRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs> & value) const
{
    event_token returnValue {};
    check_hresult(static_cast<const ICoreDragDropManager &>(static_cast<const D &>(*this))->add_TargetRequested(get(value), &returnValue));
    return returnValue;
}

template <typename D> event_revoker<ICoreDragDropManager> impl_ICoreDragDropManager<D>::TargetRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs> & value) const
{
    return impl::make_event_revoker<D, ICoreDragDropManager>(this, &ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager::remove_TargetRequested, TargetRequested(value));
}

template <typename D> void impl_ICoreDragDropManager<D>::TargetRequested(event_token value) const
{
    check_hresult(static_cast<const ICoreDragDropManager &>(static_cast<const D &>(*this))->remove_TargetRequested(value));
}

template <typename D> bool impl_ICoreDragDropManager<D>::AreConcurrentOperationsEnabled() const
{
    bool value {};
    check_hresult(static_cast<const ICoreDragDropManager &>(static_cast<const D &>(*this))->get_AreConcurrentOperationsEnabled(&value));
    return value;
}

template <typename D> void impl_ICoreDragDropManager<D>::AreConcurrentOperationsEnabled(bool value) const
{
    check_hresult(static_cast<const ICoreDragDropManager &>(static_cast<const D &>(*this))->put_AreConcurrentOperationsEnabled(value));
}

template <typename D> void impl_ICoreDropOperationTargetRequestedEventArgs<D>::SetTarget(const Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget & target) const
{
    check_hresult(static_cast<const ICoreDropOperationTargetRequestedEventArgs &>(static_cast<const D &>(*this))->abi_SetTarget(get(target)));
}

inline Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager CoreDragDropManager::GetForCurrentView()
{
    return get_activation_factory<CoreDragDropManager, ICoreDragDropManagerStatics>().GetForCurrentView();
}

inline CoreDragOperation::CoreDragOperation() :
    CoreDragOperation(activate_instance<CoreDragOperation>())
{}

}

}
