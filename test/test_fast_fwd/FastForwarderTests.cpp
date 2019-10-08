#include "pch.h"
#include <string_view>
#include "winrt\fast_forward.h"
#include "winrt\Windows.Foundation.h"
#include "winrt\FastForwarderTest.h"
#include "Class.g.h"

using namespace std::literals;
using namespace winrt;
using namespace Windows::Foundation;
using namespace FastForwarderTest;

#define REQUIRE_STR_EQUAL(s1, s2) \
    REQUIRE(std::wstring(s1).compare(std::wstring(s2)) == 0)

template<typename TForwarder, typename TOwner>
auto make_fast_forwarder(TOwner const& owner, size_t offset)
{
    return TForwarder{
        winrt::make_fast_abi_forwarder(get_abi(owner), guid_of<TForwarder>(), offset),
        take_ownership_from_abi };
}

static inline size_t s_instances = 0;

namespace winrt::FastForwarderTest::implementation
{
    struct Class : ClassT<Class>
    {
        Class()
        {
            ++s_instances;
        }
        ~Class()
        {
            --s_instances;
        }

        // Interface1 
        bool BooleanProp()
        {
            return m_bool;
        }
        void BooleanProp(bool value)
        {
            m_bool = value;
        }
        char16_t CharProp()
        {
            return m_char;
        }
        void CharProp(char16_t value)
        {
            m_char = value;
        }
        int16_t Int16Prop()
        {
            return m_int16;
        }
        void Int16Prop(int16_t value)
        {
            m_int16 = value;
        }
        int32_t Int32Prop()
        {
            return m_int32;
        }
        void Int32Prop(int32_t value)
        {
            m_int32 = value;
        }
        int64_t Int64Prop()
        {
            return m_int64;
        }
        void Int64Prop(int64_t value)
        {
            m_int64 = value;
        }
        float SingleProp()
        {
            return m_single;
        }
        void SingleProp(float value)
        {
            m_single = value;
        }
        uint8_t UInt8Prop()
        {
            return m_uint8;
        }
        void UInt8Prop(uint8_t value)
        {
            m_uint8 = value;
        }
        uint16_t UInt16Prop()
        {
            return m_uint16;
        }
        void UInt16Prop(uint16_t value)
        {
            m_uint16 = value;
        }
        uint32_t UInt32Prop()
        {
            return m_uint32;
        }
        void UInt32Prop(uint32_t value)
        {
            m_uint32 = value;
        }
        uint64_t UInt64Prop()
        {
            return m_uint64;
        }
        void UInt64Prop(uint64_t value)
        {
            m_uint64 = value;
        }
        double DoubleProp()
        {
            return m_double;
        }
        void DoubleProp(double value)
        {
            m_double = value;
        }
        winrt::guid GuidProp()
        {
            return m_guid;
        }
        void GuidProp(winrt::guid const& value)
        {
            m_guid = value;
        }

        // Interface2
        hstring GetString()
        {
            return m_string;
        }
        void SetString(hstring const& value)
        {
            m_string = value;
        }

        // Interface3
        Struct BigMethod(bool arg1, char16_t arg2, int16_t arg3, int32_t arg4, int64_t arg5, uint8_t arg6, uint16_t arg7, uint32_t arg8, uint64_t arg9,
            float arg10, double arg11, float arg12, double arg13, float arg14, double arg15, float arg16, double arg17, float arg18)
        {
            REQUIRE(arg1 == true);
            REQUIRE(arg2 == L'2');
            REQUIRE(arg3 == 3);
            REQUIRE(arg4 == 4);
            REQUIRE(arg5 == 5);
            REQUIRE(arg6 == 6U);
            REQUIRE(arg7 == 7U);
            REQUIRE(arg8 == 8U);
            REQUIRE(arg9 == 9U);
            REQUIRE(arg10 == 0.0);
            REQUIRE(arg11 == 1.0);
            REQUIRE(arg12 == 2.0);
            REQUIRE(arg13 == 3.0);
            REQUIRE(arg14 == 4.0);
            REQUIRE(arg15 == 5.0);
            REQUIRE(arg16 == 6.0);
            REQUIRE(arg17 == 7.0);
            REQUIRE(arg18 == 8.0);
            return { 1, 2 };
        }

        bool m_bool;
        char16_t m_char;
        int16_t m_int16;
        int32_t m_int32;
        int64_t m_int64;
        float m_single;
        uint8_t m_uint8;
        uint16_t m_uint16;
        uint32_t m_uint32;
        uint64_t m_uint64;
        double m_double;
        winrt::guid m_guid;
        hstring m_string;
    };
}

namespace winrt::FastForwarderTest::factory_implementation
{
    struct Class : ClassT<Class, implementation::Class>
    {
    };
}

namespace winrt::FastForwarderTest
{
    Class::Class() :
        Class(make<FastForwarderTest::implementation::Class>())
    {
    }
}

