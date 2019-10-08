#include "pch.h"
#include <activation.h>

TEST_CASE("get_activation_factory")
{
    // Compile-time test to ensure that get_activation_factory supports unprojected factory interfaces.

    auto factory = winrt::get_activation_factory<winrt::Windows::Foundation::Uri, ::IActivationFactory>();

    REQUIRE(factory);
}
