// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Graphics.Printing3D.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Storage.Streams.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Graphics::Printing3D {

struct Printing3DBufferDescription
{
    winrt::Windows::Graphics::Printing3D::Printing3DBufferFormat Format;
    uint32_t Stride;
};

}

namespace Windows::Graphics::Printing3D {

using Printing3DBufferDescription = ABI::Windows::Graphics::Printing3D::Printing3DBufferDescription;

}

namespace ABI::Windows::Graphics::Printing3D {

struct __declspec(uuid("4d2fcb0a-7366-4971-8bd5-17c4e3e8c6c0")) __declspec(novtable) IPrint3DManager : Windows::IInspectable
{
    virtual HRESULT __stdcall add_TaskRequested(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DManager, Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs> * eventHandler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_TaskRequested(event_token token) = 0;
};

struct __declspec(uuid("0ef1cafe-a9ad-4c08-a917-1d1f863eabcb")) __declspec(novtable) IPrint3DManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetForCurrentView(Windows::Graphics::Printing3D::IPrint3DManager ** result) = 0;
    virtual HRESULT __stdcall abi_ShowPrintUIAsync(Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
};

struct __declspec(uuid("8ce3d080-2118-4c28-80de-f426d70191ae")) __declspec(novtable) IPrint3DTask : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Source(Windows::Graphics::Printing3D::IPrinting3D3MFPackage ** value) = 0;
    virtual HRESULT __stdcall add_Submitting(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::IInspectable> * eventHandler, event_token * eventCookie) = 0;
    virtual HRESULT __stdcall remove_Submitting(event_token eventCookie) = 0;
    virtual HRESULT __stdcall add_Completed(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs> * eventHandler, event_token * eventCookie) = 0;
    virtual HRESULT __stdcall remove_Completed(event_token eventCookie) = 0;
    virtual HRESULT __stdcall add_SourceChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs> * eventHandler, event_token * eventCookie) = 0;
    virtual HRESULT __stdcall remove_SourceChanged(event_token eventCookie) = 0;
};

struct __declspec(uuid("cc1914af-2614-4f1d-accc-d6fc4fda5455")) __declspec(novtable) IPrint3DTaskCompletedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Completion(winrt::Windows::Graphics::Printing3D::Print3DTaskCompletion * value) = 0;
    virtual HRESULT __stdcall get_ExtendedStatus(winrt::Windows::Graphics::Printing3D::Print3DTaskDetail * value) = 0;
};

struct __declspec(uuid("2595c46f-2245-4c5a-8731-0d604dc6bc3c")) __declspec(novtable) IPrint3DTaskRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateTask(hstring title, hstring printerId, Windows::Graphics::Printing3D::Print3DTaskSourceRequestedHandler * handler, Windows::Graphics::Printing3D::IPrint3DTask ** result) = 0;
};

struct __declspec(uuid("150cb77f-18c5-40d7-9f40-fab3096e05a9")) __declspec(novtable) IPrint3DTaskRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Request(Windows::Graphics::Printing3D::IPrint3DTaskRequest ** value) = 0;
};

struct __declspec(uuid("5bcd34af-24e9-4c10-8d07-14c346ba3fcf")) __declspec(novtable) IPrint3DTaskSourceChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Source(Windows::Graphics::Printing3D::IPrinting3D3MFPackage ** value) = 0;
};

struct __declspec(uuid("c77c9aba-24af-424d-a3bf-92250c355602")) __declspec(novtable) IPrint3DTaskSourceRequestedArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SetSource(Windows::Graphics::Printing3D::IPrinting3D3MFPackage * source) = 0;
};

