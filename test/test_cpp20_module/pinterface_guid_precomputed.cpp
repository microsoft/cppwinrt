#include "pch.h"

import std;
import winrt.Windows.Foundation;
import winrt.Windows.Foundation.Collections;

// Validate that pre-computed pinterface_guid specializations:
// 1. Have the precomputed flag set to true
// 2. Produce correct GUID values across module boundaries
//
// Tests cover both hand-written specializations (IReference/IReferenceArray
// in base_reference_produce.h) and code-generated specializations discovered
// from Windows SDK metadata (IMap, IIterable, TypedEventHandler, etc.).

using namespace winrt;
using namespace winrt::impl;
using namespace winrt::Windows::Foundation;
using namespace winrt::Windows::Foundation::Collections;

namespace
{
    constexpr bool equal(guid const& left, guid const& right) noexcept
    {
        return left.Data1 == right.Data1 &&
            left.Data2 == right.Data2 &&
            left.Data3 == right.Data3 &&
            left.Data4[0] == right.Data4[0] &&
            left.Data4[1] == right.Data4[1] &&
            left.Data4[2] == right.Data4[2] &&
            left.Data4[3] == right.Data4[3] &&
            left.Data4[4] == right.Data4[4] &&
            left.Data4[5] == right.Data4[5] &&
            left.Data4[6] == right.Data4[6] &&
            left.Data4[7] == right.Data4[7];
    }
}

#define REQUIRE_PRECOMPUTED_GUID(expected_guid, ...) \
    STATIC_REQUIRE(pinterface_guid<__VA_ARGS__>::precomputed); \
    STATIC_REQUIRE(equal(guid(expected_guid), guid_of<__VA_ARGS__>()))

TEST_CASE("module_pinterface_guid_ireference")
{
    REQUIRE_PRECOMPUTED_GUID("E5198CC8-2873-55F5-B0A1-84FF9E4AAD62", IReference<uint8_t>);
    REQUIRE_PRECOMPUTED_GUID("6EC9E41B-6709-5647-9918-A1270110FC4E", IReference<int16_t>);
    REQUIRE_PRECOMPUTED_GUID("5AB7D2C3-6B62-5E71-A4B6-2D49C4F238FD", IReference<uint16_t>);
    REQUIRE_PRECOMPUTED_GUID("548CEFBD-BC8A-5FA0-8DF2-957440FC8BF4", IReference<int32_t>);
    REQUIRE_PRECOMPUTED_GUID("513EF3AF-E784-5325-A91E-97C2B8111CF3", IReference<uint32_t>);
    REQUIRE_PRECOMPUTED_GUID("4DDA9E24-E69F-5C6A-A0A6-93427365AF2A", IReference<int64_t>);
    REQUIRE_PRECOMPUTED_GUID("6755E376-53BB-568B-A11D-17239868309E", IReference<uint64_t>);
    REQUIRE_PRECOMPUTED_GUID("719CC2BA-3E76-5DEF-9F1A-38D85A145EA8", IReference<float>);
    REQUIRE_PRECOMPUTED_GUID("2F2D6C29-5473-5F3E-92E7-96572BB990E2", IReference<double>);
    REQUIRE_PRECOMPUTED_GUID("FB393EF3-BBAC-5BD5-9144-84F23576F415", IReference<char16_t>);
    REQUIRE_PRECOMPUTED_GUID("3C00FD60-2950-5939-A21A-2D12C5A01B8A", IReference<bool>);
    REQUIRE_PRECOMPUTED_GUID("FD416DFB-2A07-52EB-AAE3-DFCE14116C05", IReference<hstring>);
    REQUIRE_PRECOMPUTED_GUID("7D50F649-632C-51F9-849A-EE49428933EA", IReference<guid>);
    REQUIRE_PRECOMPUTED_GUID("5541D8A7-497C-5AA4-86FC-7713ADBF2A2C", IReference<DateTime>);
    REQUIRE_PRECOMPUTED_GUID("604D0C4C-91DE-5C2A-935F-362F13EAF800", IReference<TimeSpan>);
    REQUIRE_PRECOMPUTED_GUID("84F14C22-A00A-5272-8D3D-82112E66DF00", IReference<Point>);
    REQUIRE_PRECOMPUTED_GUID("61723086-8E53-5276-9F36-2A4BB93E2B75", IReference<Size>);
    REQUIRE_PRECOMPUTED_GUID("80423F11-054F-5EAC-AFD3-63B6CE15E77B", IReference<Rect>);
}

