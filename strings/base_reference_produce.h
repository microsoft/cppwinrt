
WINRT_EXPORT namespace winrt::impl
{
    template <typename T>
    struct reference : implements<reference<T>, Windows::Foundation::IReference<T>, Windows::Foundation::IPropertyValue>
    {
        reference(T const& value) : m_value(value)
        {
        }

        T Value() const
        {
            return m_value;
        }

        Windows::Foundation::PropertyType Type() const noexcept
        {
            return Windows::Foundation::PropertyType::OtherType;
        }

        static constexpr bool IsNumericScalar() noexcept
        {
            return std::is_arithmetic_v<T> || std::is_enum_v<T>;
        }

        std::uint8_t GetUInt8() const
        {
            return to_scalar<std::uint8_t>();
        }

        std::int16_t GetInt16() const
        {
            return to_scalar<std::int16_t>();
        }

        std::uint16_t GetUInt16() const
        {
            return to_scalar<std::uint16_t>();
        }

        std::int32_t GetInt32() const
        {
            return to_scalar<std::int32_t>();
        }

        std::uint32_t GetUInt32() const
        {
            return to_scalar<std::uint32_t>();
        }

        std::int64_t GetInt64() const
        {
            return to_scalar<std::int64_t>();
        }

        std::uint64_t GetUInt64() const
        {
            return to_scalar<std::uint64_t>();
        }

        float GetSingle() { throw hresult_not_implemented(); }
        double GetDouble() { throw hresult_not_implemented(); }
        char16_t GetChar16() { throw hresult_not_implemented(); }
        bool GetBoolean() { throw hresult_not_implemented(); }
        hstring GetString() { throw hresult_not_implemented(); }
        guid GetGuid() { throw hresult_not_implemented(); }
        Windows::Foundation::DateTime GetDateTime() { throw hresult_not_implemented(); }
        Windows::Foundation::TimeSpan GetTimeSpan() { throw hresult_not_implemented(); }
        Windows::Foundation::Point GetPoint() { throw hresult_not_implemented(); }
        Windows::Foundation::Size GetSize() { throw hresult_not_implemented(); }
        Windows::Foundation::Rect GetRect() { throw hresult_not_implemented(); }
        void GetUInt8Array(com_array<std::uint8_t> &) { throw hresult_not_implemented(); }
        void GetInt16Array(com_array<std::int16_t> &) { throw hresult_not_implemented(); }
        void GetUInt16Array(com_array<std::uint16_t> &) { throw hresult_not_implemented(); }
        void GetInt32Array(com_array<std::int32_t> &) { throw hresult_not_implemented(); }
        void GetUInt32Array(com_array<std::uint32_t> &) { throw hresult_not_implemented(); }
        void GetInt64Array(com_array<std::int64_t> &) { throw hresult_not_implemented(); }
        void GetUInt64Array(com_array<std::uint64_t> &) { throw hresult_not_implemented(); }
        void GetSingleArray(com_array<float> &) { throw hresult_not_implemented(); }
        void GetDoubleArray(com_array<double> &) { throw hresult_not_implemented(); }
        void GetChar16Array(com_array<char16_t> &) { throw hresult_not_implemented(); }
        void GetBooleanArray(com_array<bool> &) { throw hresult_not_implemented(); }
        void GetStringArray(com_array<hstring> &) { throw hresult_not_implemented(); }
        void GetInspectableArray(com_array<Windows::Foundation::IInspectable> &) { throw hresult_not_implemented(); }
        void GetGuidArray(com_array<guid> &) { throw hresult_not_implemented(); }
        void GetDateTimeArray(com_array<Windows::Foundation::DateTime> &) { throw hresult_not_implemented(); }
        void GetTimeSpanArray(com_array<Windows::Foundation::TimeSpan> &) { throw hresult_not_implemented(); }
        void GetPointArray(com_array<Windows::Foundation::Point> &) { throw hresult_not_implemented(); }
        void GetSizeArray(com_array<Windows::Foundation::Size> &) { throw hresult_not_implemented(); }
        void GetRectArray(com_array<Windows::Foundation::Rect> &) { throw hresult_not_implemented(); }

    private:

        template <typename To>
        To to_scalar() const
        {
            if constexpr (IsNumericScalar())
            {
                return static_cast<To>(m_value);
            }
            else
            {
                throw hresult_not_implemented();
            }
        }

        T m_value;
    };

    template <typename T>
    struct reference_traits
    {
        static auto make(T const& value) { return winrt::make<impl::reference<T>>(value); }
        using itf = Windows::Foundation::IReference<T>;
    };

    template <>
    struct reference_traits<std::uint8_t>
    {
        static auto make(std::uint8_t value) { return Windows::Foundation::PropertyValue::CreateUInt8(value); }
        using itf = Windows::Foundation::IReference<std::uint8_t>;
    };

    template <>
    struct reference_traits<std::uint16_t>
    {
        static auto make(std::uint16_t value) { return Windows::Foundation::PropertyValue::CreateUInt16(value); }
        using itf = Windows::Foundation::IReference<std::uint16_t>;
    };

    template <>
    struct reference_traits<std::int16_t>
    {
        static auto make(std::int16_t value) { return Windows::Foundation::PropertyValue::CreateInt16(value); }
        using itf = Windows::Foundation::IReference<std::int16_t>;
    };

    template <>
    struct reference_traits<std::uint32_t>
    {
        static auto make(std::uint32_t value) { return Windows::Foundation::PropertyValue::CreateUInt32(value); }
        using itf = Windows::Foundation::IReference<std::uint32_t>;
    };

    template <>
    struct reference_traits<std::int32_t>
    {
        static auto make(std::int32_t value) { return Windows::Foundation::PropertyValue::CreateInt32(value); }
        using itf = Windows::Foundation::IReference<std::int32_t>;
    };

    template <>
    struct reference_traits<std::uint64_t>
    {
        static auto make(std::uint64_t value) { return Windows::Foundation::PropertyValue::CreateUInt64(value); }
        using itf = Windows::Foundation::IReference<std::uint64_t>;
    };

    template <>
    struct reference_traits<std::int64_t>
    {
        static auto make(std::int64_t value) { return Windows::Foundation::PropertyValue::CreateInt64(value); }
        using itf = Windows::Foundation::IReference<std::int64_t>;
    };

    template <>
    struct reference_traits<float>
    {
        static auto make(float value) { return Windows::Foundation::PropertyValue::CreateSingle(value); }
        using itf = Windows::Foundation::IReference<float>;
    };

    template <>
    struct reference_traits<double>
    {
        static auto make(double value) { return Windows::Foundation::PropertyValue::CreateDouble(value); }
        using itf = Windows::Foundation::IReference<double>;
    };

    template <>
    struct reference_traits<char16_t>
    {
        static auto make(char16_t value) { return Windows::Foundation::PropertyValue::CreateChar16(value); }
        using itf = Windows::Foundation::IReference<char16_t>;
    };

    template <>
    struct reference_traits<bool>
    {
        static auto make(bool value) { return Windows::Foundation::PropertyValue::CreateBoolean(value); }
        using itf = Windows::Foundation::IReference<bool>;
    };

    template <>
    struct reference_traits<hstring>
    {
        static auto make(hstring const& value) { return Windows::Foundation::PropertyValue::CreateString(value); }
        using itf = Windows::Foundation::IReference<hstring>;
    };

    template <>
    struct reference_traits<Windows::Foundation::IInspectable>
    {
        static auto make(Windows::Foundation::IInspectable const& value) { return Windows::Foundation::PropertyValue::CreateInspectable(value); }
        using itf = Windows::Foundation::IInspectable;
    };

    template <>
    struct reference_traits<guid>
    {
        static auto make(guid const& value) { return Windows::Foundation::PropertyValue::CreateGuid(value); }
        using itf = Windows::Foundation::IReference<guid>;
    };

    template <>
    struct reference_traits<GUID>
    {
        static auto make(GUID const& value) { return Windows::Foundation::PropertyValue::CreateGuid(reinterpret_cast<guid const&>(value)); }
        using itf = Windows::Foundation::IReference<guid>;
    };

    template <>
    struct reference_traits<Windows::Foundation::DateTime>
    {
        static auto make(Windows::Foundation::DateTime value) { return Windows::Foundation::PropertyValue::CreateDateTime(value); }
        using itf = Windows::Foundation::IReference<Windows::Foundation::DateTime>;
    };

    template <>
    struct reference_traits<Windows::Foundation::TimeSpan>
    {
        static auto make(Windows::Foundation::TimeSpan value) { return Windows::Foundation::PropertyValue::CreateTimeSpan(value); }
        using itf = Windows::Foundation::IReference<Windows::Foundation::TimeSpan>;
    };

    template <>
    struct reference_traits<Windows::Foundation::Point>
    {
        static auto make(Windows::Foundation::Point const& value) { return Windows::Foundation::PropertyValue::CreatePoint(value); }
        using itf = Windows::Foundation::IReference<Windows::Foundation::Point>;
    };

    template <>
    struct reference_traits<Windows::Foundation::Size>
    {
        static auto make(Windows::Foundation::Size const& value) { return Windows::Foundation::PropertyValue::CreateSize(value); }
        using itf = Windows::Foundation::IReference<Windows::Foundation::Size>;
    };

    template <>
    struct reference_traits<Windows::Foundation::Rect>
    {
        static auto make(Windows::Foundation::Rect const& value) { return Windows::Foundation::PropertyValue::CreateRect(value); }
        using itf = Windows::Foundation::IReference<Windows::Foundation::Rect>;
    };

    template <>
    struct reference_traits<com_array<std::uint8_t>>
    {
        static auto make(array_view<std::uint8_t const> const& value) { return Windows::Foundation::PropertyValue::CreateUInt8Array(value); }
        using itf = Windows::Foundation::IReferenceArray<std::uint8_t>;
    };

    template <>
    struct reference_traits<com_array<std::int16_t>>
    {
        static auto make(array_view<std::int16_t const> const& value) { return Windows::Foundation::PropertyValue::CreateInt16Array(value); }
        using itf = Windows::Foundation::IReferenceArray<std::int16_t>;
    };

    template <>
    struct reference_traits<com_array<std::uint16_t>>
    {
        static auto make(array_view<std::uint16_t const> const& value) { return Windows::Foundation::PropertyValue::CreateUInt16Array(value); }
        using itf = Windows::Foundation::IReferenceArray<std::uint16_t>;
    };

    template <>
    struct reference_traits<com_array<std::int32_t>>
    {
        static auto make(array_view<std::int32_t const> const& value) { return Windows::Foundation::PropertyValue::CreateInt32Array(value); }
        using itf = Windows::Foundation::IReferenceArray<std::int32_t>;
    };

    template <>
    struct reference_traits<com_array<std::uint32_t>>
    {
        static auto make(com_array<std::uint32_t> const& value) { return Windows::Foundation::PropertyValue::CreateUInt32Array(value); }
        using itf = Windows::Foundation::IReferenceArray<std::uint32_t>;
    };

    template <>
    struct reference_traits<com_array<std::int64_t>>
    {
        static auto make(array_view<std::int64_t const> const& value) { return Windows::Foundation::PropertyValue::CreateInt64Array(value); }
        using itf = Windows::Foundation::IReferenceArray<std::int64_t>;
    };

    template <>
    struct reference_traits<com_array<std::uint64_t>>
    {
        static auto make(array_view<std::uint64_t const> const& value) { return Windows::Foundation::PropertyValue::CreateUInt64Array(value); }
        using itf = Windows::Foundation::IReferenceArray<std::uint64_t>;
    };

    template <>
    struct reference_traits<com_array<float>>
    {
        static auto make(array_view<float const> const& value) { return Windows::Foundation::PropertyValue::CreateSingleArray(value); }
        using itf = Windows::Foundation::IReferenceArray<float>;
    };

    template <>
    struct reference_traits<com_array<double>>
    {
        static auto make(array_view<double const> const& value) { return Windows::Foundation::PropertyValue::CreateDoubleArray(value); }
        using itf = Windows::Foundation::IReferenceArray<double>;
    };

    template <>
    struct reference_traits<com_array<char16_t>>
    {
        static auto make(array_view<char16_t const> const& value) { return Windows::Foundation::PropertyValue::CreateChar16Array(value); }
        using itf = Windows::Foundation::IReferenceArray<char16_t>;
    };

    template <>
    struct reference_traits<com_array<bool>>
    {
        static auto make(array_view<bool const> const& value) { return Windows::Foundation::PropertyValue::CreateBooleanArray(value); }
        using itf = Windows::Foundation::IReferenceArray<bool>;
    };

    template <>
    struct reference_traits<com_array<hstring>>
    {
        static auto make(array_view<hstring const> const& value) { return Windows::Foundation::PropertyValue::CreateStringArray(value); }
        using itf = Windows::Foundation::IReferenceArray<hstring>;
    };

    template <>
    struct reference_traits<com_array<Windows::Foundation::IInspectable>>
    {
        static auto make(array_view<Windows::Foundation::IInspectable const> const& value) { return Windows::Foundation::PropertyValue::CreateInspectableArray(value); }
        using itf = Windows::Foundation::IReferenceArray<Windows::Foundation::IInspectable>;
    };

    template <>
    struct reference_traits<com_array<guid>>
    {
        static auto make(array_view<guid const> const& value) { return Windows::Foundation::PropertyValue::CreateGuidArray(value); }
        using itf = Windows::Foundation::IReferenceArray<guid>;
    };

    template <>
    struct reference_traits<com_array<GUID>>
    {
        static auto make(array_view<GUID const> const& value) { return Windows::Foundation::PropertyValue::CreateGuidArray(reinterpret_cast<array_view<guid const> const&>(value)); }
        using itf = Windows::Foundation::IReferenceArray<guid>;
    };

    template <>
    struct reference_traits<com_array<Windows::Foundation::DateTime>>
    {
        static auto make(array_view<Windows::Foundation::DateTime const> const& value) { return Windows::Foundation::PropertyValue::CreateDateTimeArray(value); }
        using itf = Windows::Foundation::IReferenceArray<Windows::Foundation::DateTime>;
    };

    template <>
    struct reference_traits<com_array<Windows::Foundation::TimeSpan>>
    {
        static auto make(array_view<Windows::Foundation::TimeSpan const> const& value) { return Windows::Foundation::PropertyValue::CreateTimeSpanArray(value); }
        using itf = Windows::Foundation::IReferenceArray<Windows::Foundation::TimeSpan>;
    };

    template <>
    struct reference_traits<com_array<Windows::Foundation::Point>>
    {
        static auto make(array_view<Windows::Foundation::Point const> const& value) { return Windows::Foundation::PropertyValue::CreatePointArray(value); }
        using itf = Windows::Foundation::IReferenceArray<Windows::Foundation::Point>;
    };

    template <>
    struct reference_traits<com_array<Windows::Foundation::Size>>
    {
        static auto make(array_view<Windows::Foundation::Size const> const& value) { return Windows::Foundation::PropertyValue::CreateSizeArray(value); }
        using itf = Windows::Foundation::IReferenceArray<Windows::Foundation::Size>;
    };

    template <>
    struct reference_traits<com_array<Windows::Foundation::Rect>>
    {
        static auto make(array_view<Windows::Foundation::Rect const> const& value) { return Windows::Foundation::PropertyValue::CreateRectArray(value); }
        using itf = Windows::Foundation::IReferenceArray<Windows::Foundation::Rect>;
    };

    // Pre-computed pinterface GUIDs for standard IReference<T> types.
    // These avoid costly constexpr SHA1 computation at compile time.
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_UInt8_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_UInt8_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReference<std::uint8_t>> = L"Windows.Foundation.IReference`1<UInt8>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReference<std::uint8_t>>{ 0xE5198CC8,0x2873,0x55F5,{ 0xB0,0xA1,0x84,0xFF,0x9E,0x4A,0xAD,0x62 } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Int16_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Int16_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReference<std::int16_t>> = L"Windows.Foundation.IReference`1<Int16>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReference<std::int16_t>>{ 0x6EC9E41B,0x6709,0x5647,{ 0x99,0x18,0xA1,0x27,0x01,0x10,0xFC,0x4E } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_UInt16_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_UInt16_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReference<std::uint16_t>> = L"Windows.Foundation.IReference`1<UInt16>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReference<std::uint16_t>>{ 0x5AB7D2C3,0x6B62,0x5E71,{ 0xA4,0xB6,0x2D,0x49,0xC4,0xF2,0x38,0xFD } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Int32_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Int32_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReference<std::int32_t>> = L"Windows.Foundation.IReference`1<Int32>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReference<std::int32_t>>{ 0x548CEFBD,0xBC8A,0x5FA0,{ 0x8D,0xF2,0x95,0x74,0x40,0xFC,0x8B,0xF4 } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_UInt32_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_UInt32_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReference<std::uint32_t>> = L"Windows.Foundation.IReference`1<UInt32>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReference<std::uint32_t>>{ 0x513EF3AF,0xE784,0x5325,{ 0xA9,0x1E,0x97,0xC2,0xB8,0x11,0x1C,0xF3 } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Int64_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Int64_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReference<std::int64_t>> = L"Windows.Foundation.IReference`1<Int64>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReference<std::int64_t>>{ 0x4DDA9E24,0xE69F,0x5C6A,{ 0xA0,0xA6,0x93,0x42,0x73,0x65,0xAF,0x2A } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_UInt64_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_UInt64_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReference<std::uint64_t>> = L"Windows.Foundation.IReference`1<UInt64>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReference<std::uint64_t>>{ 0x6755E376,0x53BB,0x568B,{ 0xA1,0x1D,0x17,0x23,0x98,0x68,0x30,0x9E } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Single_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Single_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReference<float>> = L"Windows.Foundation.IReference`1<Single>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReference<float>>{ 0x719CC2BA,0x3E76,0x5DEF,{ 0x9F,0x1A,0x38,0xD8,0x5A,0x14,0x5E,0xA8 } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Double_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Double_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReference<double>> = L"Windows.Foundation.IReference`1<Double>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReference<double>>{ 0x2F2D6C29,0x5473,0x5F3E,{ 0x92,0xE7,0x96,0x57,0x2B,0xB9,0x90,0xE2 } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Char16_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Char16_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReference<char16_t>> = L"Windows.Foundation.IReference`1<Char16>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReference<char16_t>>{ 0xFB393EF3,0xBBAC,0x5BD5,{ 0x91,0x44,0x84,0xF2,0x35,0x76,0xF4,0x15 } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Boolean_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Boolean_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReference<bool>> = L"Windows.Foundation.IReference`1<Boolean>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReference<bool>>{ 0x3C00FD60,0x2950,0x5939,{ 0xA2,0x1A,0x2D,0x12,0xC5,0xA0,0x1B,0x8A } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_String_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_String_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReference<hstring>> = L"Windows.Foundation.IReference`1<String>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReference<hstring>>{ 0xFD416DFB,0x2A07,0x52EB,{ 0xAA,0xE3,0xDF,0xCE,0x14,0x11,0x6C,0x05 } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Guid_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Guid_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReference<guid>> = L"Windows.Foundation.IReference`1<Guid>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReference<guid>>{ 0x7D50F649,0x632C,0x51F9,{ 0x84,0x9A,0xEE,0x49,0x42,0x89,0x33,0xEA } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Windows_Foundation_DateTime_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Windows_Foundation_DateTime_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReference<Windows::Foundation::DateTime>> = L"Windows.Foundation.IReference`1<Windows.Foundation.DateTime>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReference<Windows::Foundation::DateTime>>{ 0x5541D8A7,0x497C,0x5AA4,{ 0x86,0xFC,0x77,0x13,0xAD,0xBF,0x2A,0x2C } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Windows_Foundation_TimeSpan_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Windows_Foundation_TimeSpan_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> = L"Windows.Foundation.IReference`1<Windows.Foundation.TimeSpan>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>{ 0x604D0C4C,0x91DE,0x5C2A,{ 0x93,0x5F,0x36,0x2F,0x13,0xEA,0xF8,0x00 } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Windows_Foundation_Point_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Windows_Foundation_Point_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReference<Windows::Foundation::Point>> = L"Windows.Foundation.IReference`1<Windows.Foundation.Point>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReference<Windows::Foundation::Point>>{ 0x84F14C22,0xA00A,0x5272,{ 0x8D,0x3D,0x82,0x11,0x2E,0x66,0xDF,0x00 } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Windows_Foundation_Size_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Windows_Foundation_Size_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReference<Windows::Foundation::Size>> = L"Windows.Foundation.IReference`1<Windows.Foundation.Size>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReference<Windows::Foundation::Size>>{ 0x61723086,0x8E53,0x5276,{ 0x9F,0x36,0x2A,0x4B,0xB9,0x3E,0x2B,0x75 } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Windows_Foundation_Rect_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReference_1_Windows_Foundation_Rect_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReference<Windows::Foundation::Rect>> = L"Windows.Foundation.IReference`1<Windows.Foundation.Rect>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReference<Windows::Foundation::Rect>>{ 0x80423F11,0x054F,0x5EAC,{ 0xAF,0xD3,0x63,0xB6,0xCE,0x15,0xE7,0x7B } };
#endif

    // Pre-computed pinterface GUIDs for standard IReferenceArray<T> types.
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_UInt8_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_UInt8_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReferenceArray<std::uint8_t>> = L"Windows.Foundation.IReferenceArray`1<UInt8>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReferenceArray<std::uint8_t>>{ 0x2AF22683,0x3734,0x56D0,{ 0xA6,0x0E,0x68,0x8C,0xC8,0x5D,0x16,0x19 } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Int16_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Int16_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReferenceArray<std::int16_t>> = L"Windows.Foundation.IReferenceArray`1<Int16>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReferenceArray<std::int16_t>>{ 0x912F8FD7,0xADC0,0x5D60,{ 0xA8,0x96,0x7E,0xD7,0x60,0x89,0xCC,0x5B } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_UInt16_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_UInt16_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReferenceArray<std::uint16_t>> = L"Windows.Foundation.IReferenceArray`1<UInt16>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReferenceArray<std::uint16_t>>{ 0x6624A2DD,0x83F7,0x519C,{ 0x9D,0x55,0xBB,0x1F,0x65,0x60,0x45,0x6B } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Int32_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Int32_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReferenceArray<std::int32_t>> = L"Windows.Foundation.IReferenceArray`1<Int32>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReferenceArray<std::int32_t>>{ 0xA6D080A5,0xB087,0x5BC2,{ 0x9A,0x9F,0x5C,0xD6,0x87,0xB4,0xD1,0xF7 } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_UInt32_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_UInt32_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReferenceArray<std::uint32_t>> = L"Windows.Foundation.IReferenceArray`1<UInt32>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReferenceArray<std::uint32_t>>{ 0x97374B68,0xEB87,0x56CC,{ 0xB1,0x8E,0x27,0xEF,0x0F,0x9C,0xFC,0x0C } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Int64_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Int64_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReferenceArray<std::int64_t>> = L"Windows.Foundation.IReferenceArray`1<Int64>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReferenceArray<std::int64_t>>{ 0x6E333271,0x2E2A,0x5955,{ 0x87,0x90,0x83,0x6C,0x76,0xEE,0x53,0xB6 } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_UInt64_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_UInt64_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReferenceArray<std::uint64_t>> = L"Windows.Foundation.IReferenceArray`1<UInt64>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReferenceArray<std::uint64_t>>{ 0x38B60434,0xD67C,0x523E,{ 0x9D,0x0E,0x24,0xD6,0x43,0x41,0x10,0x73 } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Single_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Single_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReferenceArray<float>> = L"Windows.Foundation.IReferenceArray`1<Single>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReferenceArray<float>>{ 0x6AB1EA83,0xCB41,0x5F99,{ 0x92,0xCC,0x23,0xBD,0x43,0x36,0xA1,0xFB } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Double_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Double_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReferenceArray<double>> = L"Windows.Foundation.IReferenceArray`1<Double>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReferenceArray<double>>{ 0xD301F253,0xE0A3,0x5D2B,{ 0x9A,0x41,0xA4,0xD6,0x2B,0xEC,0x46,0x23 } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Char16_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Char16_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReferenceArray<char16_t>> = L"Windows.Foundation.IReferenceArray`1<Char16>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReferenceArray<char16_t>>{ 0xA4095AAB,0xEB7D,0x5782,{ 0x8F,0xAD,0x16,0x09,0xDE,0xA2,0x49,0xAD } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Boolean_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Boolean_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReferenceArray<bool>> = L"Windows.Foundation.IReferenceArray`1<Boolean>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReferenceArray<bool>>{ 0xE8E72666,0x48CC,0x593F,{ 0xBA,0x85,0x26,0x63,0x49,0x69,0x56,0xE3 } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_String_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_String_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReferenceArray<hstring>> = L"Windows.Foundation.IReferenceArray`1<String>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReferenceArray<hstring>>{ 0x0385688E,0xE3C7,0x5C5E,{ 0xA3,0x89,0x55,0x24,0xED,0xE3,0x49,0xF1 } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Object_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Object_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReferenceArray<Windows::Foundation::IInspectable>> = L"Windows.Foundation.IReferenceArray`1<Object>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReferenceArray<Windows::Foundation::IInspectable>>{ 0x9CD7A84F,0x0C80,0x59C5,{ 0xB4,0x4E,0x97,0x78,0x41,0xBB,0x43,0xD9 } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Guid_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Guid_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReferenceArray<guid>> = L"Windows.Foundation.IReferenceArray`1<Guid>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReferenceArray<guid>>{ 0xEECF9838,0xC1C2,0x5B4A,{ 0x97,0x6F,0xCE,0xC2,0x61,0xAE,0x1D,0x55 } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Windows_Foundation_DateTime_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Windows_Foundation_DateTime_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReferenceArray<Windows::Foundation::DateTime>> = L"Windows.Foundation.IReferenceArray`1<Windows.Foundation.DateTime>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReferenceArray<Windows::Foundation::DateTime>>{ 0x1B8E9594,0x588E,0x5A07,{ 0x9E,0x65,0x07,0x31,0xA4,0xC9,0xA2,0xDB } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Windows_Foundation_TimeSpan_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Windows_Foundation_TimeSpan_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReferenceArray<Windows::Foundation::TimeSpan>> = L"Windows.Foundation.IReferenceArray`1<Windows.Foundation.TimeSpan>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReferenceArray<Windows::Foundation::TimeSpan>>{ 0xAD73197D,0x2CFA,0x57A6,{ 0x89,0x93,0x9F,0xAC,0x40,0xFE,0xB7,0x91 } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Windows_Foundation_Point_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Windows_Foundation_Point_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReferenceArray<Windows::Foundation::Point>> = L"Windows.Foundation.IReferenceArray`1<Windows.Foundation.Point>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReferenceArray<Windows::Foundation::Point>>{ 0x39313214,0x5C7D,0x599D,{ 0xAE,0x5A,0x17,0xD9,0xD6,0x49,0x22,0x58 } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Windows_Foundation_Size_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Windows_Foundation_Size_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReferenceArray<Windows::Foundation::Size>> = L"Windows.Foundation.IReferenceArray`1<Windows.Foundation.Size>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReferenceArray<Windows::Foundation::Size>>{ 0x3B40E9D4,0xE0C3,0x56F6,{ 0xB8,0x8B,0xE5,0x05,0xEB,0x73,0x75,0x7B } };
#endif
#ifndef WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Windows_Foundation_Rect_
#define WINRT_IMPL_PINTERFACE_Windows_Foundation_IReferenceArray_1_Windows_Foundation_Rect_
    template <> inline constexpr auto& name_v<Windows::Foundation::IReferenceArray<Windows::Foundation::Rect>> = L"Windows.Foundation.IReferenceArray`1<Windows.Foundation.Rect>";
    template <> inline constexpr guid guid_v<Windows::Foundation::IReferenceArray<Windows::Foundation::Rect>>{ 0x8A444256,0xD661,0x5E9A,{ 0xA7,0x2B,0xD8,0xF1,0xD7,0x96,0x2D,0x0C } };
#endif
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T>
    bool operator==(IReference<T> const& left, IReference<T> const& right)
    {
        if (get_abi(left) == get_abi(right))
        {
            return true;
        }

        if (!left || !right)
        {
            return false;
        }

        return left.Value() == right.Value();
    }

    template <typename T>
    bool operator!=(IReference<T> const& left, IReference<T> const& right)
    {
        return !(left == right);
    }
}

WINRT_EXPORT namespace winrt::impl
{
    template <typename T, typename From>
    T unbox_value_type(From&& value)
    {
        if (!value)
        {
            throw hresult_no_interface();
        }
        if constexpr (std::is_enum_v<T>)
        {
            if (auto temp = value.template try_as<Windows::Foundation::IReference<T>>())
            {
                return temp.Value();
            }
            else
            {
                return static_cast<T>(value.template as<Windows::Foundation::IReference<std::underlying_type_t<T>>>().Value());
            }
        }
        else if constexpr (std::is_same_v<T, com_array<GUID>>)
        {
            T result;
            reinterpret_cast<com_array<guid>&>(result) = value.template as<typename impl::reference_traits<T>::itf>().Value();
            return result;
        }
        else
        {
            return value.template as<typename impl::reference_traits<T>::itf>().Value();
        }
    }

    template <typename T, typename Ret = T, typename From, typename U>
    Ret unbox_value_type_or(From&& value, U&& default_value)
    {
        if constexpr (std::is_enum_v<T>)
        {
            if (auto temp = value.template try_as<Windows::Foundation::IReference<T>>())
            {
                return temp.Value();
            }

            if (auto temp = value.template try_as<Windows::Foundation::IReference<std::underlying_type_t<T>>>())
            {
                return static_cast<T>(temp.Value());
            }
        }
        else if constexpr (std::is_same_v<T, com_array<GUID>>)
        {
            if (auto temp = value.template try_as<typename impl::reference_traits<T>::itf>())
            {
                T result;
                reinterpret_cast<com_array<guid>&>(result) = temp.Value();
                return result;
            }
        }
        else
        {
            if (auto temp = value.template try_as<typename impl::reference_traits<T>::itf>())
            {
                return temp.Value();
            }
        }
        return default_value;
    }

    template <typename To, typename From, std::enable_if_t<!is_com_interface_v<To>, int>>
    auto as(From* ptr)
    {
        if constexpr (impl::is_com_interface_v<From>)
        {
            return unbox_value_type<To>(reinterpret_cast<Windows::Foundation::IUnknown const&>(ptr));
        }
        else
        {
            return unbox_value_type<To>(reinterpret_cast<com_ptr<From> const&>(ptr));
        }
    }

    template <typename To, typename From, std::enable_if_t<!is_com_interface_v<To>, int>>
    auto try_as(From* ptr) noexcept
    {
        using type = std::conditional_t<impl::is_com_interface_v<From>, Windows::Foundation::IUnknown, com_ptr<From>>;
        return unbox_value_type_or<To, std::optional<To>>(reinterpret_cast<type const&>(ptr), std::nullopt);
    }
}

WINRT_EXPORT namespace winrt
{
    template <typename T, std::enable_if_t<std::is_constructible_v<hstring, T>, int> = 0>
    Windows::Foundation::IInspectable box_value(T&& value)
    {
        return Windows::Foundation::IReference<hstring>(hstring(std::forward<T>(value)));
    }

    template <typename T, std::enable_if_t<!std::is_constructible_v<hstring, T>, int> = 0>
    Windows::Foundation::IInspectable box_value(T const& value)
    {
        if constexpr (std::is_base_of_v<Windows::Foundation::IInspectable, T>)
        {
            return value;
        }
        else
        {
            return impl::reference_traits<T>::make(value);
        }
    }

    template <typename T>
    T unbox_value(Windows::Foundation::IInspectable const& value)
    {
        if constexpr (std::is_base_of_v<Windows::Foundation::IInspectable, T>)
        {
            return value.as<T>();
        }
        else
        {
            return impl::unbox_value_type<T>(value);
        }
    }

    template <typename T = hstring, std::enable_if_t<std::is_same_v<T, hstring>, int> = 0>
    hstring unbox_value_or(Windows::Foundation::IInspectable const& value, param::hstring const& default_value)
    {
        if (value)
        {
            if (auto temp = value.try_as<Windows::Foundation::IReference<hstring>>())
            {
                return temp.Value();
            }
        }

        return *(hstring*)(&default_value);
    }

    template <typename T, std::enable_if_t<!std::is_same_v<T, hstring>, int> = 0>
    T unbox_value_or(Windows::Foundation::IInspectable const& value, T const& default_value)
    {
        if (value)
        {
            if constexpr (std::is_base_of_v<Windows::Foundation::IInspectable, T>)
            {
                if (auto temp = value.try_as<T>())
                {
                    return temp;
                }
            }
            else
            {
                return impl::unbox_value_type_or<T>(value, default_value);
            }
        }
        return default_value;
    }

    template <typename T>
    using optional = typename impl::reference_traits<T>::itf;
}
