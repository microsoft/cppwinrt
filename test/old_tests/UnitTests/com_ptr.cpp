#include "pch.h"
#include "catch.hpp"
#include <inspectable.h>

using namespace winrt;
using namespace Windows::Foundation;

struct Stringable : implements<Stringable, IStringable>
{
    hstring m_value;
    bool * m_destroyed = nullptr;

    Stringable(std::wstring_view value, bool * destroyed = nullptr) :
        m_value(value),
        m_destroyed(destroyed)
    {
        if (m_destroyed)
        {
            *m_destroyed = false;
        }
    }

    ~Stringable()
    {
        if (m_destroyed)
        {
            *m_destroyed = true;
        }
    }

    hstring ToString()
    {
        return m_value;
    }
};

//
// This test makes sure com_ptr works with ::IUnknown's virtual functions.
//
TEST_CASE("com_ptr, ::IUnknown")
{
    bool destroyed = true;

    IStringable stringable = make<Stringable>(L"Hello world!", &destroyed);

    REQUIRE(!destroyed);

    com_ptr<::IUnknown> a; // default ctor
    com_ptr<::IUnknown> b = nullptr; // nullptr_t ctor

    REQUIRE(S_OK == get_unknown(stringable)->QueryInterface(b.put())); // attach

    com_ptr<::IUnknown> c = b; // copy ctor, AddRef
    b = nullptr;

    com_ptr<::IUnknown> d = std::move(c); // move ctor
    c = std::move(d); // move assign
    d = c; // copy assign, AddRef

    stringable = c.as<IStringable>();

    c = nullptr;
    d = nullptr;

    REQUIRE(!destroyed);

    REQUIRE(L"Hello world!" == stringable.ToString());
    stringable = nullptr;

    REQUIRE(destroyed);
}

//
// Same as ::IUnknown above but using projection type deduction
//
TEST_CASE("com_ptr, Windows::Foundation::IUnknown")
{
    bool destroyed = true;

    IStringable stringable = make<Stringable>(L"Hello world!", &destroyed);

    REQUIRE(!destroyed);

    com_ptr<Windows::Foundation::IUnknown> a; // default ctor
    com_ptr<Windows::Foundation::IUnknown> b = nullptr; // nullptr_t ctor

    REQUIRE(S_OK == get_unknown(stringable)->QueryInterface(guid_of<Windows::Foundation::IUnknown>(), b.put_void())); // attach

    com_ptr<Windows::Foundation::IUnknown> c = b; // copy ctor, AddRef
    b = nullptr;

    com_ptr<Windows::Foundation::IUnknown> d = std::move(c); // move ctor
    c = std::move(d); // move assign
    d = c; // copy assign, AddRef

    stringable = c.as<IStringable>();

    c = nullptr;
    d = nullptr;

    REQUIRE(!destroyed);

    REQUIRE(L"Hello world!" == stringable.ToString());
    stringable = nullptr;

    REQUIRE(destroyed);
}

//
// Test using com_ptr for things that aren't COM pointers.
// com_ptr is duck-typed, so anything that has the required
// methods will work.
//
TEST_CASE("com_ptr,duck typing")
{
    // Absolute minimum requirement is that it supports Release
    // as a method. Does not need to be a virtual method.
    // Does not have to actually release anything.
    struct CanRelease
    {
        bool releaseCalled = false;
        void Release() { releaseCalled = true; }
    } canRelease;
    com_ptr<CanRelease>{ &canRelease, take_ownership_from_abi };
    REQUIRE(canRelease.releaseCalled);

    // To be copyable, it also needs AddRef as a method.
    // Again, doesn't need to be virtual or actually do anything.
    struct CanAddRef : CanRelease
    {
        bool addrefCalled = false;
        void AddRef() { addrefCalled = true; }
    } canAddRef;
    com_ptr<CanAddRef> addrefTest{ &canAddRef, take_ownership_from_abi };
    auto copy = addrefTest;
    REQUIRE(canAddRef.addrefCalled);

    // To support as(), try_as(), it also needs QueryInterface
    // as a method. Doesn't need to be virtual, but does need
    // to follow QI semantics.
    struct CanQI : CanAddRef
    {
        bool qiCalled = false;
        int32_t QueryInterface(guid const&, void** result)
        {
            qiCalled = true;
            *result = nullptr;
            return E_NOINTERFACE;
        }
    } canQI;
    com_ptr<CanQI> qiTest{ &canQI, take_ownership_from_abi };
    REQUIRE_THROWS_AS(qiTest.as<int>(), hresult_no_interface);
    REQUIRE(canQI.qiCalled);
    canQI.qiCalled = false;
    REQUIRE(qiTest.try_as<IAsyncInfo>() == nullptr);
    REQUIRE(canQI.qiCalled);
}

