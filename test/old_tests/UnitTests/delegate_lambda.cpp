#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows;
using namespace Windows::Graphics::Display;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml::Controls;

//
// These tests ensure that both the base library delegates as well as the generated delegates support
// generalized lambda capture. This mainly means that you must be able to produce a delegate from a
// lambda that captures a move-only variable.
//
// These tests thus each produce a delegate from a move-only lambda. They further confirm that the
// delegate may be called thus ensuring that all code paths have been properly instantiated in C++.
//

struct Movable
{
    Movable(Movable const &) = delete;
    Movable & operator=(Movable const &) = delete;

    int Value = 0;

    Movable(int value) :
        Value(value)
    {
    }

    Movable(Movable && other) :
        Value(other.Value)
    {
        other.Value = 0;
    }

    Movable & operator=(Movable && other)
    {
        Value = other.Value;
        other.Value = 0;
        return *this;
    }
};

static_assert(!std::is_copy_constructible<Movable>::value, "fail");
static_assert(std::is_move_constructible<Movable>::value, "fail");

TEST_CASE("delegate,lambda,AsyncActionCompletedHandler")
{
    Movable movable = 1;

    AsyncActionCompletedHandler h = [capture = std::move(movable)](auto && ...)
    {
        REQUIRE(capture.Value == 1);
    };

    h(nullptr, AsyncStatus::Completed);

    REQUIRE(movable.Value == 0);
}

TEST_CASE("delegate,lambda,AsyncActionProgressHandler")
{
    Movable movable = 1;

    AsyncActionProgressHandler<double> h = [capture = std::move(movable)](auto && ...)
    {
        REQUIRE(capture.Value == 1);
    };

    h(nullptr, 123.0);

    REQUIRE(movable.Value == 0);
}

TEST_CASE("delegate,lambda,AsyncActionWithProgressCompletedHandler")
{
    Movable movable = 1;

    AsyncActionWithProgressCompletedHandler<double> h = [capture = std::move(movable)](auto && ...)
    {
        REQUIRE(capture.Value == 1);
    };

    h(nullptr, AsyncStatus::Completed);

    REQUIRE(movable.Value == 0);
}

TEST_CASE("delegate,lambda,AsyncOperationProgressHandler")
{
    Movable movable = 1;

    AsyncOperationProgressHandler<uint64_t, uint64_t> h = [capture = std::move(movable)](auto && ...)
    {
        REQUIRE(capture.Value == 1);
    };

    h(nullptr, 123);

    REQUIRE(movable.Value == 0);
}

TEST_CASE("delegate,lambda,AsyncOperationWithProgressCompletedHandler")
{
    Movable movable = 1;

    AsyncOperationWithProgressCompletedHandler<uint64_t, uint64_t> h = [capture = std::move(movable)](auto && ...)
    {
        REQUIRE(capture.Value == 1);
    };

    h(nullptr, AsyncStatus::Completed);

    REQUIRE(movable.Value == 0);
}

TEST_CASE("delegate,lambda,AsyncOperationCompletedHandler")
{
    Movable movable = 1;

    AsyncOperationCompletedHandler<bool> h = [capture = std::move(movable)](auto && ...)
    {
        REQUIRE(capture.Value == 1);
    };

    h(nullptr, AsyncStatus::Completed);

    REQUIRE(movable.Value == 0);
}

TEST_CASE("delegate,lambda,EventHandler")
{
    Movable movable = 1;

    EventHandler<Windows::Foundation::IInspectable> h = [capture = std::move(movable)](auto && ...)
    {
        REQUIRE(capture.Value == 1);
    };

    h(nullptr, nullptr);

    REQUIRE(movable.Value == 0);
}

TEST_CASE("delegate,lambda,TypedEventHandler")
{
    Movable movable = 1;

    TypedEventHandler<DisplayInformation, Windows::Foundation::IInspectable> h = [capture = std::move(movable)](auto && ...)
    {
        REQUIRE(capture.Value == 1);
    };

    h(nullptr, nullptr);

    REQUIRE(movable.Value == 0);
}

TEST_CASE("delegate,lambda,VectorChangedEventHandler")
{
    Movable movable = 1;

    VectorChangedEventHandler<Windows::Foundation::IInspectable> h = [capture = std::move(movable)](auto && ...)
    {
        REQUIRE(capture.Value == 1);
    };

    h(nullptr, nullptr);

    REQUIRE(movable.Value == 0);
}

TEST_CASE("delegate,lambda,MapChangedEventHandler")
{
    Movable movable = 1;

    MapChangedEventHandler<hstring, hstring> h = [capture = std::move(movable)](auto && ...)
    {
        REQUIRE(capture.Value == 1);
    };

    h(nullptr, nullptr);

    REQUIRE(movable.Value == 0);
}

TEST_CASE("delegate,lambda,ListViewItemToKeyHandler")
{
    Movable movable = 1;

    ListViewItemToKeyHandler h = [capture = std::move(movable)](auto && ...)
    {
        REQUIRE(capture.Value == 1);
        return L"value";
    };

    h(nullptr);

    REQUIRE(movable.Value == 0);
}
