// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct IPropertySet;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;
struct IRandomAccessStream;
struct IRandomAccessStreamWithContentType;

}

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing3D {

enum class Print3DTaskCompletion
{
    Abandoned = 0,
    Canceled = 1,
    Failed = 2,
    Slicing = 3,
    Submitted = 4,
};

enum class Print3DTaskDetail
{
    Unknown = 0,
    ModelExceedsPrintBed = 1,
    UploadFailed = 2,
    InvalidMaterialSelection = 3,
    InvalidModel = 4,
    ModelNotManifold = 5,
    InvalidPrintTicket = 6,
};

enum class Printing3DBufferFormat
{
    Unknown = 0,
    R32G32B32A32Float = 2,
    R32G32B32A32UInt = 3,
    R32G32B32Float = 6,
    R32G32B32UInt = 7,
    Printing3DDouble = 500,
    Printing3DUInt = 501,
};

enum class Printing3DMeshVerificationMode
{
    FindFirstError = 0,
    FindAllErrors = 1,
};

enum class Printing3DModelUnit
{
    Meter = 0,
    Micron = 1,
    Millimeter = 2,
    Centimeter = 3,
    Inch = 4,
    Foot = 5,
};

enum class Printing3DObjectType
{
    Model = 0,
    Support = 1,
    Others = 2,
};

enum class Printing3DTextureEdgeBehavior
{
    None = 0,
    Wrap = 1,
    Mirror = 2,
    Clamp = 3,
};

struct IPrint3DManager;
struct IPrint3DManagerStatics;
struct IPrint3DTask;
struct IPrint3DTaskCompletedEventArgs;
struct IPrint3DTaskRequest;
struct IPrint3DTaskRequestedEventArgs;
struct IPrint3DTaskSourceChangedEventArgs;
struct IPrint3DTaskSourceRequestedArgs;
struct IPrinting3D3MFPackage;
struct IPrinting3D3MFPackageStatics;
struct IPrinting3DBaseMaterial;
struct IPrinting3DBaseMaterialGroup;
struct IPrinting3DBaseMaterialGroupFactory;
struct IPrinting3DBaseMaterialStatics;
struct IPrinting3DColorMaterial;
struct IPrinting3DColorMaterial2;
struct IPrinting3DColorMaterialGroup;
struct IPrinting3DColorMaterialGroupFactory;
struct IPrinting3DComponent;
struct IPrinting3DComponentWithMatrix;
struct IPrinting3DCompositeMaterial;
struct IPrinting3DCompositeMaterialGroup;
struct IPrinting3DCompositeMaterialGroup2;
struct IPrinting3DCompositeMaterialGroupFactory;
struct IPrinting3DFaceReductionOptions;
struct IPrinting3DMaterial;
struct IPrinting3DMesh;
struct IPrinting3DMeshVerificationResult;
struct IPrinting3DModel;
struct IPrinting3DModel2;
struct IPrinting3DModelTexture;
struct IPrinting3DMultiplePropertyMaterial;
struct IPrinting3DMultiplePropertyMaterialGroup;
struct IPrinting3DMultiplePropertyMaterialGroupFactory;
struct IPrinting3DTexture2CoordMaterial;
struct IPrinting3DTexture2CoordMaterialGroup;
struct IPrinting3DTexture2CoordMaterialGroup2;
struct IPrinting3DTexture2CoordMaterialGroupFactory;
struct IPrinting3DTextureResource;
struct Print3DManager;
struct Print3DTask;
struct Print3DTaskCompletedEventArgs;
struct Print3DTaskRequest;
struct Print3DTaskRequestedEventArgs;
struct Print3DTaskSourceChangedEventArgs;
struct Print3DTaskSourceRequestedArgs;
struct Printing3D3MFPackage;
struct Printing3DBaseMaterial;
struct Printing3DBaseMaterialGroup;
struct Printing3DColorMaterial;
struct Printing3DColorMaterialGroup;
struct Printing3DComponent;
struct Printing3DComponentWithMatrix;
struct Printing3DCompositeMaterial;
struct Printing3DCompositeMaterialGroup;
struct Printing3DFaceReductionOptions;
struct Printing3DMaterial;
struct Printing3DMesh;
struct Printing3DMeshVerificationResult;
struct Printing3DModel;
struct Printing3DModelTexture;
struct Printing3DMultiplePropertyMaterial;
struct Printing3DMultiplePropertyMaterialGroup;
struct Printing3DTexture2CoordMaterial;
struct Printing3DTexture2CoordMaterialGroup;
struct Printing3DTextureResource;
struct Printing3DBufferDescription;
struct Print3DTaskSourceRequestedHandler;

}

