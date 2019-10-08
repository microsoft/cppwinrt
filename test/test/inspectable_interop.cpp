#include <inspectable.h>
#include "winrt/Windows.Foundation.h"
#include "catch.hpp"

using namespace winrt;

namespace
{
    struct __declspec(uuid("ed0dd761-c31e-4803-8cf9-22a2cb20ec47")) IBadInterop : ::IInspectable
    {
        virtual int32_t __stdcall JustSayNo() noexcept = 0;
    };

    struct Sample : implements<Sample, Windows::Foundation::IActivationFactory, IBadInterop>
    {
        Windows::Foundation::IInspectable ActivateInstance()
        {
            throw hresult_not_implemented();
        }

        hstring GetRuntimeClassName()
        {
            return L"Sample";
        }

        Windows::Foundation::TrustLevel GetTrustLevel()
        {
            return Windows::Foundation::TrustLevel::PartialTrust;
        }

        int32_t __stdcall JustSayNo() noexcept final
        {
            return 123;
        }
    };
}

TEST_CASE("inspectable_interop")
{
    Windows::Foundation::IActivationFactory a = make<Sample>();
    REQUIRE(a != nullptr);

    Windows::Foundation::IActivationFactory b = a.as<Windows::Foundation::IActivationFactory>();
    REQUIRE(b != nullptr);

    com_ptr<IBadInterop> c = a.as<IBadInterop>();
    REQUIRE(c != nullptr);
    REQUIRE(c->JustSayNo() == 123);

    Windows::Foundation::IActivationFactory d = c.as<Windows::Foundation::IActivationFactory>();
    REQUIRE(a == d);

    Windows::Foundation::IInspectable f = c.as<Windows::Foundation::IInspectable>();
    REQUIRE(f != nullptr);

    Windows::Foundation::IInspectable e(c.detach(), take_ownership_from_abi);

    REQUIRE(winrt::get_class_name(e) == L"Sample");
    REQUIRE(winrt::get_trust_level(e) == Windows::Foundation::TrustLevel::PartialTrust);

    auto interfaces = winrt::get_interfaces(e);
    REQUIRE(interfaces.size() == 1);
    REQUIRE(interfaces[0] == guid_of<Windows::Foundation::IActivationFactory>());
}
