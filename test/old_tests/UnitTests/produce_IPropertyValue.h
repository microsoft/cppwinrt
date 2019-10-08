#pragma once

struct produce_IPropertyValue : winrt::implements<produce_IPropertyValue, winrt::Windows::Foundation::IPropertyValue>
{
    winrt::Windows::Foundation::PropertyType Type() { throw winrt::hresult_not_implemented(); }
    bool IsNumericScalar() { throw winrt::hresult_not_implemented(); }
    uint8_t GetUInt8() { throw winrt::hresult_not_implemented(); }
    int16_t GetInt16() { throw winrt::hresult_not_implemented(); }
    uint16_t GetUInt16() { throw winrt::hresult_not_implemented(); }
    int32_t GetInt32() { throw winrt::hresult_not_implemented(); }
    uint32_t GetUInt32() { throw winrt::hresult_not_implemented(); }
    int64_t GetInt64() { throw winrt::hresult_not_implemented(); }
    uint64_t GetUInt64() { throw winrt::hresult_not_implemented(); }
    float GetSingle() { throw winrt::hresult_not_implemented(); }
    double GetDouble() { throw winrt::hresult_not_implemented(); }
    char16_t GetChar16() { throw winrt::hresult_not_implemented(); }
    bool GetBoolean() { throw winrt::hresult_not_implemented(); }
    winrt::hstring GetString() { throw winrt::hresult_not_implemented(); }
    winrt::guid GetGuid() { throw winrt::hresult_not_implemented(); }
    winrt::Windows::Foundation::DateTime GetDateTime() { throw winrt::hresult_not_implemented(); }
    winrt::Windows::Foundation::TimeSpan GetTimeSpan() { throw winrt::hresult_not_implemented(); }
    winrt::Windows::Foundation::Point GetPoint() { throw winrt::hresult_not_implemented(); }
    winrt::Windows::Foundation::Size GetSize() { throw winrt::hresult_not_implemented(); }
    winrt::Windows::Foundation::Rect GetRect() { throw winrt::hresult_not_implemented(); }
    void GetUInt8Array(winrt::com_array<uint8_t> &) { throw winrt::hresult_not_implemented(); }
    void GetInt16Array(winrt::com_array<int16_t> &) { throw winrt::hresult_not_implemented(); }
    void GetUInt16Array(winrt::com_array<uint16_t> &) { throw winrt::hresult_not_implemented(); }

    void GetInt32Array(winrt::com_array<int32_t> & value)
    {
        value = { 1, 2, 3 };
    }

    void GetUInt32Array(winrt::com_array<uint32_t> &) { throw winrt::hresult_not_implemented(); }
    void GetInt64Array(winrt::com_array<int64_t> &) { throw winrt::hresult_not_implemented(); }
    void GetUInt64Array(winrt::com_array<uint64_t> &) { throw winrt::hresult_not_implemented(); }
    void GetSingleArray(winrt::com_array<float> &) { throw winrt::hresult_not_implemented(); }
    void GetDoubleArray(winrt::com_array<double> &) { throw winrt::hresult_not_implemented(); }
    void GetChar16Array(winrt::com_array<char16_t> &) { throw winrt::hresult_not_implemented(); }
    void GetBooleanArray(winrt::com_array<bool> &) { throw winrt::hresult_not_implemented(); }
    void GetStringArray(winrt::com_array<winrt::hstring> &) { throw winrt::hresult_not_implemented(); }

    void GetInspectableArray(winrt::com_array<winrt::Windows::Foundation::IInspectable> & value)
    {
        value = { winrt::Windows::Foundation::Uri(L"http://one/"), winrt::Windows::Foundation::Uri(L"http://two/"), winrt::Windows::Foundation::Uri(L"http://three/") };
    }

    void GetGuidArray(winrt::com_array<winrt::guid> &) { throw winrt::hresult_not_implemented(); }
    void GetDateTimeArray(winrt::com_array<winrt::Windows::Foundation::DateTime> &) { throw winrt::hresult_not_implemented(); }
    void GetTimeSpanArray(winrt::com_array<winrt::Windows::Foundation::TimeSpan> &) { throw winrt::hresult_not_implemented(); }
    void GetPointArray(winrt::com_array<winrt::Windows::Foundation::Point> &) { throw winrt::hresult_not_implemented(); }

    void GetSizeArray(winrt::com_array<winrt::Windows::Foundation::Size> & value)
    {
        value = { { 1,1 },{ 2,2 },{ 3,3 } };
    }

    void GetRectArray(winrt::com_array<winrt::Windows::Foundation::Rect> &) { throw winrt::hresult_not_implemented(); }
};
