#include "pch.h"

// Validate that pre-computed pinterface_guid specializations:
// 1. Have the precomputed flag set to true
// 2. Produce GUID values matching the algorithmic SHA-1 computation
//
// Tests cover both code-generated IReference/IReferenceArray
// specializations injected via add_well_known_ireference_instantiations into
// the generated Windows.Foundation.0.h output and other code-generated
// specializations discovered from Windows SDK metadata (IMap, IIterable,
// TypedEventHandler, etc.).

using namespace winrt;
using namespace winrt::impl;
using namespace winrt::Windows::Foundation;
using namespace winrt::Windows::Foundation::Collections;

namespace
{
    constexpr bool equal(guid const& left, guid const& right) noexcept
    {
        return left.Data1 == right.Data1 &&
            left.Data2 == right.Data2 &&
            left.Data3 == right.Data3 &&
            left.Data4[0] == right.Data4[0] &&
            left.Data4[1] == right.Data4[1] &&
            left.Data4[2] == right.Data4[2] &&
            left.Data4[3] == right.Data4[3] &&
            left.Data4[4] == right.Data4[4] &&
            left.Data4[5] == right.Data4[5] &&
            left.Data4[6] == right.Data4[6] &&
            left.Data4[7] == right.Data4[7];
    }
}

// Verify the specialization is marked precomputed and its value matches the
// SHA-1 computation (generate_guid + signature<T>::data), which is the
// algorithm the primary template would use.
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable: 4307) // integral constant overflow from SHA-1
#endif

#define REQUIRE_PRECOMPUTED(...) \
    STATIC_REQUIRE(pinterface_guid<__VA_ARGS__>::precomputed); \
    STATIC_REQUIRE(equal(pinterface_guid<__VA_ARGS__>::value, generate_guid(signature<__VA_ARGS__>::data)))

TEST_CASE("pinterface_guid_precomputed_ireference")
{
    REQUIRE_PRECOMPUTED(IReference<uint8_t>);
    REQUIRE_PRECOMPUTED(IReference<int16_t>);
    REQUIRE_PRECOMPUTED(IReference<uint16_t>);
    REQUIRE_PRECOMPUTED(IReference<int32_t>);
    REQUIRE_PRECOMPUTED(IReference<uint32_t>);
    REQUIRE_PRECOMPUTED(IReference<int64_t>);
    REQUIRE_PRECOMPUTED(IReference<uint64_t>);
    REQUIRE_PRECOMPUTED(IReference<float>);
    REQUIRE_PRECOMPUTED(IReference<double>);
    REQUIRE_PRECOMPUTED(IReference<char16_t>);
    REQUIRE_PRECOMPUTED(IReference<bool>);
    REQUIRE_PRECOMPUTED(IReference<hstring>);
    REQUIRE_PRECOMPUTED(IReference<guid>);
    REQUIRE_PRECOMPUTED(IReference<DateTime>);
    REQUIRE_PRECOMPUTED(IReference<TimeSpan>);
    REQUIRE_PRECOMPUTED(IReference<Point>);
    REQUIRE_PRECOMPUTED(IReference<Size>);
    REQUIRE_PRECOMPUTED(IReference<Rect>);
}

TEST_CASE("pinterface_guid_precomputed_ireferencearray")
{
    REQUIRE_PRECOMPUTED(IReferenceArray<uint8_t>);
    REQUIRE_PRECOMPUTED(IReferenceArray<int16_t>);
    REQUIRE_PRECOMPUTED(IReferenceArray<uint16_t>);
    REQUIRE_PRECOMPUTED(IReferenceArray<int32_t>);
    REQUIRE_PRECOMPUTED(IReferenceArray<uint32_t>);
    REQUIRE_PRECOMPUTED(IReferenceArray<int64_t>);
    REQUIRE_PRECOMPUTED(IReferenceArray<uint64_t>);
    REQUIRE_PRECOMPUTED(IReferenceArray<float>);
    REQUIRE_PRECOMPUTED(IReferenceArray<double>);
    REQUIRE_PRECOMPUTED(IReferenceArray<char16_t>);
    REQUIRE_PRECOMPUTED(IReferenceArray<bool>);
    REQUIRE_PRECOMPUTED(IReferenceArray<hstring>);
    REQUIRE_PRECOMPUTED(IReferenceArray<IInspectable>);
    REQUIRE_PRECOMPUTED(IReferenceArray<guid>);
    REQUIRE_PRECOMPUTED(IReferenceArray<DateTime>);
    REQUIRE_PRECOMPUTED(IReferenceArray<TimeSpan>);
    REQUIRE_PRECOMPUTED(IReferenceArray<Point>);
    REQUIRE_PRECOMPUTED(IReferenceArray<Size>);
    REQUIRE_PRECOMPUTED(IReferenceArray<Rect>);
}

TEST_CASE("pinterface_guid_precomputed_from_metadata")
{
    // These specializations are discovered from metadata: closed generic types
    // that appear as method parameters, return types, or implemented interfaces
    // in the Windows SDK. The IPropertyValue family uses IMap/IIterable/IKeyValuePair
    // with <hstring, IInspectable> and <hstring, hstring>.

    // IMap / IMapView chains (used by PropertySet, ValueSet, etc.)
    REQUIRE_PRECOMPUTED(IMap<hstring, IInspectable>);
    REQUIRE_PRECOMPUTED(IMap<hstring, hstring>);
    REQUIRE_PRECOMPUTED(IMapView<hstring, IInspectable>);
    REQUIRE_PRECOMPUTED(IMapView<hstring, hstring>);
    REQUIRE_PRECOMPUTED(IKeyValuePair<hstring, IInspectable>);
    REQUIRE_PRECOMPUTED(IKeyValuePair<hstring, hstring>);

    // IIterable / IIterator over key-value pairs
    REQUIRE_PRECOMPUTED(IIterable<IKeyValuePair<hstring, IInspectable>>);
    REQUIRE_PRECOMPUTED(IIterable<IKeyValuePair<hstring, hstring>>);
    REQUIRE_PRECOMPUTED(IIterator<IKeyValuePair<hstring, IInspectable>>);
    REQUIRE_PRECOMPUTED(IIterator<IKeyValuePair<hstring, hstring>>);

    // IObservableMap and change handlers
    REQUIRE_PRECOMPUTED(IObservableMap<hstring, IInspectable>);
    REQUIRE_PRECOMPUTED(IObservableMap<hstring, hstring>);
    REQUIRE_PRECOMPUTED(IMapChangedEventArgs<hstring>);
    REQUIRE_PRECOMPUTED(MapChangedEventHandler<hstring, IInspectable>);
    REQUIRE_PRECOMPUTED(MapChangedEventHandler<hstring, hstring>);

    // TypedEventHandler from Windows.Foundation (e.g. IMemoryBufferReference.Closed)
    REQUIRE_PRECOMPUTED(TypedEventHandler<IMemoryBufferReference, IInspectable>);

    // WwwFormUrlDecoder collections
    REQUIRE_PRECOMPUTED(IIterable<IWwwFormUrlDecoderEntry>);
    REQUIRE_PRECOMPUTED(IIterator<IWwwFormUrlDecoderEntry>);
    REQUIRE_PRECOMPUTED(IVectorView<IWwwFormUrlDecoderEntry>);
}

#undef REQUIRE_PRECOMPUTED

#ifdef _MSC_VER
#pragma warning(pop)
#endif