struct __declspec(uuid("f64dd5c8-2ab7-45a9-a1b7-267e948d5b18")) __declspec(novtable) IPrinting3D3MFPackage : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SaveAsync(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> ** operation) = 0;
    virtual HRESULT __stdcall get_PrintTicket(Windows::Storage::Streams::IRandomAccessStream ** value) = 0;
    virtual HRESULT __stdcall put_PrintTicket(Windows::Storage::Streams::IRandomAccessStream * value) = 0;
    virtual HRESULT __stdcall get_ModelPart(Windows::Storage::Streams::IRandomAccessStream ** value) = 0;
    virtual HRESULT __stdcall put_ModelPart(Windows::Storage::Streams::IRandomAccessStream * value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(Windows::Graphics::Printing3D::IPrinting3DTextureResource ** value) = 0;
    virtual HRESULT __stdcall put_Thumbnail(Windows::Graphics::Printing3D::IPrinting3DTextureResource * value) = 0;
    virtual HRESULT __stdcall get_Textures(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTextureResource> ** value) = 0;
    virtual HRESULT __stdcall abi_LoadModelFromPackageAsync(Windows::Storage::Streams::IRandomAccessStream * value, Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3DModel> ** operation) = 0;
    virtual HRESULT __stdcall abi_SaveModelToPackageAsync(Windows::Graphics::Printing3D::IPrinting3DModel * value, Windows::Foundation::IAsyncAction ** operation) = 0;
};

struct __declspec(uuid("7058d9af-7a9a-4787-b817-f6f459214823")) __declspec(novtable) IPrinting3D3MFPackageStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_LoadAsync(Windows::Storage::Streams::IRandomAccessStream * value, Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3D3MFPackage> ** operation) = 0;
};

struct __declspec(uuid("d0f0e743-c50c-4bcb-9d04-fc16adcea2c9")) __declspec(novtable) IPrinting3DBaseMaterial : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall put_Name(hstring value) = 0;
    virtual HRESULT __stdcall get_Color(Windows::Graphics::Printing3D::IPrinting3DColorMaterial ** value) = 0;
    virtual HRESULT __stdcall put_Color(Windows::Graphics::Printing3D::IPrinting3DColorMaterial * value) = 0;
};

struct __declspec(uuid("94f070b8-2515-4a8d-a1f0-d0fc13d06021")) __declspec(novtable) IPrinting3DBaseMaterialGroup : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Bases(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DBaseMaterial> ** value) = 0;
    virtual HRESULT __stdcall get_MaterialGroupId(uint32_t * value) = 0;
};

struct __declspec(uuid("5c1546dc-8697-4193-976b-84bb4116e5bf")) __declspec(novtable) IPrinting3DBaseMaterialGroupFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(uint32_t MaterialGroupId, Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup ** result) = 0;
};

struct __declspec(uuid("815a47bc-374a-476d-be92-3ecfd1cb9776")) __declspec(novtable) IPrinting3DBaseMaterialStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Abs(hstring * value) = 0;
    virtual HRESULT __stdcall get_Pla(hstring * value) = 0;
};

struct __declspec(uuid("e1899928-7ce7-4285-a35d-f145c9510c7b")) __declspec(novtable) IPrinting3DColorMaterial : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Value(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_Value(uint32_t value) = 0;
};

struct __declspec(uuid("fab0e852-0aef-44e9-9ddd-36eeea5acd44")) __declspec(novtable) IPrinting3DColorMaterial2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Color(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_Color(Windows::UI::Color value) = 0;
};

struct __declspec(uuid("001a6bd0-aadf-4226-afe9-f369a0b45004")) __declspec(novtable) IPrinting3DColorMaterialGroup : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Colors(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DColorMaterial> ** value) = 0;
    virtual HRESULT __stdcall get_MaterialGroupId(uint32_t * value) = 0;
};

struct __declspec(uuid("71d38d6d-b1ea-4a5b-bc54-19c65f3df044")) __declspec(novtable) IPrinting3DColorMaterialGroupFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(uint32_t MaterialGroupId, Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup ** result) = 0;
};

struct __declspec(uuid("7e287845-bf7f-4cdb-a27f-30a01437fede")) __declspec(novtable) IPrinting3DComponent : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Mesh(Windows::Graphics::Printing3D::IPrinting3DMesh ** value) = 0;
    virtual HRESULT __stdcall put_Mesh(Windows::Graphics::Printing3D::IPrinting3DMesh * value) = 0;
    virtual HRESULT __stdcall get_Components(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DComponentWithMatrix> ** value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(Windows::Graphics::Printing3D::IPrinting3DTextureResource ** value) = 0;
    virtual HRESULT __stdcall put_Thumbnail(Windows::Graphics::Printing3D::IPrinting3DTextureResource * value) = 0;
    virtual HRESULT __stdcall get_Type(winrt::Windows::Graphics::Printing3D::Printing3DObjectType * value) = 0;
    virtual HRESULT __stdcall put_Type(winrt::Windows::Graphics::Printing3D::Printing3DObjectType value) = 0;
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall put_Name(hstring value) = 0;
    virtual HRESULT __stdcall get_PartNumber(hstring * value) = 0;
    virtual HRESULT __stdcall put_PartNumber(hstring value) = 0;
};

