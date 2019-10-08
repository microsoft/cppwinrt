#include "pch.h"
#include "catch.hpp"

using namespace winrt;

TEST_CASE("slim_mutex coverage")
{
    slim_mutex m;
    m.lock();
    m.unlock();

    m.lock_shared();
    m.unlock_shared();

    REQUIRE(m.try_lock());
    m.unlock();

    REQUIRE(m.try_lock_shared());
    m.unlock_shared();
}
