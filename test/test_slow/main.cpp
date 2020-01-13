#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "winrt/base.h"

using namespace winrt;

int main(int const argc, char** argv)
{
    init_apartment();
    return Catch::Session().run(argc, argv);
}

CATCH_TRANSLATE_EXCEPTION(hresult_error const& e)
{
    return to_string(e.message());
}