struct __declspec(uuid("3279f335-0ef0-456b-9a21-49bebe8b51c2")) __declspec(novtable) IPrinting3DComponentWithMatrix : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Component(Windows::Graphics::Printing3D::IPrinting3DComponent ** value) = 0;
    virtual HRESULT __stdcall put_Component(Windows::Graphics::Printing3D::IPrinting3DComponent * value) = 0;
    virtual HRESULT __stdcall get_Matrix(Windows::Foundation::Numerics::float4x4 * value) = 0;
    virtual HRESULT __stdcall put_Matrix(Windows::Foundation::Numerics::float4x4 value) = 0;
};

struct __declspec(uuid("462238dd-562e-4f6c-882d-f4d841fd63c7")) __declspec(novtable) IPrinting3DCompositeMaterial : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Values(Windows::Foundation::Collections::IVector<double> ** value) = 0;
};

struct __declspec(uuid("8d946a5b-40f1-496d-a5fb-340a5a678e30")) __declspec(novtable) IPrinting3DCompositeMaterialGroup : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Composites(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DCompositeMaterial> ** value) = 0;
    virtual HRESULT __stdcall get_MaterialGroupId(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_MaterialIndices(Windows::Foundation::Collections::IVector<uint32_t> ** value) = 0;
};

struct __declspec(uuid("06e86d62-7d3b-41e1-944c-bafde4555483")) __declspec(novtable) IPrinting3DCompositeMaterialGroup2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_BaseMaterialGroup(Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup ** value) = 0;
    virtual HRESULT __stdcall put_BaseMaterialGroup(Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup * value) = 0;
};

struct __declspec(uuid("d08ecd13-92ff-43aa-a627-8d43c22c817e")) __declspec(novtable) IPrinting3DCompositeMaterialGroupFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(uint32_t MaterialGroupId, Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup ** result) = 0;
};

struct __declspec(uuid("bbfed397-2d74-46f7-be85-99a67bbb6629")) __declspec(novtable) IPrinting3DFaceReductionOptions : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MaxReductionArea(double * value) = 0;
    virtual HRESULT __stdcall put_MaxReductionArea(double value) = 0;
    virtual HRESULT __stdcall get_TargetTriangleCount(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_TargetTriangleCount(uint32_t value) = 0;
    virtual HRESULT __stdcall get_MaxEdgeLength(double * value) = 0;
    virtual HRESULT __stdcall put_MaxEdgeLength(double value) = 0;
};

struct __declspec(uuid("378db256-ed62-4952-b85b-03567d7c465e")) __declspec(novtable) IPrinting3DMaterial : Windows::IInspectable
{
    virtual HRESULT __stdcall get_BaseGroups(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup> ** value) = 0;
    virtual HRESULT __stdcall get_ColorGroups(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DColorMaterialGroup> ** value) = 0;
    virtual HRESULT __stdcall get_Texture2CoordGroups(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup> ** value) = 0;
    virtual HRESULT __stdcall get_CompositeGroups(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup> ** value) = 0;
    virtual HRESULT __stdcall get_MultiplePropertyGroups(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup> ** value) = 0;
};

