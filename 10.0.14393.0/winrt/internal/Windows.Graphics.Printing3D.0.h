// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Graphics::Printing3D {

struct Printing3DBufferDescription;

}

namespace Windows::Graphics::Printing3D {

using Printing3DBufferDescription = ABI::Windows::Graphics::Printing3D::Printing3DBufferDescription;

}

namespace ABI::Windows::Graphics::Printing3D {

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
struct Print3DTaskSourceRequestedHandler;
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

}

namespace Windows::Graphics::Printing3D {

struct Print3DTaskSourceRequestedHandler;
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

}

namespace Windows::Graphics::Printing3D {

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

}

}
