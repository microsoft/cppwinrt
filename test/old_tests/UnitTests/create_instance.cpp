#include "pch.h"
#include "catch.hpp"
#include <shobjidl.h>

using namespace winrt;

TEST_CASE("create_instance")
{
    com_ptr<IFileOpenDialog> dialog = create_instance<IFileOpenDialog>(guid_of<FileOpenDialog>());
    REQUIRE(dialog);
}
