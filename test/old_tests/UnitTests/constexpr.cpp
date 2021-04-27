#include "pch.h"
#include "catch.hpp"
#include "string_view_compare.h"

#pragma warning(disable:4471) // a forward declaration of an unscoped enumeration must have an underlying type
#include <Windows.Applicationmodel.Activation.h>

using namespace std::string_view_literals;

namespace winrt
{
    using namespace Windows::Foundation;
    using namespace Windows::Foundation::Collections;
}

namespace midl
{
    using namespace ABI::Windows::Foundation;
    using namespace ABI::Windows::Foundation::Collections;
}

// These really should be static_assert but due to VC bugs we currently have to run them as runtime asserts.
// These assertions just provide a degree of smoke testing against the MIDL-generated constants.

using winrt_container = winrt::IMapView<winrt::hstring, winrt::IInspectable>;
using midl_container = midl::IMapView<HSTRING, ::IInspectable*>;

void check_terminated(winrt::param::hstring const&)
{
}

TEST_CASE("constexpr")
{
    REQUIRE(winrt::guid_of<winrt::IUnknown>() == winrt::guid(__uuidof(::IUnknown)));
    REQUIRE(winrt::guid_of<winrt::IInspectable>() == winrt::guid(__uuidof(::IInspectable)));
    REQUIRE(winrt::guid_of<winrt_container>() == winrt::guid(__uuidof(midl_container)));
    REQUIRE(winrt::name_of<winrt::IInspectable>() == L"Object"sv);
    REQUIRE(winrt::name_of<winrt::IAsyncOperation<winrt::IInspectable>>() == L"Windows.Foundation.IAsyncOperation`1<Object>"sv);

    REQUIRE(winrt::name_of<winrt_container>() == midl_container::z_get_rc_name_impl());

    constexpr auto name = winrt::name_of<winrt::guid>();
    REQUIRE(name == L"Guid");

    check_terminated(winrt::name_of<winrt::IInspectable>());
    check_terminated(winrt::name_of<winrt::IActivationFactory>());
    check_terminated(winrt::name_of<winrt::IIterable<int>>());
    check_terminated(winrt::name_of<winrt::IAsyncOperation<winrt::IIterable<winrt::IKeyValuePair<winrt::hstring, winrt::IVector<int>>>>>());
}