//
// Test the convertible constructor and convertible assignment.
//
TEST_CASE("convertible")
{
    bool destroyed = true;

    IStringable stringable = make<Stringable>(L"Hello world!", &destroyed).as<IStringable>();

    Windows::Foundation::IUnknown a = stringable; // convertible copy ctor

    REQUIRE(a);

    Windows::Foundation::IUnknown b = std::move(stringable); // convertible move ctor

    REQUIRE(b);
    REQUIRE(!stringable);

    stringable = b.as<IStringable>();

    a = nullptr;
    b = nullptr;

    a = stringable; // convertible copy assign
    b = std::move(stringable); // convertible move assign

    REQUIRE(a);
    REQUIRE(b);
    REQUIRE(!stringable);

    REQUIRE(!destroyed);

    a = nullptr;
    b = nullptr;

    REQUIRE(destroyed);
}

//
// Tests the validity of accessor functions when used with com_ptr
//
TEST_CASE("com_ptr, accessors")
{
    bool destroyed = true;

    IStringable a = make<Stringable>(L"Hello world!", &destroyed).as<IStringable>();

    REQUIRE(!destroyed);

    com_ptr<::IUnknown> b;
    b.copy_from(get_unknown(a)); // get
    REQUIRE(a);

    com_ptr<::IUnknown> c;
    b->QueryInterface(c.put()); // put
    REQUIRE(c);

    b = nullptr;
    c = nullptr;

    attach_abi(b, static_cast<::IUnknown*>(detach_abi(a)));

    REQUIRE(!a);
    REQUIRE(b);
    REQUIRE(!c);

    attach_abi(c, detach_abi(b));

    REQUIRE(!a);
    REQUIRE(!b);
    REQUIRE(c);

    REQUIRE(!destroyed);

    c = nullptr;

    REQUIRE(destroyed);
}

//
// No runtime behaviour, merely testing the existence of the default and nullptr_t constructors.
//
TEST_CASE("com_ptr, nullptr")
{
    com_ptr<::IUnknown> a;
    com_ptr<::IUnknown> b = nullptr;
    b = nullptr;
}

static com_ptr<::IUnknown> test_make_unknown()
{
    IStringable s = make<Stringable>(L"Hello world!");

    com_ptr<::IUnknown> result;
    REQUIRE(S_OK == get_unknown(s)->QueryInterface(result.put()));
    return result;
}

TEST_CASE("com_ptr, copy ctor assign")
{
    com_ptr<::IUnknown> a = test_make_unknown();
    com_ptr<::IUnknown> b = a; // copy ctor

    REQUIRE(a == b);
    REQUIRE(get_abi(a) == get_abi(b));

    b = nullptr;
    REQUIRE(a != b);

    b = a; // copy assign

    REQUIRE(a == b);
    REQUIRE(get_abi(a) == get_abi(b));
}

TEST_CASE("com_ptr, move ctor assign")
{
    com_ptr<::IUnknown> a = test_make_unknown();
    com_ptr<::IUnknown> b = std::move(a); // move ctor

    REQUIRE(a != b);
    REQUIRE(!a);
    REQUIRE(b);

    a = std::move(b); // move assign

    REQUIRE(a != b);
    REQUIRE(a);
    REQUIRE(!b);
}