struct __declspec(uuid("192e90dc-0228-2e01-bc20-c5290cbf32c4")) __declspec(novtable) IPrinting3DMesh : Windows::IInspectable
{
    virtual HRESULT __stdcall get_VertexCount(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_VertexCount(uint32_t value) = 0;
    virtual HRESULT __stdcall get_IndexCount(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_IndexCount(uint32_t value) = 0;
    virtual HRESULT __stdcall get_VertexPositionsDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription * value) = 0;
    virtual HRESULT __stdcall put_VertexPositionsDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription value) = 0;
    virtual HRESULT __stdcall get_VertexNormalsDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription * value) = 0;
    virtual HRESULT __stdcall put_VertexNormalsDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription value) = 0;
    virtual HRESULT __stdcall get_TriangleIndicesDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription * value) = 0;
    virtual HRESULT __stdcall put_TriangleIndicesDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription value) = 0;
    virtual HRESULT __stdcall get_TriangleMaterialIndicesDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription * value) = 0;
    virtual HRESULT __stdcall put_TriangleMaterialIndicesDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription value) = 0;
    virtual HRESULT __stdcall abi_GetVertexPositions(Windows::Storage::Streams::IBuffer ** buffer) = 0;
    virtual HRESULT __stdcall abi_CreateVertexPositions(uint32_t value) = 0;
    virtual HRESULT __stdcall abi_GetVertexNormals(Windows::Storage::Streams::IBuffer ** buffer) = 0;
    virtual HRESULT __stdcall abi_CreateVertexNormals(uint32_t value) = 0;
    virtual HRESULT __stdcall abi_GetTriangleIndices(Windows::Storage::Streams::IBuffer ** buffer) = 0;
    virtual HRESULT __stdcall abi_CreateTriangleIndices(uint32_t value) = 0;
    virtual HRESULT __stdcall abi_GetTriangleMaterialIndices(Windows::Storage::Streams::IBuffer ** buffer) = 0;
    virtual HRESULT __stdcall abi_CreateTriangleMaterialIndices(uint32_t value) = 0;
    virtual HRESULT __stdcall get_BufferDescriptionSet(Windows::Foundation::Collections::IPropertySet ** value) = 0;
    virtual HRESULT __stdcall get_BufferSet(Windows::Foundation::Collections::IPropertySet ** value) = 0;
    virtual HRESULT __stdcall abi_VerifyAsync(winrt::Windows::Graphics::Printing3D::Printing3DMeshVerificationMode value, Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3DMeshVerificationResult> ** operation) = 0;
};

struct __declspec(uuid("195671ba-e93a-4e8a-a46f-dea8e852197e")) __declspec(novtable) IPrinting3DMeshVerificationResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsValid(bool * value) = 0;
    virtual HRESULT __stdcall get_NonmanifoldTriangles(Windows::Foundation::Collections::IVectorView<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall get_ReversedNormalTriangles(Windows::Foundation::Collections::IVectorView<uint32_t> ** value) = 0;
};

struct __declspec(uuid("2d012ef0-52fb-919a-77b0-4b1a3b80324f")) __declspec(novtable) IPrinting3DModel : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Unit(winrt::Windows::Graphics::Printing3D::Printing3DModelUnit * value) = 0;
    virtual HRESULT __stdcall put_Unit(winrt::Windows::Graphics::Printing3D::Printing3DModelUnit value) = 0;
    virtual HRESULT __stdcall get_Textures(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DModelTexture> ** value) = 0;
    virtual HRESULT __stdcall get_Meshes(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMesh> ** value) = 0;
    virtual HRESULT __stdcall get_Components(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DComponent> ** value) = 0;
    virtual HRESULT __stdcall get_Material(Windows::Graphics::Printing3D::IPrinting3DMaterial ** value) = 0;
    virtual HRESULT __stdcall put_Material(Windows::Graphics::Printing3D::IPrinting3DMaterial * value) = 0;
    virtual HRESULT __stdcall get_Build(Windows::Graphics::Printing3D::IPrinting3DComponent ** value) = 0;
    virtual HRESULT __stdcall put_Build(Windows::Graphics::Printing3D::IPrinting3DComponent * value) = 0;
    virtual HRESULT __stdcall get_Version(hstring * value) = 0;
    virtual HRESULT __stdcall put_Version(hstring value) = 0;
    virtual HRESULT __stdcall get_RequiredExtensions(Windows::Foundation::Collections::IVector<hstring> ** value) = 0;
    virtual HRESULT __stdcall get_Metadata(Windows::Foundation::Collections::IMap<hstring, hstring> ** value) = 0;
    virtual HRESULT __stdcall abi_RepairAsync(Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_Clone(Windows::Graphics::Printing3D::IPrinting3DModel ** value) = 0;
};

