#include "pch.h"
#include <objbase.h>
#include <objidl.h>
#include <thread>

using namespace winrt;
using namespace Windows::Foundation;

// Scalar box_value now produces a local IReference/IPropertyValue instead of hopping to
// combase PropertyValue. These confirm it reports the correct PropertyType, keeps combase-style
// numeric conversion on mismatched getters, and round-trips through unbox_value.
TEST_CASE("reference_boxing")
{
    {
        auto boxed = box_value(42);
        auto pv = boxed.as<IPropertyValue>();
        REQUIRE(pv.Type() == PropertyType::Int32);
        REQUIRE(pv.IsNumericScalar());
        REQUIRE(pv.GetInt32() == 42);
        REQUIRE(pv.GetInt16() == 42);
        REQUIRE(pv.GetDouble() == 42.0);
        // A scalar reference holds no array, so every array getter routes through get_as and throws.
        {
            com_array<int32_t> ints;
            REQUIRE_THROWS_AS(pv.GetInt32Array(ints), hresult_not_implemented);
            com_array<hstring> strings;
            REQUIRE_THROWS_AS(pv.GetStringArray(strings), hresult_not_implemented);
        }
        REQUIRE(unbox_value<int32_t>(boxed) == 42);
    }

    {
        auto pv = box_value(3.5).as<IPropertyValue>();
        REQUIRE(pv.Type() == PropertyType::Double);
        REQUIRE(pv.IsNumericScalar());
        REQUIRE(pv.GetDouble() == 3.5);
        REQUIRE(pv.GetSingle() == 3.5f);
    }

    {
        auto pv = box_value(hstring{ L"hello" }).as<IPropertyValue>();
        REQUIRE(pv.Type() == PropertyType::String);
        REQUIRE(!pv.IsNumericScalar());
        REQUIRE(pv.GetString() == L"hello");
        REQUIRE_THROWS_AS(pv.GetInt32(), hresult_not_implemented);
    }

    {
        auto pv = box_value(true).as<IPropertyValue>();
        REQUIRE(pv.Type() == PropertyType::Boolean);
        REQUIRE(!pv.IsNumericScalar());
        REQUIRE(pv.GetBoolean());
        REQUIRE_THROWS_AS(pv.GetInt32(), hresult_not_implemented);
    }

    {
        guid const g{ 0x11223344, 0x5566, 0x7788, { 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF, 0x00 } };
        auto pv = box_value(g).as<IPropertyValue>();
        REQUIRE(pv.Type() == PropertyType::Guid);
        REQUIRE(!pv.IsNumericScalar());
        REQUIRE(pv.GetGuid() == g);
    }

    {
        auto pv = box_value(static_cast<uint8_t>(7)).as<IPropertyValue>();
        REQUIRE(pv.Type() == PropertyType::UInt8);
        REQUIRE(pv.IsNumericScalar());
        REQUIRE(pv.GetUInt8() == 7);
        REQUIRE(unbox_value<uint8_t>(box_value(static_cast<uint8_t>(7))) == 7);
    }

    // DateTime, TimeSpan, and Point are also boxed in-process now (they still marshal by value).
    {
        Point const point{ 3.0f, 4.0f };
        auto pv = box_value(point).as<IPropertyValue>();
        REQUIRE(pv.Type() == PropertyType::Point);
        REQUIRE(!pv.IsNumericScalar());
        REQUIRE(pv.GetPoint().X == point.X);
        REQUIRE(pv.GetPoint().Y == point.Y);
        auto const round_tripped = unbox_value<Point>(box_value(point));
        REQUIRE(round_tripped.X == point.X);
        REQUIRE(round_tripped.Y == point.Y);
        REQUIRE_THROWS_AS(pv.GetInt32(), hresult_not_implemented);
    }

    {
        TimeSpan const span{ std::chrono::seconds{ 90 } };
        auto pv = box_value(span).as<IPropertyValue>();
        REQUIRE(pv.Type() == PropertyType::TimeSpan);
        REQUIRE(!pv.IsNumericScalar());
        REQUIRE(pv.GetTimeSpan() == span);
        REQUIRE(unbox_value<TimeSpan>(box_value(span)) == span);
    }

    {
        DateTime const when{ TimeSpan{ std::chrono::seconds{ 1000 } } };
        auto pv = box_value(when).as<IPropertyValue>();
        REQUIRE(pv.Type() == PropertyType::DateTime);
        REQUIRE(!pv.IsNumericScalar());
        REQUIRE(pv.GetDateTime() == when);
        REQUIRE(unbox_value<DateTime>(box_value(when)) == when);
    }
}

