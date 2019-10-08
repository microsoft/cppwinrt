
namespace winrt::impl
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

        uint8_t GetUInt8() const
        {
            return to_scalar<uint8_t>();
        }

        int16_t GetInt16() const
        {
            return to_scalar<int16_t>();
        }

        uint16_t GetUInt16() const
        {
            return to_scalar<uint16_t>();
        }

        int32_t GetInt32() const
        {
            return to_scalar<int32_t>();
        }

        uint32_t GetUInt32() const
        {
            return to_scalar<uint32_t>();
        }

        int64_t GetInt64() const
        {
            return to_scalar<int64_t>();
        }

        uint64_t GetUInt64() const
        {
            return to_scalar<uint64_t>();
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
        void GetUInt8Array(com_array<uint8_t> &) { throw hresult_not_implemented(); }
        void GetInt16Array(com_array<int16_t> &) { throw hresult_not_implemented(); }
        void GetUInt16Array(com_array<uint16_t> &) { throw hresult_not_implemented(); }
        void GetInt32Array(com_array<int32_t> &) { throw hresult_not_implemented(); }
        void GetUInt32Array(com_array<uint32_t> &) { throw hresult_not_implemented(); }
        void GetInt64Array(com_array<int64_t> &) { throw hresult_not_implemented(); }
        void GetUInt64Array(com_array<uint64_t> &) { throw hresult_not_implemented(); }
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
    };

    template <>
    struct reference_traits<uint8_t>
    {
        static auto make(uint8_t value) { return Windows::Foundation::PropertyValue::CreateUInt8(value); }
    };

    template <>
    struct reference_traits<uint16_t>
    {
        static auto make(uint16_t value) { return Windows::Foundation::PropertyValue::CreateUInt16(value); }
    };

    template <>
    struct reference_traits<int16_t>
    {
        static auto make(int16_t value) { return Windows::Foundation::PropertyValue::CreateInt16(value); }
    };

    template <>
    struct reference_traits<uint32_t>
    {
        static auto make(uint32_t value) { return Windows::Foundation::PropertyValue::CreateUInt32(value); }
    };

    template <>
    struct reference_traits<int32_t>
    {
        static auto make(int32_t value) { return Windows::Foundation::PropertyValue::CreateInt32(value); }
    };

    template <>
    struct reference_traits<uint64_t>
    {
        static auto make(uint64_t value) { return Windows::Foundation::PropertyValue::CreateUInt64(value); }
    };

    template <>
    struct reference_traits<int64_t>
    {
        static auto make(int64_t value) { return Windows::Foundation::PropertyValue::CreateInt64(value); }
    };

    template <>
    struct reference_traits<float>
    {
        static auto make(float value) { return Windows::Foundation::PropertyValue::CreateSingle(value); }
    };

    template <>
    struct reference_traits<double>
    {
        static auto make(double value) { return Windows::Foundation::PropertyValue::CreateDouble(value); }
    };

    template <>
    struct reference_traits<char16_t>
    {
        static auto make(char16_t value) { return Windows::Foundation::PropertyValue::CreateChar16(value); }
    };

    template <>
    struct reference_traits<bool>
    {
        static auto make(bool value) { return Windows::Foundation::PropertyValue::CreateBoolean(value); }
    };

    template <>
    struct reference_traits<hstring>
    {
        static auto make(hstring const& value) { return Windows::Foundation::PropertyValue::CreateString(value); }
    };

    template <>
    struct reference_traits<Windows::Foundation::IInspectable>
    {
        static auto make(Windows::Foundation::IInspectable const& value) { return Windows::Foundation::PropertyValue::CreateInspectable(value); }
    };

    template <>
    struct reference_traits<guid>
    {
        static auto make(guid const& value) { return Windows::Foundation::PropertyValue::CreateGuid(value); }
    };

    template <>
    struct reference_traits<Windows::Foundation::DateTime>
    {
        static auto make(Windows::Foundation::DateTime value) { return Windows::Foundation::PropertyValue::CreateDateTime(value); }
    };

    template <>
    struct reference_traits<Windows::Foundation::TimeSpan>
    {
        static auto make(Windows::Foundation::TimeSpan value) { return Windows::Foundation::PropertyValue::CreateTimeSpan(value); }
    };

    template <>
    struct reference_traits<Windows::Foundation::Point>
    {
        static auto make(Windows::Foundation::Point const& value) { return Windows::Foundation::PropertyValue::CreatePoint(value); }
    };

    template <>
    struct reference_traits<Windows::Foundation::Size>
    {
        static auto make(Windows::Foundation::Size const& value) { return Windows::Foundation::PropertyValue::CreateSize(value); }
    };

    template <>
    struct reference_traits<Windows::Foundation::Rect>
    {
        static auto make(Windows::Foundation::Rect const& value) { return Windows::Foundation::PropertyValue::CreateRect(value); }
    };
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

WINRT_EXPORT namespace winrt
{
    inline Windows::Foundation::IInspectable box_value(param::hstring const& value)
    {
        return Windows::Foundation::IReference<hstring>(*(hstring*)(&value));
    }

    template <typename T, std::enable_if_t<!std::is_convertible_v<T, param::hstring>, int> = 0>
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
        else if constexpr (std::is_enum_v<T>)
        {
            if (auto temp = value.try_as<Windows::Foundation::IReference<T>>())
            {
                return temp.Value();
            }
            else
            {
                return static_cast<T>(value.as<Windows::Foundation::IReference<std::underlying_type_t<T>>>().Value());
            }
        }
        else
        {
            return value.as<Windows::Foundation::IReference<T>>().Value();
        }
    }

    template <typename T>
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
            else if constexpr (std::is_enum_v<T>)
            {
                if (auto temp = value.try_as<Windows::Foundation::IReference<T>>())
                {
                    return temp.Value();
                }

                if (auto temp = value.try_as<Windows::Foundation::IReference<std::underlying_type_t<T>>>())
                {
                    return static_cast<T>(temp.Value());
                }
            }
            else
            {
                if (auto temp = value.try_as<Windows::Foundation::IReference<T>>())
                {
                    return temp.Value();
                }
            }
        }

        return default_value;
    }

    template <typename T>
    using optional = Windows::Foundation::IReference<T>;
}
