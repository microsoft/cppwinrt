#include "pch.h"
#include "generic_types.h"

namespace
{
    // Projected interfaces and classes find their interface pointer through empty base classes that read it at their own
    // address, so they must be standard-layout and the size of a pointer. The generated headers check every runtime
    // class; generic interfaces are templates, so check some instantiations here.
    template <typename... T>
    constexpr bool has_projected_layout = ((std::is_standard_layout_v<T> && sizeof(T) == sizeof(void*)) && ...);

    static_assert(has_projected_layout<
        IIterable<int32_t>, IIterator<hstring>, IVector<IInspectable>, IVectorView<Uri>, IObservableVector<int32_t>,
        IMap<hstring, IInspectable>, IMapView<int32_t, hstring>, IObservableMap<hstring, int32_t>, IKeyValuePair<hstring, Uri>,
        IAsyncOperation<int32_t>, IAsyncOperationWithProgress<hstring, uint64_t>, IAsyncActionWithProgress<int32_t>, IReference<int32_t>>);
}

TEST_CASE("generic_types")
{
    test_guids();

    REQUIRE_EQUAL_NAME(L"Windows.Foundation.Uri", Uri);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.PropertyType", PropertyType);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.Point", Point);
    REQUIRE_EQUAL_NAME(L"Windows.Foundation.IStringable", IStringable);
}