struct __declspec(uuid("c92069c7-c841-47f3-a84e-a149fd08b657")) __declspec(novtable) IPrinting3DModel2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_TryPartialRepairAsync(Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_TryPartialRepairWithTimeAsync(Windows::Foundation::TimeSpan maxWaitTime, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_TryReduceFacesAsync(Windows::Foundation::IAsyncOperationWithProgress<bool, double> ** operation) = 0;
    virtual HRESULT __stdcall abi_TryReduceFacesWithOptionsAsync(Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions * printing3DFaceReductionOptions, Windows::Foundation::IAsyncOperationWithProgress<bool, double> ** operation) = 0;
    virtual HRESULT __stdcall abi_TryReduceFacesWithOptionsAndTimeAsync(Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions * printing3DFaceReductionOptions, Windows::Foundation::TimeSpan maxWait, Windows::Foundation::IAsyncOperationWithProgress<bool, double> ** operation) = 0;
    virtual HRESULT __stdcall abi_RepairWithProgressAsync(Windows::Foundation::IAsyncOperationWithProgress<bool, double> ** operation) = 0;
};

struct __declspec(uuid("5dafcf01-b59d-483c-97bb-a4d546d1c75c")) __declspec(novtable) IPrinting3DModelTexture : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TextureResource(Windows::Graphics::Printing3D::IPrinting3DTextureResource ** value) = 0;
    virtual HRESULT __stdcall put_TextureResource(Windows::Graphics::Printing3D::IPrinting3DTextureResource * value) = 0;
    virtual HRESULT __stdcall get_TileStyleU(winrt::Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior * value) = 0;
    virtual HRESULT __stdcall put_TileStyleU(winrt::Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior value) = 0;
    virtual HRESULT __stdcall get_TileStyleV(winrt::Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior * value) = 0;
    virtual HRESULT __stdcall put_TileStyleV(winrt::Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior value) = 0;
};

struct __declspec(uuid("25a6254b-c6e9-484d-a214-a25e5776ba62")) __declspec(novtable) IPrinting3DMultiplePropertyMaterial : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MaterialIndices(Windows::Foundation::Collections::IVector<uint32_t> ** value) = 0;
};

struct __declspec(uuid("f0950519-aeb9-4515-a39b-a088fbbb277c")) __declspec(novtable) IPrinting3DMultiplePropertyMaterialGroup : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MultipleProperties(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterial> ** value) = 0;
    virtual HRESULT __stdcall get_MaterialGroupIndices(Windows::Foundation::Collections::IVector<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall get_MaterialGroupId(uint32_t * value) = 0;
};

struct __declspec(uuid("323e196e-d4c6-451e-a814-4d78a210fe53")) __declspec(novtable) IPrinting3DMultiplePropertyMaterialGroupFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(uint32_t MaterialGroupId, Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup ** result) = 0;
};

struct __declspec(uuid("8d844bfb-07e9-4986-9833-8dd3d48c6859")) __declspec(novtable) IPrinting3DTexture2CoordMaterial : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Texture(Windows::Graphics::Printing3D::IPrinting3DModelTexture ** value) = 0;
    virtual HRESULT __stdcall put_Texture(Windows::Graphics::Printing3D::IPrinting3DModelTexture * value) = 0;
    virtual HRESULT __stdcall get_U(double * value) = 0;
    virtual HRESULT __stdcall put_U(double value) = 0;
    virtual HRESULT __stdcall get_V(double * value) = 0;
    virtual HRESULT __stdcall put_V(double value) = 0;
};

struct __declspec(uuid("627d7ca7-6d90-4fb9-9fc4-9feff3dfa892")) __declspec(novtable) IPrinting3DTexture2CoordMaterialGroup : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Texture2Coords(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterial> ** value) = 0;
    virtual HRESULT __stdcall get_MaterialGroupId(uint32_t * value) = 0;
};

struct __declspec(uuid("69fbdbba-b12e-429b-8386-df5284f6e80f")) __declspec(novtable) IPrinting3DTexture2CoordMaterialGroup2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Texture(Windows::Graphics::Printing3D::IPrinting3DModelTexture ** value) = 0;
    virtual HRESULT __stdcall put_Texture(Windows::Graphics::Printing3D::IPrinting3DModelTexture * value) = 0;
};

struct __declspec(uuid("cbb049b0-468a-4c6f-b2a2-8eb8ba8dea48")) __declspec(novtable) IPrinting3DTexture2CoordMaterialGroupFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(uint32_t MaterialGroupId, Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup ** result) = 0;
};