TEST_CASE("module_pinterface_guid_ireferencearray")
{
    REQUIRE_PRECOMPUTED_GUID("2AF22683-3734-56D0-A60E-688CC85D1619", IReferenceArray<uint8_t>);
    REQUIRE_PRECOMPUTED_GUID("912F8FD7-ADC0-5D60-A896-7ED76089CC5B", IReferenceArray<int16_t>);
    REQUIRE_PRECOMPUTED_GUID("6624A2DD-83F7-519C-9D55-BB1F6560456B", IReferenceArray<uint16_t>);
    REQUIRE_PRECOMPUTED_GUID("A6D080A5-B087-5BC2-9A9F-5CD687B4D1F7", IReferenceArray<int32_t>);
    REQUIRE_PRECOMPUTED_GUID("97374B68-EB87-56CC-B18E-27EF0F9CFC0C", IReferenceArray<uint32_t>);
    REQUIRE_PRECOMPUTED_GUID("6E333271-2E2A-5955-8790-836C76EE53B6", IReferenceArray<int64_t>);
    REQUIRE_PRECOMPUTED_GUID("38B60434-D67C-523E-9D0E-24D643411073", IReferenceArray<uint64_t>);
    REQUIRE_PRECOMPUTED_GUID("6AB1EA83-CB41-5F99-92CC-23BD4336A1FB", IReferenceArray<float>);
    REQUIRE_PRECOMPUTED_GUID("D301F253-E0A3-5D2B-9A41-A4D62BEC4623", IReferenceArray<double>);
    REQUIRE_PRECOMPUTED_GUID("A4095AAB-EB7D-5782-8FAD-1609DEA249AD", IReferenceArray<char16_t>);
    REQUIRE_PRECOMPUTED_GUID("E8E72666-48CC-593F-BA85-2663496956E3", IReferenceArray<bool>);
    REQUIRE_PRECOMPUTED_GUID("0385688E-E3C7-5C5E-A389-5524EDE349F1", IReferenceArray<hstring>);
    REQUIRE_PRECOMPUTED_GUID("9CD7A84F-0C80-59C5-B44E-977841BB43D9", IReferenceArray<IInspectable>);
    REQUIRE_PRECOMPUTED_GUID("EECF9838-C1C2-5B4A-976F-CEC261AE1D55", IReferenceArray<guid>);
    REQUIRE_PRECOMPUTED_GUID("1B8E9594-588E-5A07-9E65-0731A4C9A2DB", IReferenceArray<DateTime>);
    REQUIRE_PRECOMPUTED_GUID("AD73197D-2CFA-57A6-8993-9FAC40FEB791", IReferenceArray<TimeSpan>);
    REQUIRE_PRECOMPUTED_GUID("39313214-5C7D-599D-AE5A-17D9D6492258", IReferenceArray<Point>);
    REQUIRE_PRECOMPUTED_GUID("3B40E9D4-E0C3-56F6-B88B-E505EB73757B", IReferenceArray<Size>);
    REQUIRE_PRECOMPUTED_GUID("8A444256-D661-5E9A-A72B-D8F1D7962D0C", IReferenceArray<Rect>);
}

TEST_CASE("module_pinterface_guid_from_metadata")
{
    // IMap / IMapView chains (used by PropertySet, ValueSet, etc.)
    REQUIRE_PRECOMPUTED_GUID("1B0D3570-0877-5EC2-8A2C-3B9539506ACA", IMap<hstring, IInspectable>);
    REQUIRE_PRECOMPUTED_GUID("F6D1F700-49C2-52AE-8154-826F9908773C", IMap<hstring, hstring>);
    REQUIRE_PRECOMPUTED_GUID("BB78502A-F79D-54FA-92C9-90C5039FDF7E", IMapView<hstring, IInspectable>);
    REQUIRE_PRECOMPUTED_GUID("AC7F26F2-FEB7-5B2A-8AC4-345BC62CAEDE", IMapView<hstring, hstring>);
    REQUIRE_PRECOMPUTED_GUID("09335560-6C6B-5A26-9348-97B781132B20", IKeyValuePair<hstring, IInspectable>);
    REQUIRE_PRECOMPUTED_GUID("60310303-49C5-52E6-ABC6-A9B36ECCC716", IKeyValuePair<hstring, hstring>);

    // IIterable / IIterator over key-value pairs
    REQUIRE_PRECOMPUTED_GUID("FE2F3D47-5D47-5499-8374-430C7CDA0204", IIterable<IKeyValuePair<hstring, IInspectable>>);
    REQUIRE_PRECOMPUTED_GUID("E9BDAAF0-CBF6-5C72-BE90-29CBF3A1319B", IIterable<IKeyValuePair<hstring, hstring>>);
    REQUIRE_PRECOMPUTED_GUID("5DB5FA32-707C-5849-A06B-91C8EB9D10E8", IIterator<IKeyValuePair<hstring, IInspectable>>);
    REQUIRE_PRECOMPUTED_GUID("05EB86F1-7140-5517-B88D-CBAEBE57E6B1", IIterator<IKeyValuePair<hstring, hstring>>);

    // IObservableMap and change handlers
    REQUIRE_PRECOMPUTED_GUID("236AAC9D-FB12-5C4D-A41C-9E445FB4D7EC", IObservableMap<hstring, IInspectable>);
    REQUIRE_PRECOMPUTED_GUID("1E036276-2F60-55F6-B7F3-F86079E6900B", IObservableMap<hstring, hstring>);
    REQUIRE_PRECOMPUTED_GUID("60141EFB-F2F9-5377-96FD-F8C60D9558B5", IMapChangedEventArgs<hstring>);
    REQUIRE_PRECOMPUTED_GUID("24F981E5-DDCA-538D-AADA-A59906084CF1", MapChangedEventHandler<hstring, IInspectable>);
    REQUIRE_PRECOMPUTED_GUID("E2663F37-2E1B-500C-AD68-C3ED7A8F74C8", MapChangedEventHandler<hstring, hstring>);

    // TypedEventHandler from Windows.Foundation (e.g. IMemoryBufferReference.Closed)
    REQUIRE_PRECOMPUTED_GUID("F4637D4A-0760-5431-BFC0-24EB1D4F6C4F", TypedEventHandler<IMemoryBufferReference, IInspectable>);

    // WwwFormUrlDecoder collections
    REQUIRE_PRECOMPUTED_GUID("876BE83B-7218-5BFB-A169-83152EF7E146", IIterable<IWwwFormUrlDecoderEntry>);
    REQUIRE_PRECOMPUTED_GUID("32E54295-373C-50CB-80A1-468A990CA780", IIterator<IWwwFormUrlDecoderEntry>);
    REQUIRE_PRECOMPUTED_GUID("B1F00D3B-1F06-5117-93EA-2A0D79116701", IVectorView<IWwwFormUrlDecoderEntry>);
}

#undef REQUIRE_PRECOMPUTED_GUID
