// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

struct Rect;
struct DateTime;

}

namespace Windows::Foundation {

using Rect = ABI::Windows::Foundation::Rect;
using DateTime = ABI::Windows::Foundation::DateTime;

}

namespace ABI::Windows::Foundation {

struct DeferralCompletedHandler;
struct IClosable;
struct IDeferral;
struct IDeferralFactory;
struct IGetActivationFactory;
struct IMemoryBuffer;
struct IMemoryBufferFactory;
struct IMemoryBufferReference;
struct IPropertyValue;
struct IPropertyValueStatics;
struct IStringable;
struct IUriEscapeStatics;
struct IUriRuntimeClass;
struct IUriRuntimeClassFactory;
struct IUriRuntimeClassWithAbsoluteCanonicalUri;
struct IWwwFormUrlDecoderEntry;
struct IWwwFormUrlDecoderRuntimeClass;
struct IWwwFormUrlDecoderRuntimeClassFactory;
struct Deferral;
struct MemoryBuffer;
struct Uri;
struct WwwFormUrlDecoder;
struct WwwFormUrlDecoderEntry;

}

namespace Windows::Foundation {

struct DeferralCompletedHandler;
struct IClosable;
struct IDeferral;
struct IDeferralFactory;
struct IGetActivationFactory;
struct IMemoryBuffer;
struct IMemoryBufferFactory;
struct IMemoryBufferReference;
struct IPropertyValue;
struct IPropertyValueStatics;
struct IStringable;
struct IUriEscapeStatics;
struct IUriRuntimeClass;
struct IUriRuntimeClassFactory;
struct IUriRuntimeClassWithAbsoluteCanonicalUri;
struct IWwwFormUrlDecoderEntry;
struct IWwwFormUrlDecoderRuntimeClass;
struct IWwwFormUrlDecoderRuntimeClassFactory;
struct Deferral;
struct MemoryBuffer;
struct PropertyValue;
struct Uri;
struct WwwFormUrlDecoder;
struct WwwFormUrlDecoderEntry;

}

namespace Windows::Foundation {

enum class PropertyType
{
    Empty = 0,
    UInt8 = 1,
    Int16 = 2,
    UInt16 = 3,
    Int32 = 4,
    UInt32 = 5,
    Int64 = 6,
    UInt64 = 7,
    Single = 8,
    Double = 9,
    Char16 = 10,
    Boolean = 11,
    String = 12,
    Inspectable = 13,
    DateTime = 14,
    TimeSpan = 15,
    Guid = 16,
    Point = 17,
    Size = 18,
    Rect = 19,
    OtherType = 20,
    UInt8Array = 1025,
    Int16Array = 1026,
    UInt16Array = 1027,
    Int32Array = 1028,
    UInt32Array = 1029,
    Int64Array = 1030,
    UInt64Array = 1031,
    SingleArray = 1032,
    DoubleArray = 1033,
    Char16Array = 1034,
    BooleanArray = 1035,
    StringArray = 1036,
    InspectableArray = 1037,
    DateTimeArray = 1038,
    TimeSpanArray = 1039,
    GuidArray = 1040,
    PointArray = 1041,
    SizeArray = 1042,
    RectArray = 1043,
    OtherTypeArray = 1044,
};

}

}