struct __declspec(uuid("a70df32d-6ab1-44ae-bc45-a27382c0d38c")) __declspec(novtable) IPrinting3DTextureResource : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TextureData(Windows::Storage::Streams::IRandomAccessStreamWithContentType ** value) = 0;
    virtual HRESULT __stdcall put_TextureData(Windows::Storage::Streams::IRandomAccessStreamWithContentType * value) = 0;
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall put_Name(hstring value) = 0;
};

struct __declspec(uuid("e9175e70-c917-46de-bb51-d9a94db3711f")) __declspec(novtable) Print3DTaskSourceRequestedHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs * args) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Graphics::Printing3D::Print3DManager> { using default_interface = Windows::Graphics::Printing3D::IPrint3DManager; };
template <> struct traits<Windows::Graphics::Printing3D::Print3DTask> { using default_interface = Windows::Graphics::Printing3D::IPrint3DTask; };
template <> struct traits<Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs> { using default_interface = Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs; };
template <> struct traits<Windows::Graphics::Printing3D::Print3DTaskRequest> { using default_interface = Windows::Graphics::Printing3D::IPrint3DTaskRequest; };
template <> struct traits<Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs> { using default_interface = Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs; };
template <> struct traits<Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs> { using default_interface = Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs; };
template <> struct traits<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedArgs> { using default_interface = Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs; };
template <> struct traits<Windows::Graphics::Printing3D::Printing3D3MFPackage> { using default_interface = Windows::Graphics::Printing3D::IPrinting3D3MFPackage; };
template <> struct traits<Windows::Graphics::Printing3D::Printing3DBaseMaterial> { using default_interface = Windows::Graphics::Printing3D::IPrinting3DBaseMaterial; };
template <> struct traits<Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup> { using default_interface = Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup; };
template <> struct traits<Windows::Graphics::Printing3D::Printing3DColorMaterial> { using default_interface = Windows::Graphics::Printing3D::IPrinting3DColorMaterial; };
template <> struct traits<Windows::Graphics::Printing3D::Printing3DColorMaterialGroup> { using default_interface = Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup; };
template <> struct traits<Windows::Graphics::Printing3D::Printing3DComponent> { using default_interface = Windows::Graphics::Printing3D::IPrinting3DComponent; };
template <> struct traits<Windows::Graphics::Printing3D::Printing3DComponentWithMatrix> { using default_interface = Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix; };
template <> struct traits<Windows::Graphics::Printing3D::Printing3DCompositeMaterial> { using default_interface = Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial; };
template <> struct traits<Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup> { using default_interface = Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup; };
template <> struct traits<Windows::Graphics::Printing3D::Printing3DFaceReductionOptions> { using default_interface = Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions; };
template <> struct traits<Windows::Graphics::Printing3D::Printing3DMaterial> { using default_interface = Windows::Graphics::Printing3D::IPrinting3DMaterial; };
template <> struct traits<Windows::Graphics::Printing3D::Printing3DMesh> { using default_interface = Windows::Graphics::Printing3D::IPrinting3DMesh; };
template <> struct traits<Windows::Graphics::Printing3D::Printing3DMeshVerificationResult> { using default_interface = Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult; };
template <> struct traits<Windows::Graphics::Printing3D::Printing3DModel> { using default_interface = Windows::Graphics::Printing3D::IPrinting3DModel; };
template <> struct traits<Windows::Graphics::Printing3D::Printing3DModelTexture> { using default_interface = Windows::Graphics::Printing3D::IPrinting3DModelTexture; };
template <> struct traits<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterial> { using default_interface = Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial; };
template <> struct traits<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup> { using default_interface = Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup; };
template <> struct traits<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterial> { using default_interface = Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial; };
template <> struct traits<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup> { using default_interface = Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup; };
template <> struct traits<Windows::Graphics::Printing3D::Printing3DTextureResource> { using default_interface = Windows::Graphics::Printing3D::IPrinting3DTextureResource; };

}

