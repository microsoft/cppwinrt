#include "pch.h"
#include "catch.hpp"
#include "winrt/Component.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Web::Syndication;

TEST_CASE("get_activation_factory")
{
    // Calling get_activation_factory without a template parameter
    {
        IActivationFactory factory = get_activation_factory(L"Windows.Web.Syndication.SyndicationClient");
        SyndicationClient client = factory.ActivateInstance<SyndicationClient>();
        REQUIRE(client != nullptr);
    }

    // Calling get_activation_factory with a template parameter
    {
        IUriRuntimeClassFactory factory = get_activation_factory<IUriRuntimeClassFactory>(L"Windows.Foundation.Uri");
        Uri uri = factory.CreateUri(L"http://moderncpp.com/");
        REQUIRE(uri.Domain() == L"moderncpp.com");
    }

    // Calling get_activation_factory with an invalid class name
    try
    {
        get_activation_factory(L"Composable.DoesNotExist");
        REQUIRE(false);
    }
    catch (hresult_class_not_available const& e)
    {
        REQUIRE(e.message() == L"Composable.DoesNotExist");
    }
}

TEST_CASE("try_get_activation_factory")
{
    // Used to test whether the IRestrictedErrorInfo was left on the thread
    auto get_error_info = []
    {
        com_ptr<impl::IRestrictedErrorInfo> info;
        WINRT_GetRestrictedErrorInfo(info.put_void());
        return info;
    };

    // Try successfully
    {
        auto factory = try_get_activation_factory<Component::Errors>();
        REQUIRE(factory != nullptr);
        REQUIRE(get_error_info() == nullptr);
    }

    // Try unsuccessfully
    {
        auto factory = try_get_activation_factory<Component::IErrors>();
        REQUIRE(factory == nullptr);
        REQUIRE(get_error_info() == nullptr);
    }

    // Try successfully with error info
    {
        hresult_error e;
        auto factory = try_get_activation_factory<Component::Errors>(e);
        REQUIRE(factory != nullptr);
        REQUIRE(get_error_info() == nullptr);
    }

    // Try unsuccessfully with error info
    {
        hresult_error e;
        auto factory = try_get_activation_factory<Component::IErrors>(e);
        REQUIRE(factory == nullptr);
        REQUIRE(get_error_info() == nullptr);
        REQUIRE(e.code() == CLASS_E_CLASSNOTAVAILABLE);
    }
}
