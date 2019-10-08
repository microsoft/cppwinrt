#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;

struct __declspec(uuid("5fb96f8d-409c-42a9-99a7-8a95c1459dbd")) ICapture : ::IUnknown
{
    virtual int32_t __stdcall GetValue() noexcept = 0;
    virtual int32_t __stdcall CreateMemberCapture(int32_t value, GUID const& iid, void** object) noexcept = 0;
};

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
    com_ptr<ICapture> a = capture<ICapture>(CreateCapture, 10);
    REQUIRE(a->GetValue() == 10);
    a = nullptr;
    a.capture(CreateCapture, 20);
    REQUIRE(a->GetValue() == 20);

    auto b = capture<ICapture>(a, &ICapture::CreateMemberCapture, 30);
    REQUIRE(b->GetValue() == 30);
    b = nullptr;
    b.capture(a, &ICapture::CreateMemberCapture, 40);
    REQUIRE(b->GetValue() == 40);

    com_ptr<IDispatch> d;

    REQUIRE_THROWS_AS(capture<IDispatch>(CreateCapture, 0), hresult_no_interface);
    REQUIRE_THROWS_AS(d.capture(CreateCapture, 0), hresult_no_interface);
    REQUIRE_THROWS_AS(capture<IDispatch>(a, &ICapture::CreateMemberCapture, 0), hresult_no_interface);
    REQUIRE_THROWS_AS(d.capture(a, &ICapture::CreateMemberCapture, 0), hresult_no_interface);
}