namespace winrt::impl {

template <> struct category<Windows::Graphics::Printing3D::IPrint3DManager>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrint3DManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrint3DTask>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrint3DTaskRequest>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3D3MFPackage>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DBaseMaterial>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DColorMaterial>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DColorMaterial2>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DComponent>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DMaterial>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DMesh>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DModel>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DModel2>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DModelTexture>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::IPrinting3DTextureResource>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing3D::Print3DManager>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Print3DTask>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Print3DTaskRequest>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedArgs>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3D3MFPackage>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DBaseMaterial>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DColorMaterial>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DColorMaterialGroup>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DComponent>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DComponentWithMatrix>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DCompositeMaterial>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DFaceReductionOptions>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DMaterial>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DMesh>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DMeshVerificationResult>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DModel>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DModelTexture>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterial>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterial>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DTextureResource>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing3D::Print3DTaskCompletion>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Printing3D::Print3DTaskDetail>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DBufferFormat>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DMeshVerificationMode>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DModelUnit>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DObjectType>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Printing3D::Printing3DBufferDescription>{ using type = struct_category<Windows::Graphics::Printing3D::Printing3DBufferFormat,uint32_t>; };
template <> struct category<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedHandler>{ using type = delegate_category; };
template <> struct name<Windows::Graphics::Printing3D::IPrint3DManager>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrint3DManager" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrint3DManagerStatics>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrint3DManagerStatics" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrint3DTask>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrint3DTask" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrint3DTaskCompletedEventArgs" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrint3DTaskRequest>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrint3DTaskRequest" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrint3DTaskRequestedEventArgs" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrint3DTaskSourceChangedEventArgs" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrint3DTaskSourceRequestedArgs" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3D3MFPackage>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3D3MFPackage" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3D3MFPackageStatics" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DBaseMaterial>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DBaseMaterial" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DBaseMaterialGroup" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DBaseMaterialGroupFactory" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DBaseMaterialStatics" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DColorMaterial>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DColorMaterial" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DColorMaterial2>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DColorMaterial2" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DColorMaterialGroup" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DColorMaterialGroupFactory" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DComponent>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DComponent" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DComponentWithMatrix" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DCompositeMaterial" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DCompositeMaterialGroup" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DCompositeMaterialGroup2" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DCompositeMaterialGroupFactory" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DFaceReductionOptions" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DMaterial>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DMaterial" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DMesh>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DMesh" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DMeshVerificationResult" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DModel>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DModel" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DModel2>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DModel2" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DModelTexture>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DModelTexture" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DMultiplePropertyMaterial" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DMultiplePropertyMaterialGroup" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DMultiplePropertyMaterialGroupFactory" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DTexture2CoordMaterial" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DTexture2CoordMaterialGroup" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DTexture2CoordMaterialGroup2" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DTexture2CoordMaterialGroupFactory" }; };
template <> struct name<Windows::Graphics::Printing3D::IPrinting3DTextureResource>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.IPrinting3DTextureResource" }; };
template <> struct name<Windows::Graphics::Printing3D::Print3DManager>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Print3DManager" }; };
template <> struct name<Windows::Graphics::Printing3D::Print3DTask>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Print3DTask" }; };
template <> struct name<Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Print3DTaskCompletedEventArgs" }; };
template <> struct name<Windows::Graphics::Printing3D::Print3DTaskRequest>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Print3DTaskRequest" }; };
template <> struct name<Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Print3DTaskRequestedEventArgs" }; };
template <> struct name<Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Print3DTaskSourceChangedEventArgs" }; };
template <> struct name<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedArgs>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Print3DTaskSourceRequestedArgs" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3D3MFPackage>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3D3MFPackage" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DBaseMaterial>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DBaseMaterial" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DBaseMaterialGroup" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DColorMaterial>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DColorMaterial" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DColorMaterialGroup>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DColorMaterialGroup" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DComponent>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DComponent" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DComponentWithMatrix>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DComponentWithMatrix" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DCompositeMaterial>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DCompositeMaterial" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DCompositeMaterialGroup" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DFaceReductionOptions>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DFaceReductionOptions" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DMaterial>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DMaterial" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DMesh>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DMesh" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DMeshVerificationResult>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DMeshVerificationResult" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DModel>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DModel" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DModelTexture>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DModelTexture" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterial>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DMultiplePropertyMaterial" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DMultiplePropertyMaterialGroup" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterial>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DTexture2CoordMaterial" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DTexture2CoordMaterialGroup" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DTextureResource>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DTextureResource" }; };
template <> struct name<Windows::Graphics::Printing3D::Print3DTaskCompletion>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Print3DTaskCompletion" }; };
template <> struct name<Windows::Graphics::Printing3D::Print3DTaskDetail>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Print3DTaskDetail" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DBufferFormat>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DBufferFormat" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DMeshVerificationMode>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DMeshVerificationMode" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DModelUnit>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DModelUnit" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DObjectType>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DObjectType" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DTextureEdgeBehavior" }; };
template <> struct name<Windows::Graphics::Printing3D::Printing3DBufferDescription>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Printing3DBufferDescription" }; };
template <> struct name<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedHandler>{ static constexpr auto & value{ L"Windows.Graphics.Printing3D.Print3DTaskSourceRequestedHandler" }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrint3DManager>{ static constexpr GUID value{ 0x4D2FCB0A,0x7366,0x4971,{ 0x8B,0xD5,0x17,0xC4,0xE3,0xE8,0xC6,0xC0 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrint3DManagerStatics>{ static constexpr GUID value{ 0x0EF1CAFE,0xA9AD,0x4C08,{ 0xA9,0x17,0x1D,0x1F,0x86,0x3E,0xAB,0xCB } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrint3DTask>{ static constexpr GUID value{ 0x8CE3D080,0x2118,0x4C28,{ 0x80,0xDE,0xF4,0x26,0xD7,0x01,0x91,0xAE } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs>{ static constexpr GUID value{ 0xCC1914AF,0x2614,0x4F1D,{ 0xAC,0xCC,0xD6,0xFC,0x4F,0xDA,0x54,0x55 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrint3DTaskRequest>{ static constexpr GUID value{ 0x2595C46F,0x2245,0x4C5A,{ 0x87,0x31,0x0D,0x60,0x4D,0xC6,0xBC,0x3C } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs>{ static constexpr GUID value{ 0x150CB77F,0x18C5,0x40D7,{ 0x9F,0x40,0xFA,0xB3,0x09,0x6E,0x05,0xA9 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs>{ static constexpr GUID value{ 0x5BCD34AF,0x24E9,0x4C10,{ 0x8D,0x07,0x14,0xC3,0x46,0xBA,0x3F,0xCF } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs>{ static constexpr GUID value{ 0xC77C9ABA,0x24AF,0x424D,{ 0xA3,0xBF,0x92,0x25,0x0C,0x35,0x56,0x02 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3D3MFPackage>{ static constexpr GUID value{ 0xF64DD5C8,0x2AB7,0x45A9,{ 0xA1,0xB7,0x26,0x7E,0x94,0x8D,0x5B,0x18 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics>{ static constexpr GUID value{ 0x7058D9AF,0x7A9A,0x4787,{ 0xB8,0x17,0xF6,0xF4,0x59,0x21,0x48,0x23 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DBaseMaterial>{ static constexpr GUID value{ 0xD0F0E743,0xC50C,0x4BCB,{ 0x9D,0x04,0xFC,0x16,0xAD,0xCE,0xA2,0xC9 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup>{ static constexpr GUID value{ 0x94F070B8,0x2515,0x4A8D,{ 0xA1,0xF0,0xD0,0xFC,0x13,0xD0,0x60,0x21 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory>{ static constexpr GUID value{ 0x5C1546DC,0x8697,0x4193,{ 0x97,0x6B,0x84,0xBB,0x41,0x16,0xE5,0xBF } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics>{ static constexpr GUID value{ 0x815A47BC,0x374A,0x476D,{ 0xBE,0x92,0x3E,0xCF,0xD1,0xCB,0x97,0x76 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DColorMaterial>{ static constexpr GUID value{ 0xE1899928,0x7CE7,0x4285,{ 0xA3,0x5D,0xF1,0x45,0xC9,0x51,0x0C,0x7B } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DColorMaterial2>{ static constexpr GUID value{ 0xFAB0E852,0x0AEF,0x44E9,{ 0x9D,0xDD,0x36,0xEE,0xEA,0x5A,0xCD,0x44 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup>{ static constexpr GUID value{ 0x001A6BD0,0xAADF,0x4226,{ 0xAF,0xE9,0xF3,0x69,0xA0,0xB4,0x50,0x04 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory>{ static constexpr GUID value{ 0x71D38D6D,0xB1EA,0x4A5B,{ 0xBC,0x54,0x19,0xC6,0x5F,0x3D,0xF0,0x44 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DComponent>{ static constexpr GUID value{ 0x7E287845,0xBF7F,0x4CDB,{ 0xA2,0x7F,0x30,0xA0,0x14,0x37,0xFE,0xDE } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix>{ static constexpr GUID value{ 0x3279F335,0x0EF0,0x456B,{ 0x9A,0x21,0x49,0xBE,0xBE,0x8B,0x51,0xC2 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial>{ static constexpr GUID value{ 0x462238DD,0x562E,0x4F6C,{ 0x88,0x2D,0xF4,0xD8,0x41,0xFD,0x63,0xC7 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup>{ static constexpr GUID value{ 0x8D946A5B,0x40F1,0x496D,{ 0xA5,0xFB,0x34,0x0A,0x5A,0x67,0x8E,0x30 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2>{ static constexpr GUID value{ 0x06E86D62,0x7D3B,0x41E1,{ 0x94,0x4C,0xBA,0xFD,0xE4,0x55,0x54,0x83 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory>{ static constexpr GUID value{ 0xD08ECD13,0x92FF,0x43AA,{ 0xA6,0x27,0x8D,0x43,0xC2,0x2C,0x81,0x7E } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions>{ static constexpr GUID value{ 0xBBFED397,0x2D74,0x46F7,{ 0xBE,0x85,0x99,0xA6,0x7B,0xBB,0x66,0x29 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DMaterial>{ static constexpr GUID value{ 0x378DB256,0xED62,0x4952,{ 0xB8,0x5B,0x03,0x56,0x7D,0x7C,0x46,0x5E } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DMesh>{ static constexpr GUID value{ 0x192E90DC,0x0228,0x2E01,{ 0xBC,0x20,0xC5,0x29,0x0C,0xBF,0x32,0xC4 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult>{ static constexpr GUID value{ 0x195671BA,0xE93A,0x4E8A,{ 0xA4,0x6F,0xDE,0xA8,0xE8,0x52,0x19,0x7E } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DModel>{ static constexpr GUID value{ 0x2D012EF0,0x52FB,0x919A,{ 0x77,0xB0,0x4B,0x1A,0x3B,0x80,0x32,0x4F } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DModel2>{ static constexpr GUID value{ 0xC92069C7,0xC841,0x47F3,{ 0xA8,0x4E,0xA1,0x49,0xFD,0x08,0xB6,0x57 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DModelTexture>{ static constexpr GUID value{ 0x5DAFCF01,0xB59D,0x483C,{ 0x97,0xBB,0xA4,0xD5,0x46,0xD1,0xC7,0x5C } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial>{ static constexpr GUID value{ 0x25A6254B,0xC6E9,0x484D,{ 0xA2,0x14,0xA2,0x5E,0x57,0x76,0xBA,0x62 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup>{ static constexpr GUID value{ 0xF0950519,0xAEB9,0x4515,{ 0xA3,0x9B,0xA0,0x88,0xFB,0xBB,0x27,0x7C } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory>{ static constexpr GUID value{ 0x323E196E,0xD4C6,0x451E,{ 0xA8,0x14,0x4D,0x78,0xA2,0x10,0xFE,0x53 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial>{ static constexpr GUID value{ 0x8D844BFB,0x07E9,0x4986,{ 0x98,0x33,0x8D,0xD3,0xD4,0x8C,0x68,0x59 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup>{ static constexpr GUID value{ 0x627D7CA7,0x6D90,0x4FB9,{ 0x9F,0xC4,0x9F,0xEF,0xF3,0xDF,0xA8,0x92 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2>{ static constexpr GUID value{ 0x69FBDBBA,0xB12E,0x429B,{ 0x83,0x86,0xDF,0x52,0x84,0xF6,0xE8,0x0F } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory>{ static constexpr GUID value{ 0xCBB049B0,0x468A,0x4C6F,{ 0xB2,0xA2,0x8E,0xB8,0xBA,0x8D,0xEA,0x48 } }; };
template <> struct guid<Windows::Graphics::Printing3D::IPrinting3DTextureResource>{ static constexpr GUID value{ 0xA70DF32D,0x6AB1,0x44AE,{ 0xBC,0x45,0xA2,0x73,0x82,0xC0,0xD3,0x8C } }; };
template <> struct guid<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedHandler>{ static constexpr GUID value{ 0xE9175E70,0xC917,0x46DE,{ 0xBB,0x51,0xD9,0xA9,0x4D,0xB3,0x71,0x1F } }; };
template <> struct default_interface<Windows::Graphics::Printing3D::Print3DManager>{ using type = Windows::Graphics::Printing3D::IPrint3DManager; };
template <> struct default_interface<Windows::Graphics::Printing3D::Print3DTask>{ using type = Windows::Graphics::Printing3D::IPrint3DTask; };
template <> struct default_interface<Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs>{ using type = Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs; };
template <> struct default_interface<Windows::Graphics::Printing3D::Print3DTaskRequest>{ using type = Windows::Graphics::Printing3D::IPrint3DTaskRequest; };
template <> struct default_interface<Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs>{ using type = Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs; };
template <> struct default_interface<Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs>{ using type = Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs; };
template <> struct default_interface<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedArgs>{ using type = Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs; };
template <> struct default_interface<Windows::Graphics::Printing3D::Printing3D3MFPackage>{ using type = Windows::Graphics::Printing3D::IPrinting3D3MFPackage; };
template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DBaseMaterial>{ using type = Windows::Graphics::Printing3D::IPrinting3DBaseMaterial; };
template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup>{ using type = Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup; };
template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DColorMaterial>{ using type = Windows::Graphics::Printing3D::IPrinting3DColorMaterial; };
template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DColorMaterialGroup>{ using type = Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup; };
template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DComponent>{ using type = Windows::Graphics::Printing3D::IPrinting3DComponent; };
template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DComponentWithMatrix>{ using type = Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix; };
template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DCompositeMaterial>{ using type = Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial; };
template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup>{ using type = Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup; };
template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DFaceReductionOptions>{ using type = Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions; };
template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DMaterial>{ using type = Windows::Graphics::Printing3D::IPrinting3DMaterial; };
template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DMesh>{ using type = Windows::Graphics::Printing3D::IPrinting3DMesh; };
template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DMeshVerificationResult>{ using type = Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult; };
template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DModel>{ using type = Windows::Graphics::Printing3D::IPrinting3DModel; };
template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DModelTexture>{ using type = Windows::Graphics::Printing3D::IPrinting3DModelTexture; };
template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterial>{ using type = Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial; };
template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup>{ using type = Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup; };
template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterial>{ using type = Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial; };
template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup>{ using type = Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup; };
template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DTextureResource>{ using type = Windows::Graphics::Printing3D::IPrinting3DTextureResource; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrint3DManager
{
    event_token TaskRequested(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DManager, Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs> const& eventHandler) const;
    using TaskRequested_revoker = event_revoker<Windows::Graphics::Printing3D::IPrint3DManager>;
    TaskRequested_revoker TaskRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DManager, Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs> const& eventHandler) const;
    void TaskRequested(event_token const& token) const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrint3DManager> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrint3DManager<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrint3DManagerStatics
{
    Windows::Graphics::Printing3D::Print3DManager GetForCurrentView() const;
    Windows::Foundation::IAsyncOperation<bool> ShowPrintUIAsync() const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrint3DManagerStatics> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrint3DManagerStatics<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrint3DTask
{
    Windows::Graphics::Printing3D::Printing3D3MFPackage Source() const;
    event_token Submitting(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Foundation::IInspectable> const& eventHandler) const;
    using Submitting_revoker = event_revoker<Windows::Graphics::Printing3D::IPrint3DTask>;
    Submitting_revoker Submitting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Foundation::IInspectable> const& eventHandler) const;
    void Submitting(event_token const& eventCookie) const;
    event_token Completed(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs> const& eventHandler) const;
    using Completed_revoker = event_revoker<Windows::Graphics::Printing3D::IPrint3DTask>;
    Completed_revoker Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs> const& eventHandler) const;
    void Completed(event_token const& eventCookie) const;
    event_token SourceChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs> const& eventHandler) const;
    using SourceChanged_revoker = event_revoker<Windows::Graphics::Printing3D::IPrint3DTask>;
    SourceChanged_revoker SourceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs> const& eventHandler) const;
    void SourceChanged(event_token const& eventCookie) const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrint3DTask> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrint3DTask<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrint3DTaskCompletedEventArgs
{
    Windows::Graphics::Printing3D::Print3DTaskCompletion Completion() const;
    Windows::Graphics::Printing3D::Print3DTaskDetail ExtendedStatus() const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrint3DTaskCompletedEventArgs<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrint3DTaskRequest
{
    Windows::Graphics::Printing3D::Print3DTask CreateTask(param::hstring const& title, param::hstring const& printerId, Windows::Graphics::Printing3D::Print3DTaskSourceRequestedHandler const& handler) const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrint3DTaskRequest> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrint3DTaskRequest<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrint3DTaskRequestedEventArgs
{
    Windows::Graphics::Printing3D::Print3DTaskRequest Request() const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrint3DTaskRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrint3DTaskSourceChangedEventArgs
{
    Windows::Graphics::Printing3D::Printing3D3MFPackage Source() const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrint3DTaskSourceChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrint3DTaskSourceRequestedArgs
{
    void SetSource(Windows::Graphics::Printing3D::Printing3D3MFPackage const& source) const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrint3DTaskSourceRequestedArgs<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> SaveAsync() const;
    Windows::Storage::Streams::IRandomAccessStream PrintTicket() const;
    void PrintTicket(Windows::Storage::Streams::IRandomAccessStream const& value) const;
    Windows::Storage::Streams::IRandomAccessStream ModelPart() const;
    void ModelPart(Windows::Storage::Streams::IRandomAccessStream const& value) const;
    Windows::Graphics::Printing3D::Printing3DTextureResource Thumbnail() const;
    void Thumbnail(Windows::Graphics::Printing3D::Printing3DTextureResource const& value) const;
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTextureResource> Textures() const;
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3DModel> LoadModelFromPackageAsync(Windows::Storage::Streams::IRandomAccessStream const& value) const;
    Windows::Foundation::IAsyncAction SaveModelToPackageAsync(Windows::Graphics::Printing3D::Printing3DModel const& value) const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3D3MFPackage> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackageStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3D3MFPackage> LoadAsync(Windows::Storage::Streams::IRandomAccessStream const& value) const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackageStatics<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterial
{
    hstring Name() const;
    void Name(param::hstring const& value) const;
    Windows::Graphics::Printing3D::Printing3DColorMaterial Color() const;
    void Color(Windows::Graphics::Printing3D::Printing3DColorMaterial const& value) const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DBaseMaterial> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterial<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialGroup
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DBaseMaterial> Bases() const;
    uint32_t MaterialGroupId() const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialGroup<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialGroupFactory
{
    Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup Create(uint32_t MaterialGroupId) const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialGroupFactory<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialStatics
{
    hstring Abs() const;
    hstring Pla() const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialStatics<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterial
{
    uint32_t Value() const;
    void Value(uint32_t value) const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DColorMaterial> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterial<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterial2
{
    Windows::UI::Color Color() const;
    void Color(Windows::UI::Color const& value) const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DColorMaterial2> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterial2<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterialGroup
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DColorMaterial> Colors() const;
    uint32_t MaterialGroupId() const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterialGroup<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterialGroupFactory
{
    Windows::Graphics::Printing3D::Printing3DColorMaterialGroup Create(uint32_t MaterialGroupId) const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterialGroupFactory<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DComponent
{
    Windows::Graphics::Printing3D::Printing3DMesh Mesh() const;
    void Mesh(Windows::Graphics::Printing3D::Printing3DMesh const& value) const;
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DComponentWithMatrix> Components() const;
    Windows::Graphics::Printing3D::Printing3DTextureResource Thumbnail() const;
    void Thumbnail(Windows::Graphics::Printing3D::Printing3DTextureResource const& value) const;
    Windows::Graphics::Printing3D::Printing3DObjectType Type() const;
    void Type(Windows::Graphics::Printing3D::Printing3DObjectType const& value) const;
    hstring Name() const;
    void Name(param::hstring const& value) const;
    hstring PartNumber() const;
    void PartNumber(param::hstring const& value) const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DComponent> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DComponentWithMatrix
{
    Windows::Graphics::Printing3D::Printing3DComponent Component() const;
    void Component(Windows::Graphics::Printing3D::Printing3DComponent const& value) const;
    Windows::Foundation::Numerics::float4x4 Matrix() const;
    void Matrix(Windows::Foundation::Numerics::float4x4 const& value) const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DComponentWithMatrix<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterial
{
    Windows::Foundation::Collections::IVector<double> Values() const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterial<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroup
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DCompositeMaterial> Composites() const;
    uint32_t MaterialGroupId() const;
    Windows::Foundation::Collections::IVector<uint32_t> MaterialIndices() const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroup<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroup2
{
    Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup BaseMaterialGroup() const;
    void BaseMaterialGroup(Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup const& value) const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroup2<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroupFactory
{
    Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup Create(uint32_t MaterialGroupId) const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroupFactory<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DFaceReductionOptions
{
    double MaxReductionArea() const;
    void MaxReductionArea(double value) const;
    uint32_t TargetTriangleCount() const;
    void TargetTriangleCount(uint32_t value) const;
    double MaxEdgeLength() const;
    void MaxEdgeLength(double value) const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DFaceReductionOptions<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DMaterial
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup> BaseGroups() const;
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DColorMaterialGroup> ColorGroups() const;
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup> Texture2CoordGroups() const;
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup> CompositeGroups() const;
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup> MultiplePropertyGroups() const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DMaterial> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DMaterial<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DMesh
{
    uint32_t VertexCount() const;
    void VertexCount(uint32_t value) const;
    uint32_t IndexCount() const;
    void IndexCount(uint32_t value) const;
    Windows::Graphics::Printing3D::Printing3DBufferDescription VertexPositionsDescription() const;
    void VertexPositionsDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription const& value) const;
    Windows::Graphics::Printing3D::Printing3DBufferDescription VertexNormalsDescription() const;
    void VertexNormalsDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription const& value) const;
    Windows::Graphics::Printing3D::Printing3DBufferDescription TriangleIndicesDescription() const;
    void TriangleIndicesDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription const& value) const;
    Windows::Graphics::Printing3D::Printing3DBufferDescription TriangleMaterialIndicesDescription() const;
    void TriangleMaterialIndicesDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription const& value) const;
    Windows::Storage::Streams::IBuffer GetVertexPositions() const;
    void CreateVertexPositions(uint32_t value) const;
    Windows::Storage::Streams::IBuffer GetVertexNormals() const;
    void CreateVertexNormals(uint32_t value) const;
    Windows::Storage::Streams::IBuffer GetTriangleIndices() const;
    void CreateTriangleIndices(uint32_t value) const;
    Windows::Storage::Streams::IBuffer GetTriangleMaterialIndices() const;
    void CreateTriangleMaterialIndices(uint32_t value) const;
    Windows::Foundation::Collections::IPropertySet BufferDescriptionSet() const;
    Windows::Foundation::Collections::IPropertySet BufferSet() const;
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3DMeshVerificationResult> VerifyAsync(Windows::Graphics::Printing3D::Printing3DMeshVerificationMode const& value) const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DMesh> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DMeshVerificationResult
{
    bool IsValid() const;
    Windows::Foundation::Collections::IVectorView<uint32_t> NonmanifoldTriangles() const;
    Windows::Foundation::Collections::IVectorView<uint32_t> ReversedNormalTriangles() const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DMeshVerificationResult<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DModel
{
    Windows::Graphics::Printing3D::Printing3DModelUnit Unit() const;
    void Unit(Windows::Graphics::Printing3D::Printing3DModelUnit const& value) const;
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DModelTexture> Textures() const;
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMesh> Meshes() const;
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DComponent> Components() const;
    Windows::Graphics::Printing3D::Printing3DMaterial Material() const;
    void Material(Windows::Graphics::Printing3D::Printing3DMaterial const& value) const;
    Windows::Graphics::Printing3D::Printing3DComponent Build() const;
    void Build(Windows::Graphics::Printing3D::Printing3DComponent const& value) const;
    hstring Version() const;
    void Version(param::hstring const& value) const;
    Windows::Foundation::Collections::IVector<hstring> RequiredExtensions() const;
    Windows::Foundation::Collections::IMap<hstring, hstring> Metadata() const;
    Windows::Foundation::IAsyncAction RepairAsync() const;
    Windows::Graphics::Printing3D::Printing3DModel Clone() const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DModel> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DModel2
{
    Windows::Foundation::IAsyncOperation<bool> TryPartialRepairAsync() const;
    Windows::Foundation::IAsyncOperation<bool> TryPartialRepairAsync(Windows::Foundation::TimeSpan const& maxWaitTime) const;
    Windows::Foundation::IAsyncOperationWithProgress<bool, double> TryReduceFacesAsync() const;
    Windows::Foundation::IAsyncOperationWithProgress<bool, double> TryReduceFacesAsync(Windows::Graphics::Printing3D::Printing3DFaceReductionOptions const& printing3DFaceReductionOptions) const;
    Windows::Foundation::IAsyncOperationWithProgress<bool, double> TryReduceFacesAsync(Windows::Graphics::Printing3D::Printing3DFaceReductionOptions const& printing3DFaceReductionOptions, Windows::Foundation::TimeSpan const& maxWait) const;
    Windows::Foundation::IAsyncOperationWithProgress<bool, double> RepairWithProgressAsync() const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DModel2> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DModel2<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DModelTexture
{
    Windows::Graphics::Printing3D::Printing3DTextureResource TextureResource() const;
    void TextureResource(Windows::Graphics::Printing3D::Printing3DTextureResource const& value) const;
    Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior TileStyleU() const;
    void TileStyleU(Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior const& value) const;
    Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior TileStyleV() const;
    void TileStyleV(Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior const& value) const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DModelTexture> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DModelTexture<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterial
{
    Windows::Foundation::Collections::IVector<uint32_t> MaterialIndices() const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterial<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterialGroup
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterial> MultipleProperties() const;
    Windows::Foundation::Collections::IVector<uint32_t> MaterialGroupIndices() const;
    uint32_t MaterialGroupId() const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterialGroup<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterialGroupFactory
{
    Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup Create(uint32_t MaterialGroupId) const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterialGroupFactory<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterial
{
    Windows::Graphics::Printing3D::Printing3DModelTexture Texture() const;
    void Texture(Windows::Graphics::Printing3D::Printing3DModelTexture const& value) const;
    double U() const;
    void U(double value) const;
    double V() const;
    void V(double value) const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterial<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroup
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterial> Texture2Coords() const;
    uint32_t MaterialGroupId() const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroup<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroup2
{
    Windows::Graphics::Printing3D::Printing3DModelTexture Texture() const;
    void Texture(Windows::Graphics::Printing3D::Printing3DModelTexture const& value) const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroup2<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroupFactory
{
    Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup Create(uint32_t MaterialGroupId) const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroupFactory<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing3D_IPrinting3DTextureResource
{
    Windows::Storage::Streams::IRandomAccessStreamWithContentType TextureData() const;
    void TextureData(Windows::Storage::Streams::IRandomAccessStreamWithContentType const& value) const;
    hstring Name() const;
    void Name(param::hstring const& value) const;
};
template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DTextureResource> { template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DTextureResource<D>; };

template <> struct abi<Windows::Graphics::Printing3D::IPrint3DManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_TaskRequested(::IUnknown* eventHandler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_TaskRequested(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrint3DManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** result) = 0;
    virtual HRESULT __stdcall ShowPrintUIAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrint3DTask>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Source(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_Submitting(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_Submitting(abi_t<event_token> eventCookie) = 0;
    virtual HRESULT __stdcall add_Completed(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_Completed(abi_t<event_token> eventCookie) = 0;
    virtual HRESULT __stdcall add_SourceChanged(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_SourceChanged(abi_t<event_token> eventCookie) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Completion(abi_t<Windows::Graphics::Printing3D::Print3DTaskCompletion>* value) = 0;
    virtual HRESULT __stdcall get_ExtendedStatus(abi_t<Windows::Graphics::Printing3D::Print3DTaskDetail>* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrint3DTaskRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateTask(HSTRING title, HSTRING printerId, ::IUnknown* handler, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Request(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Source(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetSource(::IUnknown* source) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3D3MFPackage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SaveAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_PrintTicket(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_PrintTicket(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ModelPart(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ModelPart(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Thumbnail(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Textures(::IUnknown** value) = 0;
    virtual HRESULT __stdcall LoadModelFromPackageAsync(::IUnknown* value, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SaveModelToPackageAsync(::IUnknown* value, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall LoadAsync(::IUnknown* value, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DBaseMaterial>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Name(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Color(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Color(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Bases(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MaterialGroupId(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(uint32_t MaterialGroupId, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Abs(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Pla(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DColorMaterial>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Value(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_Value(uint32_t value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DColorMaterial2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Color(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall put_Color(abi_t<Windows::UI::Color> value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Colors(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MaterialGroupId(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(uint32_t MaterialGroupId, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DComponent>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Mesh(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Mesh(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Components(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Thumbnail(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Type(abi_t<Windows::Graphics::Printing3D::Printing3DObjectType>* value) = 0;
    virtual HRESULT __stdcall put_Type(abi_t<Windows::Graphics::Printing3D::Printing3DObjectType> value) = 0;
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Name(HSTRING value) = 0;
    virtual HRESULT __stdcall get_PartNumber(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_PartNumber(HSTRING value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Component(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Component(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Matrix(abi_t<Windows::Foundation::Numerics::float4x4>* value) = 0;
    virtual HRESULT __stdcall put_Matrix(abi_t<Windows::Foundation::Numerics::float4x4> value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Values(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Composites(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MaterialGroupId(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_MaterialIndices(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BaseMaterialGroup(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_BaseMaterialGroup(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(uint32_t MaterialGroupId, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MaxReductionArea(double* value) = 0;
    virtual HRESULT __stdcall put_MaxReductionArea(double value) = 0;
    virtual HRESULT __stdcall get_TargetTriangleCount(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_TargetTriangleCount(uint32_t value) = 0;
    virtual HRESULT __stdcall get_MaxEdgeLength(double* value) = 0;
    virtual HRESULT __stdcall put_MaxEdgeLength(double value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DMaterial>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BaseGroups(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ColorGroups(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Texture2CoordGroups(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CompositeGroups(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MultiplePropertyGroups(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DMesh>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_VertexCount(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_VertexCount(uint32_t value) = 0;
    virtual HRESULT __stdcall get_IndexCount(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_IndexCount(uint32_t value) = 0;
    virtual HRESULT __stdcall get_VertexPositionsDescription(abi_t<Windows::Graphics::Printing3D::Printing3DBufferDescription>* value) = 0;
    virtual HRESULT __stdcall put_VertexPositionsDescription(abi_t<Windows::Graphics::Printing3D::Printing3DBufferDescription> value) = 0;
    virtual HRESULT __stdcall get_VertexNormalsDescription(abi_t<Windows::Graphics::Printing3D::Printing3DBufferDescription>* value) = 0;
    virtual HRESULT __stdcall put_VertexNormalsDescription(abi_t<Windows::Graphics::Printing3D::Printing3DBufferDescription> value) = 0;
    virtual HRESULT __stdcall get_TriangleIndicesDescription(abi_t<Windows::Graphics::Printing3D::Printing3DBufferDescription>* value) = 0;
    virtual HRESULT __stdcall put_TriangleIndicesDescription(abi_t<Windows::Graphics::Printing3D::Printing3DBufferDescription> value) = 0;
    virtual HRESULT __stdcall get_TriangleMaterialIndicesDescription(abi_t<Windows::Graphics::Printing3D::Printing3DBufferDescription>* value) = 0;
    virtual HRESULT __stdcall put_TriangleMaterialIndicesDescription(abi_t<Windows::Graphics::Printing3D::Printing3DBufferDescription> value) = 0;
    virtual HRESULT __stdcall GetVertexPositions(::IUnknown** buffer) = 0;
    virtual HRESULT __stdcall CreateVertexPositions(uint32_t value) = 0;
    virtual HRESULT __stdcall GetVertexNormals(::IUnknown** buffer) = 0;
    virtual HRESULT __stdcall CreateVertexNormals(uint32_t value) = 0;
    virtual HRESULT __stdcall GetTriangleIndices(::IUnknown** buffer) = 0;
    virtual HRESULT __stdcall CreateTriangleIndices(uint32_t value) = 0;
    virtual HRESULT __stdcall GetTriangleMaterialIndices(::IUnknown** buffer) = 0;
    virtual HRESULT __stdcall CreateTriangleMaterialIndices(uint32_t value) = 0;
    virtual HRESULT __stdcall get_BufferDescriptionSet(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_BufferSet(::IUnknown** value) = 0;
    virtual HRESULT __stdcall VerifyAsync(abi_t<Windows::Graphics::Printing3D::Printing3DMeshVerificationMode> value, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsValid(bool* value) = 0;
    virtual HRESULT __stdcall get_NonmanifoldTriangles(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ReversedNormalTriangles(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DModel>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Unit(abi_t<Windows::Graphics::Printing3D::Printing3DModelUnit>* value) = 0;
    virtual HRESULT __stdcall put_Unit(abi_t<Windows::Graphics::Printing3D::Printing3DModelUnit> value) = 0;
    virtual HRESULT __stdcall get_Textures(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Meshes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Components(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Material(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Material(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Build(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Build(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Version(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Version(HSTRING value) = 0;
    virtual HRESULT __stdcall get_RequiredExtensions(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Metadata(::IUnknown** value) = 0;
    virtual HRESULT __stdcall RepairAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall Clone(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DModel2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryPartialRepairAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryPartialRepairWithTimeAsync(abi_t<Windows::Foundation::TimeSpan> maxWaitTime, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryReduceFacesAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryReduceFacesWithOptionsAsync(::IUnknown* printing3DFaceReductionOptions, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryReduceFacesWithOptionsAndTimeAsync(::IUnknown* printing3DFaceReductionOptions, abi_t<Windows::Foundation::TimeSpan> maxWait, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RepairWithProgressAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DModelTexture>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TextureResource(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_TextureResource(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_TileStyleU(abi_t<Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior>* value) = 0;
    virtual HRESULT __stdcall put_TileStyleU(abi_t<Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior> value) = 0;
    virtual HRESULT __stdcall get_TileStyleV(abi_t<Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior>* value) = 0;
    virtual HRESULT __stdcall put_TileStyleV(abi_t<Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior> value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MaterialIndices(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MultipleProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MaterialGroupIndices(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MaterialGroupId(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(uint32_t MaterialGroupId, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Texture(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Texture(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_U(double* value) = 0;
    virtual HRESULT __stdcall put_U(double value) = 0;
    virtual HRESULT __stdcall get_V(double* value) = 0;
    virtual HRESULT __stdcall put_V(double value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Texture2Coords(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MaterialGroupId(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Texture(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Texture(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(uint32_t MaterialGroupId, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DTextureResource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TextureData(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_TextureData(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Name(HSTRING value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* args) = 0;
};};

}