namespace Windows::Graphics::Printing3D {

template <typename T> struct impl_IPrint3DManager;
template <typename T> struct impl_IPrint3DManagerStatics;
template <typename T> struct impl_IPrint3DTask;
template <typename T> struct impl_IPrint3DTaskCompletedEventArgs;
template <typename T> struct impl_IPrint3DTaskRequest;
template <typename T> struct impl_IPrint3DTaskRequestedEventArgs;
template <typename T> struct impl_IPrint3DTaskSourceChangedEventArgs;
template <typename T> struct impl_IPrint3DTaskSourceRequestedArgs;
template <typename T> struct impl_IPrinting3D3MFPackage;
template <typename T> struct impl_IPrinting3D3MFPackageStatics;
template <typename T> struct impl_IPrinting3DBaseMaterial;
template <typename T> struct impl_IPrinting3DBaseMaterialGroup;
template <typename T> struct impl_IPrinting3DBaseMaterialGroupFactory;
template <typename T> struct impl_IPrinting3DBaseMaterialStatics;
template <typename T> struct impl_IPrinting3DColorMaterial;
template <typename T> struct impl_IPrinting3DColorMaterial2;
template <typename T> struct impl_IPrinting3DColorMaterialGroup;
template <typename T> struct impl_IPrinting3DColorMaterialGroupFactory;
template <typename T> struct impl_IPrinting3DComponent;
template <typename T> struct impl_IPrinting3DComponentWithMatrix;
template <typename T> struct impl_IPrinting3DCompositeMaterial;
template <typename T> struct impl_IPrinting3DCompositeMaterialGroup;
template <typename T> struct impl_IPrinting3DCompositeMaterialGroup2;
template <typename T> struct impl_IPrinting3DCompositeMaterialGroupFactory;
template <typename T> struct impl_IPrinting3DFaceReductionOptions;
template <typename T> struct impl_IPrinting3DMaterial;
template <typename T> struct impl_IPrinting3DMesh;
template <typename T> struct impl_IPrinting3DMeshVerificationResult;
template <typename T> struct impl_IPrinting3DModel;
template <typename T> struct impl_IPrinting3DModel2;
template <typename T> struct impl_IPrinting3DModelTexture;
template <typename T> struct impl_IPrinting3DMultiplePropertyMaterial;
template <typename T> struct impl_IPrinting3DMultiplePropertyMaterialGroup;
template <typename T> struct impl_IPrinting3DMultiplePropertyMaterialGroupFactory;
template <typename T> struct impl_IPrinting3DTexture2CoordMaterial;
template <typename T> struct impl_IPrinting3DTexture2CoordMaterialGroup;
template <typename T> struct impl_IPrinting3DTexture2CoordMaterialGroup2;
template <typename T> struct impl_IPrinting3DTexture2CoordMaterialGroupFactory;
template <typename T> struct impl_IPrinting3DTextureResource;
template <typename T> struct impl_Print3DTaskSourceRequestedHandler;

}

