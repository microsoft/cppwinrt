#include "pch.h"
#include "catch.hpp"

// Ensures that Windows.Foundation's Point, Rect, and Size and constexpr.

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    constexpr Point p1{};
    constexpr Point p2{ 1,2 };

    constexpr Size s1{};
    constexpr Size s2{ 3,4 };

    constexpr Rect r1{};
    constexpr Rect r2{ 10,20,30,40 };
    constexpr Rect r3{ p2, s2 };
}

static_assert(p1.X == 0);
static_assert(p1.Y == 0);

static_assert(p2.X == 1);
static_assert(p2.Y == 2);

static_assert(s1.Width == 0);
static_assert(s1.Height == 0);

static_assert(s2.Width == 3);
static_assert(s2.Height == 4);

static_assert(r1.X == 0);
static_assert(r1.Y == 0);
static_assert(r1.Width == 0);
static_assert(r1.Height == 0);

static_assert(r2.X == 10);
static_assert(r2.Y == 20);
static_assert(r2.Width == 30);
static_assert(r2.Height == 40);

static_assert(r3.X == 1);
static_assert(r3.Y == 2);
static_assert(r3.Width == 3);
static_assert(r3.Height == 4);

static_assert(p2 == Point{ 1,2 });
static_assert(p1 != p2);

static_assert(s2 == Size{ 3,4 });
static_assert(s1 != s2);

static_assert(r2 == Rect{ 10,20,30,40 });
static_assert(r2 != r3);