// Array boxing produces a local IReferenceArray<T> / IPropertyValue (no combase PropertyValue) for the
// stock element types. Confirm the array PropertyType, round-trips, and the get_as throw behavior.
TEST_CASE("reference_boxing arrays")
{
    {
        int32_t values[]{ 0, 42, 1729, -1 };
        auto boxed = box_value(com_array<int32_t>{ std::begin(values), std::end(values) });
        auto pv = boxed.as<IPropertyValue>();
        REQUIRE(pv.Type() == PropertyType::Int32Array);
        REQUIRE(!pv.IsNumericScalar());

        com_array<int32_t> out;
        pv.GetInt32Array(out);
        REQUIRE(out == array_view<int32_t>{ values });

        // A scalar getter on an array PV throws, and so does a mismatched-element array getter.
        REQUIRE_THROWS_AS(pv.GetInt32(), hresult_not_implemented);
        com_array<double> wrong;
        REQUIRE_THROWS_AS(pv.GetDoubleArray(wrong), hresult_not_implemented);

        REQUIRE(unbox_value<com_array<int32_t>>(boxed) == array_view<int32_t>{ values });
        REQUIRE(boxed.as<IReferenceArray<int32_t>>().Value() == array_view<int32_t>{ values });
    }

    // guid arrays are local too.
    {
        guid values[]{
            { 0x11223344, 0x5566, 0x7788, { 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF, 0x00 } },
            { 0x00112233, 0x4455, 0x6677, { 0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF } } };
        auto boxed = box_value(com_array<guid>{ std::begin(values), std::end(values) });
        REQUIRE(boxed.as<IPropertyValue>().Type() == PropertyType::GuidArray);
        REQUIRE(unbox_value<com_array<guid>>(boxed) == array_view<guid>{ values });
    }
}

// The local array reference must marshal by value across processes just like the scalar one: its
// IMarshal reports the same unmarshal class as a genuine combase array PropertyValue, and not the
// free-threaded (by-reference) class.
TEST_CASE("reference_boxing array marshal by value")
{
    int32_t values[]{ 1, 2, 3 };
    auto boxed = box_value(com_array<int32_t>{ std::begin(values), std::end(values) });
    REQUIRE(boxed.try_as<IAgileObject>());
    auto ours = boxed.as<impl::IMarshal>();

    auto genuine = PropertyValue::CreateInt32Array(values);
    auto reference = genuine.as<impl::IMarshal>();

    guid our_clsid{};
    guid reference_clsid{};
    check_hresult(ours->GetUnmarshalClass(guid_of<IPropertyValue>(), get_unknown(boxed),
        MSHCTX_DIFFERENTMACHINE, nullptr, MSHLFLAGS_NORMAL, &our_clsid));
    check_hresult(reference->GetUnmarshalClass(guid_of<IPropertyValue>(), get_unknown(genuine),
        MSHCTX_DIFFERENTMACHINE, nullptr, MSHLFLAGS_NORMAL, &reference_clsid));

    REQUIRE(our_clsid == reference_clsid);

    guid const free_threaded_marshaler{ 0x0000033A, 0x0000, 0x0000, { 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46 } };
    REQUIRE(our_clsid != free_threaded_marshaler);
}

