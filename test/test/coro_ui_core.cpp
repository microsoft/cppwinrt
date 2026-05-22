// Intentionally not using pch...
#include "catch.hpp"

// Only need winrt/Windows.UI.Core.h for resume_foreground CoreDispatcher support
#include "winrt/Windows.UI.Core.h"

using namespace winrt;
using namespace Windows::UI::Core;

namespace
{
#pragma warning(push)
#pragma warning(disable : 4324)
    fire_and_forget Async(CoreDispatcher queue, bool test)
    {
        if (test)
        {
            co_return;
        }

        co_await resume_foreground(queue);

        co_await queue;
    }
#pragma warning(pop)
}

TEST_CASE("coro_ui_core")
{
    Async(nullptr, true);
}