static com_ptr<::IInspectable> test_make_inspectable()
{
    IStringable s = make<Stringable>(L"Hello world!");

    com_ptr<::IInspectable> result;
    REQUIRE(S_OK == get_unknown(s)->QueryInterface(result.put()));
    return result;
}

TEST_CASE("com_ptr, convertible copy ctor assign")
{
    com_ptr<::IInspectable> a = test_make_inspectable();
    REQUIRE(a);
    
    com_ptr<::IUnknown> b = a; // convertible copy ctor
    REQUIRE(b);

    b = nullptr;
    b = a; // convertible copy assign
    REQUIRE(a);
}

TEST_CASE("com_ptr, convertible move ctor assign")
{
    com_ptr<::IInspectable> a = test_make_inspectable();

    com_ptr<::IUnknown> b = std::move(a); // convertible move ctor

    REQUIRE(!a);
    REQUIRE(b);

    b = nullptr;

    b = test_make_inspectable(); // convertible move assign
    REQUIRE(b);
}

TEST_CASE("com_ptr, swap")
{
    com_ptr<::IInspectable> a = test_make_inspectable();
    com_ptr<::IInspectable> b = test_make_inspectable();

    REQUIRE(a);
    REQUIRE(b);
    REQUIRE(a != b);

    ::IInspectable * ga = get_abi(a);
    ::IInspectable * gb = get_abi(b);

    swap(a, b);

    REQUIRE(a);
    REQUIRE(b);
    REQUIRE(a != b);

    REQUIRE(gb == get_abi(a));
    REQUIRE(ga == get_abi(b));
}

TEST_CASE("com_ptr, compare")
{
    com_ptr<::IInspectable> a = test_make_inspectable();
    com_ptr<::IInspectable> b = test_make_inspectable();
    com_ptr<::IInspectable> c = nullptr;

    if (a > b)
    {
        swap(a, b);
    }

    REQUIRE(!(a == b));
    REQUIRE(a != b);

    REQUIRE(a < b);
    REQUIRE(!(b < a));

    REQUIRE(b > a);
    REQUIRE(!(a > b));

    REQUIRE(a <= b);
    REQUIRE(!(b <= a));

    REQUIRE(b >= a);
    REQUIRE(!(a >= b));

    // Test ==/!= nullptr overloads
    REQUIRE(nullptr == c);
    REQUIRE(c == nullptr);

    REQUIRE(!(nullptr == a));
    REQUIRE(!(a == nullptr));

    REQUIRE(nullptr != a);
    REQUIRE(a != nullptr);

    REQUIRE(!(nullptr != c));
    REQUIRE(!(c != nullptr));
}

TEST_CASE("com_ptr, nested types")
{
    struct Nested : implements<Nested, Windows::Foundation::IInspectable>
    {
        bool * m_destroyed = nullptr;
        com_ptr<Nested> m_child;

        Nested(bool * destroyed = nullptr) :
            m_destroyed(destroyed)
        {
            if (m_destroyed)
            {
                *m_destroyed = false;
            }
        }
        ~Nested()
        {
            if (m_destroyed)
            {
                *m_destroyed = true;
            }
        }
    };
    bool rootDestroyed = true;
    com_ptr<Nested> root = make_self<Nested>(&rootDestroyed);
    bool childDestroyed = true;
    root->m_child = make_self<Nested>(&childDestroyed);
    bool childChildDestroyed = true;
    root->m_child->m_child = make_self<Nested>(&childChildDestroyed);

    // assign child to root should only destroy root not its children
    root = root->m_child;

    REQUIRE(root);
    REQUIRE(root->m_child);
    REQUIRE(rootDestroyed);
    REQUIRE(!childDestroyed);
    REQUIRE(!childChildDestroyed);

    // keep m_child to see if it is falsely destroyed by copy_from
    root.copy_from(root->m_child.get());

    REQUIRE(root);
    REQUIRE(childDestroyed);
    REQUIRE(!childChildDestroyed);
    
    root = nullptr;
    
    REQUIRE(childChildDestroyed);
}