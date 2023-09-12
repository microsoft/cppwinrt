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

        try
        {
            return make<custom_factory>().as(iid, factory);
        }
        catch (...)
        {
            *factory = nullptr;
            return winrt::to_hresult();
        }
    }

    void check_custom_factory_activation(std::wstring_view required_domain)
    {
        auto uri = Uri(L"http://ignored.com");
        REQUIRE(uri.Domain() == required_domain);
    }
}

TEST_CASE("custom_activation")
{
    custom_factory::mock_uri = Uri(L"http://actual.com");
    const auto mock_domain = custom_factory::mock_uri.Domain();
    clear_factory_cache();

    // Set up global handler
    REQUIRE(!winrt_activation_handler);
    winrt_activation_handler = handler;

    // Windows.Foundation.Uri activation factory now returns mock object
    check_custom_factory_activation(mock_domain);

    // Remove global handler
    winrt_activation_handler = nullptr;
    clear_factory_cache();
}

// An activation handler that can only deal with Windows.Foundation.Uri.
bool invoked_unimplemented = false;
bool __stdcall uri_only_activation_handler(void* classId, winrt::guid const& iid, void** factory, int32_t* hr) noexcept
{
    using namespace std::literals::string_view_literals;

    std::wstring_view const name{ *reinterpret_cast<winrt::hstring*>(&classId) };
    // custom_factory is only interested in Windows.Foundation.Uri
    if (name == L"Windows.Foundation.Uri"sv) {
        try
        {
            *hr = make<custom_factory>().as(iid, factory);
            return true;
        }
        catch (...)
        {
            *hr = winrt::to_hresult();
            *factory = nullptr;
            return false;
        }
    }

    invoked_unimplemented = true;
    // to be explicit.
    *factory = nullptr;
    *hr = 0;
    return false;
}

TEST_CASE("partial_custom_activation")
{
    // Set up global handler
    REQUIRE(!winrt_activation_handler);
    REQUIRE(!try_winrt_activation_handler);
    custom_factory::mock_uri = Uri(L"http://actual.com");
    const auto mock_domain = custom_factory::mock_uri.Domain();
    clear_factory_cache();
    try_winrt_activation_handler = uri_only_activation_handler;
    REQUIRE(!invoked_unimplemented);

    // Activates something the handler cannot deal with. It shouldn't crash and the decoder should behave normally.
    WwwFormUrlDecoder decoder{ L"uname=c&passwd=d" };
    REQUIRE(invoked_unimplemented);
    REQUIRE(decoder.GetFirstValueByName(L"uname") == L"c");
    REQUIRE(decoder.GetFirstValueByName(L"passwd") == L"d");

    // Windows.Foundation.Uri activation factory now returns mock object
    check_custom_factory_activation(mock_domain);

    // Remove global handler
    try_winrt_activation_handler = nullptr;
    clear_factory_cache();
}
