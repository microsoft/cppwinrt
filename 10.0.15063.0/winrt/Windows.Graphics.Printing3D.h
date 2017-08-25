// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.Graphics.Printing3D.2.h"
#include "winrt/Windows.Graphics.h"

namespace winrt::impl {

template <typename D> event_token consume_Windows_Graphics_Printing3D_IPrint3DManager<D>::TaskRequested(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DManager, Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs> const& eventHandler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DManager)->add_TaskRequested(get_abi(eventHandler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Printing3D::IPrint3DManager> consume_Windows_Graphics_Printing3D_IPrint3DManager<D>::TaskRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DManager, Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Printing3D::IPrint3DManager>(this, &abi_t<Windows::Graphics::Printing3D::IPrint3DManager>::remove_TaskRequested, TaskRequested(eventHandler));
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrint3DManager<D>::TaskRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DManager)->remove_TaskRequested(get_abi(token)));
}

template <typename D> Windows::Graphics::Printing3D::Print3DManager consume_Windows_Graphics_Printing3D_IPrint3DManagerStatics<D>::GetForCurrentView() const
{
    Windows::Graphics::Printing3D::Print3DManager result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DManagerStatics)->GetForCurrentView(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Graphics_Printing3D_IPrint3DManagerStatics<D>::ShowPrintUIAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DManagerStatics)->ShowPrintUIAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Printing3D::Printing3D3MFPackage consume_Windows_Graphics_Printing3D_IPrint3DTask<D>::Source() const
{
    Windows::Graphics::Printing3D::Printing3D3MFPackage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTask)->get_Source(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Graphics_Printing3D_IPrint3DTask<D>::Submitting(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Foundation::IInspectable> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTask)->add_Submitting(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Graphics::Printing3D::IPrint3DTask> consume_Windows_Graphics_Printing3D_IPrint3DTask<D>::Submitting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Foundation::IInspectable> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Printing3D::IPrint3DTask>(this, &abi_t<Windows::Graphics::Printing3D::IPrint3DTask>::remove_Submitting, Submitting(eventHandler));
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrint3DTask<D>::Submitting(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTask)->remove_Submitting(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_Graphics_Printing3D_IPrint3DTask<D>::Completed(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTask)->add_Completed(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Graphics::Printing3D::IPrint3DTask> consume_Windows_Graphics_Printing3D_IPrint3DTask<D>::Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Printing3D::IPrint3DTask>(this, &abi_t<Windows::Graphics::Printing3D::IPrint3DTask>::remove_Completed, Completed(eventHandler));
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrint3DTask<D>::Completed(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTask)->remove_Completed(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_Graphics_Printing3D_IPrint3DTask<D>::SourceChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTask)->add_SourceChanged(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Graphics::Printing3D::IPrint3DTask> consume_Windows_Graphics_Printing3D_IPrint3DTask<D>::SourceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Printing3D::IPrint3DTask>(this, &abi_t<Windows::Graphics::Printing3D::IPrint3DTask>::remove_SourceChanged, SourceChanged(eventHandler));
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrint3DTask<D>::SourceChanged(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTask)->remove_SourceChanged(get_abi(eventCookie)));
}

template <typename D> Windows::Graphics::Printing3D::Print3DTaskCompletion consume_Windows_Graphics_Printing3D_IPrint3DTaskCompletedEventArgs<D>::Completion() const
{
    Windows::Graphics::Printing3D::Print3DTaskCompletion value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs)->get_Completion(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing3D::Print3DTaskDetail consume_Windows_Graphics_Printing3D_IPrint3DTaskCompletedEventArgs<D>::ExtendedStatus() const
{
    Windows::Graphics::Printing3D::Print3DTaskDetail value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs)->get_ExtendedStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing3D::Print3DTask consume_Windows_Graphics_Printing3D_IPrint3DTaskRequest<D>::CreateTask(param::hstring const& title, param::hstring const& printerId, Windows::Graphics::Printing3D::Print3DTaskSourceRequestedHandler const& handler) const
{
    Windows::Graphics::Printing3D::Print3DTask result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTaskRequest)->CreateTask(get_abi(title), get_abi(printerId), get_abi(handler), put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Printing3D::Print3DTaskRequest consume_Windows_Graphics_Printing3D_IPrint3DTaskRequestedEventArgs<D>::Request() const
{
    Windows::Graphics::Printing3D::Print3DTaskRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing3D::Printing3D3MFPackage consume_Windows_Graphics_Printing3D_IPrint3DTaskSourceChangedEventArgs<D>::Source() const
{
    Windows::Graphics::Printing3D::Printing3D3MFPackage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs)->get_Source(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrint3DTaskSourceRequestedArgs<D>::SetSource(Windows::Graphics::Printing3D::Printing3D3MFPackage const& source) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs)->SetSource(get_abi(source)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackage)->SaveAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage<D>::PrintTicket() const
{
    Windows::Storage::Streams::IRandomAccessStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackage)->get_PrintTicket(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage<D>::PrintTicket(Windows::Storage::Streams::IRandomAccessStream const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackage)->put_PrintTicket(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage<D>::ModelPart() const
{
    Windows::Storage::Streams::IRandomAccessStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackage)->get_ModelPart(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage<D>::ModelPart(Windows::Storage::Streams::IRandomAccessStream const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackage)->put_ModelPart(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DTextureResource consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage<D>::Thumbnail() const
{
    Windows::Graphics::Printing3D::Printing3DTextureResource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackage)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage<D>::Thumbnail(Windows::Graphics::Printing3D::Printing3DTextureResource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackage)->put_Thumbnail(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTextureResource> consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage<D>::Textures() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTextureResource> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackage)->get_Textures(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3DModel> consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage<D>::LoadModelFromPackageAsync(Windows::Storage::Streams::IRandomAccessStream const& value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3DModel> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackage)->LoadModelFromPackageAsync(get_abi(value), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage<D>::SaveModelToPackageAsync(Windows::Graphics::Printing3D::Printing3DModel const& value) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackage)->SaveModelToPackageAsync(get_abi(value), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3D3MFPackage> consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackageStatics<D>::LoadAsync(Windows::Storage::Streams::IRandomAccessStream const& value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3D3MFPackage> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics)->LoadAsync(get_abi(value), put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterial<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DBaseMaterial)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterial<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DBaseMaterial)->put_Name(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DColorMaterial consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterial<D>::Color() const
{
    Windows::Graphics::Printing3D::Printing3DColorMaterial value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DBaseMaterial)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterial<D>::Color(Windows::Graphics::Printing3D::Printing3DColorMaterial const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DBaseMaterial)->put_Color(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DBaseMaterial> consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialGroup<D>::Bases() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DBaseMaterial> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup)->get_Bases(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialGroup<D>::MaterialGroupId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup)->get_MaterialGroupId(&value));
    return value;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialGroupFactory<D>::Create(uint32_t MaterialGroupId) const
{
    Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory)->Create(MaterialGroupId, put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialStatics<D>::Abs() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics)->get_Abs(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialStatics<D>::Pla() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics)->get_Pla(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterial<D>::Value() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DColorMaterial)->get_Value(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterial<D>::Value(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DColorMaterial)->put_Value(value));
}

template <typename D> Windows::UI::Color consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterial2<D>::Color() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DColorMaterial2)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterial2<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DColorMaterial2)->put_Color(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DColorMaterial> consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterialGroup<D>::Colors() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DColorMaterial> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup)->get_Colors(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterialGroup<D>::MaterialGroupId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup)->get_MaterialGroupId(&value));
    return value;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DColorMaterialGroup consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterialGroupFactory<D>::Create(uint32_t MaterialGroupId) const
{
    Windows::Graphics::Printing3D::Printing3DColorMaterialGroup result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory)->Create(MaterialGroupId, put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DMesh consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>::Mesh() const
{
    Windows::Graphics::Printing3D::Printing3DMesh value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponent)->get_Mesh(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>::Mesh(Windows::Graphics::Printing3D::Printing3DMesh const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponent)->put_Mesh(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DComponentWithMatrix> consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>::Components() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DComponentWithMatrix> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponent)->get_Components(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DTextureResource consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>::Thumbnail() const
{
    Windows::Graphics::Printing3D::Printing3DTextureResource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponent)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>::Thumbnail(Windows::Graphics::Printing3D::Printing3DTextureResource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponent)->put_Thumbnail(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DObjectType consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>::Type() const
{
    Windows::Graphics::Printing3D::Printing3DObjectType value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponent)->get_Type(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>::Type(Windows::Graphics::Printing3D::Printing3DObjectType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponent)->put_Type(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponent)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponent)->put_Name(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>::PartNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponent)->get_PartNumber(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>::PartNumber(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponent)->put_PartNumber(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DComponent consume_Windows_Graphics_Printing3D_IPrinting3DComponentWithMatrix<D>::Component() const
{
    Windows::Graphics::Printing3D::Printing3DComponent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix)->get_Component(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DComponentWithMatrix<D>::Component(Windows::Graphics::Printing3D::Printing3DComponent const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix)->put_Component(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float4x4 consume_Windows_Graphics_Printing3D_IPrinting3DComponentWithMatrix<D>::Matrix() const
{
    Windows::Foundation::Numerics::float4x4 value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix)->get_Matrix(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DComponentWithMatrix<D>::Matrix(Windows::Foundation::Numerics::float4x4 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix)->put_Matrix(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<double> consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterial<D>::Values() const
{
    Windows::Foundation::Collections::IVector<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial)->get_Values(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DCompositeMaterial> consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroup<D>::Composites() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DCompositeMaterial> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup)->get_Composites(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroup<D>::MaterialGroupId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup)->get_MaterialGroupId(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<uint32_t> consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroup<D>::MaterialIndices() const
{
    Windows::Foundation::Collections::IVector<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup)->get_MaterialIndices(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroup2<D>::BaseMaterialGroup() const
{
    Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2)->get_BaseMaterialGroup(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroup2<D>::BaseMaterialGroup(Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2)->put_BaseMaterialGroup(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroupFactory<D>::Create(uint32_t MaterialGroupId) const
{
    Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory)->Create(MaterialGroupId, put_abi(result)));
    return result;
}

template <typename D> double consume_Windows_Graphics_Printing3D_IPrinting3DFaceReductionOptions<D>::MaxReductionArea() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions)->get_MaxReductionArea(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DFaceReductionOptions<D>::MaxReductionArea(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions)->put_MaxReductionArea(value));
}

template <typename D> uint32_t consume_Windows_Graphics_Printing3D_IPrinting3DFaceReductionOptions<D>::TargetTriangleCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions)->get_TargetTriangleCount(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DFaceReductionOptions<D>::TargetTriangleCount(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions)->put_TargetTriangleCount(value));
}

template <typename D> double consume_Windows_Graphics_Printing3D_IPrinting3DFaceReductionOptions<D>::MaxEdgeLength() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions)->get_MaxEdgeLength(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DFaceReductionOptions<D>::MaxEdgeLength(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions)->put_MaxEdgeLength(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup> consume_Windows_Graphics_Printing3D_IPrinting3DMaterial<D>::BaseGroups() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMaterial)->get_BaseGroups(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DColorMaterialGroup> consume_Windows_Graphics_Printing3D_IPrinting3DMaterial<D>::ColorGroups() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DColorMaterialGroup> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMaterial)->get_ColorGroups(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup> consume_Windows_Graphics_Printing3D_IPrinting3DMaterial<D>::Texture2CoordGroups() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMaterial)->get_Texture2CoordGroups(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup> consume_Windows_Graphics_Printing3D_IPrinting3DMaterial<D>::CompositeGroups() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMaterial)->get_CompositeGroups(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup> consume_Windows_Graphics_Printing3D_IPrinting3DMaterial<D>::MultiplePropertyGroups() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMaterial)->get_MultiplePropertyGroups(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::VertexCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->get_VertexCount(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::VertexCount(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->put_VertexCount(value));
}

template <typename D> uint32_t consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::IndexCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->get_IndexCount(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::IndexCount(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->put_IndexCount(value));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DBufferDescription consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::VertexPositionsDescription() const
{
    Windows::Graphics::Printing3D::Printing3DBufferDescription value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->get_VertexPositionsDescription(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::VertexPositionsDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->put_VertexPositionsDescription(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DBufferDescription consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::VertexNormalsDescription() const
{
    Windows::Graphics::Printing3D::Printing3DBufferDescription value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->get_VertexNormalsDescription(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::VertexNormalsDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->put_VertexNormalsDescription(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DBufferDescription consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::TriangleIndicesDescription() const
{
    Windows::Graphics::Printing3D::Printing3DBufferDescription value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->get_TriangleIndicesDescription(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::TriangleIndicesDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->put_TriangleIndicesDescription(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DBufferDescription consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::TriangleMaterialIndicesDescription() const
{
    Windows::Graphics::Printing3D::Printing3DBufferDescription value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->get_TriangleMaterialIndicesDescription(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::TriangleMaterialIndicesDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->put_TriangleMaterialIndicesDescription(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::GetVertexPositions() const
{
    Windows::Storage::Streams::IBuffer buffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->GetVertexPositions(put_abi(buffer)));
    return buffer;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::CreateVertexPositions(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->CreateVertexPositions(value));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::GetVertexNormals() const
{
    Windows::Storage::Streams::IBuffer buffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->GetVertexNormals(put_abi(buffer)));
    return buffer;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::CreateVertexNormals(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->CreateVertexNormals(value));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::GetTriangleIndices() const
{
    Windows::Storage::Streams::IBuffer buffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->GetTriangleIndices(put_abi(buffer)));
    return buffer;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::CreateTriangleIndices(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->CreateTriangleIndices(value));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::GetTriangleMaterialIndices() const
{
    Windows::Storage::Streams::IBuffer buffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->GetTriangleMaterialIndices(put_abi(buffer)));
    return buffer;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::CreateTriangleMaterialIndices(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->CreateTriangleMaterialIndices(value));
}

template <typename D> Windows::Foundation::Collections::IPropertySet consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::BufferDescriptionSet() const
{
    Windows::Foundation::Collections::IPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->get_BufferDescriptionSet(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IPropertySet consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::BufferSet() const
{
    Windows::Foundation::Collections::IPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->get_BufferSet(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3DMeshVerificationResult> consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::VerifyAsync(Windows::Graphics::Printing3D::Printing3DMeshVerificationMode const& value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3DMeshVerificationResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->VerifyAsync(get_abi(value), put_abi(operation)));
    return operation;
}

template <typename D> bool consume_Windows_Graphics_Printing3D_IPrinting3DMeshVerificationResult<D>::IsValid() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult)->get_IsValid(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Graphics_Printing3D_IPrinting3DMeshVerificationResult<D>::NonmanifoldTriangles() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult)->get_NonmanifoldTriangles(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Graphics_Printing3D_IPrinting3DMeshVerificationResult<D>::ReversedNormalTriangles() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult)->get_ReversedNormalTriangles(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DModelUnit consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Unit() const
{
    Windows::Graphics::Printing3D::Printing3DModelUnit value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->get_Unit(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Unit(Windows::Graphics::Printing3D::Printing3DModelUnit const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->put_Unit(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DModelTexture> consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Textures() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DModelTexture> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->get_Textures(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMesh> consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Meshes() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMesh> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->get_Meshes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DComponent> consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Components() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DComponent> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->get_Components(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DMaterial consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Material() const
{
    Windows::Graphics::Printing3D::Printing3DMaterial value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->get_Material(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Material(Windows::Graphics::Printing3D::Printing3DMaterial const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->put_Material(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DComponent consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Build() const
{
    Windows::Graphics::Printing3D::Printing3DComponent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->get_Build(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Build(Windows::Graphics::Printing3D::Printing3DComponent const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->put_Build(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Version() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->get_Version(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Version(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->put_Version(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::RequiredExtensions() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->get_RequiredExtensions(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Metadata() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->get_Metadata(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::RepairAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->RepairAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DModel consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Clone() const
{
    Windows::Graphics::Printing3D::Printing3DModel value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->Clone(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Graphics_Printing3D_IPrinting3DModel2<D>::TryPartialRepairAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel2)->TryPartialRepairAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Graphics_Printing3D_IPrinting3DModel2<D>::TryPartialRepairAsync(Windows::Foundation::TimeSpan const& maxWaitTime) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel2)->TryPartialRepairWithTimeAsync(get_abi(maxWaitTime), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<bool, double> consume_Windows_Graphics_Printing3D_IPrinting3DModel2<D>::TryReduceFacesAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<bool, double> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel2)->TryReduceFacesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<bool, double> consume_Windows_Graphics_Printing3D_IPrinting3DModel2<D>::TryReduceFacesAsync(Windows::Graphics::Printing3D::Printing3DFaceReductionOptions const& printing3DFaceReductionOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<bool, double> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel2)->TryReduceFacesWithOptionsAsync(get_abi(printing3DFaceReductionOptions), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<bool, double> consume_Windows_Graphics_Printing3D_IPrinting3DModel2<D>::TryReduceFacesAsync(Windows::Graphics::Printing3D::Printing3DFaceReductionOptions const& printing3DFaceReductionOptions, Windows::Foundation::TimeSpan const& maxWait) const
{
    Windows::Foundation::IAsyncOperationWithProgress<bool, double> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel2)->TryReduceFacesWithOptionsAndTimeAsync(get_abi(printing3DFaceReductionOptions), get_abi(maxWait), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<bool, double> consume_Windows_Graphics_Printing3D_IPrinting3DModel2<D>::RepairWithProgressAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<bool, double> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel2)->RepairWithProgressAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DTextureResource consume_Windows_Graphics_Printing3D_IPrinting3DModelTexture<D>::TextureResource() const
{
    Windows::Graphics::Printing3D::Printing3DTextureResource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModelTexture)->get_TextureResource(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DModelTexture<D>::TextureResource(Windows::Graphics::Printing3D::Printing3DTextureResource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModelTexture)->put_TextureResource(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior consume_Windows_Graphics_Printing3D_IPrinting3DModelTexture<D>::TileStyleU() const
{
    Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModelTexture)->get_TileStyleU(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DModelTexture<D>::TileStyleU(Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModelTexture)->put_TileStyleU(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior consume_Windows_Graphics_Printing3D_IPrinting3DModelTexture<D>::TileStyleV() const
{
    Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModelTexture)->get_TileStyleV(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DModelTexture<D>::TileStyleV(Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModelTexture)->put_TileStyleV(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<uint32_t> consume_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterial<D>::MaterialIndices() const
{
    Windows::Foundation::Collections::IVector<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial)->get_MaterialIndices(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterial> consume_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterialGroup<D>::MultipleProperties() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterial> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup)->get_MultipleProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<uint32_t> consume_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterialGroup<D>::MaterialGroupIndices() const
{
    Windows::Foundation::Collections::IVector<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup)->get_MaterialGroupIndices(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterialGroup<D>::MaterialGroupId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup)->get_MaterialGroupId(&value));
    return value;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup consume_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterialGroupFactory<D>::Create(uint32_t MaterialGroupId) const
{
    Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory)->Create(MaterialGroupId, put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DModelTexture consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterial<D>::Texture() const
{
    Windows::Graphics::Printing3D::Printing3DModelTexture value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial)->get_Texture(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterial<D>::Texture(Windows::Graphics::Printing3D::Printing3DModelTexture const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial)->put_Texture(get_abi(value)));
}

template <typename D> double consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterial<D>::U() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial)->get_U(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterial<D>::U(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial)->put_U(value));
}

template <typename D> double consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterial<D>::V() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial)->get_V(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterial<D>::V(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial)->put_V(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterial> consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroup<D>::Texture2Coords() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterial> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup)->get_Texture2Coords(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroup<D>::MaterialGroupId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup)->get_MaterialGroupId(&value));
    return value;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DModelTexture consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroup2<D>::Texture() const
{
    Windows::Graphics::Printing3D::Printing3DModelTexture value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2)->get_Texture(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroup2<D>::Texture(Windows::Graphics::Printing3D::Printing3DModelTexture const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2)->put_Texture(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroupFactory<D>::Create(uint32_t MaterialGroupId) const
{
    Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory)->Create(MaterialGroupId, put_abi(result)));
    return result;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamWithContentType consume_Windows_Graphics_Printing3D_IPrinting3DTextureResource<D>::TextureData() const
{
    Windows::Storage::Streams::IRandomAccessStreamWithContentType value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTextureResource)->get_TextureData(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DTextureResource<D>::TextureData(Windows::Storage::Streams::IRandomAccessStreamWithContentType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTextureResource)->put_TextureData(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing3D_IPrinting3DTextureResource<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTextureResource)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DTextureResource<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTextureResource)->put_Name(get_abi(value)));
}

template <> struct delegate<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* args) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedArgs const*>(&args));
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
struct produce<D, Windows::Graphics::Printing3D::IPrint3DManager> : produce_base<D, Windows::Graphics::Printing3D::IPrint3DManager>
{
    HRESULT __stdcall add_TaskRequested(::IUnknown* eventHandler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().TaskRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DManager, Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TaskRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TaskRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrint3DManagerStatics> : produce_base<D, Windows::Graphics::Printing3D::IPrint3DManagerStatics>
{
    HRESULT __stdcall GetForCurrentView(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowPrintUIAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ShowPrintUIAsync());
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
struct produce<D, Windows::Graphics::Printing3D::IPrint3DTask> : produce_base<D, Windows::Graphics::Printing3D::IPrint3DTask>
{
    HRESULT __stdcall get_Source(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Submitting(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().Submitting(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Foundation::IInspectable> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Submitting(abi_t<event_token> eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Submitting(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Completed(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().Completed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Completed(abi_t<event_token> eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Completed(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SourceChanged(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().SourceChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceChanged(abi_t<event_token> eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceChanged(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs> : produce_base<D, Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs>
{
    HRESULT __stdcall get_Completion(abi_t<Windows::Graphics::Printing3D::Print3DTaskCompletion>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Completion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedStatus(abi_t<Windows::Graphics::Printing3D::Print3DTaskDetail>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrint3DTaskRequest> : produce_base<D, Windows::Graphics::Printing3D::IPrint3DTaskRequest>
{
    HRESULT __stdcall CreateTask(HSTRING title, HSTRING printerId, ::IUnknown* handler, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateTask(*reinterpret_cast<hstring const*>(&title), *reinterpret_cast<hstring const*>(&printerId), *reinterpret_cast<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedHandler const*>(&handler)));
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
struct produce<D, Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs> : produce_base<D, Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs>
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

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs> : produce_base<D, Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs>
{
    HRESULT __stdcall get_Source(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source());
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
struct produce<D, Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs> : produce_base<D, Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs>
{
    HRESULT __stdcall SetSource(::IUnknown* source) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSource(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3D3MFPackage const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3D3MFPackage> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3D3MFPackage>
{
    HRESULT __stdcall SaveAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SaveAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrintTicket(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrintTicket());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PrintTicket(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrintTicket(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ModelPart(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ModelPart());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ModelPart(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ModelPart(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Thumbnail(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Thumbnail(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DTextureResource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Textures(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Textures());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadModelFromPackageAsync(::IUnknown* value, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LoadModelFromPackageAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveModelToPackageAsync(::IUnknown* value, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SaveModelToPackageAsync(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DModel const*>(&value)));
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
struct produce<D, Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics>
{
    HRESULT __stdcall LoadAsync(::IUnknown* value, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LoadAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&value)));
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
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DBaseMaterial> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DBaseMaterial>
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

    HRESULT __stdcall put_Name(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Color(::IUnknown** value) noexcept override
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

    HRESULT __stdcall put_Color(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DColorMaterial const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup>
{
    HRESULT __stdcall get_Bases(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bases());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaterialGroupId(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaterialGroupId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory>
{
    HRESULT __stdcall Create(uint32_t MaterialGroupId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(MaterialGroupId));
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
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics>
{
    HRESULT __stdcall get_Abs(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Abs());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pla(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Pla());
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
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DColorMaterial> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DColorMaterial>
{
    HRESULT __stdcall get_Value(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DColorMaterial2> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DColorMaterial2>
{
    HRESULT __stdcall get_Color(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Color(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup>
{
    HRESULT __stdcall get_Colors(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Colors());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaterialGroupId(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaterialGroupId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory>
{
    HRESULT __stdcall Create(uint32_t MaterialGroupId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(MaterialGroupId));
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
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DComponent> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DComponent>
{
    HRESULT __stdcall get_Mesh(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mesh());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mesh(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mesh(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DMesh const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Components(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Components());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Thumbnail(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Thumbnail(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DTextureResource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(abi_t<Windows::Graphics::Printing3D::Printing3DObjectType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Type(abi_t<Windows::Graphics::Printing3D::Printing3DObjectType> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Type(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DObjectType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall put_Name(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PartNumber(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PartNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PartNumber(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PartNumber(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix>
{
    HRESULT __stdcall get_Component(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Component());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Component(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Component(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DComponent const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Matrix(abi_t<Windows::Foundation::Numerics::float4x4>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Matrix());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Matrix(abi_t<Windows::Foundation::Numerics::float4x4> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Matrix(*reinterpret_cast<Windows::Foundation::Numerics::float4x4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial>
{
    HRESULT __stdcall get_Values(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Values());
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
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup>
{
    HRESULT __stdcall get_Composites(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Composites());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaterialGroupId(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaterialGroupId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaterialIndices(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaterialIndices());
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
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2>
{
    HRESULT __stdcall get_BaseMaterialGroup(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BaseMaterialGroup());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BaseMaterialGroup(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BaseMaterialGroup(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory>
{
    HRESULT __stdcall Create(uint32_t MaterialGroupId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(MaterialGroupId));
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
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions>
{
    HRESULT __stdcall get_MaxReductionArea(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxReductionArea());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxReductionArea(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxReductionArea(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetTriangleCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetTriangleCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetTriangleCount(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetTriangleCount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxEdgeLength(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxEdgeLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxEdgeLength(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxEdgeLength(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DMaterial> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DMaterial>
{
    HRESULT __stdcall get_BaseGroups(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BaseGroups());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ColorGroups(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ColorGroups());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Texture2CoordGroups(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Texture2CoordGroups());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CompositeGroups(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CompositeGroups());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MultiplePropertyGroups(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MultiplePropertyGroups());
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
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DMesh> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DMesh>
{
    HRESULT __stdcall get_VertexCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VertexCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VertexCount(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VertexCount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IndexCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IndexCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IndexCount(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IndexCount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VertexPositionsDescription(abi_t<Windows::Graphics::Printing3D::Printing3DBufferDescription>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VertexPositionsDescription());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VertexPositionsDescription(abi_t<Windows::Graphics::Printing3D::Printing3DBufferDescription> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VertexPositionsDescription(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DBufferDescription const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VertexNormalsDescription(abi_t<Windows::Graphics::Printing3D::Printing3DBufferDescription>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VertexNormalsDescription());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VertexNormalsDescription(abi_t<Windows::Graphics::Printing3D::Printing3DBufferDescription> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VertexNormalsDescription(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DBufferDescription const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TriangleIndicesDescription(abi_t<Windows::Graphics::Printing3D::Printing3DBufferDescription>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TriangleIndicesDescription());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TriangleIndicesDescription(abi_t<Windows::Graphics::Printing3D::Printing3DBufferDescription> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TriangleIndicesDescription(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DBufferDescription const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TriangleMaterialIndicesDescription(abi_t<Windows::Graphics::Printing3D::Printing3DBufferDescription>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TriangleMaterialIndicesDescription());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TriangleMaterialIndicesDescription(abi_t<Windows::Graphics::Printing3D::Printing3DBufferDescription> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TriangleMaterialIndicesDescription(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DBufferDescription const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetVertexPositions(::IUnknown** buffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *buffer = detach_abi(this->shim().GetVertexPositions());
            return S_OK;
        }
        catch (...)
        {
            *buffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateVertexPositions(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CreateVertexPositions(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetVertexNormals(::IUnknown** buffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *buffer = detach_abi(this->shim().GetVertexNormals());
            return S_OK;
        }
        catch (...)
        {
            *buffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateVertexNormals(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CreateVertexNormals(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTriangleIndices(::IUnknown** buffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *buffer = detach_abi(this->shim().GetTriangleIndices());
            return S_OK;
        }
        catch (...)
        {
            *buffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateTriangleIndices(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CreateTriangleIndices(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTriangleMaterialIndices(::IUnknown** buffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *buffer = detach_abi(this->shim().GetTriangleMaterialIndices());
            return S_OK;
        }
        catch (...)
        {
            *buffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateTriangleMaterialIndices(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CreateTriangleMaterialIndices(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BufferDescriptionSet(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BufferDescriptionSet());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BufferSet(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BufferSet());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall VerifyAsync(abi_t<Windows::Graphics::Printing3D::Printing3DMeshVerificationMode> value, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().VerifyAsync(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DMeshVerificationMode const*>(&value)));
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
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult>
{
    HRESULT __stdcall get_IsValid(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsValid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NonmanifoldTriangles(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NonmanifoldTriangles());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReversedNormalTriangles(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReversedNormalTriangles());
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
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DModel> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DModel>
{
    HRESULT __stdcall get_Unit(abi_t<Windows::Graphics::Printing3D::Printing3DModelUnit>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Unit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Unit(abi_t<Windows::Graphics::Printing3D::Printing3DModelUnit> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Unit(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DModelUnit const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Textures(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Textures());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Meshes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Meshes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Components(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Components());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Material(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Material());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Material(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Material(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DMaterial const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Build(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Build());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Build(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Build(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DComponent const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Version(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Version());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Version(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Version(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequiredExtensions(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequiredExtensions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Metadata(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Metadata());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RepairAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RepairAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Clone(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Clone());
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
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DModel2> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DModel2>
{
    HRESULT __stdcall TryPartialRepairAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryPartialRepairAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryPartialRepairWithTimeAsync(abi_t<Windows::Foundation::TimeSpan> maxWaitTime, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryPartialRepairAsync(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&maxWaitTime)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryReduceFacesAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryReduceFacesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryReduceFacesWithOptionsAsync(::IUnknown* printing3DFaceReductionOptions, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryReduceFacesAsync(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DFaceReductionOptions const*>(&printing3DFaceReductionOptions)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryReduceFacesWithOptionsAndTimeAsync(::IUnknown* printing3DFaceReductionOptions, abi_t<Windows::Foundation::TimeSpan> maxWait, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryReduceFacesAsync(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DFaceReductionOptions const*>(&printing3DFaceReductionOptions), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&maxWait)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RepairWithProgressAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RepairWithProgressAsync());
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
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DModelTexture> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DModelTexture>
{
    HRESULT __stdcall get_TextureResource(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextureResource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TextureResource(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextureResource(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DTextureResource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TileStyleU(abi_t<Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TileStyleU());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TileStyleU(abi_t<Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TileStyleU(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TileStyleV(abi_t<Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TileStyleV());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TileStyleV(abi_t<Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TileStyleV(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial>
{
    HRESULT __stdcall get_MaterialIndices(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaterialIndices());
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
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup>
{
    HRESULT __stdcall get_MultipleProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MultipleProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaterialGroupIndices(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaterialGroupIndices());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaterialGroupId(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaterialGroupId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory>
{
    HRESULT __stdcall Create(uint32_t MaterialGroupId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(MaterialGroupId));
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
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial>
{
    HRESULT __stdcall get_Texture(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Texture());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Texture(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Texture(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DModelTexture const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_U(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().U());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_U(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().U(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_V(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().V());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_V(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().V(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup>
{
    HRESULT __stdcall get_Texture2Coords(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Texture2Coords());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaterialGroupId(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaterialGroupId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2>
{
    HRESULT __stdcall get_Texture(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Texture());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Texture(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Texture(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DModelTexture const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory>
{
    HRESULT __stdcall Create(uint32_t MaterialGroupId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(MaterialGroupId));
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
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DTextureResource> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DTextureResource>
{
    HRESULT __stdcall get_TextureData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextureData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TextureData(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextureData(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamWithContentType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall put_Name(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing3D {

inline Windows::Graphics::Printing3D::Print3DManager Print3DManager::GetForCurrentView()
{
    return get_activation_factory<Print3DManager, Windows::Graphics::Printing3D::IPrint3DManagerStatics>().GetForCurrentView();
}

inline Windows::Foundation::IAsyncOperation<bool> Print3DManager::ShowPrintUIAsync()
{
    return get_activation_factory<Print3DManager, Windows::Graphics::Printing3D::IPrint3DManagerStatics>().ShowPrintUIAsync();
}

inline Printing3D3MFPackage::Printing3D3MFPackage() :
    Printing3D3MFPackage(activate_instance<Printing3D3MFPackage>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3D3MFPackage> Printing3D3MFPackage::LoadAsync(Windows::Storage::Streams::IRandomAccessStream const& value)
{
    return get_activation_factory<Printing3D3MFPackage, Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics>().LoadAsync(value);
}

inline Printing3DBaseMaterial::Printing3DBaseMaterial() :
    Printing3DBaseMaterial(activate_instance<Printing3DBaseMaterial>())
{}

inline hstring Printing3DBaseMaterial::Abs()
{
    return get_activation_factory<Printing3DBaseMaterial, Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics>().Abs();
}

inline hstring Printing3DBaseMaterial::Pla()
{
    return get_activation_factory<Printing3DBaseMaterial, Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics>().Pla();
}

inline Printing3DBaseMaterialGroup::Printing3DBaseMaterialGroup(uint32_t MaterialGroupId) :
    Printing3DBaseMaterialGroup(get_activation_factory<Printing3DBaseMaterialGroup, Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory>().Create(MaterialGroupId))
{}

inline Printing3DColorMaterial::Printing3DColorMaterial() :
    Printing3DColorMaterial(activate_instance<Printing3DColorMaterial>())
{}

inline Printing3DColorMaterialGroup::Printing3DColorMaterialGroup(uint32_t MaterialGroupId) :
    Printing3DColorMaterialGroup(get_activation_factory<Printing3DColorMaterialGroup, Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory>().Create(MaterialGroupId))
{}

inline Printing3DComponent::Printing3DComponent() :
    Printing3DComponent(activate_instance<Printing3DComponent>())
{}

inline Printing3DComponentWithMatrix::Printing3DComponentWithMatrix() :
    Printing3DComponentWithMatrix(activate_instance<Printing3DComponentWithMatrix>())
{}

inline Printing3DCompositeMaterial::Printing3DCompositeMaterial() :
    Printing3DCompositeMaterial(activate_instance<Printing3DCompositeMaterial>())
{}

inline Printing3DCompositeMaterialGroup::Printing3DCompositeMaterialGroup(uint32_t MaterialGroupId) :
    Printing3DCompositeMaterialGroup(get_activation_factory<Printing3DCompositeMaterialGroup, Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory>().Create(MaterialGroupId))
{}

inline Printing3DFaceReductionOptions::Printing3DFaceReductionOptions() :
    Printing3DFaceReductionOptions(activate_instance<Printing3DFaceReductionOptions>())
{}

inline Printing3DMaterial::Printing3DMaterial() :
    Printing3DMaterial(activate_instance<Printing3DMaterial>())
{}

inline Printing3DMesh::Printing3DMesh() :
    Printing3DMesh(activate_instance<Printing3DMesh>())
{}

inline Printing3DModel::Printing3DModel() :
    Printing3DModel(activate_instance<Printing3DModel>())
{}

inline Printing3DModelTexture::Printing3DModelTexture() :
    Printing3DModelTexture(activate_instance<Printing3DModelTexture>())
{}

inline Printing3DMultiplePropertyMaterial::Printing3DMultiplePropertyMaterial() :
    Printing3DMultiplePropertyMaterial(activate_instance<Printing3DMultiplePropertyMaterial>())
{}

inline Printing3DMultiplePropertyMaterialGroup::Printing3DMultiplePropertyMaterialGroup(uint32_t MaterialGroupId) :
    Printing3DMultiplePropertyMaterialGroup(get_activation_factory<Printing3DMultiplePropertyMaterialGroup, Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory>().Create(MaterialGroupId))
{}

inline Printing3DTexture2CoordMaterial::Printing3DTexture2CoordMaterial() :
    Printing3DTexture2CoordMaterial(activate_instance<Printing3DTexture2CoordMaterial>())
{}

inline Printing3DTexture2CoordMaterialGroup::Printing3DTexture2CoordMaterialGroup(uint32_t MaterialGroupId) :
    Printing3DTexture2CoordMaterialGroup(get_activation_factory<Printing3DTexture2CoordMaterialGroup, Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory>().Create(MaterialGroupId))
{}

inline Printing3DTextureResource::Printing3DTextureResource() :
    Printing3DTextureResource(activate_instance<Printing3DTextureResource>())
{}

template <typename L> Print3DTaskSourceRequestedHandler::Print3DTaskSourceRequestedHandler(L handler) :
    Print3DTaskSourceRequestedHandler(impl::make_delegate<Print3DTaskSourceRequestedHandler>(std::forward<L>(handler)))
{}

template <typename F> Print3DTaskSourceRequestedHandler::Print3DTaskSourceRequestedHandler(F* handler) :
    Print3DTaskSourceRequestedHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> Print3DTaskSourceRequestedHandler::Print3DTaskSourceRequestedHandler(O* object, M method) :
    Print3DTaskSourceRequestedHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void Print3DTaskSourceRequestedHandler::operator()(Windows::Graphics::Printing3D::Print3DTaskSourceRequestedArgs const& args) const
{
    check_hresult((*(abi_t<Print3DTaskSourceRequestedHandler>**)this)->Invoke(get_abi(args)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrint3DManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrint3DManager> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrint3DManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrint3DManagerStatics> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrint3DTask> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrint3DTask> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrint3DTaskRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrint3DTaskRequest> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3D3MFPackage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3D3MFPackage> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterial> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterial> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterial> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterial> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterial2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterial2> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DComponent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DComponent> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DMaterial> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DMaterial> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DMesh> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DMesh> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DModel> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DModel> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DModel2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DModel2> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DModelTexture> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DModelTexture> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DTextureResource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::IPrinting3DTextureResource> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Print3DManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Print3DManager> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Print3DTask> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Print3DTask> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Print3DTaskRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Print3DTaskRequest> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Print3DTaskSourceRequestedArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Print3DTaskSourceRequestedArgs> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3D3MFPackage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Printing3D3MFPackage> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DBaseMaterial> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Printing3DBaseMaterial> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DColorMaterial> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Printing3DColorMaterial> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DColorMaterialGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Printing3DColorMaterialGroup> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DComponent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Printing3DComponent> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DComponentWithMatrix> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Printing3DComponentWithMatrix> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DCompositeMaterial> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Printing3DCompositeMaterial> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DFaceReductionOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Printing3DFaceReductionOptions> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DMaterial> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Printing3DMaterial> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DMesh> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Printing3DMesh> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DMeshVerificationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Printing3DMeshVerificationResult> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DModel> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Printing3DModel> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DModelTexture> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Printing3DModelTexture> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterial> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterial> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterial> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterial> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup> {};

template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DTextureResource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing3D::Printing3DTextureResource> {};

}

WINRT_WARNING_POP
