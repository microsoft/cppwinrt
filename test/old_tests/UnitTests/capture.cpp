#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;

struct DECLSPEC_UUID("5fb96f8d-409c-42a9-99a7-8a95c1459dbd") ICapture : ::IUnknown
{
    virtual int32_t __stdcall GetValue() noexcept = 0;
    virtual int32_t __stdcall CreateMemberCapture(int32_t value, GUID const& iid, void** object) noexcept = 0;
};

#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ICapture, 0x5fb96f8d, 0x409c, 0x42a9, 0x99, 0xa7, 0x8a, 0x95, 0xc1, 0x45, 0x9d, 0xbd)
#endif

struct Capture : implements<Capture, ICapture>
{
    int32_t const m_value{};

    Capture(int32_t value) :
        m_value{ value }
    {
    }

    int32_t __stdcall GetValue() noexcept override
    {
        return m_value;
    }

    int32_t __stdcall CreateMemberCapture(int32_t value, GUID const& iid, void** object) noexcept override
    {
        auto capture = make<Capture>(value);
        return capture->QueryInterface(iid, object);
    }
};

HRESULT __stdcall CreateCapture(int value, GUID const& iid, void** object) noexcept
{
    auto capture = make<Capture>(value);
    return capture->QueryInterface(iid, object);
}

TEST_CASE("capture")
{
    // Capture from global function.
    com_ptr<ICapture> a = capture<ICapture>(CreateCapture, 10);
    REQUIRE(a->GetValue() == 10);
    a = nullptr;
    a.capture(CreateCapture, 20);
    REQUIRE(a->GetValue() == 20);

    // Capture from com_ptr + method.
    auto b = capture<ICapture>(a, &ICapture::CreateMemberCapture, 30);
    REQUIRE(b->GetValue() == 30);
    b = nullptr;
    b.capture(a, &ICapture::CreateMemberCapture, 40);
    REQUIRE(b->GetValue() == 40);

    // Capture from raw pointer + method.
    b = nullptr;
    b = capture<ICapture>(a.get(), &ICapture::CreateMemberCapture, 30);
    REQUIRE(b->GetValue() == 30);
    b = nullptr;
    b.capture(a.get(), &ICapture::CreateMemberCapture, 40);
    REQUIRE(b->GetValue() == 40);

    com_ptr<IDispatch> d;

    REQUIRE_THROWS_AS(capture<IDispatch>(CreateCapture, 0), hresult_no_interface);
    REQUIRE_THROWS_AS(d.capture(CreateCapture, 0), hresult_no_interface);
    REQUIRE_THROWS_AS(capture<IDispatch>(a, &ICapture::CreateMemberCapture, 0), hresult_no_interface);
    REQUIRE_THROWS_AS(d.capture(a, &ICapture::CreateMemberCapture, 0), hresult_no_interface);
    REQUIRE_THROWS_AS(capture<IDispatch>(a.get(), &ICapture::CreateMemberCapture, 0), hresult_no_interface);
    REQUIRE_THROWS_AS(d.capture(a.get(), &ICapture::CreateMemberCapture, 0), hresult_no_interface);
}

TEST_CASE("try_capture")
{
    // Identical to the "capture" test above, just with different
    // error handling.

    // Capture from global function.
    com_ptr<ICapture> a = try_capture<ICapture>(CreateCapture, 10);
    REQUIRE(a->GetValue() == 10);
    a = nullptr;
    REQUIRE(a.try_capture(CreateCapture, 20));
    REQUIRE(a->GetValue() == 20);

    // Capture from com_ptr + method.
    auto b = try_capture<ICapture>(a, &ICapture::CreateMemberCapture, 30);
    REQUIRE(b->GetValue() == 30);
    b = nullptr;
    REQUIRE(b.try_capture(a, &ICapture::CreateMemberCapture, 40));
    REQUIRE(b->GetValue() == 40);

    // Capture from raw pointer + method.
    b = nullptr;
    b = try_capture<ICapture>(a.get(), &ICapture::CreateMemberCapture, 30);
    REQUIRE(b->GetValue() == 30);
    b = nullptr;
    b.try_capture(a.get(), &ICapture::CreateMemberCapture, 40);
    REQUIRE(b->GetValue() == 40);

    com_ptr<IDispatch> d;

    REQUIRE(!try_capture<IDispatch>(CreateCapture, 0));
    REQUIRE(!d.try_capture(CreateCapture, 0));
    REQUIRE(!try_capture<IDispatch>(a, &ICapture::CreateMemberCapture, 0));
    REQUIRE(!d.try_capture(a, &ICapture::CreateMemberCapture, 0));
    REQUIRE(!try_capture<IDispatch>(a.get(), &ICapture::CreateMemberCapture, 0));
    REQUIRE(!d.try_capture(a.get(), &ICapture::CreateMemberCapture, 0));
}