// The in-proc reference stays agile but must marshal by value across processes, exactly like a real
// combase PropertyValue. Prove it by confirming our IMarshal reports the SAME unmarshal class as a
// genuine PropertyValue - i.e. we forward marshaling to combase - and specifically NOT the
// free-threaded (marshal-by-reference) class the default agile path would have used.
TEST_CASE("reference_boxing marshal by value")
{
    auto boxed = box_value(42);
    REQUIRE(boxed.try_as<IAgileObject>());
    auto ours = boxed.as<impl::IMarshal>();

    auto genuine = PropertyValue::CreateInt32(42);
    auto reference = genuine.as<impl::IMarshal>();

    guid our_clsid{};
    guid reference_clsid{};
    check_hresult(ours->GetUnmarshalClass(guid_of<IPropertyValue>(), get_unknown(boxed),
        MSHCTX_DIFFERENTMACHINE, nullptr, MSHLFLAGS_NORMAL, &our_clsid));
    check_hresult(reference->GetUnmarshalClass(guid_of<IPropertyValue>(), get_unknown(genuine),
        MSHCTX_DIFFERENTMACHINE, nullptr, MSHLFLAGS_NORMAL, &reference_clsid));

    REQUIRE(our_clsid == reference_clsid);

    // CLSID_InProcFreeMarshaler - the by-reference class the agile FTM would have produced.
    guid const free_threaded_marshaler{ 0x0000033A, 0x0000, 0x0000, { 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46 } };
    REQUIRE(our_clsid != free_threaded_marshaler);
}

// The in-proc reference advertises IAgileObject, so handing it between two single-threaded
// apartments in the same process must resolve to the *same* object pointer - no proxy. The Global
// Interface Table returns an agile object's original pointer directly, but hands back a proxy (a
// different identity) for a non-agile object, so pointer equality here confirms the agile fast path.
TEST_CASE("reference_boxing agile in-proc identity across apartments")
{
    auto identity_of = [](::IUnknown* raw) -> void*
    {
        com_ptr<::IUnknown> identity;
        check_hresult(raw->QueryInterface(IID_PPV_ARGS(identity.put())));
        return identity.get();
    };

    com_ptr<IGlobalInterfaceTable> git;
    check_hresult(CoCreateInstance(CLSID_StdGlobalInterfaceTable, nullptr,
        CLSCTX_INPROC_SERVER, IID_PPV_ARGS(git.put())));

    Windows::Foundation::IInspectable boxed{ nullptr };
    DWORD cookie{};
    void* original_identity{};
    void* marshaled_identity{};
    HRESULT sta1_hr = S_OK;
    HRESULT sta2_hr = S_OK;

    handle registered{ check_pointer(CreateEventW(nullptr, true, false, nullptr)) };
    handle fetched{ check_pointer(CreateEventW(nullptr, true, false, nullptr)) };

    std::thread sta1([&]
    {
        sta1_hr = CoInitializeEx(nullptr, COINIT_APARTMENTTHREADED);
        if (SUCCEEDED(sta1_hr))
        {
            boxed = box_value(42);
            auto unknown = reinterpret_cast<::IUnknown*>(get_abi(boxed));
            original_identity = identity_of(unknown);
            sta1_hr = git->RegisterInterfaceInGlobal(unknown, IID_IUnknown, &cookie);
        }
        SetEvent(registered.get());

        WaitForSingleObject(fetched.get(), INFINITE);
        if (SUCCEEDED(sta1_hr))
        {
            CoUninitialize();
        }
    });

    std::thread sta2([&]
    {
        WaitForSingleObject(registered.get(), INFINITE);
        if (SUCCEEDED(sta1_hr))
        {
            sta2_hr = CoInitializeEx(nullptr, COINIT_APARTMENTTHREADED);
            if (SUCCEEDED(sta2_hr))
            {
                ::IUnknown* raw{};
                sta2_hr = git->GetInterfaceFromGlobal(cookie, IID_IUnknown, reinterpret_cast<void**>(&raw));
                if (SUCCEEDED(sta2_hr))
                {
                    marshaled_identity = identity_of(raw);
                    raw->Release();
                }
                git->RevokeInterfaceFromGlobal(cookie);
                CoUninitialize();
            }
        }
        SetEvent(fetched.get());
    });

    sta1.join();
    sta2.join();

    REQUIRE(SUCCEEDED(sta1_hr));
    REQUIRE(SUCCEEDED(sta2_hr));
    REQUIRE(original_identity != nullptr);
    REQUIRE(original_identity == marshaled_identity);
}