namespace impl {

template <> struct traits<Windows::Graphics::Printing3D::IPrint3DManager>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrint3DManager;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrint3DManager<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrint3DManagerStatics>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrint3DManagerStatics;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrint3DManagerStatics<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrint3DTask>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrint3DTask;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrint3DTask<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrint3DTaskCompletedEventArgs<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrint3DTaskRequest>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrint3DTaskRequest;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrint3DTaskRequest<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrint3DTaskRequestedEventArgs<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrint3DTaskSourceChangedEventArgs<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrint3DTaskSourceRequestedArgs<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3D3MFPackage>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3D3MFPackage;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3D3MFPackage<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3D3MFPackageStatics<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DBaseMaterial>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DBaseMaterial;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DBaseMaterial<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DBaseMaterialGroup<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DBaseMaterialGroupFactory<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DBaseMaterialStatics<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DColorMaterial>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DColorMaterial;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DColorMaterial<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DColorMaterial2>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DColorMaterial2;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DColorMaterial2<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DColorMaterialGroup<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DColorMaterialGroupFactory<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DComponent>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DComponent;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DComponent<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DComponentWithMatrix<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DCompositeMaterial<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DCompositeMaterialGroup<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DCompositeMaterialGroup2<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DCompositeMaterialGroupFactory<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DFaceReductionOptions<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DMaterial>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DMaterial;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DMaterial<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DMesh>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DMesh;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DMesh<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DMeshVerificationResult<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DModel>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DModel;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DModel<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DModel2>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DModel2;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DModel2<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DModelTexture>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DModelTexture;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DModelTexture<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DMultiplePropertyMaterial<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DMultiplePropertyMaterialGroup<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DMultiplePropertyMaterialGroupFactory<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DTexture2CoordMaterial<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DTexture2CoordMaterialGroup<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DTexture2CoordMaterialGroup2<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DTexture2CoordMaterialGroupFactory<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::IPrinting3DTextureResource>
{
    using abi = ABI::Windows::Graphics::Printing3D::IPrinting3DTextureResource;
    template <typename D> using consume = Windows::Graphics::Printing3D::impl_IPrinting3DTextureResource<D>;
};

template <> struct traits<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedHandler>
{
    using abi = ABI::Windows::Graphics::Printing3D::Print3DTaskSourceRequestedHandler;
};

template <> struct traits<Windows::Graphics::Printing3D::Print3DManager>
{
    using abi = ABI::Windows::Graphics::Printing3D::Print3DManager;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Print3DManager"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Print3DTask>
{
    using abi = ABI::Windows::Graphics::Printing3D::Print3DTask;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Print3DTask"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs>
{
    using abi = ABI::Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Print3DTaskCompletedEventArgs"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Print3DTaskRequest>
{
    using abi = ABI::Windows::Graphics::Printing3D::Print3DTaskRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Print3DTaskRequest"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs>
{
    using abi = ABI::Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Print3DTaskRequestedEventArgs"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs>
{
    using abi = ABI::Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Print3DTaskSourceChangedEventArgs"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedArgs>
{
    using abi = ABI::Windows::Graphics::Printing3D::Print3DTaskSourceRequestedArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Print3DTaskSourceRequestedArgs"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Printing3D3MFPackage>
{
    using abi = ABI::Windows::Graphics::Printing3D::Printing3D3MFPackage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Printing3D3MFPackage"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Printing3DBaseMaterial>
{
    using abi = ABI::Windows::Graphics::Printing3D::Printing3DBaseMaterial;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Printing3DBaseMaterial"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup>
{
    using abi = ABI::Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Printing3DBaseMaterialGroup"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Printing3DColorMaterial>
{
    using abi = ABI::Windows::Graphics::Printing3D::Printing3DColorMaterial;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Printing3DColorMaterial"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Printing3DColorMaterialGroup>
{
    using abi = ABI::Windows::Graphics::Printing3D::Printing3DColorMaterialGroup;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Printing3DColorMaterialGroup"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Printing3DComponent>
{
    using abi = ABI::Windows::Graphics::Printing3D::Printing3DComponent;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Printing3DComponent"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Printing3DComponentWithMatrix>
{
    using abi = ABI::Windows::Graphics::Printing3D::Printing3DComponentWithMatrix;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Printing3DComponentWithMatrix"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Printing3DCompositeMaterial>
{
    using abi = ABI::Windows::Graphics::Printing3D::Printing3DCompositeMaterial;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Printing3DCompositeMaterial"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup>
{
    using abi = ABI::Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Printing3DCompositeMaterialGroup"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Printing3DFaceReductionOptions>
{
    using abi = ABI::Windows::Graphics::Printing3D::Printing3DFaceReductionOptions;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Printing3DFaceReductionOptions"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Printing3DMaterial>
{
    using abi = ABI::Windows::Graphics::Printing3D::Printing3DMaterial;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Printing3DMaterial"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Printing3DMesh>
{
    using abi = ABI::Windows::Graphics::Printing3D::Printing3DMesh;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Printing3DMesh"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Printing3DMeshVerificationResult>
{
    using abi = ABI::Windows::Graphics::Printing3D::Printing3DMeshVerificationResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Printing3DMeshVerificationResult"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Printing3DModel>
{
    using abi = ABI::Windows::Graphics::Printing3D::Printing3DModel;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Printing3DModel"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Printing3DModelTexture>
{
    using abi = ABI::Windows::Graphics::Printing3D::Printing3DModelTexture;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Printing3DModelTexture"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterial>
{
    using abi = ABI::Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterial;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Printing3DMultiplePropertyMaterial"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup>
{
    using abi = ABI::Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Printing3DMultiplePropertyMaterialGroup"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterial>
{
    using abi = ABI::Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterial;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Printing3DTexture2CoordMaterial"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup>
{
    using abi = ABI::Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Printing3DTexture2CoordMaterialGroup"; }
};

template <> struct traits<Windows::Graphics::Printing3D::Printing3DTextureResource>
{
    using abi = ABI::Windows::Graphics::Printing3D::Printing3DTextureResource;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Printing3D.Printing3DTextureResource"; }
};

}

}
