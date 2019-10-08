//
// Note that WINRT_LEAN_AND_MEAN is not defined for these tests.
//

// Windows.Foundation is intentionally *not* included here to ensure that stable names/guids
// are generated with only the xxx.0.h header. This ensures that indirect declarations produce
// stable identity values.
#include "winrt/Windows.Storage.h"

#include "catch.hpp"
#include "generic_types.h"

TEST_CASE("generic_type_names")
{
    using A = IIterable<IStringable>;
    using B = IKeyValuePair<hstring, IAsyncOperationWithProgress<A, float>>;

    test_guids();

    //
    // Generated Windows.Foundation names
    //

    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IStringable",
        IStringable);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IAsyncActionWithProgress`1<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>>",
        IAsyncActionWithProgress<A>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>, Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>, Single>>>",
        IAsyncOperationWithProgress<A, B>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>>",
        IAsyncOperation<A>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReferenceArray`1<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>>",
        IReferenceArray<A>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>>",
        IReference<A>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.AsyncActionProgressHandler`1<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>>",
        AsyncActionProgressHandler<A>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.AsyncActionWithProgressCompletedHandler`1<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>>",
        AsyncActionWithProgressCompletedHandler<A>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>>",
        AsyncOperationCompletedHandler<A>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>, Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>, Single>>>",
        AsyncOperationProgressHandler<A, B>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>, Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>, Single>>>",
        AsyncOperationWithProgressCompletedHandler<A, B>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.EventHandler`1<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>>",
        EventHandler<A>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.TypedEventHandler`2<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>, Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>, Single>>>",
        TypedEventHandler<A, B>);

    //
    // Generated Windows.Foundation.Collections names
    //

    REQUIRE_EQUAL_NAME(L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>>",
        IIterable<A>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>>",
        IIterator<A>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.Collections.IKeyValuePair`2<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>, Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>, Single>>>",
        IKeyValuePair<A, B>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.Collections.IMapChangedEventArgs`1<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>>",
        IMapChangedEventArgs<A>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.Collections.IMapView`2<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>, Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>, Single>>>",
        IMapView<A, B>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.Collections.IMap`2<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>, Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>, Single>>>",
        IMap<A, B>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.Collections.IObservableMap`2<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>, Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>, Single>>>",
        IObservableMap<A, B>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.Collections.IObservableVector`1<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>>",
        IObservableVector<A>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>>",
        IVectorView<A>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.Collections.IVector`1<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>>",
        IVector<A>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.Collections.MapChangedEventHandler`2<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>, Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>, Single>>>",
        MapChangedEventHandler<A, B>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.Collections.VectorChangedEventHandler`1<Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IStringable>>",
        VectorChangedEventHandler<A>);

    //
    // Generated primitive names
    //

    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Boolean>",
        IReference<bool>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Int8>",
        IReference<int8_t>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Int16>",
        IReference<int16_t>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Int32>",
        IReference<int32_t>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Int64>",
        IReference<int64_t>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<UInt8>",
        IReference<uint8_t>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<UInt16>",
        IReference<uint16_t>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<UInt32>",
        IReference<uint32_t>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<UInt64>",
        IReference<uint64_t>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Single>",
        IReference<float>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Double>",
        IReference<double>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Char16>",
        IReference<char16_t>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Guid>",
        IReference<guid>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Windows.Foundation.HResult>",
        IReference<hresult>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<String>",
        IReference<hstring>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Windows.Foundation.EventRegistrationToken>",
        IReference<event_token>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Windows.Foundation.TimeSpan>",
        IReference<TimeSpan>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Windows.Foundation.DateTime>",
        IReference<DateTime>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Windows.Foundation.Point>",
        IReference<Point>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Windows.Foundation.Rect>",
        IReference<Rect>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Windows.Foundation.Size>",
        IReference<Size>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Vector2>",
        IReference<float2>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Vector3>",
        IReference<float3>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Vector4>",
        IReference<float4>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Matrix3x2>",
        IReference<float3x2>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Matrix4x4>",
        IReference<float4x4>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Quaternion>",
        IReference<quaternion>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Plane>",
        IReference<plane>);

    // Enums, structs, IInspectable, classes, and delegates

    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Windows.Foundation.PropertyType>",
        IReference<PropertyType>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IReference`1<Windows.Foundation.Point>",
        IReference<Point>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.Collections.IVector`1<Object>",
        IVector<IInspectable>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.Collections.IVector`1<Windows.Foundation.Uri>",
        IVector<Uri>);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.Collections.IVector`1<Windows.Foundation.AsyncActionCompletedHandler>",
        IVector<AsyncActionCompletedHandler>);
}
