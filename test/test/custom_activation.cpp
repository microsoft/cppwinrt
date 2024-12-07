#include "winrt/Windows.Foundation.Numerics.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    struct custom_factory : implements<custom_factory, IUriRuntimeClassFactory>
    {
        inline static Uri mock_uri{ nullptr };

        Uri CreateUri(hstring const& value) const
        {
            REQUIRE(value == L"http://ignored.com");
            return mock_uri;
        }

        Uri CreateWithRelativeUri(hstring const&, hstring const&) const
        {
            throw hresult_not_implemented();
        }
    };

    int32_t __stdcall handler(void* classId, winrt::guid const& iid, void** factory) noexcept
    {
        bool expected = reinterpret_cast<hstring const&>(classId) == L"Windows.Foundation.Uri";
        REQUIRE(expected);
        REQUIRE(iid == guid_of<IUriRuntimeClassFactory>());

        *factory = detach_abi(make<custom_factory>());
        return 0;
    }
} // namespace

TEST_CASE("custom_activation")
{
    custom_factory::mock_uri = Uri(L"http://actual.com");
    clear_factory_cache();

    // Set up global handler
    REQUIRE(!winrt_activation_handler);
    winrt_activation_handler = handler;

    // Windows.Foundation.Uri activation factory now returns mock object
    auto uri = Uri(L"http://ignored.com");
    REQUIRE(uri.Domain() == L"actual.com");

    // Remove global handler
    winrt_activation_handler = nullptr;
    clear_factory_cache();
}