TEST_CASE("MockUri")
{
    Uri uri{ L"http://aka.ms/xlang" };

    auto str = make_fast_forwarder<IStringable>(uri, 1);
    REQUIRE_STR_EQUAL(uri.DisplayUri(), str.ToString());

    auto can = make_fast_forwarder<IUriRuntimeClassWithAbsoluteCanonicalUri>(uri, 0);
    REQUIRE_STR_EQUAL(can.AbsoluteCanonicalUri(), uri.AbsoluteCanonicalUri());
    REQUIRE_STR_EQUAL(can.DisplayIri(), uri.DisplayIri());
}

TEST_CASE("Interface1")
{
    Class obj;
    auto ifc1 = make_fast_forwarder<IInterface1>(obj, 0);

    // Test various property get/set equivalences
    obj.BooleanProp(true);
    REQUIRE(obj.BooleanProp() == ifc1.BooleanProp());
    ifc1.BooleanProp(false);
    REQUIRE(obj.BooleanProp() == ifc1.BooleanProp());

    obj.CharProp(L'1');
    REQUIRE(obj.CharProp() == ifc1.CharProp());
    ifc1.CharProp(L'2');
    REQUIRE(obj.CharProp() == ifc1.CharProp());

    obj.Int16Prop(1);
    REQUIRE(obj.Int16Prop() == ifc1.Int16Prop());
    ifc1.Int16Prop(2);
    REQUIRE(obj.Int16Prop() == ifc1.Int16Prop());

    obj.Int32Prop(1);
    REQUIRE(obj.Int32Prop() == ifc1.Int32Prop());
    ifc1.Int32Prop(2);
    REQUIRE(obj.Int32Prop() == ifc1.Int32Prop());

    obj.Int64Prop(1);
    REQUIRE(obj.Int64Prop() == ifc1.Int64Prop());
    ifc1.Int64Prop(2);
    REQUIRE(obj.Int64Prop() == ifc1.Int64Prop());

    obj.SingleProp(1);
    REQUIRE(obj.SingleProp() == ifc1.SingleProp());
    ifc1.SingleProp(2);
    REQUIRE(obj.SingleProp() == ifc1.SingleProp());

    obj.UInt8Prop(1);
    REQUIRE(obj.UInt8Prop() == ifc1.UInt8Prop());
    ifc1.UInt8Prop(2);
    REQUIRE(obj.UInt8Prop() == ifc1.UInt8Prop());

    obj.UInt16Prop(1);
    REQUIRE(obj.UInt16Prop() == ifc1.UInt16Prop());
    ifc1.UInt16Prop(2);
    REQUIRE(obj.UInt16Prop() == ifc1.UInt16Prop());

    obj.UInt32Prop(1);
    REQUIRE(obj.UInt32Prop() == ifc1.UInt32Prop());
    ifc1.UInt32Prop(2);
    REQUIRE(obj.UInt32Prop() == ifc1.UInt32Prop());

    obj.UInt64Prop(1);
    REQUIRE(obj.UInt64Prop() == ifc1.UInt64Prop());
    ifc1.UInt64Prop(2);
    REQUIRE(obj.UInt64Prop() == ifc1.UInt64Prop());

    obj.DoubleProp(1);
    REQUIRE(obj.DoubleProp() == ifc1.DoubleProp());
    ifc1.DoubleProp(2);
    REQUIRE(obj.DoubleProp() == ifc1.DoubleProp());

    obj.GuidProp(guid_of<IInterface1>());
    REQUIRE(obj.GuidProp() == ifc1.GuidProp());
    ifc1.GuidProp(guid_of<IInterface2>());
    REQUIRE(obj.GuidProp() == ifc1.GuidProp());
}

TEST_CASE("Interface2")
{
    Class obj;
    auto ifc2 = make_fast_forwarder<IInterface2>(obj, 24);

    auto some_string = L"some string";
    obj.SetString(some_string);
    REQUIRE_STR_EQUAL(obj.GetString(), ifc2.GetString());
    ifc2.SetString(some_string);
    REQUIRE_STR_EQUAL(obj.GetString(), ifc2.GetString());
}

TEST_CASE("Interface3")
{
    Class obj;
    auto ifc3 = make_fast_forwarder<IInterface3>(obj, 26);

    Struct str = ifc3.BigMethod(
        // 9 integer args across registers and stack, all arches
        true, L'2', 3, 4, 5, 6, 7, 8, 9,
        // 9 float args across registers and stack, all arches
        0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0);
    REQUIRE(str.Field1 == 1);
    REQUIRE(str.Field2 == 2);
}

// Note: There is no way (other than adding more parameters) for RoCreateFastForwarder
// to know that the owner is a runtime class and not an interface, both of which
// would return the same value for GetRuntimeClassName.  Thus, creating a forwarder 
// from an interface is undefined (and unexpected by projections).
TEST_CASE("QueryInterface")
{
    Class obj;

    REQUIRE(s_instances > 0);

    auto ifc1 = make_fast_forwarder<IInterface1>(obj, 0);
    auto ifc2 = make_fast_forwarder<IInterface2>(obj, 24);
    auto ifc3 = make_fast_forwarder<IInterface3>(obj, 26);

    ifc3 = nullptr;
    ifc2 = nullptr;
    obj = nullptr;

    REQUIRE(s_instances > 0);

    ifc1.BooleanProp(true);
    ifc1 = nullptr;

    REQUIRE(s_instances == 0);
}
