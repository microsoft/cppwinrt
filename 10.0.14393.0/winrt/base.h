// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include <restrictederrorinfo.h>
#include <winstring.h>

#include <algorithm>
#include <array>
#include <atomic>
#include <chrono>
#include <cstddef>
#include <iterator>
#include <map>
#include <memory>
#include <new>
#include <string>
#include <stdexcept>
#include <tuple>
#include <type_traits>
#include <utility>
#include <unordered_map>
#include <vector>

#ifdef _RESUMABLE_FUNCTIONS_SUPPORTED
#define WINRT_ASYNC
#include <ctxtcall.h>
#include <experimental/resumable>
#endif

extern "C"
{
    HRESULT __stdcall WINRT_GetRestrictedErrorInfo(IRestrictedErrorInfo ** info);
    HRESULT __stdcall WINRT_RoGetActivationFactory(HSTRING classId, const GUID & iid, void ** factory);
    HRESULT __stdcall WINRT_RoInitialize(uint32_t type);
    BOOL    __stdcall WINRT_RoOriginateError(HRESULT error, HSTRING message);
    void    __stdcall WINRT_RoUninitialize();
    HRESULT __stdcall WINRT_SetRestrictedErrorInfo(IRestrictedErrorInfo * info);
}

#ifdef _M_IX86
#pragma comment(linker, "/alternatename:_WINRT_GetRestrictedErrorInfo@4=_GetRestrictedErrorInfo@4")
#pragma comment(linker, "/alternatename:_WINRT_RoGetActivationFactory@12=_RoGetActivationFactory@12")
#pragma comment(linker, "/alternatename:_WINRT_RoInitialize@4=_RoInitialize@4")
#pragma comment(linker, "/alternatename:_WINRT_RoOriginateError@8=_RoOriginateError@8")
#pragma comment(linker, "/alternatename:_WINRT_RoUninitialize@0=_RoUninitialize@0")
#pragma comment(linker, "/alternatename:_WINRT_SetRestrictedErrorInfo@4=_SetRestrictedErrorInfo@4")
#else
#pragma comment(linker, "/alternatename:WINRT_GetRestrictedErrorInfo=GetRestrictedErrorInfo")
#pragma comment(linker, "/alternatename:WINRT_RoGetActivationFactory=RoGetActivationFactory")
#pragma comment(linker, "/alternatename:WINRT_RoInitialize=RoInitialize")
#pragma comment(linker, "/alternatename:WINRT_RoOriginateError=RoOriginateError")
#pragma comment(linker, "/alternatename:WINRT_RoUninitialize=RoUninitialize")
#pragma comment(linker, "/alternatename:WINRT_SetRestrictedErrorInfo=SetRestrictedErrorInfo")
#endif

#ifdef _DEBUG

#include <assert.h>

#define WINRT_DEBUG
#define WINRT_ASSERT assert
#define WINRT_VERIFY WINRT_ASSERT
#define WINRT_VERIFY_(result, expression) WINRT_ASSERT(result == expression)

template <typename ... Args>
void WINRT_TRACE(const char * const message, Args ... args) noexcept
{
    char buffer[1024] {};
    snprintf(buffer, sizeof(buffer), message, args ...);
    OutputDebugStringA(buffer);
}

#else

#define WINRT_ASSERT __noop
#define WINRT_VERIFY(expression) (expression)
#define WINRT_VERIFY_(result, expression) (expression)
#define WINRT_TRACE __noop

#endif

#ifndef WINRT_EXPORT
#define WINRT_EXPORT
#endif

#if defined(__clang__) || defined(__INTELLISENSE__)
#define WINRT_EBO
#else
#define WINRT_EBO __declspec(empty_bases)
#endif

#ifdef _WIN64
#define WINRT_64
#endif

#if defined(_MSC_VER) && _ITERATOR_DEBUG_LEVEL != 0
#define WINRT_CHECKED_ITERATORS
#endif

#ifndef FORMAT_MESSAGE_ALLOCATE_BUFFER
#define FORMAT_MESSAGE_ALLOCATE_BUFFER 0x00000100
#endif

#ifndef __IAgileReference_INTERFACE_DEFINED__
#define WINRT_NO_AGILE_REFERENCE
#endif

#if NTDDI_VERSION > NTDDI_WINBLUE

#define WINRT_NUMERICS
#define _WINDOWS_NUMERICS_NAMESPACE_ winrt::Windows::Foundation::Numerics
#define _WINDOWS_NUMERICS_BEGIN_NAMESPACE_ namespace winrt::Windows::Foundation::Numerics
#define _WINDOWS_NUMERICS_END_NAMESPACE_

#ifdef __clang__
#define _XM_NO_INTRINSICS_
#endif

// If this include fails it means that you're targeting an older platform version. Please use 10.0.14393.0 or later.
#include <WindowsNumerics.impl.h>

#ifdef __clang__
#undef _XM_NO_INTRINSICS_
#endif

#undef _WINDOWS_NUMERICS_NAMESPACE_
#undef _WINDOWS_NUMERICS_BEGIN_NAMESPACE_
#undef _WINDOWS_NUMERICS_END_NAMESPACE_

namespace winrt::ABI::Windows::Foundation::Numerics {

using float2 = winrt::Windows::Foundation::Numerics::float2;
using float3 = winrt::Windows::Foundation::Numerics::float3;
using float4 = winrt::Windows::Foundation::Numerics::float4;
using float3x2 = winrt::Windows::Foundation::Numerics::float3x2;
using float4x4 = winrt::Windows::Foundation::Numerics::float4x4;
using plane = winrt::Windows::Foundation::Numerics::plane;
using quaternion = winrt::Windows::Foundation::Numerics::quaternion;

}

#endif


WINRT_EXPORT namespace winrt {

namespace impl {

template <typename T>
struct traits
{
    using abi = T;
};

}

template <typename T>
using abi = typename impl::traits<T>::abi;

namespace impl {

template <typename T, typename Enable = void>
struct accessors
{
    static abi<T> get(const T & object) noexcept
    {
        return reinterpret_cast<const abi<T> &>(object);
    }

    static abi<T> * put(T & object) noexcept
    {
        return reinterpret_cast<abi<T> *>(&object);
    }

    static void copy_from(T & object, const abi<T> & value) noexcept
    {
        object = reinterpret_cast<const T &>(value);
    }

    static void copy_to(const T & object, abi<T> & value) noexcept
    {
        reinterpret_cast<T &>(value) = object;
    }

    static abi<T> detach(T & object) noexcept
    {
        abi<T> result {};
        reinterpret_cast<T &>(result) = std::move(object);
        return result;
    }
};

}

template <typename T>
auto get(const T & object) noexcept
{
    return impl::accessors<T>::get(object);
}

template <typename T>
auto put(T & object) noexcept
{
    return impl::accessors<T>::put(object);
}

template <typename T>
auto put_size(T & object) noexcept
{
    return impl::accessors<T>::put_size(object);
}

template <typename T, typename V>
void attach(T & object, V && value) noexcept
{
    impl::accessors<T>::attach(object, value);
}

template <typename T, typename V>
void copy_from(T & object, V && value)
{
    impl::accessors<T>::copy_from(object, value);
}

template <typename T, typename V>
void copy_to(const T & object, V & value)
{
    impl::accessors<T>::copy_to(object, value);
}

template <typename T>
auto detach(T & object)
{
    return impl::accessors<std::decay_t<T>>::detach(object);
}

template <typename T>
auto detach(T && object)
{
    return impl::accessors<T>::detach(object);
}

template <typename T>
struct handle_traits
{
    using type = T;

    constexpr static type invalid() noexcept
    {
        return nullptr;
    }

    // static void close(type value) noexcept;
};

template <typename T>
struct handle
{
    using type = typename T::type;

    handle() noexcept = default;

    handle(type value) noexcept :
        m_value(value)
    {}

    handle(handle && other) noexcept :
        m_value(detach(other))
    {}

    handle & operator=(handle && other) noexcept
    {
        if (this != &other)
        {
            attach(*this, detach(other));
        }

        return *this;
    }

    ~handle() noexcept
    {
        close();
    }

    void close() noexcept
    {
        if (*this)
        {
            T::close(m_value);
            m_value = T::invalid();
        }
    }

    explicit operator bool() const noexcept
    {
        return T::invalid() != m_value;
    }

    friend type impl_get(const handle & handle) noexcept
    {
        return handle.m_value;
    }

    friend type * impl_put(handle & handle) noexcept
    {
        WINRT_ASSERT(!handle);
        return &handle.m_value;
    }

    friend type impl_detach(handle & handle) noexcept
    {
        type value = handle.m_value;
        handle.m_value = T::invalid();
        return value;
    }

    friend void swap(handle & left, handle & right) noexcept
    {
        std::swap(left.m_value, right.m_value);
    }

private:

    type m_value = T::invalid();
};

template <typename T>
bool operator==(const handle<T> & left, const handle<T> & right) noexcept
{
    return get(left) == get(right);
}

template <typename T>
bool operator!=(const handle<T> & left, const handle<T> & right) noexcept
{
    return !(left == right);
}

template <typename T>
bool operator<(const handle<T> & left, const handle<T> & right) noexcept
{
    return get(left) < get(right);
}

template <typename T>
bool operator>(const handle<T> & left, const handle<T> & right) noexcept
{
    return right < left;
}

template <typename T>
bool operator<=(const handle<T> & left, const handle<T> & right) noexcept
{
    return !(right < left);
}

template <typename T>
bool operator>=(const handle<T> & left, const handle<T> & right) noexcept
{
    return !(left < right);
}

namespace impl {

template <typename T>
struct accessors<handle<T>>
{
    using type = typename handle<T>::type;

    static type get(const handle<T> & object) noexcept
    {
        return impl_get(object);
    }

    static type * put(handle<T> & object) noexcept
    {
        return impl_put(object);
    }

    static void attach(handle<T> & object, type value) noexcept
    {
        object.close();
        *put(object) = value;
    }

    static type detach(handle<T> & object) noexcept
    {
        return impl_detach(object);
    }
};

}

namespace impl {

template <typename Base, typename Derived>
constexpr bool is_base_of_v = std::is_base_of<Base, Derived>::value;

template<typename T, typename U>
constexpr bool is_same_v = std::is_same<T, U>::value;

}

namespace ABI {

template <typename T>
struct traits
{
    using default_interface = T;
};

template <typename T>
using default_interface = typename traits<T>::default_interface;

template <typename T>
using arg_in = std::conditional_t<impl::is_base_of_v< ::IUnknown, default_interface<T>>, default_interface<T> *, T>;

template <typename T>
using arg_out = std::conditional_t<impl::is_base_of_v< ::IUnknown, default_interface<T>>, default_interface<T> **, T *>;

}

namespace impl {

template <typename D, typename I = D>
using consume = typename traits<I>::template consume<D>;

template <typename D, typename I>
struct require_one : consume<D, I>
{
    operator I() const
    {
        return static_cast<const D *>(this)->template as<I>();
    }
};

template <typename D, typename ... I>
struct WINRT_EBO require : impl::require_one<D, I> ...
{};

template <typename D, typename I>
struct bases_one
{
    operator I() const
    {
        return static_cast<const D *>(this)->template as<I>();
    }
};

template <typename D, typename ... I>
struct WINRT_EBO bases : impl::bases_one<D, I> ...
{};

template <typename T>
class no_ref : public T
{
    unsigned long __stdcall AddRef() noexcept;
    unsigned long __stdcall Release() noexcept;
};

template <typename T>
struct not_specialized_type
{
    static constexpr bool value = false;
};

template <typename T>
struct not_specialized
{
    static_assert(not_specialized_type<T>::value, "This generic interface has not been specialized.");
};

}

template <typename T>
using abi_arg_in = ABI::arg_in<abi<T>>;

template <typename T>
using abi_arg_out = ABI::arg_out<abi<T>>;

template <typename T>
using abi_default_interface = ABI::default_interface<abi<T>>;

template <typename T>
auto ptr(::IUnknown * object) noexcept
{
    return static_cast<impl::no_ref<abi<T>> *>(object);
}

namespace Windows {

struct IUnknown;

}

template <typename T>
struct com_ptr
{
    using type = abi<T>;

    com_ptr(std::nullptr_t = nullptr) noexcept {}

    com_ptr(const com_ptr & other) noexcept :
        m_ptr(other.m_ptr)
    {
        addref();
    }

    template <typename U>
    com_ptr(const com_ptr<U> & other) noexcept :
        m_ptr(other.m_ptr)
    {
        addref();
    }

    template <typename U>
    com_ptr(com_ptr<U> && other) noexcept :
        m_ptr(other.m_ptr)
    {
        other.m_ptr = nullptr;
    }

    ~com_ptr() noexcept
    {
        release();
    }

    com_ptr & operator=(const com_ptr & other) noexcept
    {
        copy(other.m_ptr);
        return *this;
    }

    template <typename U>
    com_ptr & operator=(const com_ptr<U> & other) noexcept
    {
        copy(other.m_ptr);
        return *this;
    }

    template <typename U>
    com_ptr & operator=(com_ptr<U> && other) noexcept
    {
        if (m_ptr != other.m_ptr)
        {
            release();
            m_ptr = other.m_ptr;
            other.m_ptr = nullptr;
        }

        return *this;
    }

    explicit operator bool() const noexcept
    {
        return m_ptr != nullptr;
    }

    auto operator->() const noexcept
    {
        return static_cast<impl::no_ref<type> *>(m_ptr);
    }

    const T & operator *() const noexcept
    {
        return *m_ptr;
    }

    friend type * impl_get(const com_ptr & object) noexcept
    {
        return object.m_ptr;
    }

    friend type ** impl_put(com_ptr & object) noexcept
    {
        WINRT_ASSERT(object.m_ptr == nullptr);
        return &object.m_ptr;
    }

    friend type * impl_detach(com_ptr & object) noexcept
    {
        type * temp = object.m_ptr;
        object.m_ptr = nullptr;
        return temp;
    }

    friend void swap(com_ptr & left, com_ptr & right) noexcept
    {
        std::swap(left.m_ptr, right.m_ptr);
    }

    template <typename U>
    auto as() const
    {
        std::conditional_t<impl::is_base_of_v<Windows::IUnknown, U>, U, com_ptr<U>> temp = nullptr;
        check_hresult(m_ptr->QueryInterface(__uuidof(abi_default_interface<U>), reinterpret_cast<void **>(put(temp))));
        return temp;
    }

    template <typename U>
    auto try_as() const
    {
        std::conditional_t<impl::is_base_of_v<Windows::IUnknown, U>, U, com_ptr<U>> temp = nullptr;
        m_ptr->QueryInterface(__uuidof(abi_default_interface<U>), reinterpret_cast<void **>(put(temp)));
        return temp;
    }

    void copy_from(type * other) noexcept
    {
        copy(other);
    }

    void copy_to(type ** other) const noexcept
    {
        addref();
        *other = m_ptr;
    }

private:

    void copy(type * other) noexcept
    {
        if (m_ptr != other)
        {
            release();
            m_ptr = other;
            addref();
        }
    }

    void addref() const noexcept
    {
        if (m_ptr)
        {
            m_ptr->AddRef();
        }
    }

    void release() noexcept
    {
        type * temp = m_ptr;

        if (temp)
        {
            m_ptr = nullptr;
            temp->Release();
        }
    }

    template <typename U>
    friend struct com_ptr;

    type * m_ptr = nullptr;
};

namespace impl {

template <typename T>
struct accessors<com_ptr<T>>
{
    static auto get(const com_ptr<T> & object) noexcept
    {
        return impl_get(object);
    }

    static auto put(com_ptr<T> & object) noexcept
    {
        return impl_put(object);
    }

    static void attach(com_ptr<T> & object, abi<T> * value) noexcept
    {
        object = nullptr;
        *put(object) = value;
    }

    static auto detach(com_ptr<T> & object) noexcept
    {
        return impl_detach(object);
    }
};

}

template <typename T>
bool operator==(const com_ptr<T> & left, const com_ptr<T> & right) noexcept
{
    return get(left) == get(right);
}

template <typename T>
bool operator!=(const com_ptr<T> & left, const com_ptr<T> & right) noexcept
{
    return !(left == right);
}

template <typename T>
bool operator<(const com_ptr<T> & left, const com_ptr<T> & right) noexcept
{
    return get(left) < get(right);
}

template <typename T>
bool operator>(const com_ptr<T> & left, const com_ptr<T> & right) noexcept
{
    return right < left;
}

template <typename T>
bool operator<=(const com_ptr<T> & left, const com_ptr<T> & right) noexcept
{
    return !(right < left);
}

template <typename T>
bool operator>=(const com_ptr<T> & left, const com_ptr<T> & right) noexcept
{
    return !(left < right);
}

__forceinline void check_hresult(HRESULT result);

namespace impl {

inline HSTRING duplicate_string(HSTRING other)
{
    HSTRING result = nullptr;
    check_hresult(WindowsDuplicateString(other, &result));
    return result;
}

inline HSTRING create_string(const wchar_t * value, const uint32_t length)
{
    HSTRING result = nullptr;
    check_hresult(WindowsCreateString(value, length, &result));
    return result;
}

inline bool embedded_null(HSTRING value) noexcept
{
    BOOL result = 0;
    WINRT_VERIFY_(S_OK, WindowsStringHasEmbeddedNull(value, &result));
    return 0 != result;
}

struct hstring_traits : handle_traits<HSTRING>
{
    static void close(type value) noexcept
    {
        WINRT_VERIFY_(S_OK, WindowsDeleteString(value));
    }
};

}

struct hstring_ref;

struct hstring
{
    using value_type = wchar_t;
    using size_type = uint32_t;
    using const_reference = const value_type &;
    using const_pointer = const value_type *;
    using const_iterator = const_pointer;
    using const_reverse_iterator = std::reverse_iterator<const_iterator>;

    hstring() noexcept = default;
    hstring(const hstring & value);
    hstring & operator=(const hstring & value);
    hstring(hstring && value) noexcept;
    hstring & operator=(hstring && value) noexcept;

    hstring(const std::wstring & value);
    hstring(hstring_ref value);
    hstring(const wchar_t * value);
    hstring(const wchar_t * value, size_type size);

    void clear() noexcept;
    operator std::wstring() const;

    const_reference operator[](size_type pos) const noexcept;
    const_reference front() const noexcept;
    const_reference back() const noexcept;
    const_pointer data() const noexcept;
    const_pointer c_str() const noexcept;
    const_iterator begin() const noexcept;
    const_iterator cbegin() const noexcept;
    const_iterator end() const noexcept;
    const_iterator cend() const noexcept;
    const_reverse_iterator rbegin() const noexcept;
    const_reverse_iterator crbegin() const noexcept;
    const_reverse_iterator rend() const noexcept;
    const_reverse_iterator crend() const noexcept;
    bool empty() const noexcept;
    size_type size() const noexcept;

    friend HSTRING impl_get(const hstring & string) noexcept
    {
        return get(string.m_handle);
    }

    friend HSTRING * impl_put(hstring & string) noexcept
    {
        return put(string.m_handle);
    }

    friend HSTRING impl_detach(hstring & string) noexcept
    {
        return detach(string.m_handle);
    }

    friend void swap(hstring & left, hstring & right) noexcept
    {
        swap(left.m_handle, right.m_handle);
    }

private:

    handle<impl::hstring_traits> m_handle;
};

struct hstring_ref
{
    using value_type = wchar_t;
    using size_type = uint32_t;
    using const_reference = const value_type &;
    using const_pointer = const value_type *;
    using const_iterator = const_pointer;
    using const_reverse_iterator = std::reverse_iterator<const_iterator>;

    hstring_ref(const std::wstring & value) noexcept;
    hstring_ref(const hstring & value) noexcept;
    hstring_ref(const wchar_t * value) noexcept;
    explicit hstring_ref(HSTRING value) noexcept;

    operator std::wstring() const;

    const_reference operator[](size_type pos) const noexcept;
    const_reference front() const noexcept;
    const_reference back() const noexcept;
    const_pointer data() const noexcept;
    const_pointer c_str() const noexcept;
    const_iterator begin() const noexcept;
    const_iterator cbegin() const noexcept;
    const_iterator end() const noexcept;
    const_iterator cend() const noexcept;
    const_reverse_iterator rbegin() const noexcept;
    const_reverse_iterator crbegin() const noexcept;
    const_reverse_iterator rend() const noexcept;
    const_reverse_iterator crend() const noexcept;
    bool empty() const noexcept;
    size_type size() const noexcept;

    friend HSTRING impl_get(hstring_ref string) noexcept
    {
        return string.m_handle;
    }

private:

    hstring_ref(const wchar_t * value, size_type size) noexcept;

    HSTRING m_handle;
    HSTRING_HEADER m_header;
};

namespace impl {

template <> struct traits<hstring>
{
    using abi = HSTRING;
};

template <> struct accessors<hstring>
{
    static HSTRING get(const hstring & object) noexcept
    {
        return impl_get(object);
    }

    static HSTRING * put(hstring & object) noexcept
    {
        return impl_put(object);
    }

    static void attach(hstring & object, HSTRING value) noexcept
    {
        object.clear();
        *put(object) = value;
    }

    static void copy_from(hstring & object, HSTRING value)
    {
        attach(object, duplicate_string(value));
    }

    static void copy_to(const hstring & object, HSTRING & value)
    {
        WINRT_ASSERT(value == nullptr);
        value = duplicate_string(get(object));
    }

    static HSTRING detach(hstring & object) noexcept
    {
        return impl_detach(object);
    }
};

template <> struct accessors<hstring_ref>
{
    static HSTRING get(hstring_ref object) noexcept
    {
        return impl_get(object);
    }

    static HSTRING detach(hstring_ref object)
    {
        return duplicate_string(get(object));
    }
};

template <> struct accessors<const wchar_t *>
{
    static HSTRING detach(const wchar_t * const value)
    {
        return create_string(value, static_cast<uint32_t>(wcslen(value)));
    }
};

template <> struct accessors<std::wstring>
{
    static HSTRING detach(const std::wstring & value)
    {
        return create_string(value.c_str(), static_cast<uint32_t>(value.size()));
    }
};

}

inline bool embedded_null(hstring_ref value) noexcept
{
    return impl::embedded_null(get(value));
}

inline bool embedded_null(const hstring & value) noexcept
{
    return impl::embedded_null(get(value));
}

// TODO: this must be removed. The ABI projection should just use HSTRING directly.
namespace ABI { using hstring = HSTRING; }

inline hstring::hstring(const hstring & value) :
    m_handle(impl::duplicate_string(get(value.m_handle)))
{}

inline hstring & hstring::operator=(const hstring & value)
{
    m_handle = impl::duplicate_string(get(value.m_handle));
    return *this;
}

inline hstring::hstring(hstring && value) noexcept :
    m_handle(std::move(value.m_handle))
{}

inline hstring & hstring::operator=(hstring && value) noexcept
{
    m_handle = std::move(value.m_handle);
    return *this;
}

inline hstring::hstring(const std::wstring & value) :
    hstring(value.c_str(), static_cast<size_type>(value.size()))
{}

inline hstring::hstring(hstring_ref value) :
    m_handle(impl::duplicate_string(get(value)))
{}

inline hstring::hstring(const wchar_t * const value) :
    hstring(value, static_cast<size_type>(wcslen(value)))
{}

inline hstring::hstring(const wchar_t * const value, const size_type size) :
    m_handle(impl::create_string(value, size))
{}

inline void hstring::clear() noexcept
{
    m_handle.close();
}

inline hstring::operator std::wstring() const
{
    return std::wstring(begin(), end());
}

inline hstring::const_reference hstring::operator[](const size_type pos) const noexcept
{
    WINRT_ASSERT(pos < size());
    return *(begin() + pos);
}

inline hstring::const_reference hstring::front() const noexcept
{
    WINRT_ASSERT(!empty());
    return *begin();
}

inline hstring::const_reference hstring::back() const noexcept
{
    WINRT_ASSERT(!empty());
    return *(end() - 1);
}

inline hstring::const_pointer hstring::data() const noexcept
{
    return begin();
}

inline hstring::const_pointer hstring::c_str() const noexcept
{
    return begin();
}

inline hstring::const_iterator hstring::begin() const noexcept
{
    return WindowsGetStringRawBuffer(get(m_handle), nullptr);
}

inline hstring::const_iterator hstring::cbegin() const noexcept
{
    return begin();
}

inline hstring::const_iterator hstring::end() const noexcept
{
    uint32_t length = 0;
    const_pointer buffer = WindowsGetStringRawBuffer(get(m_handle), &length);
    return buffer + length;
}

inline hstring::const_iterator hstring::cend() const noexcept
{
    return end();
}

inline hstring::const_reverse_iterator hstring::rbegin() const noexcept
{
    return const_reverse_iterator(end());
}

inline hstring::const_reverse_iterator hstring::crbegin() const noexcept
{
    return rbegin();
}

inline hstring::const_reverse_iterator hstring::rend() const noexcept
{
    return const_reverse_iterator(begin());
}

inline hstring::const_reverse_iterator hstring::crend() const noexcept
{
    return rend();
}

inline bool hstring::empty() const noexcept
{
    return 0 == size();
}

inline hstring::size_type hstring::size() const noexcept
{
    return WindowsGetStringLen(get(m_handle));
}

inline hstring_ref::hstring_ref(const std::wstring & value) noexcept :
    hstring_ref(value.c_str(), static_cast<size_type>(value.size()))
{}

inline hstring_ref::hstring_ref(const hstring & value) noexcept :
    m_handle(get(value))
{}

inline hstring_ref::hstring_ref(const wchar_t * const value) noexcept :
    hstring_ref(value, static_cast<size_type>(wcslen(value)))
{}

inline hstring_ref::hstring_ref(const wchar_t * const value, const size_type size) noexcept
{
    WINRT_VERIFY_(S_OK, WindowsCreateStringReference(value, size, &m_header, &m_handle));
}

inline hstring_ref::hstring_ref(HSTRING value) noexcept :
    m_handle(value)
{}

inline hstring_ref::operator std::wstring() const
{
    return std::wstring(begin(), end());
}

inline hstring_ref::const_reference hstring_ref::operator[](const size_type pos) const noexcept
{
    WINRT_ASSERT(pos < size());
    return *(begin() + pos);
}

inline hstring_ref::const_reference hstring_ref::front() const noexcept
{
    WINRT_ASSERT(!empty());
    return *begin();
}

inline hstring_ref::const_reference hstring_ref::back() const noexcept
{
    WINRT_ASSERT(!empty());
    return *(end() - 1);
}

inline hstring_ref::const_pointer hstring_ref::data() const noexcept
{
    return begin();
}

inline hstring_ref::const_pointer hstring_ref::c_str() const noexcept
{
    return begin();
}

inline hstring_ref::const_iterator hstring_ref::begin() const noexcept
{
    return WindowsGetStringRawBuffer(m_handle, nullptr);
}

inline hstring_ref::const_iterator hstring_ref::cbegin() const noexcept
{
    return begin();
}

inline hstring_ref::const_iterator hstring_ref::end() const noexcept
{
    uint32_t length = 0;
    const_pointer buffer = WindowsGetStringRawBuffer(m_handle, &length);

    return buffer + length;
}

inline hstring_ref::const_iterator hstring_ref::cend() const noexcept
{
    return end();
}

inline hstring_ref::const_reverse_iterator hstring_ref::rbegin() const noexcept
{
    return const_reverse_iterator(end());
}

inline hstring_ref::const_reverse_iterator hstring_ref::crbegin() const noexcept
{
    return rbegin();
}

inline hstring_ref::const_reverse_iterator hstring_ref::rend() const noexcept
{
    return const_reverse_iterator(begin());
}

inline hstring_ref::const_reverse_iterator hstring_ref::crend() const noexcept
{
    return rend();
}

inline bool hstring_ref::empty() const noexcept
{
    return 0 == size();
}

inline hstring_ref::size_type hstring_ref::size() const noexcept
{
    return WindowsGetStringLen(m_handle);
}

inline bool operator==(hstring_ref left, hstring_ref right) noexcept
{
    return std::equal(left.begin(), left.end(), right.begin(), right.end());
}

inline bool operator==(hstring_ref left, const hstring & right) noexcept
{
    return std::equal(left.begin(), left.end(), right.begin(), right.end());
}

inline bool operator==(const hstring & left, hstring_ref right) noexcept
{
    return std::equal(left.begin(), left.end(), right.begin(), right.end());
}

inline bool operator==(const hstring & left, const hstring & right) noexcept
{
    return std::equal(left.begin(), left.end(), right.begin(), right.end());
}

inline bool operator==(hstring_ref left, const wchar_t * const right) noexcept
{
    return std::equal(left.begin(), left.end(), right, right + wcslen(right));
}

inline bool operator==(const wchar_t * const left, hstring_ref right) noexcept
{
    return std::equal(left, left + wcslen(left), right.begin(), right.end());
}

inline bool operator==(hstring_ref left, const std::wstring & right) noexcept
{
    return std::equal(left.begin(), left.end(), right.begin(), right.end());
}

inline bool operator==(const std::wstring & left, hstring_ref right) noexcept
{
    return std::equal(left.begin(), left.end(), right.begin(), right.end());
}

inline bool operator==(const hstring & left, const wchar_t * const right) noexcept
{
    return std::equal(left.begin(), left.end(), right, right + wcslen(right));
}

inline bool operator==(const wchar_t * const left, const hstring & right) noexcept
{
    return std::equal(left, left + wcslen(left), right.begin(), right.end());
}

inline bool operator==(const hstring & left, const std::wstring & right) noexcept
{
    return std::equal(left.begin(), left.end(), right.begin(), right.end());
}

inline bool operator==(const std::wstring & left, const hstring & right) noexcept
{
    return std::equal(left.begin(), left.end(), right.begin(), right.end());
}

inline bool operator<(hstring_ref left, hstring_ref right) noexcept
{
    return std::lexicographical_compare(left.begin(), left.end(), right.begin(), right.end());
}

inline bool operator<(hstring_ref left, const hstring & right) noexcept
{
    return std::lexicographical_compare(left.begin(), left.end(), right.begin(), right.end());
}

inline bool operator<(const hstring & left, hstring_ref right) noexcept
{
    return std::lexicographical_compare(left.begin(), left.end(), right.begin(), right.end());
}

inline bool operator<(const hstring & left, const hstring & right) noexcept
{
    return std::lexicographical_compare(left.begin(), left.end(), right.begin(), right.end());
}

inline bool operator<(hstring_ref left, const wchar_t * const right) noexcept
{
    return std::lexicographical_compare(left.begin(), left.end(), right, right + wcslen(right));
}

inline bool operator<(const wchar_t * const left, hstring_ref right) noexcept
{
    return std::lexicographical_compare(left, left + wcslen(left), right.begin(), right.end());
}

inline bool operator<(hstring_ref left, const std::wstring & right) noexcept
{
    return std::lexicographical_compare(left.begin(), left.end(), right.begin(), right.end());
}

inline bool operator<(const std::wstring & left, hstring_ref right) noexcept
{
    return std::lexicographical_compare(left.begin(), left.end(), right.begin(), right.end());
}

inline bool operator<(const hstring & left, const wchar_t * const right) noexcept
{
    return std::lexicographical_compare(left.begin(), left.end(), right, right + wcslen(right));
}

inline bool operator<(const wchar_t * const left, const hstring & right) noexcept
{
    return std::lexicographical_compare(left, left + wcslen(left), right.begin(), right.end());
}

inline bool operator<(const hstring & left, const std::wstring & right) noexcept
{
    return std::lexicographical_compare(left.begin(), left.end(), right.begin(), right.end());
}

inline bool operator<(const std::wstring & left, const hstring & right) noexcept
{
    return std::lexicographical_compare(left.begin(), left.end(), right.begin(), right.end());
}

inline bool operator!=(hstring_ref left, hstring_ref right) noexcept { return !(left == right); }
inline bool operator >(hstring_ref left, hstring_ref right) noexcept { return right < left; }
inline bool operator<=(hstring_ref left, hstring_ref right) noexcept { return !(right < left); }
inline bool operator>=(hstring_ref left, hstring_ref right) noexcept { return !(left < right); }

inline bool operator!=(hstring_ref left, const wchar_t * const right) noexcept { return !(left == right); }
inline bool operator >(hstring_ref left, const wchar_t * const right) noexcept { return right < left; }
inline bool operator<=(hstring_ref left, const wchar_t * const right) noexcept { return !(right < left); }
inline bool operator>=(hstring_ref left, const wchar_t * const right) noexcept { return !(left < right); }

inline bool operator!=(const wchar_t * const left, hstring_ref right) noexcept { return !(left == right); }
inline bool operator >(const wchar_t * const left, hstring_ref right) noexcept { return right < left; }
inline bool operator<=(const wchar_t * const left, hstring_ref right) noexcept { return !(right < left); }
inline bool operator>=(const wchar_t * const left, hstring_ref right) noexcept { return !(left < right); }

inline bool operator!=(hstring_ref left, const std::wstring & right) noexcept { return !(left == right); }
inline bool operator >(hstring_ref left, const std::wstring & right) noexcept { return right < left; }
inline bool operator<=(hstring_ref left, const std::wstring & right) noexcept { return !(right < left); }
inline bool operator>=(hstring_ref left, const std::wstring & right) noexcept { return !(left < right); }

inline bool operator!=(const std::wstring & left, hstring_ref right) noexcept { return !(left == right); }
inline bool operator >(const std::wstring & left, hstring_ref right) noexcept { return right < left; }
inline bool operator<=(const std::wstring & left, hstring_ref right) noexcept { return !(right < left); }
inline bool operator>=(const std::wstring & left, hstring_ref right) noexcept { return !(left < right); }

inline bool operator!=(hstring_ref left, const hstring & right) noexcept { return !(left == right); }
inline bool operator >(hstring_ref left, const hstring & right) noexcept { return right < left; }
inline bool operator<=(hstring_ref left, const hstring & right) noexcept { return !(right < left); }
inline bool operator>=(hstring_ref left, const hstring & right) noexcept { return !(left < right); }

inline bool operator!=(const hstring & left, hstring_ref right) noexcept { return !(left == right); }
inline bool operator >(const hstring & left, hstring_ref right) noexcept { return right < left; }
inline bool operator<=(const hstring & left, hstring_ref right) noexcept { return !(right < left); }
inline bool operator>=(const hstring & left, hstring_ref right) noexcept { return !(left < right); }

inline bool operator!=(const hstring & left, const hstring & right) noexcept { return !(left == right); }
inline bool operator >(const hstring & left, const hstring & right) noexcept { return right < left; }
inline bool operator<=(const hstring & left, const hstring & right) noexcept { return !(right < left); }
inline bool operator>=(const hstring & left, const hstring & right) noexcept { return !(left < right); }

inline bool operator!=(const hstring & left, const wchar_t * const right) noexcept { return !(left == right); }
inline bool operator >(const hstring & left, const wchar_t * const right) noexcept { return right < left; }
inline bool operator<=(const hstring & left, const wchar_t * const right) noexcept { return !(right < left); }
inline bool operator>=(const hstring & left, const wchar_t * const right) noexcept { return !(left < right); }

inline bool operator!=(const wchar_t * const left, const hstring & right) noexcept { return !(left == right); }
inline bool operator >(const wchar_t * const left, const hstring & right) noexcept { return right < left; }
inline bool operator<=(const wchar_t * const left, const hstring & right) noexcept { return !(right < left); }
inline bool operator>=(const wchar_t * const left, const hstring & right) noexcept { return !(left < right); }

inline bool operator!=(const hstring & left, const std::wstring & right) noexcept { return !(left == right); }
inline bool operator >(const hstring & left, const std::wstring & right) noexcept { return right < left; }
inline bool operator<=(const hstring & left, const std::wstring & right) noexcept { return !(right < left); }
inline bool operator>=(const hstring & left, const std::wstring & right) noexcept { return !(left < right); }

inline bool operator!=(const std::wstring & left, const hstring & right) noexcept { return !(left == right); }
inline bool operator >(const std::wstring & left, const hstring & right) noexcept { return right < left; }
inline bool operator<=(const std::wstring & left, const hstring & right) noexcept { return !(right < left); }
inline bool operator>=(const std::wstring & left, const hstring & right) noexcept { return !(left < right); }

namespace impl {

struct heap_traits : handle_traits<wchar_t *>
{
    static void close(type value) noexcept
    {
        WINRT_VERIFY(HeapFree(GetProcessHeap(), 0, value));
    }
};

struct bstr_traits : handle_traits<BSTR>
{
    static void close(type value) noexcept
    {
        SysFreeString(value);
    }
};

inline hstring trim_hresult_message(const wchar_t * const message, uint32_t size) noexcept
{
    const wchar_t * back = message + size - 1;

    while (size && isspace(*back))
    {
        --size;
        --back;
    }

    hstring result;
    WindowsCreateString(message, size, put(result));
    return result;
}

}

struct hresult_error
{
    struct from_abi_t {};
    static constexpr from_abi_t from_abi {};

    hresult_error() noexcept = default;

    explicit hresult_error(const HRESULT code) noexcept :
        m_code(code)
    {
        WINRT_RoOriginateError(code, nullptr);
        WINRT_GetRestrictedErrorInfo(put(m_info));
    }

    hresult_error(const HRESULT code, hstring_ref message) noexcept :
        m_code(code)
    {
        WINRT_RoOriginateError(code, get(message));
        WINRT_GetRestrictedErrorInfo(put(m_info));
    }

    hresult_error(const HRESULT code, from_abi_t) noexcept :
        m_code(code)
    {
        WINRT_GetRestrictedErrorInfo(put(m_info));
    }

    HRESULT code() const noexcept
    {
        return m_code;
    }

    hstring message() const noexcept
    {
        if (m_info)
        {
            handle<impl::bstr_traits> unused1;
            handle<impl::bstr_traits> unused2;

            HRESULT code = S_OK;
            handle<impl::bstr_traits> message;

            if (S_OK == m_info->GetErrorDetails(put(unused1), &code, put(message), put(unused2)))
            {
                if (code == m_code)
                {
                    return impl::trim_hresult_message(get(message), SysStringLen(get(message)));
                }
            }
        }

        handle<impl::heap_traits> message;

        const uint32_t size = FormatMessageW(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
                                             nullptr,
                                             m_code,
                                             MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
                                             reinterpret_cast<wchar_t *>(put(message)),
                                             0,
                                             nullptr);

        return impl::trim_hresult_message(get(message), size);
    }

    HRESULT to_abi() const noexcept
    {
        WINRT_TRACE("winrt::hresult_error (0x%8X) %ls\n", code(), message().c_str());

        if (m_info)
        {
            WINRT_SetRestrictedErrorInfo(get(m_info));
        }

        return m_code;
    }

private:

    HRESULT m_code = E_FAIL;
    com_ptr<IRestrictedErrorInfo> m_info;
};

[[noreturn]] inline void throw_last_error()
{
    throw hresult_error(HRESULT_FROM_WIN32(GetLastError()));
}

struct hresult_access_denied : hresult_error
{
    hresult_access_denied() : hresult_error(E_ACCESSDENIED) {}
    hresult_access_denied(hstring_ref message) : hresult_error(E_ACCESSDENIED, message) {}
    hresult_access_denied(from_abi_t) : hresult_error(E_ACCESSDENIED, from_abi) {}
};

struct hresult_wrong_thread : hresult_error
{
    hresult_wrong_thread() : hresult_error(RPC_E_WRONG_THREAD) {}
    hresult_wrong_thread(hstring_ref message) : hresult_error(RPC_E_WRONG_THREAD, message) {}
    hresult_wrong_thread(from_abi_t) : hresult_error(RPC_E_WRONG_THREAD, from_abi) {}
};

struct hresult_not_implemented : hresult_error
{
    hresult_not_implemented() : hresult_error(E_NOTIMPL) {}
    hresult_not_implemented(hstring_ref message) : hresult_error(E_NOTIMPL, message) {}
    hresult_not_implemented(from_abi_t) : hresult_error(E_NOTIMPL, from_abi) {}
};

struct hresult_invalid_argument : hresult_error
{
    hresult_invalid_argument() : hresult_error(E_INVALIDARG) {}
    hresult_invalid_argument(hstring_ref message) : hresult_error(E_INVALIDARG, message) {}
    hresult_invalid_argument(from_abi_t) : hresult_error(E_INVALIDARG, from_abi) {}
};

struct hresult_out_of_bounds : hresult_error
{
    hresult_out_of_bounds() : hresult_error(E_BOUNDS) {}
    hresult_out_of_bounds(hstring_ref message) : hresult_error(E_BOUNDS, message) {}
    hresult_out_of_bounds(from_abi_t) : hresult_error(E_BOUNDS, from_abi) {}
};

struct hresult_no_interface : hresult_error
{
    hresult_no_interface() : hresult_error(E_NOINTERFACE) {}
    hresult_no_interface(hstring_ref message) : hresult_error(E_NOINTERFACE, message) {}
    hresult_no_interface(from_abi_t) : hresult_error(E_NOINTERFACE, from_abi) {}
};

struct hresult_disconnected : hresult_error
{
    hresult_disconnected() : hresult_error(RPC_E_DISCONNECTED) {}
    hresult_disconnected(hstring_ref message) : hresult_error(RPC_E_DISCONNECTED, message) {}
    hresult_disconnected(from_abi_t) : hresult_error(RPC_E_DISCONNECTED, from_abi) {}
};

struct hresult_class_not_available : hresult_error
{
    hresult_class_not_available() : hresult_error(CLASS_E_CLASSNOTAVAILABLE) {}
    hresult_class_not_available(hstring_ref message) : hresult_error(CLASS_E_CLASSNOTAVAILABLE, message) {}
    hresult_class_not_available(from_abi_t) : hresult_error(CLASS_E_CLASSNOTAVAILABLE, from_abi) {}
};

struct hresult_changed_state : hresult_error
{
    hresult_changed_state() : hresult_error(E_CHANGED_STATE) {}
    hresult_changed_state(hstring_ref message) : hresult_error(E_CHANGED_STATE, message) {}
    hresult_changed_state(from_abi_t) : hresult_error(E_CHANGED_STATE, from_abi) {}
};

struct hresult_illegal_method_call : hresult_error
{
    hresult_illegal_method_call() : hresult_error(E_ILLEGAL_METHOD_CALL) {}
    hresult_illegal_method_call(hstring_ref message) : hresult_error(E_ILLEGAL_METHOD_CALL, message) {}
    hresult_illegal_method_call(from_abi_t) : hresult_error(E_ILLEGAL_METHOD_CALL, from_abi) {}
};

struct hresult_illegal_state_change : hresult_error
{
    hresult_illegal_state_change() : hresult_error(E_ILLEGAL_STATE_CHANGE) {}
    hresult_illegal_state_change(hstring_ref message) : hresult_error(E_ILLEGAL_STATE_CHANGE, message) {}
    hresult_illegal_state_change(from_abi_t) : hresult_error(E_ILLEGAL_STATE_CHANGE, from_abi) {}
};

struct hresult_illegal_delegate_assignment : hresult_error
{
    hresult_illegal_delegate_assignment() : hresult_error(E_ILLEGAL_DELEGATE_ASSIGNMENT) {}
    hresult_illegal_delegate_assignment(hstring_ref message) : hresult_error(E_ILLEGAL_DELEGATE_ASSIGNMENT, message) {}
    hresult_illegal_delegate_assignment(from_abi_t) : hresult_error(E_ILLEGAL_DELEGATE_ASSIGNMENT, from_abi) {}
};

struct hresult_canceled : hresult_error
{
    hresult_canceled() : hresult_error(HRESULT_FROM_WIN32(ERROR_CANCELLED)) {}
    hresult_canceled(hstring_ref message) : hresult_error(HRESULT_FROM_WIN32(ERROR_CANCELLED), message) {}
    hresult_canceled(from_abi_t) : hresult_error(HRESULT_FROM_WIN32(ERROR_CANCELLED), from_abi) {}
};
 
namespace impl {

[[noreturn]] inline __declspec(noinline) void throw_hresult(const HRESULT result)
{
    if (result == E_OUTOFMEMORY)
    {
        throw std::bad_alloc();
    }

    if (result == E_ACCESSDENIED)
    {
        throw hresult_access_denied(hresult_error::from_abi);
    }

    if (result == RPC_E_WRONG_THREAD)
    {
        throw hresult_wrong_thread(hresult_error::from_abi);
    }

    if (result == E_NOTIMPL)
    {
        throw hresult_not_implemented(hresult_error::from_abi);
    }

    if (result == E_INVALIDARG)
    {
        throw hresult_invalid_argument(hresult_error::from_abi);
    }

    if (result == E_BOUNDS)
    {
        throw hresult_out_of_bounds(hresult_error::from_abi);
    }

    if (result == E_NOINTERFACE)
    {
        throw hresult_no_interface(hresult_error::from_abi);
    }

    if (result == RPC_E_DISCONNECTED)
    {
        throw hresult_disconnected(hresult_error::from_abi);
    }

    if (result == CLASS_E_CLASSNOTAVAILABLE)
    {
        throw hresult_class_not_available(hresult_error::from_abi);
    }

    if (result == E_CHANGED_STATE)
    {
        throw hresult_changed_state(hresult_error::from_abi);
    }

    if (result == E_ILLEGAL_METHOD_CALL)
    {
        throw hresult_illegal_method_call(hresult_error::from_abi);
    }

    if (result == E_ILLEGAL_STATE_CHANGE)
    {
        throw hresult_illegal_state_change(hresult_error::from_abi);
    }

    if (result == E_ILLEGAL_DELEGATE_ASSIGNMENT)
    {
        throw hresult_illegal_delegate_assignment(hresult_error::from_abi);
    }

    if (result == HRESULT_FROM_WIN32(ERROR_CANCELLED))
    {
        throw hresult_canceled(hresult_error::from_abi);
    }

    throw hresult_error(result, hresult_error::from_abi);
}

inline __declspec(noinline) HRESULT to_hresult() noexcept
{
    HRESULT value = S_OK;

    try
    {
        throw;
    }
    catch (const hresult_error & e)
    {
        return e.to_abi();
    }
    catch (const std::bad_alloc &)
    {
        return E_OUTOFMEMORY;
    }
    catch (const std::out_of_range &)
    {
        value = E_BOUNDS;
    }
    catch (const std::invalid_argument &)
    {
        value = E_INVALIDARG;
    }
    catch (const std::exception &)
    {
        value = E_FAIL;
    }

    WINRT_RoOriginateError(value, nullptr);
    return value;
}

}

__forceinline void check_hresult(const HRESULT result)
{
    if (result != S_OK)
    {
        impl::throw_hresult(result);
    }
}

struct lock
{
    lock(const lock &) = delete;
    lock & operator=(const lock &) = delete;
    lock() noexcept = default;

    void enter() noexcept
    {
        AcquireSRWLockExclusive(&m_lock);
    }

    bool try_enter() noexcept
    {
        return 0 != TryAcquireSRWLockExclusive(&m_lock);
    }

    void exit() noexcept
    {
        ReleaseSRWLockExclusive(&m_lock);
    }

    PSRWLOCK get() noexcept
    {
        return &m_lock;
    }

private:

    SRWLOCK m_lock{};
};

struct lock_guard
{
    lock_guard(const lock_guard &) = delete;
    lock_guard & operator=(const lock_guard &) = delete;

    explicit lock_guard(lock & lock) noexcept :
        m_lock(lock)
    {
        m_lock.enter();
    }

    ~lock_guard() noexcept
    {
        m_lock.exit();
    }

private:

    lock & m_lock;
};

struct condition_variable
{
    condition_variable(condition_variable const &) = delete;
    condition_variable const & operator=(condition_variable const &) = delete;
    condition_variable() noexcept = default;

    template <typename T>
    void wait_while(lock & x, T predicate)
    {
        while (predicate())
        {
            WINRT_VERIFY(SleepConditionVariableSRW(&m_cv, x.get(), INFINITE, 0));
        }
    }

    void wake_one() noexcept
    {
        WakeConditionVariable(&m_cv);
    }

    void wake_all() noexcept
    {
        WakeAllConditionVariable(&m_cv);
    }

private:

    CONDITION_VARIABLE m_cv{};
};

namespace impl {

#ifdef WINRT_CHECKED_ITERATORS

template <typename T>
using array_iterator = stdext::checked_array_iterator<T *>;

template <typename T>
auto make_array_iterator(T * data, uint32_t size, uint32_t index = 0) noexcept
{
    return array_iterator<T>(data, size, index);
}

#else

template <typename T>
using array_iterator = T *;

template <typename T>
auto make_array_iterator(T * data, uint32_t, uint32_t index = 0) noexcept
{
    return data + index;
}

#endif

}

template <typename T>
struct array_ref
{
    using value_type = T;
    using size_type = uint32_t;
    using reference = value_type &;
    using const_reference = const value_type &;
    using pointer = value_type *;
    using const_pointer = const value_type *;
    using iterator = impl::array_iterator<value_type>;
    using const_iterator = impl::array_iterator<const value_type>;
    using reverse_iterator = std::reverse_iterator<iterator>;
    using const_reverse_iterator = std::reverse_iterator<const_iterator>;

    array_ref() noexcept = default;

    array_ref(pointer first, pointer last) noexcept :
        m_data(first),
        m_size(static_cast<size_type>(last - first))
    {}

    array_ref(std::initializer_list<value_type> value) noexcept :
        array_ref(value.begin(), static_cast<size_type>(value.size()))
    {}

    template <typename C, size_type N>
    array_ref(C(&value)[N]) noexcept :
        array_ref(value, N)
    {}

    template <typename C>
    array_ref(std::vector<C> & value) noexcept :
        array_ref(value.data(), static_cast<size_type>(value.size()))
    {}

    template <typename C>
    array_ref(const std::vector<C> & value) noexcept :
        array_ref(value.data(), static_cast<size_type>(value.size()))
    {}

    template <typename C, size_type N>
    array_ref(std::array<C, N> & value) noexcept :
        array_ref(value.data(), static_cast<size_type>(value.size()))
    {}

    template <typename C, size_type N>
    array_ref(const std::array<C, N> & value) noexcept :
        array_ref(value.data(), static_cast<size_type>(value.size()))
    {}

    reference operator[](const size_type pos) noexcept
    {
        WINRT_ASSERT(pos < size());
        return m_data[pos];
    }

    const_reference operator[](const size_type pos) const noexcept
    {
        WINRT_ASSERT(pos < size());
        return m_data[pos];
    }

    reference at(const size_type pos)
    {
        if (size() <= pos)
        {
            throw std::out_of_range("Invalid array subscript");
        }

        return m_data[pos];
    }

    const_reference at(const size_type pos) const
    {
        if (size() <= pos)
        {
            throw std::out_of_range("Invalid array subscript");
        }

        return m_data[pos];
    }

    reference front() noexcept
    {
        WINRT_ASSERT(m_size > 0);
        return *m_data;
    }

    const_reference front() const noexcept
    {
        WINRT_ASSERT(m_size > 0);
        return *m_data;
    }

    reference back() noexcept
    {
        WINRT_ASSERT(m_size > 0);
        return m_data[m_size - 1];
    }

    const_reference back() const noexcept
    {
        WINRT_ASSERT(m_size > 0);
        return m_data[m_size - 1];
    }

    pointer data() noexcept
    {
        return m_data;
    }

    const_pointer data() const noexcept
    {
        return m_data;
    }

    iterator begin() noexcept
    {
        return impl::make_array_iterator(m_data, m_size);
    }

    const_iterator begin() const noexcept
    {
        return impl::make_array_iterator<const value_type>(m_data, m_size);
    }

    const_iterator cbegin() const noexcept
    {
        return impl::make_array_iterator<const value_type>(m_data, m_size);
    }

    iterator end() noexcept
    {
        return impl::make_array_iterator(m_data, m_size, m_size);
    }

    const_iterator end() const noexcept
    {
        return impl::make_array_iterator<const value_type>(m_data, m_size, m_size);
    }

    const_iterator cend() const noexcept
    {
        return impl::make_array_iterator<const value_type>(m_data, m_size, m_size);
    }

    reverse_iterator rbegin() noexcept
    {
        return reverse_iterator(end());
    }

    const_reverse_iterator rbegin() const noexcept
    {
        return const_reverse_iterator(end());
    }

    const_reverse_iterator crbegin() const noexcept
    {
        return rbegin();
    }

    reverse_iterator rend() noexcept
    {
        return reverse_iterator(begin());
    }

    const_reverse_iterator rend() const noexcept
    {
        return const_reverse_iterator(begin());
    }

    const_reverse_iterator crend() const noexcept
    {
        return rend();
    }

    bool empty() const noexcept
    {
        return m_size == 0;
    }

    size_type size() const noexcept
    {
        return m_size;
    }

protected:

    array_ref(pointer data, uint32_t size) :
        m_data(data),
        m_size(size)
    {}

    pointer m_data = nullptr;
    uint32_t m_size = 0;
};

template <typename T>
struct com_array : array_ref<T>
{
    using typename array_ref<T>::value_type;
    using typename array_ref<T>::size_type;
    using typename array_ref<T>::reference;
    using typename array_ref<T>::const_reference;
    using typename array_ref<T>::pointer;
    using typename array_ref<T>::const_pointer;
    using typename array_ref<T>::iterator;
    using typename array_ref<T>::const_iterator;
    using typename array_ref<T>::reverse_iterator;
    using typename array_ref<T>::const_reverse_iterator;

    com_array(const com_array &) = delete;
    com_array & operator=(const com_array &) = delete;

    com_array() noexcept = default;

    explicit com_array(const size_type count) :
        com_array(count, value_type())
    {}

    com_array(const size_type count, const value_type & value)
    {
        alloc(count);
        std::uninitialized_fill_n(this->m_data, count, value);
    }

    template <typename InIt> com_array(InIt first, InIt last)
    {
        alloc(static_cast<size_type>(std::distance(first, last)));
        std::uninitialized_copy(first, last, this->begin());
    }

    explicit com_array(const std::vector<value_type> & value) :
        com_array(value.begin(), value.end())
    {}

    template <size_type N>
    explicit com_array(const std::array<value_type, N> & value) :
        com_array(value.begin(), value.end())
    {}

    template <size_type N>
    explicit com_array(const value_type (&value)[N]) :
        com_array(value, value + N)
    {}

    com_array(std::initializer_list<value_type> value) :
        com_array(value.begin(), value.end())
    {}

    com_array(com_array && other) noexcept :
        array_ref<T>(other.m_data, other.m_size)
    {
        other.m_data = nullptr;
        other.m_size = 0;
    }

    com_array & operator=(com_array && other) noexcept
    {
        this->m_data = other.m_data;
        this->m_size = other.m_size;
        other.m_data = nullptr;
        other.m_size = 0;
        return *this;
    }

    ~com_array() noexcept
    {
        clear();
    }

    void clear() noexcept
    {
        if (this->m_data)
        {
            destruct(std::is_trivially_destructible<value_type>());
            CoTaskMemFree(this->m_data);
            this->m_data = nullptr;
            this->m_size = 0;
        }
    }

    friend abi_arg_out<T> * impl_put(com_array & value) noexcept
    {
        WINRT_ASSERT(!value.m_data);
        return reinterpret_cast<abi_arg_out<T> *>(&value.m_data);
    }

    friend auto impl_data(com_array & value) noexcept
    {
        return value.m_data;
    }

    friend void impl_put_size(com_array & value, const uint32_t size) noexcept
    {
        WINRT_ASSERT(value.m_data || (!value.m_data && size == 0));
        value.m_size = size;
    }

    friend auto impl_detach(com_array & value) noexcept
    {
        std::pair<uint32_t, abi_arg_in<T> *> result(value.size(), *reinterpret_cast<abi_arg_in<T> **>(&value));
        value.m_data = nullptr;
        value.m_size = 0;
        return result;
    }

    friend void swap(com_array & left, com_array & right) noexcept
    {
        std::swap(left.m_data, right.m_data);
        std::swap(left.m_size, right.m_size);
    }

private:

    void alloc(const size_type size)
    {
        WINRT_ASSERT(this->empty());

        if (0 != size)
        {
            this->m_data = static_cast<value_type *>(CoTaskMemAlloc(size * sizeof(value_type)));

            if (this->m_data == nullptr)
            {
                throw std::bad_alloc();
            }

            this->m_size = size;
        }
    }

    void destruct(std::true_type) noexcept
    {}

    void destruct(std::false_type) noexcept
    {
        for (value_type & v : *this)
        {
            v.~value_type();
        }
    }
};

template <typename T>
bool operator==(const array_ref<T> & left, const array_ref<T> & right) noexcept
{
    return std::equal(left.begin(), left.end(), right.begin(), right.end());
}

template <typename T>
bool operator<(const array_ref<T> & left, const array_ref<T> & right) noexcept
{
    return std::lexicographical_compare(left.begin(), left.end(), right.begin(), right.end());
}

template <typename T> bool operator!=(const array_ref<T> & left, const array_ref<T> & right) noexcept { return !(left == right); }
template <typename T> bool operator>(const array_ref<T> & left, const array_ref<T> & right) noexcept { return right < left; }
template <typename T> bool operator<=(const array_ref<T> & left, const array_ref<T> & right) noexcept { return !(right < left); }
template <typename T> bool operator>=(const array_ref<T> & left, const array_ref<T> & right) noexcept { return !(left < right); }

namespace impl {

template <typename T>
struct array_size_proxy
{
    array_size_proxy & operator=(const array_size_proxy &) = delete;

    array_size_proxy(com_array<T> & value) noexcept :
        m_value(value)
    {}

    ~array_size_proxy() noexcept
    {
        impl_put_size(m_value, m_size);
    }

    operator uint32_t * () noexcept
    {
        return &m_size;
    }

    operator unsigned long * () noexcept
    {
        return reinterpret_cast<unsigned long *>(&m_size);
    }

private:

    com_array<T> & m_value;
    uint32_t m_size = 0;
};

template <typename T>
struct com_array_proxy
{
    com_array_proxy(uint32_t * size, abi_arg_out<T> * value) noexcept :
        m_size(size),
        m_value(value)
    {}

    ~com_array_proxy() noexcept
    {
        std::tie(*m_size, *m_value) = impl_detach(m_temp);
    }

    operator com_array<T> &() noexcept
    {
        return m_temp;
    }

    com_array_proxy(const com_array_proxy &) noexcept
    {
        WINRT_ASSERT(false);
    }

    com_array_proxy & operator=(const com_array_proxy &) noexcept
    {
        WINRT_ASSERT(false);
        return *this;
    }

private:

    uint32_t * m_size;
    abi_arg_out<T> * m_value;
    com_array<T> m_temp;
};

template <typename T>
struct accessors<com_array<T>>
{
    static auto put(com_array<T> & object) noexcept
    {
        return impl_put(object);
    }

    static array_size_proxy<T> put_size(com_array<T> & object) noexcept
    {
        return array_size_proxy<T>(object);
    }

    static auto detach(com_array<T> & object) noexcept
    {
        return impl_detach(object);
    }

    static auto data(com_array<T> & object) noexcept
    {
        return impl_data(object);
    }
};

template <typename T>
struct accessors<array_ref<T>>
{
    static auto get(array_ref<T> object) noexcept
    {
        return reinterpret_cast<abi_arg_out<std::remove_const_t<T>>>(const_cast<std::remove_const_t<T> *>(object.data()));
    }
};

}

template <typename T>
auto detach(uint32_t * __valueSize, abi_arg_out<T> * value) noexcept
{
    return impl::com_array_proxy<T>(__valueSize, value);
}

namespace Windows {

enum class TrustLevel
{
    BaseTrust,
    PartialTrust,
    FullTrust,
};

}

namespace ABI::Windows {

struct __declspec(uuid("af86e2e0-b12d-4c6a-9c5a-d7aa65101e90")) __declspec(novtable) IInspectable : IUnknown
{
    virtual HRESULT __stdcall abi_GetIids(uint32_t * iidCount, GUID ** iids) = 0;
    virtual HRESULT __stdcall abi_GetRuntimeClassName(HSTRING * className) = 0;
    virtual HRESULT __stdcall abi_GetTrustLevel(winrt::Windows::TrustLevel * trustLevel) = 0;
};

}

namespace Windows {

struct IUnknown
{
    IUnknown() noexcept = default;
    IUnknown(std::nullptr_t) noexcept {}
    void * operator new(size_t) = delete;

    IUnknown(const IUnknown & other) noexcept :
        m_ptr(other.m_ptr)
    {
        impl_addref();
    }

    IUnknown(IUnknown && other) noexcept :
        m_ptr(other.m_ptr)
    {
        other.m_ptr = nullptr;
    }

    ~IUnknown() noexcept
    {
        impl_release();
    }

    IUnknown & operator=(const IUnknown & other) noexcept
    {
        impl_copy(other);
        return *this;
    }

    IUnknown & operator=(IUnknown && other) noexcept
    {
        impl_move(std::forward<IUnknown>(other));
        return *this;
    }

    explicit operator bool() const noexcept
    {
        return nullptr != m_ptr;
    }

    auto operator->() const noexcept
    {
        return static_cast<impl::no_ref< ::IUnknown> *>(m_ptr);
    }

    IUnknown & operator=(std::nullptr_t) noexcept
    {
        impl_release();
        return *this;
    }

    template <typename U>
    auto as() const
    {
        std::conditional_t<impl::is_base_of_v<IUnknown, U>, U, com_ptr<U>> temp = nullptr;
        check_hresult(m_ptr->QueryInterface(__uuidof(abi_default_interface<U>), reinterpret_cast<void **>(put(temp))));
        return temp;
    }

    template <typename U>
    auto try_as() const
    {
        std::conditional_t<impl::is_base_of_v<IUnknown, U>, U, com_ptr<U>> temp = nullptr;
        m_ptr->QueryInterface(__uuidof(abi_default_interface<U>), reinterpret_cast<void **>(put(temp)));
        return temp;
    }

    friend auto impl_get(const IUnknown & object) noexcept
    {
        return object.m_ptr;
    }

    friend auto impl_put(IUnknown & object) noexcept
    {
        WINRT_ASSERT(!object);
        return &object.m_ptr;
    }

    friend auto impl_detach(IUnknown & object) noexcept
    {
        auto temp = object.m_ptr;
        object.m_ptr = nullptr;
        return temp;
    }

    friend void swap(IUnknown & left, IUnknown & right) noexcept
    {
        std::swap(left.m_ptr, right.m_ptr);
    }

protected:

    void impl_copy(::IUnknown * other) noexcept
    {
        if (m_ptr != other)
        {
            impl_release();
            m_ptr = other;
            impl_addref();
        }
    }

    void impl_copy(const IUnknown & other) noexcept
    {
        if (this != &other)
        {
            impl_release();
            m_ptr = other.m_ptr;
            impl_addref();
        }
    }

    void impl_move(IUnknown && other) noexcept
    {
        if (this != &other)
        {
            impl_release();
            m_ptr = other.m_ptr;
            other.m_ptr = nullptr;
        }
    }

    ::IUnknown * m_ptr = nullptr;

private:

    void impl_addref() const noexcept
    {
        if (m_ptr)
        {
            m_ptr->AddRef();
        }
    }

    void impl_release() noexcept
    {
        auto temp = m_ptr;

        if (temp)
        {
            m_ptr = nullptr;
            temp->Release();
        }
    }
};

}

namespace impl {

template <> struct traits<Windows::IUnknown>
{
    using abi = ::IUnknown;
};

template <typename T>
struct accessors<T, std::enable_if_t<std::is_base_of<Windows::IUnknown, T>::value>>
{
    static auto get(const T & object) noexcept
    {
        return static_cast<abi_arg_in<T>>(impl_get(object));
    }

    static auto put(T & object) noexcept
    {
        return reinterpret_cast<abi_arg_out<T>>(impl_put(object));
    }

    static void attach(T & object, abi_arg_in<T> value) noexcept
    {
        object = nullptr;
        *put(object) = value;
    }

    static void copy_from(T & object, abi_arg_in<T> value) noexcept
    {
        object = nullptr;

        if (value)
        {
            value->AddRef();
            *put(object) = value;
        }
    }

    template <typename V>
    static void copy_to(const T & object, V & value) noexcept
    {
        if (object)
        {
            value = get(object);
            value->AddRef();
        }
        else
        {
            value = nullptr;
        }
    }

    static auto detach(T & object) noexcept
    {
        return static_cast<abi_arg_in<T>>(impl_detach(object));
    }
};

}

namespace Windows {

inline bool operator==(const IUnknown & left, const IUnknown & right) noexcept
{
    return get(left) == get(right);
}

inline bool operator!=(const IUnknown & left, const IUnknown & right) noexcept
{
    return !(left == right);
}

inline bool operator<(const IUnknown & left, const IUnknown & right) noexcept
{
    return get(left) < get(right);
}

inline bool operator>(const IUnknown & left, const IUnknown & right) noexcept
{
    return right < left;
}

inline bool operator<=(const IUnknown & left, const IUnknown & right) noexcept
{
    return !(right < left);
}

inline bool operator>=(const IUnknown & left, const IUnknown & right) noexcept
{
    return !(left < right);
}

}

namespace Windows {

struct IInspectable;

}

namespace impl {

template <> struct traits<Windows::IInspectable>
{
    using abi = ABI::Windows::IInspectable;
};

}

namespace Windows {

struct IInspectable : IUnknown
{
    IInspectable(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInspectable>(m_ptr); }
};

inline com_array<GUID> GetIids(const IInspectable & object)
{
    com_array<GUID> value;
    check_hresult(object->abi_GetIids(put_size(value), put(value)));
    return value;
}

inline hstring GetRuntimeClassName(const IInspectable & object)
{
    hstring value;
    check_hresult(object->abi_GetRuntimeClassName(put(value)));
    return value;
}

inline TrustLevel GetTrustLevel(const IInspectable & object)
{
    Windows::TrustLevel value{};
    check_hresult(object->abi_GetTrustLevel(&value));
    return value;
}

}

namespace impl {

template <typename T, std::enable_if_t<!std::is_base_of<Windows::IUnknown, T>::value> * = nullptr>
T empty_value()
{
    return {};
}

template <typename T, std::enable_if_t<std::is_base_of<Windows::IUnknown, T>::value> * = nullptr>
T empty_value()
{
    return nullptr;
}

}

struct non_agile {};

template <typename Interface>
struct cloaked : Interface {};

namespace impl {

template <typename T>
struct uncloak
{
    using type = T;
};

template <typename T>
struct uncloak<cloaked<T>>
{
    using type = T;
};

template <typename T>
using uncloak_t = typename uncloak<T>::type;

template <typename I>
struct is_cloaked : std::conditional_t<is_base_of_v<ABI::Windows::IInspectable, abi<I>>, std::false_type, std::true_type> {};

template <typename I>
struct is_cloaked<cloaked<I>> : std::true_type {};

template <typename I>
constexpr bool is_cloaked_v = is_cloaked<I>::value;

template <typename ... I>
struct first_interface
{
    using type = void;
};

template <typename First, typename ... Rest>
struct first_interface<First, Rest ...>
{
    using type = std::conditional_t<std::is_same<non_agile, First>::value, typename first_interface<Rest ...>::type, First>;
};

template <typename D, typename I>
struct produce;

template <typename D, typename I, typename Enable = void>
struct producer;

template <typename T>
class has_composable
{
    template <typename U> static constexpr bool get_value(typename U::composable *) { return true; }
    template <typename>   static constexpr bool get_value(...) { return false; }

public:

    static constexpr bool value = get_value<T>(0);
};

template <typename T>
void clear_abi(T *) noexcept
{}

template <typename T>
void clear_abi(T ** value) noexcept
{
    *value = nullptr;
}

}

template <typename D, typename I>
D * to_impl(const I & from) noexcept
{
    return &static_cast<impl::produce<D, I> *>(get(from))->shim();
}

template <typename I, typename D, std::enable_if_t<std::is_base_of<Windows::IUnknown, I>::value> * = nullptr>
abi<I> * to_abi(impl::producer<D, I> const * from) noexcept
{
    return reinterpret_cast<abi<I> *>(const_cast<impl::producer<D, I> *>(from));
}

template <typename I, typename D, std::enable_if_t<std::is_base_of< ::IUnknown, I>::value> * = nullptr>
abi<I> * to_abi(impl::producer<D, I> const * from) noexcept
{
    return const_cast<impl::producer<D, I> *>(from);
}

template <typename D, typename I = typename D::first_interface, typename ... Args, std::enable_if_t<!impl::has_composable<D>::value> * = nullptr>
auto make(Args && ... args)
{
    std::conditional_t<impl::is_base_of_v<Windows::IUnknown, I>, I, com_ptr<I>> instance = nullptr;
    *put(instance) = to_abi<I>(new D(std::forward<Args>(args) ...));
    return instance;
}

template <typename D, typename I = typename D::first_interface, typename ... Args, std::enable_if_t<impl::has_composable<D>::value> * = nullptr>
auto make(Args && ... args)
{
    com_ptr<I> instance;
    *put(instance) = new D(std::forward<Args>(args) ...);
    return instance.template as<typename D::composable>();
}

template <typename D, typename ... Args>
auto make_self(Args && ... args)
{
    com_ptr<D> instance;
    *put(instance) = new D(std::forward<Args>(args) ...);
    return instance;
}

namespace impl {

template <typename D, typename I, typename H>
auto make_delegate(H && handler)
{
    I instance = nullptr;
    *put(instance) = to_abi<abi<I>>(new D(std::forward<H>(handler)));
    return instance;
}

template <typename D, typename I, typename Enable>
struct producer
{
    operator I() const noexcept
    {
        I result = nullptr;
        copy_from(result, const_cast<produce<D, I> *>(&vtable));
        return result;
    }

private:

    produce<D, I> vtable;
};

template <typename D, typename I>
struct produce_base : abi<I>
{
    D & shim() noexcept
    {
        return *static_cast<D *>(reinterpret_cast<producer<D, I> *>(this));
    }

    HRESULT __stdcall QueryInterface(const GUID & id, void ** object) noexcept override
    {
        return shim().QueryInterface(id, object);
    }

    unsigned long __stdcall AddRef() noexcept override
    {
        return shim().AddRef();
    }

    unsigned long __stdcall Release() noexcept override
    {
        return shim().Release();
    }

    HRESULT __stdcall abi_GetIids(uint32_t * count, GUID ** array) noexcept override
    {
        return shim().abi_GetIids(count, array);
    }

    HRESULT __stdcall abi_GetRuntimeClassName(HSTRING * name) noexcept override
    {
        return shim().abi_GetRuntimeClassName(name);
    }

    HRESULT __stdcall abi_GetTrustLevel(Windows::TrustLevel * trustLevel) noexcept override
    {
        return shim().abi_GetTrustLevel(trustLevel);
    }
};

template <typename D, typename I>
struct producer<D, I, std::enable_if_t<std::is_base_of< ::IUnknown, I>::value>> : abi<I>
{};

template <typename D>
struct producer<D, non_agile>
{};

template <typename D>
struct produce<D, Windows::IInspectable> : produce_base<D, Windows::IInspectable>
{};

}

template <typename D, typename ... I>
struct implements : impl::producer<D, impl::uncloak_t<I>> ...
{
    using first_interface = typename impl::first_interface<impl::uncloak_t<I> ...>::type;
    using IInspectable = Windows::IInspectable;

    operator IInspectable() const noexcept
    {
        IInspectable result;
        copy_from(result, find_inspectable<I ...>());
        return result;
    }

    HRESULT __stdcall QueryInterface(const GUID & id, void ** object) noexcept
    {
        *object = find_interface<impl::uncloak_t<I> ...>(id);

        if (*object == nullptr)
        {
            if (id == __uuidof(::IUnknown))
            {
                *object = get_unknown();
            }
            else if (is_inspectable<I ...>() && id == __uuidof(ABI::Windows::IInspectable))
            {
                *object = find_inspectable<I ...>();
            }
            else if (!is_non_agile<I ...>())
            {
                if (id == __uuidof(IAgileObject))
                {
                    *object = get_unknown();
                }
                else if (id == __uuidof(IMarshal))
                {
                    com_ptr< ::IUnknown> marshaler;

                    const HRESULT hr = CoCreateFreeThreadedMarshaler(get_unknown(),
                                                                     put(marshaler));

                    if (hr != S_OK)
                    {
                        return hr;
                    }

                    return marshaler->QueryInterface(id, object);
                }
            }

            if (*object == nullptr)
            {
                return E_NOINTERFACE;
            }
        }

        static_cast< ::IUnknown *>(*object)->AddRef();
        return S_OK;
    }

    unsigned long __stdcall AddRef() noexcept
    {
        return 1 + m_references.fetch_add(1, std::memory_order_relaxed);
    }

    unsigned long __stdcall Release() noexcept
    {
        const uint32_t remaining = m_references.fetch_sub(1, std::memory_order_release) - 1;

        if (remaining == 0)
        {
            std::atomic_thread_fence(std::memory_order_acquire);
            delete static_cast<D *>(this);
        }

        return remaining;
    }

protected:

    std::atomic<uint32_t> m_references{ 1 };

    implements(uint32_t references = 1) :
        m_references(references)
    {}

    HRESULT __stdcall abi_GetIids(uint32_t * count, GUID ** array) noexcept
    {
        *count = uncloaked_interfaces<I ...>();

        if (*count == 0)
        {
            *array = nullptr;
            return S_OK;
        }

        *array = static_cast<GUID *>(CoTaskMemAlloc(sizeof(GUID) * *count));

        if (*array == nullptr)
        {
            return E_OUTOFMEMORY;
        }

        copy_guids<I ...>(*array);
        return S_OK;
    }

    HRESULT __stdcall abi_GetRuntimeClassName(HSTRING * name) noexcept
    {
        try
        {
            *name = detach(static_cast<D *>(this)->GetRuntimeClassName());
            return S_OK;
        }
        catch (...) { return impl::to_hresult(); }
    }

    HRESULT __stdcall abi_GetTrustLevel(Windows::TrustLevel * trustLevel) noexcept
    {
        try
        {
            *trustLevel = static_cast<D *>(this)->GetTrustLevel();
            return S_OK;
        }
        catch (...) { return impl::to_hresult(); }
    }

private:

    template <int = 0>
    static constexpr uint32_t uncloaked_interfaces() noexcept
    {
        return 0;
    }

    template <typename First, typename ... Rest>
    static constexpr uint32_t uncloaked_interfaces() noexcept
    {
        return !impl::is_cloaked_v<First> + uncloaked_interfaces<Rest ...>();
    }

    template <int = 0>
    void copy_guids(GUID *) const noexcept
    {
    }

    template <typename First, typename ... Rest>
    void copy_guids(GUID * ids, std::enable_if_t<impl::is_cloaked_v<First>> * = nullptr) const noexcept
    {
        copy_guids<Rest ...>(ids);
    }

    template <typename First, typename ... Rest>
    void copy_guids(GUID * ids, std::enable_if_t<!impl::is_cloaked_v<First>> * = nullptr) const noexcept
    {
        *ids++ = __uuidof(abi<First>);
        copy_guids<Rest ...>(ids);
    }

    template <int = 0>
    static constexpr bool is_inspectable() noexcept
    {
        return false;
    }

    template <typename First, typename ... Rest>
    static constexpr bool is_inspectable() noexcept
    {
        return impl::is_base_of_v<ABI::Windows::IInspectable, abi<First>> || is_inspectable<Rest ...>();
    }

    template <int = 0>
    static constexpr bool is_non_agile() noexcept
    {
        return false;
    }

    template <typename First, typename ... Rest>
    static constexpr bool is_non_agile() noexcept
    {
        return impl::is_same_v<non_agile, First> || is_non_agile<Rest ...>();
    }

    template <int = 0>
    ABI::Windows::IInspectable * find_inspectable() const noexcept
    {
        return nullptr;
    }

    template <typename First, typename ... Rest>
    ABI::Windows::IInspectable * find_inspectable(std::enable_if_t<impl::is_base_of_v<ABI::Windows::IInspectable, abi<First>>> * = nullptr) const noexcept
    {
        return to_abi<First>(this);
    }

    template <typename First, typename ... Rest>
    ABI::Windows::IInspectable * find_inspectable(std::enable_if_t<!impl::is_base_of_v<ABI::Windows::IInspectable, abi<First>>> * = nullptr) const noexcept
    {
        return find_inspectable<Rest ...>();
    }

    template <int = 0>
    void * find_interface(const GUID &) const noexcept
    {
        return nullptr;
    }

    template <typename First, typename ... Rest>
    void * find_interface(const GUID & id, std::enable_if_t<impl::is_same_v<non_agile, First>> * = nullptr) const noexcept
    {
        return find_interface<Rest ...>(id);
    }

    template <typename First, typename ... Rest>
    void * find_interface(const GUID & id, std::enable_if_t<!impl::is_same_v<non_agile, First>> * = nullptr) const noexcept
    {
        if (id == __uuidof(abi<First>))
        {
            return to_abi<First>(this);
        }

        return find_interface<Rest ...>(id);
    }

    ::IUnknown * get_unknown() const noexcept
    {
        return to_abi<first_interface>(this);
    }

    hstring GetRuntimeClassName() const
    {
        throw hresult_not_implemented();
    }

    Windows::TrustLevel GetTrustLevel() const noexcept
    {
        return Windows::TrustLevel::BaseTrust;
    }

    template <typename D, typename I>
    friend struct impl::produce_base;
};

namespace ABI::Windows {

struct __declspec(uuid("00000037-0000-0000-C000-000000000046")) __declspec(novtable) IWeakReference : IUnknown
{
    virtual HRESULT __stdcall abi_Resolve(const GUID & iid, IInspectable ** objectReference) = 0;

    template <typename Qi> HRESULT __stdcall abi_Resolve(Qi ** objectReference) noexcept
    {
        return abi_Resolve(__uuidof(Qi), reinterpret_cast<IInspectable **>(objectReference));
    }
};

struct __declspec(uuid("00000038-0000-0000-C000-000000000046")) __declspec(novtable) IWeakReferenceSource : IUnknown
{
    virtual HRESULT __stdcall abi_GetWeakReference(IWeakReference ** weakReference) = 0;
};

}

template <typename T>
struct weak_ref
{
    weak_ref(std::nullptr_t = nullptr) noexcept {}

    weak_ref(const T & object)
    {
        check_hresult(object.template as<ABI::Windows::IWeakReferenceSource>()->abi_GetWeakReference(put(m_ref)));
    }

    T get() const noexcept
    {
        T object = nullptr;
        m_ref->abi_Resolve(put(object));
        return object;
    }

    explicit operator bool() const noexcept
    {
        return static_cast<bool>(m_ref);
    }

private:

    com_ptr<ABI::Windows::IWeakReference> m_ref;
};

template <typename T>
weak_ref<T> make_weak(T const & object)
{
    return object;
}

template <typename D, typename ... R>
struct overrides : implements<D, R ...>
{
    template <typename Qi>
    Qi as() const
    {
        return m_inner.as<Qi>();
    }

    HRESULT __stdcall QueryInterface(const GUID & id, void ** object) noexcept
    {
        HRESULT result = implements<D, R ...>::QueryInterface(id, object);

        if (result == E_NOINTERFACE)
        {
            result = m_inner->QueryInterface(id, object);
        }

        return result;
    }

protected:

    Windows::IInspectable m_inner;
};

struct event_token
{
    int64_t value;
};

struct auto_revoke_t {};
constexpr auto_revoke_t auto_revoke {};

template <typename I>
struct event_revoker
{
    using method_type = HRESULT(__stdcall abi<I>::*)(event_token);

    event_revoker() noexcept = default;
    event_revoker(const event_revoker &) = delete;
    event_revoker & operator=(const event_revoker &) = delete;
    event_revoker(event_revoker &&) = default;
    event_revoker & operator=(event_revoker &&) = default;

    event_revoker(const I & object, method_type method, event_token token) :
        m_object(object),
        m_method(method),
        m_token(token)
    {}

    ~event_revoker() noexcept
    {
        revoke();
    }

    void revoke() noexcept
    {
        if (!m_object)
        {
            return;
        }

        if (I object = m_object.get())
        {
            ((*get(object)).*(m_method))(m_token);
        }

        m_object = nullptr;
    }

private:

    weak_ref<I> m_object;
    method_type m_method {};
    event_token m_token {};
};

template <typename I>
struct factory_event_revoker
{
    using method_type = HRESULT(__stdcall abi<I>::*)(event_token);

    factory_event_revoker() noexcept = default;
    factory_event_revoker(const factory_event_revoker &) = delete;
    factory_event_revoker & operator=(const factory_event_revoker &) = delete;
    factory_event_revoker(factory_event_revoker &&) = default;
    factory_event_revoker & operator=(factory_event_revoker &&) = default;

    factory_event_revoker(const I & object, method_type method, event_token token) :
        m_object(object),
        m_method(method),
        m_token(token)
    {}

    ~factory_event_revoker() noexcept
    {
        revoke();
    }

    void revoke() noexcept
    {
        if (!m_object)
        {
            return;
        }

        ((*get(m_object)).*(m_method))(m_token);
        m_object = nullptr;
    }

private:

    I m_object;
    method_type m_method {};
    event_token m_token {};
};

namespace impl {

template <typename D, typename I, typename S, typename M>
auto make_event_revoker(S source, M method, event_token token)
{
    return event_revoker<I>(static_cast<const I &>(static_cast<const D &>(*source)), method, token);
}

}

namespace ABI::Windows::Foundation {

struct __declspec(uuid("00000035-0000-0000-c000-000000000046")) __declspec(novtable) IActivationFactory : IInspectable
{
    virtual HRESULT __stdcall abi_ActivateInstance(IInspectable ** instance) = 0;
};

}

namespace Windows::Foundation {

struct IActivationFactory;

template <typename D>
struct WINRT_EBO impl_IActivationFactory
{
    IInspectable ActivateInstance() const;
};

}

namespace impl {

template <> struct traits<Windows::Foundation::IActivationFactory>
{
    using abi = ABI::Windows::Foundation::IActivationFactory;
    template <typename D> using consume = Windows::Foundation::impl_IActivationFactory<D>;
};

template <typename D>
struct produce<D, Windows::Foundation::IActivationFactory> : produce_base<D, Windows::Foundation::IActivationFactory>
{
    HRESULT __stdcall abi_ActivateInstance(abi_arg_out<Windows::IInspectable> instance) noexcept final
    {
        try
        {
            *instance = detach(this->shim().ActivateInstance());
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename Class, typename Interface>
Interface get_agile_activation_factory()
{
    hstring_ref classId(impl::traits<Class>::name());

    Interface factory;
    check_hresult(WINRT_RoGetActivationFactory(get(classId), __uuidof(abi<Interface>), reinterpret_cast<void **>(put(factory))));

    if (!factory.template try_as<IAgileObject>())
    {
        return nullptr;
    }

    return factory;
}

template <typename Class, typename Interface>
Interface get_activation_factory()
{
    hstring_ref classId(impl::traits<Class>::name());

    Interface factory;
    check_hresult(WINRT_RoGetActivationFactory(get(classId), __uuidof(abi<Interface>), reinterpret_cast<void **>(put(factory))));
    return factory;
}

}

namespace Windows::Foundation {

struct IActivationFactory :
    IInspectable,
    impl::consume<IActivationFactory>
{
    IActivationFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IActivationFactory>(m_ptr); }
};

template <typename D>
IInspectable impl_IActivationFactory<D>::ActivateInstance() const
{
    IInspectable instance;
    check_hresult(static_cast<const IActivationFactory &>(static_cast<const D &>(*this))->abi_ActivateInstance(put(instance)));
    return instance;
}

}

enum class initialize_type
{
    single_threaded,
    multi_threaded
};

inline void initialize(const initialize_type type = initialize_type::multi_threaded)
{
    check_hresult(WINRT_RoInitialize(static_cast<uint32_t>(type)));
}

inline void uninitialize() noexcept
{
    WINRT_RoUninitialize();
}

template <typename Class, typename Interface = Windows::Foundation::IActivationFactory>
Interface get_activation_factory()
{
    static Interface factory = impl::get_agile_activation_factory<Class, Interface>();

    if (!factory)
    {
        return impl::get_activation_factory<Class, Interface>();
    }

    return factory;
}

template <typename Class, typename Instance = Class>
Instance activate_instance()
{
    return get_activation_factory<Class>().ActivateInstance().template as<Instance>();
}

namespace ABI::Windows::Foundation {

template <typename T> struct EventHandler;
template <typename TSender, typename TArgs> struct TypedEventHandler;

template <typename T>
struct __declspec(novtable) impl_EventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(IInspectable * sender, arg_in<T> args) = 0;
};

template <typename TSender, typename TArgs>
struct __declspec(novtable) impl_TypedEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(arg_in<TSender> sender, arg_in<TArgs> args) = 0;
};

template <typename T> struct EventHandler : impl::not_specialized<EventHandler<T>> {};
template <typename TSender, typename TArgs> struct TypedEventHandler : impl::not_specialized<TypedEventHandler<TSender, TArgs>> {};

}

namespace Windows::Foundation {

template <typename T> struct EventHandler;
template <typename TSender, typename TArgs> struct TypedEventHandler;

}

namespace impl {

template <typename T> struct traits<Windows::Foundation::EventHandler<T>>
{
    using abi = ABI::Windows::Foundation::EventHandler<abi<T>>;
};

template <typename TSender, typename TArgs> struct traits<Windows::Foundation::TypedEventHandler<TSender, TArgs>>
{
    using abi = ABI::Windows::Foundation::TypedEventHandler<abi<TSender>, abi<TArgs>>;
};

template <typename T, typename H>
struct event_handler : implements<event_handler<T, H>, abi<Windows::Foundation::EventHandler<T>>>, H
{
    event_handler(H && handler) : H(std::forward<H>(handler)) {}

    HRESULT __stdcall abi_Invoke(abi_arg_in<Windows::IInspectable> sender, abi_arg_in<T> args) noexcept override
    {
        try
        {
            (*this)(*reinterpret_cast<const Windows::IInspectable *>(&sender), *reinterpret_cast<const T *>(&args));
            return S_OK;
        }
        catch (...) { return impl::to_hresult(); }
    }
};

template <typename TSender, typename TArgs, typename H>
struct typed_event_handler : implements<typed_event_handler<TSender, TArgs, H>, abi<Windows::Foundation::TypedEventHandler<TSender, TArgs>>>, H
{
    typed_event_handler(H && handler) : H(std::forward<H>(handler)) {}

    HRESULT __stdcall abi_Invoke(abi_arg_in<TSender> sender, abi_arg_in<TArgs> args) noexcept override
    {
        try
        {
            (*this)(*reinterpret_cast<const TSender *>(&sender), *reinterpret_cast<const TArgs *>(&args));
            return S_OK;
        }
        catch (...) { return impl::to_hresult(); }
    }
};

}

namespace Windows::Foundation {

template <typename T>
struct WINRT_EBO EventHandler : IUnknown
{
    EventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<EventHandler>(m_ptr); }

    template <typename L>
    EventHandler(L handler) :
        EventHandler(impl::make_delegate<impl::event_handler<T, L>, EventHandler<T>>(std::forward<L>(handler)))
    {}

    template <typename F> EventHandler(F * handler) :
        EventHandler([=](auto && ... args) { handler(args ...); })
    {}

    template <typename O, typename M> EventHandler(O * object, M method) :
        EventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
    {}

    void operator()(const IInspectable & sender, const T & args) const
    {
        check_hresult((*this)->abi_Invoke(get(sender), get(args)));
    }
};

template <typename TSender, typename TArgs>
struct WINRT_EBO TypedEventHandler : IUnknown
{
    TypedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<TypedEventHandler>(m_ptr); }

    template <typename L>
    TypedEventHandler(L handler) :
        TypedEventHandler(impl::make_delegate<impl::typed_event_handler<TSender, TArgs, L>, TypedEventHandler<TSender, TArgs>>(std::forward<L>(handler)))
    {}

    template <typename F> TypedEventHandler(F * handler) :
        TypedEventHandler([=](auto && ... args) { handler(args ...); })
    {}

    template <typename O, typename M> TypedEventHandler(O * object, M method) :
        TypedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
    {}

    void operator()(const TSender & sender, const TArgs & args) const
    {
        check_hresult((*this)->abi_Invoke(get(sender), get(args)));
    }
};

}

namespace ABI::Windows::Foundation {

template <typename T> struct IReference;

template <typename T>
struct __declspec(novtable) impl_IReference : IInspectable
{
    virtual HRESULT __stdcall get_Value(arg_out<T> value) = 0;
};

}

namespace Windows::Foundation {

template <typename T> struct IReference;

template <typename D, typename T>
struct impl_IReference
{
    T Value() const;
};

}

namespace impl {

template <typename T> struct traits<Windows::Foundation::IReference<T>>
{
    using abi = ABI::Windows::Foundation::IReference<abi<T>>;
    template <typename D> using consume = Windows::Foundation::impl_IReference<D, T>;
};

template <typename D, typename T>
struct produce<D, Windows::Foundation::IReference<T>> : produce_base<D, Windows::Foundation::IReference<abi<T>>>
{
    HRESULT __stdcall get_Value(abi_arg_out<T> value) noexcept final
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            clear_abi(value);
            return to_hresult();
        }
    }
};

}

namespace Windows::Foundation {

template <typename T>
struct WINRT_EBO IReference :
    IInspectable,
    impl::consume<IReference<T>>
{
    IReference(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IReference>(m_ptr); }
};

template <typename D, typename T>
T impl_IReference<D, T>::Value() const
{
    T result{};
    check_hresult(static_cast<const IReference<T> &>(static_cast<const D &>(*this))->get_Value(put(result)));
    return result;
}

}

struct empty_collection_t {};
constexpr empty_collection_t empty_collection{};

namespace impl {

template <typename K, typename V, typename Container> struct map_view_standalone;
template <typename K, typename V, typename Container> struct map_view_from_map;
template <typename K, typename V, typename Container> struct map;
template <typename K, typename V> struct key_value_pair;
template <typename T, typename Container> struct iterator_standalone;
template <typename T, typename Container> struct iterator;
template <typename T, typename Container> struct iterable;
template <typename T> struct vector_view_from_vector;
template <typename T> struct vector_view_standalone;
template <typename T> struct vector;

}

namespace Windows::Foundation::Collections {

enum class CollectionChange
{
    Reset,
    ItemInserted,
    ItemRemoved,
    ItemChanged,
};

}

namespace impl {

template <typename T>
class has_GetAt
{
    template <typename U, typename = decltype(std::declval<U>().GetAt(0))> static constexpr bool get_value(int) { return true; }
    template <typename> static constexpr bool get_value(...) { return false; }

public:

    static constexpr bool value = get_value<T>(0);
};

}

namespace ABI::Windows::Foundation::Collections {

template <typename K, typename V> struct MapChangedEventHandler;
template <typename T> struct VectorChangedEventHandler;

template <typename T> struct IIterator;
template <typename T> struct IIterable;
template <typename K, typename V> struct IKeyValuePair;
template <typename T> struct IVectorView;
template <typename T> struct IVector;
template <typename K, typename V> struct IMapView;
template <typename K, typename V> struct IMap;
template <typename K> struct IMapChangedEventArgs;
template <typename K, typename V> struct IObservableMap;
template <typename T> struct IObservableVector;

struct __declspec(uuid("575933df-34fe-4480-af15-07691f3d5d9b")) __declspec(novtable) IVectorChangedEventArgs : IInspectable
{
    virtual HRESULT __stdcall get_CollectionChange(winrt::Windows::Foundation::Collections::CollectionChange * value) = 0;
    virtual HRESULT __stdcall get_Index(uint32_t * value) = 0;
};

template <typename K, typename V>
struct __declspec(novtable) impl_MapChangedEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(IObservableMap<K, V> * sender, IMapChangedEventArgs<K> * args) = 0;
};

template <typename T>
struct __declspec(novtable) impl_VectorChangedEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(IObservableVector<T> * sender, IVectorChangedEventArgs * args) = 0;
};

template <typename T>
struct __declspec(novtable) impl_IIterator : IInspectable
{
    virtual HRESULT __stdcall get_Current(arg_out<T> current) = 0;
    virtual HRESULT __stdcall get_HasCurrent(bool * hasCurrent) = 0;
    virtual HRESULT __stdcall abi_MoveNext(bool * hasCurrent) = 0;
    virtual HRESULT __stdcall abi_GetMany(uint32_t capacity, arg_out<T> value, uint32_t * actual) = 0;
};

template <typename T>
struct __declspec(novtable) impl_IIterable : IInspectable
{
    virtual HRESULT __stdcall abi_First(IIterator<T> ** first) = 0;
};

template <typename K, typename V>
struct __declspec(novtable) impl_IKeyValuePair : IInspectable
{
    virtual HRESULT __stdcall get_Key(arg_out<K> key) = 0;
    virtual HRESULT __stdcall get_Value(arg_out<V> value) = 0;
};

template <typename T>
struct __declspec(novtable) impl_IVectorView : IInspectable
{
    virtual HRESULT __stdcall abi_GetAt(uint32_t index, arg_out<T> item) = 0;
    virtual HRESULT __stdcall get_Size(uint32_t * size) = 0;
    virtual HRESULT __stdcall abi_IndexOf(arg_in<T> value, uint32_t * index, bool * found) = 0;
    virtual HRESULT __stdcall abi_GetMany(uint32_t startIndex, uint32_t capacity, arg_out<T> value, uint32_t * actual) = 0;
};

template <typename T>
struct __declspec(novtable) impl_IVector : IInspectable
{
    virtual HRESULT __stdcall abi_GetAt(uint32_t index, arg_out<T> item) = 0;
    virtual HRESULT __stdcall get_Size(uint32_t * size) = 0;
    virtual HRESULT __stdcall abi_GetView(IVectorView<T> ** view) = 0;
    virtual HRESULT __stdcall abi_IndexOf(arg_in<T> value, uint32_t * index, bool * found) = 0;
    virtual HRESULT __stdcall abi_SetAt(uint32_t index, arg_in<T> item) = 0;
    virtual HRESULT __stdcall abi_InsertAt(uint32_t index, arg_in<T> item) = 0;
    virtual HRESULT __stdcall abi_RemoveAt(uint32_t index) = 0;
    virtual HRESULT __stdcall abi_Append(arg_in<T> item) = 0;
    virtual HRESULT __stdcall abi_RemoveAtEnd() = 0;
    virtual HRESULT __stdcall abi_Clear() = 0;
    virtual HRESULT __stdcall abi_GetMany(uint32_t startIndex, uint32_t capacity, arg_out<T> value, uint32_t * actual) = 0;
    virtual HRESULT __stdcall abi_ReplaceAll(uint32_t count, arg_out<T> value) = 0;

};

template <typename K, typename V>
struct __declspec(novtable) impl_IMapView : IInspectable
{
    virtual HRESULT __stdcall abi_Lookup(arg_in<K> key, arg_out<V> value) = 0;
    virtual HRESULT __stdcall get_Size(uint32_t * size) = 0;
    virtual HRESULT __stdcall abi_HasKey(arg_in<K> key, bool * found) = 0;
    virtual HRESULT __stdcall abi_Split(IMapView<K, V> ** firstPartition, IMapView<K, V> ** secondPartition) = 0;
};

template <typename K, typename V>
struct __declspec(novtable) impl_IMap : IInspectable
{
    virtual HRESULT __stdcall abi_Lookup(arg_in<K> key, arg_out<V> value) = 0;
    virtual HRESULT __stdcall get_Size(uint32_t * size) = 0;
    virtual HRESULT __stdcall abi_HasKey(arg_in<K> key, bool * found) = 0;
    virtual HRESULT __stdcall abi_GetView(IMapView<K, V> ** view) = 0;
    virtual HRESULT __stdcall abi_Insert(arg_in<K> key, arg_in<V> value, bool * replaced) = 0;
    virtual HRESULT __stdcall abi_Remove(arg_in<K> key) = 0;
    virtual HRESULT __stdcall abi_Clear() = 0;
};

template <typename K>
struct __declspec(novtable) impl_IMapChangedEventArgs : IInspectable
{
    virtual HRESULT __stdcall get_CollectionChange(winrt::Windows::Foundation::Collections::CollectionChange * value) = 0;
    virtual HRESULT __stdcall get_Key(arg_out<K> value) = 0;
};

template <typename K, typename V>
struct __declspec(novtable) impl_IObservableMap : IInspectable
{
    virtual HRESULT __stdcall add_MapChanged(MapChangedEventHandler<K, V> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_MapChanged(event_token token) = 0;
};

template <typename T>
struct __declspec(novtable) impl_IObservableVector : IInspectable
{
    virtual HRESULT __stdcall add_VectorChanged(VectorChangedEventHandler<T> * handler, event_token *  token) = 0;
    virtual HRESULT __stdcall remove_VectorChanged(event_token token) = 0;
};

template <typename K, typename V> struct MapChangedEventHandler : impl::not_specialized<MapChangedEventHandler<K, V>> {};
template <typename T> struct VectorChangedEventHandler : impl::not_specialized <VectorChangedEventHandler<T>> {};
template <typename T> struct IIterator : impl::not_specialized <IIterator<T>> {};
template <typename T> struct IIterable : impl::not_specialized <IIterable<T>> {};
template <typename K, typename V> struct IKeyValuePair : impl::not_specialized <IKeyValuePair<K, V>> {};
template <typename T> struct IVectorView : impl::not_specialized <IVectorView<T>> {};
template <typename T> struct IVector : impl::not_specialized <IVector<T>> {};
template <typename K, typename V> struct IMapView : impl::not_specialized <IMapView<K, V>> {};
template <typename K, typename V> struct IMap : impl::not_specialized <IMap<K, V>> {};
template <typename K> struct IMapChangedEventArgs : impl::not_specialized <IMapChangedEventArgs<K>> {};
template <typename K, typename V> struct IObservableMap : impl::not_specialized <IObservableMap<K, V>> {};
template <typename T> struct IObservableVector : impl::not_specialized <IObservableVector<T>> {};

}

namespace Windows::Foundation::Collections {

template <typename K, typename V> struct MapChangedEventHandler;
template <typename T> struct VectorChangedEventHandler;

struct IVectorChangedEventArgs;
template <typename T> struct IIterator;
template <typename T> struct IIterable;
template <typename K, typename V> struct IKeyValuePair;
template <typename T> struct IVectorView;
template <typename T> struct IVector;
template <typename K, typename V> struct IMapView;
template <typename K, typename V> struct IMap;
template <typename K> struct IMapChangedEventArgs;
template <typename K, typename V> struct IObservableMap;
template <typename T> struct IObservableVector;

template <typename D>
struct WINRT_EBO impl_IVectorChangedEventArgs
{
    CollectionChange CollectionChange() const;
    uint32_t Index() const;
};

template <typename D, typename T>
struct impl_IIterator
{
    T Current() const;
    bool HasCurrent() const;
    bool MoveNext() const;
    uint32_t GetMany(array_ref<T> values) const;

    auto & operator++()
    {
        if (!MoveNext())
        {
            static_cast<D &>(*this) = nullptr;
        }

        return *this;
    }

    T operator *() const
    {
        return Current();
    }
};

template <typename D, typename T>
struct impl_IIterable
{
    IIterator<T> First() const;
};

template <typename D, typename K, typename V>
struct impl_IKeyValuePair
{
    K Key() const;
    V Value() const;

    bool operator==(const IKeyValuePair<K, V> & other) const
    {
        return Key() == other.Key() && Value() == other.Value();
    }

    bool operator!=(const IKeyValuePair<K, V> & other) const
    {
        return !(*this == other);
    }
};

template <typename D, typename T>
struct impl_IVectorView
{
    T GetAt(const uint32_t index) const;
    uint32_t Size() const;
    bool IndexOf(const T & value, uint32_t & index) const;
    uint32_t GetMany(uint32_t startIndex, array_ref<T> values) const;
};

template <typename D, typename T>
struct impl_IVector
{
    T GetAt(const uint32_t index) const;
    uint32_t Size() const;
    IVectorView<T> GetView() const;
    bool IndexOf(const T & value, uint32_t & index) const;
    void SetAt(const uint32_t index, const T & value) const;
    void InsertAt(const uint32_t index, const T & value) const;
    void RemoveAt(const uint32_t index) const;
    void Append(const T & value) const;
    void RemoveAtEnd() const;
    void Clear() const;
    uint32_t GetMany(uint32_t startIndex, array_ref<T> values) const;
    void ReplaceAll(array_ref<const T> value) const;
};

template <typename D, typename K, typename V>
struct impl_IMapView
{
    V Lookup(const K & key) const;
    uint32_t Size() const;
    bool HasKey(const K & key) const;
    void Split(IMapView<K, V> & firstPartition, IMapView<K, V> & secondPartition);
};

template <typename D, typename K, typename V>
struct impl_IMap
{
    V Lookup(const K & key) const;
    uint32_t Size() const;
    bool HasKey(const K & key) const;
    IMapView<K, V> GetView() const;
    bool Insert(const K & key, const V & value) const;
    void Remove(const K & key) const;
    void Clear() const;
};

template <typename D, typename K>
struct impl_IMapChangedEventArgs
{
    CollectionChange CollectionChange() const;
    K Key() const;
};

template <typename D, typename K, typename V>
struct impl_IObservableMap
{
    event_token MapChanged(const MapChangedEventHandler<K, V> & handler) const;
    void MapChanged(const event_token cookie) const;

    using MapChanged_revoker = event_revoker<IObservableMap<K, V>>;

    MapChanged_revoker MapChanged(auto_revoke_t, const MapChangedEventHandler<K, V> & handler) const
    {
        return impl::make_event_revoker<D, IObservableMap<K, V>>(this, &abi<IObservableMap<K, V>>::remove_MapChanged, MapChanged(handler));
    }
};

template <typename D, typename T>
struct impl_IObservableVector
{
    event_token VectorChanged(const VectorChangedEventHandler<T> & handler) const;
    void VectorChanged(const event_token cookie) const;

    using VectorChanged_revoker = event_revoker<IObservableVector<T>>;

    VectorChanged_revoker VectorChanged(auto_revoke_t, const VectorChangedEventHandler<T> & handler) const
    {
        return impl::make_event_revoker<D, IObservableVector<T>>(this, &abi<IObservableVector<T>>::remove_VectorChanged, VectorChanged(handler));
    }
};

}

namespace impl {

template <> struct traits<Windows::Foundation::Collections::IVectorChangedEventArgs>
{
    using abi = ABI::Windows::Foundation::Collections::IVectorChangedEventArgs;
    template <typename D> using consume = Windows::Foundation::Collections::impl_IVectorChangedEventArgs<D>;
};

template <typename K, typename V> struct traits<Windows::Foundation::Collections::MapChangedEventHandler<K, V>>
{
    using abi = ABI::Windows::Foundation::Collections::MapChangedEventHandler<abi<K>, abi<V>>;
};

template <typename T> struct traits<Windows::Foundation::Collections::VectorChangedEventHandler<T>>
{
    using abi = ABI::Windows::Foundation::Collections::VectorChangedEventHandler<abi<T>>;
};

template <typename T> struct traits<Windows::Foundation::Collections::IIterator<T>>
{
    using abi = ABI::Windows::Foundation::Collections::IIterator<abi<T>>;
    template <typename D> using consume = Windows::Foundation::Collections::impl_IIterator<D, T>;
};

template <typename T> struct traits<Windows::Foundation::Collections::IIterable<T>>
{
    using abi = ABI::Windows::Foundation::Collections::IIterable<abi<T>>;
    template <typename D> using consume = Windows::Foundation::Collections::impl_IIterable<D, T>;
};

template <typename K, typename V> struct traits<Windows::Foundation::Collections::IKeyValuePair<K, V>>
{
    using abi = ABI::Windows::Foundation::Collections::IKeyValuePair<abi<K>, abi<V>>;
    template <typename D> using consume = Windows::Foundation::Collections::impl_IKeyValuePair<D, K, V>;
};

template <typename T> struct traits<Windows::Foundation::Collections::IVectorView<T>>
{
    using abi = ABI::Windows::Foundation::Collections::IVectorView<abi<T>>;
    template <typename D> using consume = Windows::Foundation::Collections::impl_IVectorView<D, T>;
};

template <typename T> struct traits<Windows::Foundation::Collections::IVector<T>>
{
    using abi = ABI::Windows::Foundation::Collections::IVector<abi<T>>;
    template <typename D> using consume = Windows::Foundation::Collections::impl_IVector<D, T>;
};

template <typename K, typename V> struct traits<Windows::Foundation::Collections::IMapView<K, V>>
{
    using abi = ABI::Windows::Foundation::Collections::IMapView<abi<K>, abi<V>>;
    template <typename D> using consume = Windows::Foundation::Collections::impl_IMapView<D, K, V>;
};

template <typename K, typename V> struct traits<Windows::Foundation::Collections::IMap<K, V>>
{
    using abi = ABI::Windows::Foundation::Collections::IMap<abi<K>, abi<V>>;
    template <typename D> using consume = Windows::Foundation::Collections::impl_IMap<D, K, V>;
};

template <typename K> struct traits<Windows::Foundation::Collections::IMapChangedEventArgs<K>>
{
    using abi = ABI::Windows::Foundation::Collections::IMapChangedEventArgs<abi<K>>;
    template <typename D> using consume = Windows::Foundation::Collections::impl_IMapChangedEventArgs<D, K>;
};

template <typename K, typename V> struct traits<Windows::Foundation::Collections::IObservableMap<K, V>>
{
    using abi = ABI::Windows::Foundation::Collections::IObservableMap<abi<K>, abi<V>>;
    template <typename D> using consume = Windows::Foundation::Collections::impl_IObservableMap<D, K, V>;
};

template <typename T> struct traits<Windows::Foundation::Collections::IObservableVector<T>>
{
    using abi = ABI::Windows::Foundation::Collections::IObservableVector<abi<T>>;
    template <typename D> using consume = Windows::Foundation::Collections::impl_IObservableVector<D, T>;
};

template <typename T>
struct fast_iterator : std::iterator<std::input_iterator_tag, T>
{
    fast_iterator(const T & collection, const uint32_t index) noexcept :
        m_collection(&collection),
        m_index(index)
    {}

    fast_iterator & operator++() noexcept
    {
        ++m_index;
        return *this;
    }

    auto operator *() const
    {
        return m_collection->GetAt(m_index);
    }

    bool operator==(const fast_iterator & other) const noexcept
    {
        WINRT_ASSERT(m_collection == other.m_collection);
        return m_index == other.m_index;
    }

    bool operator!=(const fast_iterator & other) const noexcept
    {
        return !(*this == other);
    }

private:

    const T * m_collection = nullptr;
    uint32_t m_index = 0;
};

}

namespace Windows::Foundation::Collections {

template <typename T>
struct WINRT_EBO VectorChangedEventHandler : IUnknown
{
    VectorChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<VectorChangedEventHandler>(m_ptr); }
    template <typename L> VectorChangedEventHandler(L handler);
    template <typename F> VectorChangedEventHandler(F * handler);
    template <typename O, typename M> VectorChangedEventHandler(O * object, M method);
    void operator()(const IObservableVector<T> & sender, const IVectorChangedEventArgs & args) const;
};

template <typename K, typename V>
struct WINRT_EBO MapChangedEventHandler : IUnknown
{
    MapChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<MapChangedEventHandler>(m_ptr); }
    template <typename L> MapChangedEventHandler(L handler);
    template <typename F> MapChangedEventHandler(F * handler);
    template <typename O, typename M> MapChangedEventHandler(O * object, M method);
    void operator()(const IObservableMap<K, V> & sender, const IMapChangedEventArgs<K> & args) const;
};

struct IVectorChangedEventArgs :
    IInspectable,
    impl::consume<IVectorChangedEventArgs>
{
    IVectorChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVectorChangedEventArgs>(m_ptr); }
};

template <typename T>
struct WINRT_EBO IIterator :
    IInspectable,
    impl::consume<IIterator<T>>
{
    IIterator(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IIterator>(m_ptr); }
};

template <typename T>
struct WINRT_EBO IIterable :
    IInspectable,
    impl::consume<IIterable<T>>
{
    IIterable(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IIterable>(m_ptr); }

    IIterable(std::vector<T> && values) : IIterable(make<impl::iterable<T, std::vector<T>>>(std::forward<std::vector<T>>(values)))
    {}

    IIterable(const std::vector<T> & values) : IIterable(std::vector<T>(values))
    {}

    IIterable(empty_collection_t) : IIterable(std::vector<T>())
    {}

    template<class InputIt>
    IIterable(InputIt first, InputIt last) : IIterable(std::vector<T>(first, last))
    {}

    IIterable(std::initializer_list<T> values) : IIterable(std::vector<T>(values.begin(), values.end()))
    {}
};

template <typename K, typename V>
struct WINRT_EBO IIterable<IKeyValuePair<K, V>> :
    IInspectable,
    impl::consume<IIterable<IKeyValuePair<K, V>>>
{
    IIterable(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IIterable>(m_ptr); }

    IIterable(std::map<K, V> && values) : IIterable(make<impl::iterable<IKeyValuePair<K, V>, std::map<K, V>>>(std::forward<std::map<K, V>>(values)))
    {}

    IIterable(const std::map<K, V> & values) : IIterable(std::map<K, V>(values))
    {}

    IIterable(std::unordered_map<K, V> && values) : IIterable(make<impl::iterable<IKeyValuePair<K, V>, std::unordered_map<K, V>>>(std::forward<std::unordered_map<K, V>>(values)))
    {}

    IIterable(const std::unordered_map<K, V> & values) : IIterable(std::unordered_map<K, V>(values))
    {}

    IIterable(empty_collection_t) : IIterable(std::unordered_map<K, V>())
    {}

    template<class InputIt>
    IIterable(InputIt first, InputIt last) : IIterable(std::unordered_map<K, V>(first, last))
    {}

    IIterable(std::initializer_list<std::pair<K, V>> values) : IIterable(std::unordered_map<K, V>(values.begin(), values.end()))
    {}
};

template <typename K, typename V>
struct WINRT_EBO IKeyValuePair :
    IInspectable,
    impl::consume<IKeyValuePair<K, V>>
{
    IKeyValuePair(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IKeyValuePair>(m_ptr); }
};

template <typename T>
struct WINRT_EBO IVectorView :
    IInspectable,
    impl::consume<IVectorView<T>>,
    impl::require<IVectorView<T>, IIterable<T>>
{
    IVectorView(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVectorView>(m_ptr); }

    IVectorView(std::vector<T> && values) : IVectorView(make<impl::vector_view_standalone<T>>(std::forward<std::vector<T>>(values)))
    {}

    IVectorView(const std::vector<T> & values) : IVectorView(std::vector<T>(values))
    {}

    IVectorView(empty_collection_t) : IVectorView(std::vector<T>())
    {}

    template<class InputIt>
    IVectorView(InputIt first, InputIt last) : IVectorView(std::vector<T>(first, last))
    {}

    IVectorView(std::initializer_list<T> values) : IVectorView(std::vector<T>(values.begin(), values.end()))
    {}
};

template <typename T>
struct WINRT_EBO IVector :
    IInspectable,
    impl::consume<IVector<T>>,
    impl::require<IVector<T>, IIterable<T>>
{
    IVector(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVector>(m_ptr); }

    IVector(std::vector<T> && values) : IVector(make<impl::vector<T>>(std::forward<std::vector<T>>(values)))
    {}

    IVector(const std::vector<T> & values) : IVector(std::vector<T>(values))
    {}

    IVector(empty_collection_t) : IVector(std::vector<T>())
    {}

    template<class InputIt>
    IVector(InputIt first, InputIt last) : IVector(std::vector<T>(first, last))
    {}

    IVector(std::initializer_list<T> values) : IVector(std::vector<T>(values.begin(), values.end()))
    {}
};

template <typename K, typename V>
struct WINRT_EBO IMapView :
    IInspectable,
    impl::consume<IMapView<K, V>>,
    impl::require<IMapView<K, V>, IIterable<IKeyValuePair<K, V>>>
{
    IMapView(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMapView>(m_ptr); }

    IMapView(std::map<K, V> && values) : IMapView(make<impl::map_view_standalone<K, V, std::map<K, V>>>(std::forward<std::map<K, V>>(values)))
    {}

    IMapView(const std::map<K, V> & values) : IMapView(std::map<K, V>(values))
    {}

    IMapView(std::unordered_map<K, V> && values) : IMapView(make<impl::map_view_standalone<K, V, std::unordered_map<K, V>>>(std::forward<std::unordered_map<K, V>>(values)))
    {}

    IMapView(const std::unordered_map<K, V> & values) : IMapView(std::unordered_map<K, V>(values))
    {}

    IMapView(empty_collection_t) : IMapView(std::unordered_map<K, V>())
    {}

    template<class InputIt>
    IMapView(InputIt first, InputIt last) : IMapView(std::unordered_map<K, V>(first, last))
    {}

    IMapView(std::initializer_list<std::pair<K, V>> values) : IMapView(std::unordered_map<K, V>(values.begin(), values.end()))
    {}
};

template <typename K, typename V>
struct WINRT_EBO IMap :
    IInspectable,
    impl::consume<IMap<K, V>>,
    impl::require<IMap<K, V>, IIterable<IKeyValuePair<K, V>>>
{
    IMap(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMap>(m_ptr); }

    IMap(std::map<K, V> && values) : IMap(make<impl::map<K, V, std::map<K, V>>>(std::forward<std::map<K, V>>(values)))
    {}

    IMap(const std::map<K, V> & values) : IMap(std::map<K, V>(values))
    {}

    IMap(std::unordered_map<K, V> && values) : IMap(make<impl::map<K, V, std::unordered_map<K, V>>>(std::forward<std::unordered_map<K, V>>(values)))
    {}

    IMap(const std::unordered_map<K, V> & values) : IMap(std::unordered_map<K, V>(values))
    {}

    IMap(empty_collection_t) : IMap(std::unordered_map<K, V>())
    {}

    template<class InputIt>
    IMap(InputIt first, InputIt last) : IMap(std::unordered_map<K, V>(first, last))
    {}

    IMap(std::initializer_list<std::pair<K, V>> values) : IMap(std::unordered_map<K, V>(values.begin(), values.end()))
    {}
};

template <typename K>
struct WINRT_EBO IMapChangedEventArgs :
    IInspectable,
    impl::consume<IMapChangedEventArgs<K>>
{
    IMapChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMapChangedEventArgs>(m_ptr); }
};

template <typename K, typename V>
struct WINRT_EBO IObservableMap :
    IInspectable,
    impl::consume<IObservableMap<K, V>>,
    impl::require<IObservableMap<K, V>, IMap<K, V>, IIterable<IKeyValuePair<K, V>>>
{
    IObservableMap(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IObservableMap>(m_ptr); }
};

template <typename T>
struct WINRT_EBO IObservableVector :
    IInspectable,
    impl::consume<IObservableVector<T>>,
    impl::require<IObservableVector<T>, IVector<T>, IIterable<T>>
{
    IObservableVector(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IObservableVector>(m_ptr); }
};

template <typename D>
CollectionChange impl_IVectorChangedEventArgs<D>::CollectionChange() const
{
    Collections::CollectionChange value{};
    check_hresult(static_cast<const IVectorChangedEventArgs &>(static_cast<const D &>(*this))->get_CollectionChange(&value));
    return value;
}

template <typename D>
uint32_t impl_IVectorChangedEventArgs<D>::Index() const
{
    uint32_t index = 0;
    check_hresult(static_cast<const IVectorChangedEventArgs &>(static_cast<const D &>(*this))->get_Index(&index));
    return index;
}

template <typename D, typename T>
T impl_IIterator<D, T>::Current() const
{
    T result = impl::empty_value<T>();
    check_hresult(static_cast<const IIterator<T> &>(static_cast<const D &>(*this))->get_Current(put(result)));
    return result;
}

template <typename D, typename T>
bool impl_IIterator<D, T>::HasCurrent() const
{
    bool temp = false;
    check_hresult(static_cast<const IIterator<T> &>(static_cast<const D &>(*this))->get_HasCurrent(put(temp)));
    return temp;
}

template <typename D, typename T>
bool impl_IIterator<D, T>::MoveNext() const
{
    bool temp = false;
    check_hresult(static_cast<const IIterator<T> &>(static_cast<const D &>(*this))->abi_MoveNext(put(temp)));
    return temp;
}

template <typename D, typename T>
uint32_t impl_IIterator<D, T>::GetMany(array_ref<T> values) const
{
    uint32_t actual = 0;
    check_hresult(static_cast<const IIterator<T> &>(static_cast<const D &>(*this))->abi_GetMany(values.size(), get(values), &actual));
    return actual;
}

template <typename D, typename T>
IIterator<T> impl_IIterable<D, T>::First() const
{
    IIterator<T> iterator;
    check_hresult(static_cast<const IIterable<T> &>(static_cast<const D &>(*this))->abi_First(put(iterator)));
    return iterator;
}

template <typename D, typename K, typename V>
K impl_IKeyValuePair<D, K, V>::Key() const
{
    K result = impl::empty_value<K>();
    check_hresult(static_cast<const IKeyValuePair<K, V> &>(static_cast<const D &>(*this))->get_Key(put(result)));
    return result;
}

template <typename D, typename K, typename V>
V impl_IKeyValuePair<D, K, V>::Value() const
{
    V result = impl::empty_value<V>();
    check_hresult(static_cast<const IKeyValuePair<K, V> &>(static_cast<const D &>(*this))->get_Value(put(result)));
    return result;
}

template <typename D, typename T>
T impl_IVectorView<D, T>::GetAt(const uint32_t index) const
{
    T result = impl::empty_value<T>();
    check_hresult(static_cast<const IVectorView<T> &>(static_cast<const D &>(*this))->abi_GetAt(index, put(result)));
    return result;
}

template <typename D, typename T>
uint32_t impl_IVectorView<D, T>::Size() const
{
    uint32_t size = 0;
    check_hresult(static_cast<const IVectorView<T> &>(static_cast<const D &>(*this))->get_Size(&size));
    return size;
}

template <typename D, typename T>
bool impl_IVectorView<D, T>::IndexOf(const T & value, uint32_t & index) const
{
    bool found = false;
    check_hresult(static_cast<const IVectorView<T> &>(static_cast<const D &>(*this))->abi_IndexOf(get(value), &index, put(found)));
    return found;
}

template <typename D, typename T>
uint32_t impl_IVectorView<D, T>::GetMany(uint32_t startIndex, array_ref<T> values) const
{
    uint32_t actual = 0;
    check_hresult(static_cast<const IVectorView<T> &>(static_cast<const D &>(*this))->abi_GetMany(startIndex, values.size(), get(values), &actual));
    return actual;
}

template <typename D, typename T>
T impl_IVector<D, T>::GetAt(const uint32_t index) const
{
    T result = impl::empty_value<T>();
    check_hresult(static_cast<const IVector<T> &>(static_cast<const D &>(*this))->abi_GetAt(index, put(result)));
    return result;
}

template <typename D, typename T>
uint32_t impl_IVector<D, T>::Size() const
{
    uint32_t size = 0;
    check_hresult(static_cast<const IVector<T> &>(static_cast<const D &>(*this))->get_Size(&size));
    return size;
}

template <typename D, typename T>
IVectorView<T> impl_IVector<D, T>::GetView() const
{
    IVectorView<T> view;
    check_hresult(static_cast<const IVector<T> &>(static_cast<const D &>(*this))->abi_GetView(put(view)));
    return view;
}

template <typename D, typename T>
bool impl_IVector<D, T>::IndexOf(const T & value, uint32_t & index) const
{
    bool found = false;
    check_hresult(static_cast<const IVector<T> &>(static_cast<const D &>(*this))->abi_IndexOf(get(value), &index, put(found)));
    return found;
}

template <typename D, typename T>
void impl_IVector<D, T>::SetAt(const uint32_t index, const T & value) const
{
    check_hresult(static_cast<const IVector<T> &>(static_cast<const D &>(*this))->abi_SetAt(index, get(value)));
}

template <typename D, typename T>
void impl_IVector<D, T>::InsertAt(const uint32_t index, const T & value) const
{
    check_hresult(static_cast<const IVector<T> &>(static_cast<const D &>(*this))->abi_InsertAt(index, get(value)));
}

template <typename D, typename T>
void impl_IVector<D, T>::RemoveAt(const uint32_t index) const
{
    check_hresult(static_cast<const IVector<T> &>(static_cast<const D &>(*this))->abi_RemoveAt(index));
}

template <typename D, typename T>
void impl_IVector<D, T>::Append(const T & value) const
{
    check_hresult(static_cast<const IVector<T> &>(static_cast<const D &>(*this))->abi_Append(get(value)));
}

template <typename D, typename T>
void impl_IVector<D, T>::RemoveAtEnd() const
{
    check_hresult(static_cast<const IVector<T> &>(static_cast<const D &>(*this))->abi_RemoveAtEnd());
}

template <typename D, typename T>
void impl_IVector<D, T>::Clear() const
{
    check_hresult(static_cast<const IVector<T> &>(static_cast<const D &>(*this))->abi_Clear());
}

template <typename D, typename T>
uint32_t impl_IVector<D, T>::GetMany(uint32_t startIndex, array_ref<T> values) const
{
    uint32_t actual = 0;
    check_hresult(static_cast<const IVector<T> &>(static_cast<const D &>(*this))->abi_GetMany(startIndex, values.size(), get(values), &actual));
    return actual;
}

template <typename D, typename T>
void impl_IVector<D, T>::ReplaceAll(array_ref<const T> value) const
{
    check_hresult(static_cast<const IVector<T> &>(static_cast<const D &>(*this))->abi_ReplaceAll(value.size(), get(value)));
}

template <typename D, typename K, typename V>
V impl_IMapView<D, K, V>::Lookup(const K & key) const
{
    V result = impl::empty_value<V>();
    check_hresult(static_cast<const IMapView<K, V> &>(static_cast<const D &>(*this))->abi_Lookup(get(key), put(result)));
    return result;
}

template <typename D, typename K, typename V>
uint32_t impl_IMapView<D, K, V>::Size() const
{
    uint32_t size = 0;
    check_hresult(static_cast<const IMapView<K, V> &>(static_cast<const D &>(*this))->get_Size(&size));
    return size;
}

template <typename D, typename K, typename V>
bool impl_IMapView<D, K, V>::HasKey(const K & key) const
{
    bool found = false;
    check_hresult(static_cast<const IMapView<K, V> &>(static_cast<const D &>(*this))->abi_HasKey(get(key), put(found)));
    return found;
}

template <typename D, typename K, typename V>
void impl_IMapView<D, K, V>::Split(IMapView<K, V> & firstPartition, IMapView<K, V> & secondPartition)
{
    check_hresult(static_cast<const IMapView<K, V> &>(static_cast<const D &>(*this))->abi_Split(put(firstPartition), put(secondPartition)));
}

template <typename D, typename K, typename V>
V impl_IMap<D, K, V>::Lookup(const K & key) const
{
    V result = impl::empty_value<V>();
    check_hresult(static_cast<const IMap<K, V> &>(static_cast<const D &>(*this))->abi_Lookup(get(key), put(result)));
    return result;
}

template <typename D, typename K, typename V>
uint32_t impl_IMap<D, K, V>::Size() const
{
    uint32_t size = 0;
    check_hresult(static_cast<const IMap<K, V> &>(static_cast<const D &>(*this))->get_Size(&size));
    return size;
}

template <typename D, typename K, typename V>
bool impl_IMap<D, K, V>::HasKey(const K & key) const
{
    bool found = false;
    check_hresult(static_cast<const IMap<K, V> &>(static_cast<const D &>(*this))->abi_HasKey(get(key), put(found)));
    return found;
}

template <typename D, typename K, typename V>
IMapView<K, V> impl_IMap<D, K, V>::GetView() const
{
    IMapView<K, V> view;
    check_hresult(static_cast<const IMap<K, V> &>(static_cast<const D &>(*this))->abi_GetView(put(view)));
    return view;
}

template <typename D, typename K, typename V>
bool impl_IMap<D, K, V>::Insert(const K & key, const V & value) const
{
    bool replaced = false;
    check_hresult(static_cast<const IMap<K, V> &>(static_cast<const D &>(*this))->abi_Insert(get(key), get(value), put(replaced)));
    return replaced;
}

template <typename D, typename K, typename V>
void impl_IMap<D, K, V>::Remove(const K & key) const
{
    check_hresult(static_cast<const IMap<K, V> &>(static_cast<const D &>(*this))->abi_Remove(get(key)));
}

template <typename D, typename K, typename V>
void impl_IMap<D, K, V>::Clear() const
{
    check_hresult(static_cast<const IMap<K, V> &>(static_cast<const D &>(*this))->abi_Clear());
}

template <typename D, typename K>
CollectionChange impl_IMapChangedEventArgs<D, K>::CollectionChange() const
{
    Collections::CollectionChange value{};
    check_hresult(static_cast<const IMapChangedEventArgs<K> &>(static_cast<const D &>(*this))->get_CollectionChange(&value));
    return value;
}

template <typename D, typename K>
K impl_IMapChangedEventArgs<D, K>::Key() const
{
    K result = impl::empty_value<K>();
    check_hresult(static_cast<const IMapChangedEventArgs<K> &>(static_cast<const D &>(*this))->get_Key(put(result)));
    return result;
}

template <typename D, typename K, typename V>
event_token impl_IObservableMap<D, K, V>::MapChanged(const MapChangedEventHandler<K, V> & handler) const
{
    event_token cookie{};
    check_hresult(static_cast<const IObservableMap<K, V> &>(static_cast<const D &>(*this))->add_MapChanged(get(handler), &cookie));
    return cookie;
}

template <typename D, typename K, typename V>
void impl_IObservableMap<D, K, V>::MapChanged(const event_token cookie) const
{
    check_hresult(static_cast<const IObservableMap<K, V> &>(static_cast<const D &>(*this))->remove_MapChanged(cookie));
}

template <typename D, typename T>
event_token impl_IObservableVector<D, T>::VectorChanged(const VectorChangedEventHandler<T> & handler) const
{
    event_token cookie{};
    check_hresult(static_cast<const IObservableVector<T> &>(static_cast<const D &>(*this))->add_VectorChanged(get(handler), &cookie));
    return cookie;
}

template <typename D, typename T>
void impl_IObservableVector<D, T>::VectorChanged(const event_token cookie) const
{
    check_hresult(static_cast<const IObservableVector<T> &>(static_cast<const D &>(*this))->remove_VectorChanged(cookie));
}


}

namespace impl {

template <typename K, typename V, typename H>
struct map_changed_event_handler : implements<map_changed_event_handler<K, V, H>, abi<Windows::Foundation::Collections::MapChangedEventHandler<K, V>>>, H
{
    map_changed_event_handler(H && handler) : H(std::forward<H>(handler)) {}

    HRESULT __stdcall abi_Invoke(abi_arg_in<Windows::Foundation::Collections::IObservableMap<K, V>> sender, abi_arg_in<Windows::Foundation::Collections::IMapChangedEventArgs<K>> args) noexcept override
    {
        try
        {
            (*this)(*reinterpret_cast<const Windows::Foundation::Collections::IObservableMap<K, V> *>(&sender), *reinterpret_cast<const Windows::Foundation::Collections::IMapChangedEventArgs<K> *>(&args));
            return S_OK;
        }
        catch (...) { return impl::to_hresult(); }
    }
};

template <typename T, typename H>
struct vector_changed_event_handler : implements<vector_changed_event_handler<T, H>, abi<Windows::Foundation::Collections::VectorChangedEventHandler<T>>>, H
{
    vector_changed_event_handler(H && handler) : H(std::forward<H>(handler)) {}

    HRESULT __stdcall abi_Invoke(abi_arg_in<Windows::Foundation::Collections::IObservableVector<T>> sender, abi_arg_in<Windows::Foundation::Collections::IVectorChangedEventArgs> args) noexcept override
    {
        try
        {
            (*this)(*reinterpret_cast<const Windows::Foundation::Collections::IObservableVector<T> *>(&sender), *reinterpret_cast<const Windows::Foundation::Collections::IVectorChangedEventArgs *>(&args));
            return S_OK;
        }
        catch (...) { return impl::to_hresult(); }
    }
};

}

namespace Windows::Foundation::Collections {

template <typename K, typename V> template <typename L> MapChangedEventHandler<K, V>::MapChangedEventHandler(L handler) :
    MapChangedEventHandler(impl::make_delegate<impl::map_changed_event_handler<K, V, L>, MapChangedEventHandler<K, V>>(std::forward<L>(handler)))
{}

template <typename K, typename V> template <typename F> MapChangedEventHandler<K, V>::MapChangedEventHandler(F * handler) :
    MapChangedEventHandler([=](auto && ... args) { handler(args ...); })
{}

template <typename K, typename V> template <typename O, typename M> MapChangedEventHandler<K, V>::MapChangedEventHandler(O * object, M method) :
    MapChangedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

template <typename K, typename V> void MapChangedEventHandler<K, V>::operator()(const IObservableMap<K, V> & sender, const IMapChangedEventArgs<K> & args) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(args)));
}

template <typename T> template <typename L> VectorChangedEventHandler<T>::VectorChangedEventHandler(L handler) :
    VectorChangedEventHandler(impl::make_delegate<impl::vector_changed_event_handler<T, L>, VectorChangedEventHandler<T>>(std::forward<L>(handler)))
{}

template <typename T> template <typename F> VectorChangedEventHandler<T>::VectorChangedEventHandler(F * handler) :
    VectorChangedEventHandler([=](auto && ... args) { handler(args ...); })
{}

template <typename T> template <typename O, typename M> VectorChangedEventHandler<T>::VectorChangedEventHandler(O * object, M method) :
    VectorChangedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

template <typename T> void VectorChangedEventHandler<T>::operator()(const IObservableVector<T> & sender, const IVectorChangedEventArgs & args) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(args)));
}

template <typename T, std::enable_if_t<!impl::has_GetAt<T>::value> * = nullptr>
auto begin(const T & collection) -> decltype(collection.First())
{
    auto result = collection.First();

    if (!result.HasCurrent())
    {
        return {};
    }

    return result;
}

template <typename T, std::enable_if_t<!impl::has_GetAt<T>::value> * = nullptr>
auto end(const T & collection) -> decltype(collection.First())
{
    collection;
    return {};
}

template <typename T, std::enable_if_t<impl::has_GetAt<T>::value> * = nullptr>
impl::fast_iterator<T> begin(const T & collection) noexcept
{
    return impl::fast_iterator<T>(collection, 0);
}

template <typename T, std::enable_if_t<impl::has_GetAt<T>::value> * = nullptr>
impl::fast_iterator<T> end(const T & collection)
{
    return impl::fast_iterator<T>(collection, collection.Size());
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::Foundation::Collections::IVectorChangedEventArgs> : produce_base<D, Windows::Foundation::Collections::IVectorChangedEventArgs>
{
    HRESULT __stdcall get_CollectionChange(Windows::Foundation::Collections::CollectionChange * value) noexcept final
    {
        try
        {
            *value = this->shim().CollectionChange();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Index(uint32_t * value) noexcept final
    {
        try
        {
            *value = this->shim().Index();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D, typename T>
struct produce<D, Windows::Foundation::Collections::IIterator<T>> : produce_base<D, Windows::Foundation::Collections::IIterator<T>>
{
    HRESULT __stdcall get_Current(abi_arg_out<T> current) noexcept final
    {
        try
        {
            *current = detach(this->shim().Current());
            return S_OK;
        }
        catch (...)
        {
            clear_abi(current);
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HasCurrent(bool * hasCurrent) noexcept final
    {
        try
        {
            *hasCurrent = this->shim().HasCurrent();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_MoveNext(bool * hasCurrent) noexcept final
    {
        try
        {
            *hasCurrent = this->shim().MoveNext();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMany(uint32_t capacity, abi_arg_out<T> value, uint32_t * actual) noexcept final
    {
        try
        {
            *actual = this->shim().GetMany({ reinterpret_cast<T *>(value), reinterpret_cast<T *>(value) + capacity });
            return S_OK;
        }
        catch (...)
        {
            clear_abi(value);
            *actual = 0;
            return to_hresult();
        }
    }
};

template <typename D, typename T>
struct produce<D, Windows::Foundation::Collections::IIterable<T>> : produce_base<D, Windows::Foundation::Collections::IIterable<T>>
{
    HRESULT __stdcall abi_First(abi_arg_out<Windows::Foundation::Collections::IIterator<T>> first) noexcept final
    {
        try
        {
            *first = detach(this->shim().First());
            return S_OK;
        }
        catch (...)
        {
            *first = nullptr;
            return to_hresult();
        }
    }
};

template <typename D, typename K, typename V>
struct produce<D, Windows::Foundation::Collections::IKeyValuePair<K, V>> : produce_base<D, Windows::Foundation::Collections::IKeyValuePair<K, V>>
{
    HRESULT __stdcall get_Key(abi_arg_out<K> key) noexcept final
    {
        try
        {
            *key = detach(this->shim().Key());
            return S_OK;
        }
        catch (...)
        {
            clear_abi(key);
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_arg_out<V> value) noexcept final
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            clear_abi(value);
            return to_hresult();
        }
    }
};

template <typename D, typename T>
struct produce<D, Windows::Foundation::Collections::IVectorView<T>> : produce_base<D, Windows::Foundation::Collections::IVectorView<T>>
{
    HRESULT __stdcall abi_GetAt(uint32_t index, abi_arg_out<T> item) noexcept final
    {
        try
        {
            *item = detach(this->shim().GetAt(index));
            return S_OK;
        }
        catch (...)
        {
            clear_abi(item);
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Size(uint32_t * size) noexcept final
    {
        try
        {
            *size = this->shim().Size();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_IndexOf(abi_arg_in<T> value, uint32_t * index, bool * found) noexcept final
    {
        try
        {
            *found = this->shim().IndexOf(*reinterpret_cast<const T *>(&value), *index);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMany(uint32_t startIndex, uint32_t capacity, abi_arg_out<T> value, uint32_t * actual) noexcept final
    {
        try
        {
            *actual = this->shim().GetMany(startIndex, { reinterpret_cast<T *>(value), reinterpret_cast<T *>(value) + capacity });
            return S_OK;
        }
        catch (...)
        {
            clear_abi(value);
            *actual = 0;
            return to_hresult();
        }
    }
};

template <typename D, typename T>
struct produce<D, Windows::Foundation::Collections::IVector<T>> : produce_base<D, Windows::Foundation::Collections::IVector<T>>
{
    HRESULT __stdcall abi_GetAt(uint32_t index, abi_arg_out<T> item) noexcept final
    {
        try
        {
            *item = detach(this->shim().GetAt(index));
            return S_OK;
        }
        catch (...)
        {
            clear_abi(item);
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Size(uint32_t * size) noexcept final
    {
        try
        {
            *size = this->shim().Size();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_GetView(abi_arg_out<Windows::Foundation::Collections::IVectorView<T>> view) noexcept final
    {
        try
        {
            *view = detach(this->shim().GetView());
            return S_OK;
        }
        catch (...)
        {
            *view = nullptr;
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_IndexOf(abi_arg_in<T> value, uint32_t * index, bool * found) noexcept final
    {
        try
        {
            *found = this->shim().IndexOf(*reinterpret_cast<const T *>(&value), *index);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_SetAt(uint32_t index, abi_arg_in<T> item) noexcept final
    {
        try
        {
            this->shim().SetAt(index, *reinterpret_cast<const T *>(&item));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertAt(uint32_t index, abi_arg_in<T> item) noexcept final
    {
        try
        {
            this->shim().InsertAt(index, *reinterpret_cast<const T *>(&item));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveAt(uint32_t index) noexcept final
    {
        try
        {
            this->shim().RemoveAt(index);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_Append(abi_arg_in<T> item) noexcept final
    {
        try
        {
            this->shim().Append(*reinterpret_cast<const T *>(&item));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveAtEnd() noexcept final
    {
        try
        {
            this->shim().RemoveAtEnd();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_Clear() noexcept final
    {
        try
        {
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMany(uint32_t startIndex, uint32_t capacity, abi_arg_out<T> value, uint32_t * actual) noexcept final
    {
        try
        {
            *actual = this->shim().GetMany(startIndex, { reinterpret_cast<T *>(value), reinterpret_cast<T *>(value) + capacity });
            return S_OK;
        }
        catch (...)
        {
            clear_abi(value);
            *actual = 0;
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_ReplaceAll(uint32_t count, abi_arg_out<T> item) noexcept final
    {
        try
        {
            this->shim().ReplaceAll({ reinterpret_cast<T const *>(item), reinterpret_cast<T const *>(item) + count });
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D, typename K, typename V>
struct produce<D, Windows::Foundation::Collections::IMapView<K, V>> : produce_base<D, Windows::Foundation::Collections::IMapView<K, V>>
{
    HRESULT __stdcall abi_Lookup(abi_arg_in<K> key, abi_arg_out<V> value) noexcept final
    {
        try
        {
            *value = detach(this->shim().Lookup(*reinterpret_cast<const K *>(&key)));
            return S_OK;
        }
        catch (...)
        {
            clear_abi(value);
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Size(uint32_t * size) noexcept final
    {
        try
        {
            *size = this->shim().Size();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_HasKey(abi_arg_in<K> key, bool * found) noexcept final
    {
        try
        {
            *found = this->shim().HasKey(*reinterpret_cast<const K *>(&key));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_Split(abi_arg_out<Windows::Foundation::Collections::IMapView<K, V>> firstPartition, abi_arg_out<Windows::Foundation::Collections::IMapView<K, V>> secondPartition) noexcept final
    {
        try
        {
            this->shim().Split(*reinterpret_cast<Windows::Foundation::Collections::IMapView<K, V> *>(firstPartition), *reinterpret_cast<Windows::Foundation::Collections::IMapView<K, V> *>(secondPartition));
            return S_OK;
        }
        catch (...)
        {
            *firstPartition = nullptr;
            *secondPartition = nullptr;
            return to_hresult();
        }
    }
};

template <typename D, typename K, typename V>
struct produce<D, Windows::Foundation::Collections::IMap<K, V>> : produce_base<D, Windows::Foundation::Collections::IMap<K, V>>
{
    HRESULT __stdcall abi_Lookup(abi_arg_in<K> key, abi_arg_out<V> value) noexcept final
    {
        try
        {
            *value = detach(this->shim().Lookup(*reinterpret_cast<const K *>(&key)));
            return S_OK;
        }
        catch (...)
        {
            clear_abi(value);
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Size(uint32_t * size) noexcept final
    {
        try
        {
            *size = this->shim().Size();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_HasKey(abi_arg_in<K> key, bool * found) noexcept final
    {
        try
        {
            *found = this->shim().HasKey(*reinterpret_cast<const K *>(&key));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_GetView(abi_arg_out<Windows::Foundation::Collections::IMapView<K, V>> view) noexcept final
    {
        try
        {
            *view = detach(this->shim().GetView());
            return S_OK;
        }
        catch (...)
        {
            *view = nullptr;
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_Insert(abi_arg_in<K> key, abi_arg_in<V> value, bool * replaced) noexcept final
    {
        try
        {
            *replaced = this->shim().Insert(*reinterpret_cast<const K *>(&key), *reinterpret_cast<const V *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_Remove(abi_arg_in<K> key) noexcept final
    {
        try
        {
            this->shim().Remove(*reinterpret_cast<const K *>(&key));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_Clear() noexcept final
    {
        try
        {
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D, typename K>
struct produce<D, Windows::Foundation::Collections::IMapChangedEventArgs<K>> : produce_base<D, Windows::Foundation::Collections::IMapChangedEventArgs<K>>
{
    HRESULT __stdcall get_CollectionChange(winrt::Windows::Foundation::Collections::CollectionChange * value) noexcept final
    {
        try
        {
            *value = this->shim().CollectionChange();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Key(abi_arg_out<K> value) noexcept final
    {
        try
        {
            *value = detach(this->shim().Key());
            return S_OK;
        }
        catch (...)
        {
            clear_abi(value);
            return to_hresult();
        }
    }
};

template <typename D, typename K, typename V>
struct produce<D, Windows::Foundation::Collections::IObservableMap<K, V>> : produce_base<D, Windows::Foundation::Collections::IObservableMap<K, V>>
{
    HRESULT __stdcall add_MapChanged(abi_arg_in<Windows::Foundation::Collections::MapChangedEventHandler<K, V>> handler, event_token * token) noexcept final
    {
        try
        {
            *token = this->shim().MapChanged(*reinterpret_cast<const Windows::Foundation::Collections::MapChangedEventHandler<K, V> *>(&handler));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_MapChanged(event_token token) noexcept final
    {
        try
        {
            this->shim().MapChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D, typename T>
struct produce<D, Windows::Foundation::Collections::IObservableVector<T>> : produce_base<D, Windows::Foundation::Collections::IObservableVector<T>>
{
    HRESULT __stdcall add_VectorChanged(abi_arg_in<Windows::Foundation::Collections::VectorChangedEventHandler<T>> handler, event_token * token) noexcept final
    {
        try
        {
            *token = this->shim().VectorChanged(*reinterpret_cast<const Windows::Foundation::Collections::VectorChangedEventHandler<T> *>(&handler));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_VectorChanged(event_token token) noexcept final
    {
        try
        {
            this->shim().VectorChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

namespace impl
{
    struct collection_version
    {
        collection_version()
        {}

        void increment()  noexcept
        {
            m_version++;
        }

        uint32_t get() const noexcept
        {
            return m_version;
        }

    private:

        uint32_t m_version = 0;
    };

    struct collection_version_validator
    {
        collection_version_validator(collection_version& owner_version, uint32_t expected_version) noexcept : 
            m_expected_version(expected_version),
            m_owner_version(owner_version)
        {}

        void validate() const
        {
            if (m_expected_version != m_owner_version.get())
            {
                throw hresult_changed_state();
            }
        }

    private:

        const uint32_t m_expected_version;
        collection_version& m_owner_version;
    };

    template <typename T>
    struct collection_traits
    {
        static T copy(T const & value)
        {
            return value;
        }

        template<typename InputIt, typename Size, typename OutputIt>
        static void copy_n(InputIt first, Size count, OutputIt result)
        {
            std::copy_n(first, count, result);
        }
    };

    template <typename K, typename V>
    struct collection_traits<Windows::Foundation::Collections::IKeyValuePair<K, V>>
    {
        static auto copy(std::pair<const K, V> const & value)
        {
            return make<impl::key_value_pair<K, V>>(value.first, value.second);
        }

        template<typename InputIt, typename Size, typename OutputIt>
        static void copy_n(InputIt first, Size count, OutputIt result)
        {
            std::transform(first, std::next(first, count), result, [](std::pair<const K, V> value)
            {
                return make<impl::key_value_pair<K, V>>(value.first, value.second);
            });
        }
    };

    template <typename T>
    struct vector : implements<vector<T>,
                               Windows::Foundation::Collections::IVector<T>,
                               Windows::Foundation::Collections::IIterable<T>>
    {
        vector() = default;

        vector(std::vector<T> && values) : m_storage(std::move(values))
        {}

        void Append(const T & value)
        {
            m_version.increment();
            m_storage.push_back(value);
        }

        void Clear() noexcept
        {
            m_version.increment();
            m_storage.clear();
        }

        T GetAt(const uint32_t index) const
        {
            if (index >= m_storage.size())
            {
                throw hresult_out_of_bounds();
            }

            return m_storage[index];
        }

        uint32_t GetMany(const uint32_t startIndex, array_ref<T> values) const
        {
            if (startIndex >= m_storage.size())
            {
                return 0;
            }

            uint32_t actual = static_cast<uint32_t>(m_storage.size() - startIndex);

            if (actual > values.size())
            {
                actual = values.size();
            }

            std::copy_n(m_storage.begin() + startIndex, actual, values.begin());
            return actual;
        }

        Windows::Foundation::Collections::IVectorView<T> GetView()
        {
            return make<vector_view_from_vector<T>>(this, m_version, m_version.get());
        }

        bool IndexOf(const T & value, uint32_t & index) const noexcept
        {
            uint32_t pos = static_cast<uint32_t>(std::find(m_storage.begin(), m_storage.end(), value) - m_storage.begin());
            const bool valid_index = index < m_storage.size();

            index = valid_index ? pos : 0;
            return valid_index;
        }

        void InsertAt(const uint32_t index, const T & value)
        {
            if (index > m_storage.size())
            {
                throw hresult_out_of_bounds();
            }

            m_version.increment();
            m_storage.insert(m_storage.begin() + index, value);
        }

        void RemoveAt(const uint32_t index)
        {
            if (index >= m_storage.size())
            {
                throw hresult_out_of_bounds();
            }

            m_version.increment();
            m_storage.erase(m_storage.begin() + index);
        }

        void RemoveAtEnd()
        {
            if (m_storage.empty())
            {
                throw hresult_out_of_bounds();
            }

            m_version.increment();
            m_storage.pop_back();
        }

        void ReplaceAll(array_ref<const T> value)
        {
            m_version.increment();
            m_storage.assign(value.begin(), value.end());
        }

        void SetAt(const uint32_t index, const T & value)
        {
            if (index >= m_storage.size())
            {
                throw hresult_out_of_bounds();
            }

            m_version.increment();
            m_storage[index] = value;
        }

        uint32_t Size() const noexcept
        {
            return static_cast<uint32_t>(m_storage.size());
        }

        Windows::Foundation::Collections::IIterator<T> First()
        {
            return make<iterator<T, std::vector<T>>>(*this, m_storage, m_version, m_version.get());
        }

    private:

        std::vector<T> m_storage;
        collection_version m_version;
    };

    template <typename T>
    struct vector_view_standalone : implements<vector_view_standalone<T>,
                                               Windows::Foundation::Collections::IVectorView<T>,
                                               Windows::Foundation::Collections::IIterable<T>>
    {
        vector_view_standalone() = default;

        vector_view_standalone(std::vector<T> && values) : m_storage(std::move(values))
        {}

        T GetAt(const uint32_t index) const
        {
            if (index >= m_storage.size())
            {
                throw hresult_out_of_bounds();
            }

            return m_storage[index];
        }

        uint32_t GetMany(const uint32_t startIndex, array_ref<T> values) const
        {
            if (startIndex >= m_storage.size())
            {
                return 0;
            }

            uint32_t actual = static_cast<uint32_t>(m_storage.size() - startIndex);

            if (actual > values.size())
            {
                actual = values.size();
            }

            std::copy_n(m_storage.begin() + startIndex, actual, values.begin());
            return actual;
        }

        bool IndexOf(const T & value, uint32_t & index) const noexcept
        {
            uint32_t pos = static_cast<uint32_t>(std::find(m_storage.begin(), m_storage.end(), value) - m_storage.begin());
            const bool valid_index = index < m_storage.size();

            index = valid_index ? pos : 0;
            return valid_index;
        }

        uint32_t Size() const noexcept
        {
            return static_cast<uint32_t>(m_storage.size());
        }

        Windows::Foundation::Collections::IIterator<T> First() const
        {
            return make<iterator_standalone<T, std::vector<T>>>(*this, m_storage);
        }

    private:

        const std::vector<T> m_storage;
    };

    template <typename T>
    struct vector_view_from_vector : implements<vector_view_from_vector<T>,
                                                Windows::Foundation::Collections::IVectorView<T>,
                                                Windows::Foundation::Collections::IIterable<T>>
    {
        vector_view_from_vector(vector<T>* vector, collection_version & owner_version, const uint32_t expected_version) :
            version_validator(owner_version, expected_version)
        {
            m_storage.copy_from(vector);
        }

        T GetAt(const uint32_t index) const
        {
            version_validator.validate();
            return m_storage->GetAt(index);
        }

        uint32_t GetMany(const uint32_t startIndex, array_ref<T> values) const
        {
            version_validator.validate();
            return m_storage->GetMany(startIndex, values);
        }

        bool IndexOf(const T & value, uint32_t & index) const
        {
            version_validator.validate();
            return m_storage->IndexOf(value, index);
        }

        uint32_t Size() const
        {
            version_validator.validate();
            return m_storage->Size();
        }

        Windows::Foundation::Collections::IIterator<T> First()
        {
            version_validator.validate();
            return m_storage->First();
        }

    private:

        com_ptr<vector<T>> m_storage;
        collection_version_validator version_validator;
    };

    template <typename T, typename Container>
    struct iterable : implements<iterable<T, Container>,
                                 Windows::Foundation::Collections::IIterable<T>>
    {
        iterable(Container && values) : m_storage(std::move(values))
        {}

        Windows::Foundation::Collections::IIterator<T> First() const
        {
            return make<iterator_standalone<T, Container>>(*this, m_storage);
        }

    private:

        const Container m_storage;
    };

    template <typename T, typename Container>
    struct iterator : implements<iterator<T, Container>,
                                 Windows::Foundation::Collections::IIterator<T>>
    {
        iterator(const Windows::Foundation::Collections::IIterable<T> & owner, const Container & values, collection_version & owner_version, const uint32_t storage_version) noexcept :
            m_storage(owner),
            version_validator(owner_version, storage_version),
            m_current(values.begin()),
            m_end(values.end())
        {}

        T Current() const
        {
            version_validator.validate();

            if (m_current == m_end)
            {
                throw hresult_out_of_bounds();
            }

            return collection_traits<T>::copy(*m_current);
        }

        bool HasCurrent() const
        {
            version_validator.validate();
            return m_current != m_end;
        }

        bool MoveNext()
        {
            version_validator.validate();

            if (m_current != m_end)
            {
                ++m_current;
            }

            return m_current != m_end;
        }

        uint32_t GetMany(array_ref<T> values)
        {
            version_validator.validate();

            uint32_t actual = static_cast<uint32_t>(std::distance(m_current, m_end));

            if (actual > values.size())
            {
                actual = values.size();
            }

            collection_traits<T>::copy_n(m_current, actual, values.begin());
            std::advance(m_current, actual);
            return actual;
        }

    private:

        const Windows::Foundation::Collections::IIterable<T> m_storage;
        collection_version_validator version_validator;
        typename Container::const_iterator m_current;
        typename Container::const_iterator m_end;
    };

    template <typename T, typename Container>
    struct iterator_standalone : implements<iterator_standalone<T, Container>,
                                            Windows::Foundation::Collections::IIterator<T>>
    {
        iterator_standalone(const Windows::Foundation::Collections::IIterable<T> & owner, const Container & values) noexcept :
            m_storage(owner),
            m_current(values.begin()),
            m_end(values.end())
        {}

        T Current() const
        {
            if (m_current == m_end)
            {
                throw hresult_out_of_bounds();
            }

            return collection_traits<T>::copy(*m_current);
        }

        bool HasCurrent() const
        {
            return m_current != m_end;
        }

        bool MoveNext()
        {
            if (m_current != m_end)
            {
                ++m_current;
            }

            return HasCurrent();
        }

        uint32_t GetMany(array_ref<T> values)
        {
            uint32_t actual = static_cast<uint32_t>(std::distance(m_current, m_end));

            if (actual > values.size())
            {
                actual = values.size();
            }

            collection_traits<T>::copy_n(m_current, actual, values.begin());
            std::advance(m_current, actual);
            return actual;
        }

    private:

        const Windows::Foundation::Collections::IIterable<T> m_storage;
        typename Container::const_iterator m_current;
        typename Container::const_iterator m_end;
    };

    template <typename K, typename V>
    struct key_value_pair : implements<key_value_pair<K, V>,
                                       Windows::Foundation::Collections::IKeyValuePair<K, V>>
    {
        key_value_pair(const K & key, const V & value) :
            m_key(key),
            m_value(value)
        {}

        K Key() const
        {
            return m_key;
        }

        V Value() const
        {
            return m_value;
        }

    private:

        K m_key;
        V m_value;
    };

    template <typename K, typename V, typename Container>
    struct map : implements<map<K, V, Container>,
                            Windows::Foundation::Collections::IMap<K, V>,
                            Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<K, V>>>
    {
        map() = default;

        map(Container && values) : m_storage(std::move(values))
        {}

        void Clear() noexcept
        {
            m_version.increment();
            m_storage.clear();
        }

        uint32_t Size() const noexcept
        {
            return static_cast<uint32_t>(m_storage.size());
        }

        Windows::Foundation::Collections::IMapView<K, V> GetView()
        {
            return make<map_view_from_map<K, V, Container>>(this, m_version, m_version.get());
        }

        bool HasKey(const K & key) const noexcept
        {
            return m_storage.find(key) != m_storage.end();
        }

        bool Insert(const K & key, const V & value)
        {
            m_version.increment();
            auto pair = m_storage.insert_or_assign(key, value);
            return !pair.second;
        }

        V Lookup(const K & key) const
        {
            auto pair = m_storage.find(key);

            if (pair == m_storage.end())
            {
                throw hresult_out_of_bounds();
            }

            return pair->second;
        }

        void Remove(const K & key) noexcept
        {
            m_version.increment();
            m_storage.erase(key);
        }

        Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<K, V>> First()
        {
            return make<iterator<Windows::Foundation::Collections::IKeyValuePair<K, V>, Container>>(*this, m_storage, m_version, m_version.get());
        }

    private:

        Container m_storage;
        collection_version m_version;
    };

    template <typename K, typename V, typename Container>
    struct map_view_from_map : implements<map_view_from_map<K, V, Container>,
                                          Windows::Foundation::Collections::IMapView<K, V>,
                                          Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<K, V>>>
    {
        map_view_from_map(map<K, V, Container>* map, collection_version & owner_version, const uint32_t storage_version) : 
            version_validator(owner_version, storage_version)
        {
            m_storage.copy_from(map);
        }

        bool HasKey(const K & key) const
        {
            version_validator.validate();
            return m_storage->HasKey(key);
        }

        V Lookup(const K & key) const
        {
            version_validator.validate();
            return m_storage->Lookup(key);
        }

        uint32_t Size() const
        {
            version_validator.validate();
            return m_storage->Size();
        }

        void Split(Windows::Foundation::Collections::IMapView<K, V> & firstPartition, Windows::Foundation::Collections::IMapView<K, V> & secondPartition) const
        {
            version_validator.validate();

            firstPartition = nullptr;
            secondPartition = nullptr;
        }

        Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<K, V>> First()
        {
            version_validator.validate();
            return m_storage->First();
        }

    private:

        com_ptr<map<K, V, Container>> m_storage;
        collection_version_validator version_validator;
    };

    template <typename K, typename V, typename Container>
    struct map_view_standalone: implements<map_view_standalone<K, V, Container>,
                                           Windows::Foundation::Collections::IMapView<K, V>,
                                           Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<K, V>>>
    {
        map_view_standalone() = default;

        map_view_standalone(Container && values) : m_storage(std::move(values))
        {}

        bool HasKey(const K & key) const noexcept
        {
            return m_storage.find(key) != m_storage.end();
        }

        V Lookup(const K & key) const
        {
            auto pair = m_storage.find(key);

            if (pair == m_storage.end())
            {
                throw hresult_out_of_bounds();
            }

            return pair->second;
        }

        uint32_t Size() const noexcept
        {
           return static_cast<uint32_t>(m_storage.size());
        }

        void Split(Windows::Foundation::Collections::IMapView<K, V> & firstPartition, Windows::Foundation::Collections::IMapView<K, V> & secondPartition) const noexcept
        {
            firstPartition = nullptr;
            secondPartition = nullptr;
        }

        Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<K, V>> First()
        {
            return make<impl::iterator_standalone<Windows::Foundation::Collections::IKeyValuePair<K, V>, Container>>(*this, m_storage);
        }

    private:

        Container m_storage;
    };
}

namespace Windows::Foundation {

struct Point
{
    float X;
    float Y;

    Point() noexcept = default;

    Point(float X, float Y) noexcept
        : X(X), Y(Y)
    {}

#ifdef WINRT_NUMERICS

    Point(const Numerics::float2 & value) noexcept
        : X(value.x), Y(value.y)
    {}

    operator Numerics::float2() const noexcept
    {
        return { X, Y };
    }

#endif
};

struct Size
{
    float Width;
    float Height;

    Size() noexcept = default;

    Size(float Width, float Height) noexcept
        : Width(Width), Height(Height)
    {}

#ifdef WINRT_NUMERICS

    Size(const Numerics::float2 & value) noexcept
        : Width(value.x), Height(value.y)
    {}

    operator Numerics::float2() const noexcept
    {
        return { Width, Height };
    }

#endif
};

using TimeSpan = std::chrono::duration<int64_t, std::ratio<1, 10'000'000>>;

}

namespace ABI::Windows::Foundation {

using Point = winrt::Windows::Foundation::Point;
using Size = winrt::Windows::Foundation::Size;
using TimeSpan = winrt::Windows::Foundation::TimeSpan;

}

namespace Windows::Foundation {

enum class AsyncStatus
{
    Started,
    Completed,
    Canceled,
    Error,
};

}

namespace impl {

template <typename Async>
void blocking_suspend(const Async & async)
{
    if (async.Status() == Windows::Foundation::AsyncStatus::Completed)
    {
        return;
    }

    lock x;
    condition_variable cv;
    bool completed = false;

    async.Completed([&](const Async &, Windows::Foundation::AsyncStatus)
    {
        const winrt::lock_guard guard(x);
        completed = true;
        cv.wake_one();
    });

    const winrt::lock_guard guard(x);
    cv.wait_while(x, [&] { return !completed; });
}

}

namespace ABI::Windows::Foundation {

struct AsyncActionCompletedHandler;
template <typename TProgress> struct AsyncActionProgressHandler;
template <typename TProgress> struct AsyncActionWithProgressCompletedHandler;
template <typename TResult, typename TProgress> struct AsyncOperationProgressHandler;
template <typename TResult, typename TProgress> struct AsyncOperationWithProgressCompletedHandler;
template <typename TResult> struct AsyncOperationCompletedHandler;

struct IAsyncInfo;
struct IAsyncAction;
template <typename TProgress> struct IAsyncActionWithProgress;
template <typename TResult> struct IAsyncOperation;
template <typename TResult, typename TProgress> struct IAsyncOperationWithProgress;

struct __declspec(uuid("a4ed5c81-76c9-40bd-8be6-b1d90fb20ae7")) __declspec(novtable) AsyncActionCompletedHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(IAsyncAction * asyncInfo, winrt::Windows::Foundation::AsyncStatus asyncStatus) = 0;
};

template <typename TProgress>
struct __declspec(novtable) impl_AsyncActionProgressHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(IAsyncActionWithProgress<TProgress> * asyncInfo, arg_in<TProgress> progressInfo) = 0;
};

template <typename TProgress>
struct __declspec(novtable) impl_AsyncActionWithProgressCompletedHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(IAsyncActionWithProgress<TProgress> * asyncInfo, winrt::Windows::Foundation::AsyncStatus status) = 0;
};

template <typename TResult, typename TProgress>
struct __declspec(novtable) impl_AsyncOperationProgressHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(IAsyncOperationWithProgress<TResult, TProgress> * asyncInfo, arg_in<TProgress> progressInfo) = 0;
};

template <typename TResult, typename TProgress>
struct __declspec(novtable) impl_AsyncOperationWithProgressCompletedHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(IAsyncOperationWithProgress<TResult, TProgress> * asyncInfo, winrt::Windows::Foundation::AsyncStatus status) = 0;
};

template <typename TResult>
struct __declspec(novtable) impl_AsyncOperationCompletedHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(IAsyncOperation<TResult> * asyncInfo, winrt::Windows::Foundation::AsyncStatus status) = 0;
};

struct __declspec(uuid("00000036-0000-0000-c000-000000000046")) __declspec(novtable) IAsyncInfo : IInspectable
{
    virtual HRESULT __stdcall get_Id(uint32_t * id) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::Foundation::AsyncStatus * status) = 0;
    virtual HRESULT __stdcall get_ErrorCode(HRESULT * errorCode) = 0;
    virtual HRESULT __stdcall abi_Cancel() = 0;
    virtual HRESULT __stdcall abi_Close() = 0;
};

struct __declspec(uuid("5a648006-843a-4da9-865b-9d26e5dfad7b")) __declspec(novtable) IAsyncAction : IInspectable
{
    virtual HRESULT __stdcall put_Completed(AsyncActionCompletedHandler * handler) = 0;
    virtual HRESULT __stdcall get_Completed(AsyncActionCompletedHandler ** handler) = 0;
    virtual HRESULT __stdcall abi_GetResults() = 0;
};

template <typename TProgress>
struct __declspec(novtable) impl_IAsyncActionWithProgress : IInspectable
{
    virtual HRESULT __stdcall put_Progress(AsyncActionProgressHandler<TProgress> * handler) = 0;
    virtual HRESULT __stdcall get_Progress(AsyncActionProgressHandler<TProgress> ** handler) = 0;
    virtual HRESULT __stdcall put_Completed(AsyncActionWithProgressCompletedHandler<TProgress> * handler) = 0;
    virtual HRESULT __stdcall get_Completed(AsyncActionWithProgressCompletedHandler<TProgress> ** handler) = 0;
    virtual HRESULT __stdcall abi_GetResults() = 0;
};


template <typename TResult>
struct __declspec(novtable) impl_IAsyncOperation : IInspectable
{
    virtual HRESULT __stdcall put_Completed(AsyncOperationCompletedHandler<TResult> * handler) = 0;
    virtual HRESULT __stdcall get_Completed(AsyncOperationCompletedHandler<TResult> ** handler) = 0;
    virtual HRESULT __stdcall abi_GetResults(arg_out<TResult> results) = 0;
};

template <typename TResult, typename TProgress>
struct __declspec(novtable) impl_IAsyncOperationWithProgress : IInspectable
{
    virtual HRESULT __stdcall put_Progress(AsyncOperationProgressHandler<TResult, TProgress> * handler) = 0;
    virtual HRESULT __stdcall get_Progress(AsyncOperationProgressHandler<TResult, TProgress> ** handler) = 0;
    virtual HRESULT __stdcall put_Completed(AsyncOperationWithProgressCompletedHandler<TResult, TProgress> * handler) = 0;
    virtual HRESULT __stdcall get_Completed(AsyncOperationWithProgressCompletedHandler<TResult, TProgress> ** handler) = 0;
    virtual HRESULT __stdcall abi_GetResults(arg_out<TResult> results) = 0;
};

template <typename TProgress> struct AsyncActionProgressHandler : impl::not_specialized<AsyncActionProgressHandler<TProgress>> {};
template <typename TProgress> struct AsyncActionWithProgressCompletedHandler : impl::not_specialized<AsyncActionWithProgressCompletedHandler<TProgress>> {};
template <typename TResult, typename TProgress> struct AsyncOperationProgressHandler : impl::not_specialized<AsyncOperationProgressHandler<TResult, TProgress>> {};
template <typename TResult, typename TProgress> struct AsyncOperationWithProgressCompletedHandler : impl::not_specialized<AsyncOperationWithProgressCompletedHandler<TResult, TProgress>> {};
template <typename TResult> struct AsyncOperationCompletedHandler : impl::not_specialized<AsyncOperationCompletedHandler<TResult>> {};
template <typename TProgress> struct IAsyncActionWithProgress : impl::not_specialized<IAsyncActionWithProgress<TProgress>> {};
template <typename TResult> struct IAsyncOperation : impl::not_specialized<IAsyncOperation<TResult>> {};
template <typename TResult, typename TProgress> struct IAsyncOperationWithProgress : impl::not_specialized<IAsyncOperationWithProgress<TResult, TProgress>> {};

}

namespace Windows::Foundation {

struct AsyncActionCompletedHandler;
template <typename TProgress> struct AsyncActionProgressHandler;
template <typename TProgress> struct AsyncActionWithProgressCompletedHandler;
template <typename TResult, typename TProgress> struct AsyncOperationProgressHandler;
template <typename TResult, typename TProgress> struct AsyncOperationWithProgressCompletedHandler;
template <typename TResult> struct AsyncOperationCompletedHandler;

struct IAsyncInfo;
struct IAsyncAction;
template <typename TProgress> struct IAsyncActionWithProgress;
template <typename TResult> struct IAsyncOperation;
template <typename TResult, typename TProgress> struct IAsyncOperationWithProgress;

template <typename D>
struct WINRT_EBO impl_IAsyncInfo
{
    uint32_t Id() const;
    AsyncStatus Status() const;
    HRESULT ErrorCode() const;
    void Cancel() const;
    void Close() const;
};

template <typename D>
struct WINRT_EBO impl_IAsyncAction
{
    void Completed(const AsyncActionCompletedHandler & handler) const;
    AsyncActionCompletedHandler Completed() const;
    void GetResults() const;
    void get() const;
};

template <typename D, typename TProgress>
struct impl_IAsyncActionWithProgress
{
    void Progress(const AsyncActionProgressHandler<TProgress> & handler) const;
    AsyncActionProgressHandler<TProgress> Progress() const;
    void Completed(const AsyncActionWithProgressCompletedHandler<TProgress> & handler) const;
    AsyncActionWithProgressCompletedHandler<TProgress> Completed() const;
    void GetResults() const;
    void get() const;
};

template <typename D, typename TResult>
struct impl_IAsyncOperation
{
    void Completed(const AsyncOperationCompletedHandler<TResult> & handler) const;
    AsyncOperationCompletedHandler<TResult> Completed() const;
    TResult GetResults() const;
    TResult get() const;
};

template <typename D, typename TResult, typename TProgress>
struct impl_IAsyncOperationWithProgress
{
    void Progress(const AsyncOperationProgressHandler<TResult, TProgress> & handler) const;
    AsyncOperationProgressHandler<TResult, TProgress> Progress() const;
    void Completed(const AsyncOperationWithProgressCompletedHandler<TResult, TProgress> & handler) const;
    AsyncOperationWithProgressCompletedHandler<TResult, TProgress> Completed() const;
    TResult GetResults() const;
    TResult get() const;
};

}

namespace impl {

template <> struct traits<Windows::Foundation::AsyncActionCompletedHandler>
{
    using abi = ABI::Windows::Foundation::AsyncActionCompletedHandler;
};

template <typename TProgress> struct traits<Windows::Foundation::AsyncActionProgressHandler<TProgress>>
{
    using abi = ABI::Windows::Foundation::AsyncActionProgressHandler<abi<TProgress>>;
};

template <typename TProgress> struct traits<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>
{
    using abi = ABI::Windows::Foundation::AsyncActionWithProgressCompletedHandler<abi<TProgress>>;
};

template <typename TResult, typename TProgress> struct traits<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>
{
    using abi = ABI::Windows::Foundation::AsyncOperationProgressHandler<abi<TResult>, abi<TProgress>>;
};

template <typename TResult, typename TProgress> struct traits<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>
{
    using abi = ABI::Windows::Foundation::AsyncOperationWithProgressCompletedHandler<abi<TResult>, abi<TProgress>>;
};

template <typename TResult> struct traits<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>
{
    using abi = ABI::Windows::Foundation::AsyncOperationCompletedHandler<abi<TResult>>;
};

template <> struct traits<Windows::Foundation::IAsyncInfo>
{
    using abi = ABI::Windows::Foundation::IAsyncInfo;
    template <typename D> using consume = Windows::Foundation::impl_IAsyncInfo<D>;
};

template <> struct traits<Windows::Foundation::IAsyncAction>
{
    using abi = ABI::Windows::Foundation::IAsyncAction;
    template <typename D> using consume = Windows::Foundation::impl_IAsyncAction<D>;
};

template <typename TProgress> struct traits<Windows::Foundation::IAsyncActionWithProgress<TProgress>>
{
    using abi = ABI::Windows::Foundation::IAsyncActionWithProgress<abi<TProgress>>;
    template <typename D> using consume = Windows::Foundation::impl_IAsyncActionWithProgress<D, TProgress>;
};

template <typename TResult> struct traits<Windows::Foundation::IAsyncOperation<TResult>>
{
    using abi = ABI::Windows::Foundation::IAsyncOperation<abi<TResult>>;
    template <typename D> using consume = Windows::Foundation::impl_IAsyncOperation<D, TResult>;
};

template <typename TResult, typename TProgress> struct traits<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>
{
    using abi = ABI::Windows::Foundation::IAsyncOperationWithProgress<abi<TResult>, abi<TProgress>>;
    template <typename D> using consume = Windows::Foundation::impl_IAsyncOperationWithProgress<D, TResult, TProgress>;
};

}

namespace Windows::Foundation {

struct AsyncActionCompletedHandler : IUnknown
{
    AsyncActionCompletedHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<AsyncActionCompletedHandler>(m_ptr); }
    template <typename L> AsyncActionCompletedHandler(L handler);
    template <typename F> AsyncActionCompletedHandler(F * handler);
    template <typename O, typename M> AsyncActionCompletedHandler(O * object, M method);
    void operator()(const IAsyncAction & asyncInfo, AsyncStatus asyncStatus) const;
};

template <typename TProgress>
struct WINRT_EBO AsyncActionProgressHandler : IUnknown
{
    AsyncActionProgressHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<AsyncActionProgressHandler>(m_ptr); }
    template <typename L> AsyncActionProgressHandler(L handler);
    template <typename F> AsyncActionProgressHandler(F * handler);
    template <typename O, typename M> AsyncActionProgressHandler(O * object, M method);
    void operator()(const IAsyncActionWithProgress<TProgress> & sender, const TProgress & args) const;
};

template <typename TProgress>
struct WINRT_EBO AsyncActionWithProgressCompletedHandler : IUnknown
{
    AsyncActionWithProgressCompletedHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<AsyncActionWithProgressCompletedHandler>(m_ptr); }
    template <typename L> AsyncActionWithProgressCompletedHandler(L handler);
    template <typename F> AsyncActionWithProgressCompletedHandler(F * handler);
    template <typename O, typename M> AsyncActionWithProgressCompletedHandler(O * object, M method);
    void operator()(const IAsyncActionWithProgress<TProgress> & sender, const AsyncStatus args) const;
};

template <typename TResult, typename TProgress>
struct WINRT_EBO AsyncOperationProgressHandler : IUnknown
{
    AsyncOperationProgressHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<AsyncOperationProgressHandler>(m_ptr); }
    template <typename L> AsyncOperationProgressHandler(L handler);
    template <typename F> AsyncOperationProgressHandler(F * handler);
    template <typename O, typename M> AsyncOperationProgressHandler(O * object, M method);
    void operator()(const IAsyncOperationWithProgress<TResult, TProgress> & sender, const TProgress & args) const;
};

template <typename TResult, typename TProgress>
struct WINRT_EBO AsyncOperationWithProgressCompletedHandler : IUnknown
{
    AsyncOperationWithProgressCompletedHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<AsyncOperationWithProgressCompletedHandler>(m_ptr); }
    template <typename L> AsyncOperationWithProgressCompletedHandler(L handler);
    template <typename F> AsyncOperationWithProgressCompletedHandler(F * handler);
    template <typename O, typename M> AsyncOperationWithProgressCompletedHandler(O * object, M method);
    void operator()(const IAsyncOperationWithProgress<TResult, TProgress> & sender, const AsyncStatus args) const;
};

template <typename TResult>
struct WINRT_EBO AsyncOperationCompletedHandler : IUnknown
{
    AsyncOperationCompletedHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<AsyncOperationCompletedHandler>(m_ptr); }
    template <typename L> AsyncOperationCompletedHandler(L handler);
    template <typename F> AsyncOperationCompletedHandler(F * handler);
    template <typename O, typename M> AsyncOperationCompletedHandler(O * object, M method);
    void operator()(const IAsyncOperation<TResult> & sender, const AsyncStatus args) const;
};

struct IAsyncInfo :
    IUnknown,
    impl::consume<IAsyncInfo>
{
    IAsyncInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAsyncInfo>(m_ptr); }
};

struct IAsyncAction :
    IInspectable,
    impl::consume<IAsyncAction>,
    impl::require<IAsyncAction, IAsyncInfo>
{
    IAsyncAction(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAsyncAction>(m_ptr); }
};

template <typename TProgress>
struct WINRT_EBO IAsyncActionWithProgress :
    IInspectable,
    impl::consume<IAsyncActionWithProgress<TProgress>>,
    impl::require<IAsyncActionWithProgress<TProgress>, IAsyncInfo>
{
    IAsyncActionWithProgress(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAsyncActionWithProgress>(m_ptr); }
};

template <typename TResult>
struct WINRT_EBO IAsyncOperation :
    IInspectable,
    impl::consume<IAsyncOperation<TResult>>,
    impl::require<IAsyncOperation<TResult>, IAsyncInfo>
{
    IAsyncOperation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAsyncOperation>(m_ptr); }
};

template <typename TResult, typename TProgress>
struct WINRT_EBO IAsyncOperationWithProgress :
    IInspectable,
    impl::consume<IAsyncOperationWithProgress<TResult, TProgress>>,
    impl::require<IAsyncOperationWithProgress<TResult, TProgress>, IAsyncInfo>
{
    IAsyncOperationWithProgress(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAsyncOperationWithProgress>(m_ptr); }
};

template <typename D>
uint32_t impl_IAsyncInfo<D>::Id() const
{
    uint32_t id = 0;
    check_hresult(static_cast<const IAsyncInfo &>(static_cast<const D &>(*this))->get_Id(&id));
    return id;
}

template <typename D>
AsyncStatus impl_IAsyncInfo<D>::Status() const
{
    AsyncStatus status{};
    check_hresult(static_cast<const IAsyncInfo &>(static_cast<const D &>(*this))->get_Status(&status));
    return status;
}

template <typename D>
HRESULT impl_IAsyncInfo<D>::ErrorCode() const
{
    HRESULT code = S_OK;
    check_hresult(static_cast<const IAsyncInfo &>(static_cast<const D &>(*this))->get_ErrorCode(&code));
    return code;
}

template <typename D>
void impl_IAsyncInfo<D>::Cancel() const
{
    check_hresult(static_cast<const IAsyncInfo &>(static_cast<const D &>(*this))->abi_Cancel());
}

template <typename D>
void impl_IAsyncInfo<D>::Close() const
{
    check_hresult(static_cast<const IAsyncInfo &>(static_cast<const D &>(*this))->abi_Close());
}

template <typename D>
void impl_IAsyncAction<D>::Completed(const AsyncActionCompletedHandler & handler) const
{
    check_hresult(static_cast<const IAsyncAction &>(static_cast<const D &>(*this))->put_Completed(winrt::get(handler)));
}

template <typename D>
AsyncActionCompletedHandler impl_IAsyncAction<D>::Completed() const
{
    AsyncActionCompletedHandler handler{};
    check_hresult(static_cast<const IAsyncAction &>(static_cast<const D &>(*this))->get_Completed(put(handler)));
    return handler;
}

template <typename D>
void impl_IAsyncAction<D>::GetResults() const
{
    check_hresult(static_cast<const IAsyncAction &>(static_cast<const D &>(*this))->abi_GetResults());
}

template <typename D>
void impl_IAsyncAction<D>::get() const
{
    impl::blocking_suspend(static_cast<const IAsyncAction &>(static_cast<const D &>(*this)));
    GetResults();
}

template <typename D, typename TProgress>
void impl_IAsyncActionWithProgress<D, TProgress>::Progress(const AsyncActionProgressHandler<TProgress> & handler) const
{
    check_hresult(static_cast<const IAsyncActionWithProgress<TProgress> &>(static_cast<const D &>(*this))->put_Progress(winrt::get(handler)));
}

template <typename D, typename TProgress>
AsyncActionProgressHandler<TProgress> impl_IAsyncActionWithProgress<D, TProgress>::Progress() const
{
    AsyncActionProgressHandler<TProgress> handler;
    check_hresult(static_cast<const IAsyncActionWithProgress<TProgress> &>(static_cast<const D &>(*this))->get_Progress(put(handler)));
    return handler;
}

template <typename D, typename TProgress>
void impl_IAsyncActionWithProgress<D, TProgress>::Completed(const AsyncActionWithProgressCompletedHandler<TProgress> & handler) const
{
    check_hresult(static_cast<const IAsyncActionWithProgress<TProgress> &>(static_cast<const D &>(*this))->put_Completed(winrt::get(handler)));
}

template <typename D, typename TProgress>
AsyncActionWithProgressCompletedHandler<TProgress> impl_IAsyncActionWithProgress<D, TProgress>::Completed() const
{
    AsyncActionWithProgressCompletedHandler<TProgress> handler;
    check_hresult(static_cast<const IAsyncActionWithProgress<TProgress> &>(static_cast<const D &>(*this))->get_Completed(put(handler)));
    return handler;
}

template <typename D, typename TProgress>
void impl_IAsyncActionWithProgress<D, TProgress>::GetResults() const
{
    check_hresult(static_cast<const IAsyncActionWithProgress<TProgress> &>(static_cast<const D &>(*this))->abi_GetResults());
}

template <typename D, typename TProgress>
void impl_IAsyncActionWithProgress<D, TProgress>::get() const
{
    impl::blocking_suspend(static_cast<const IAsyncActionWithProgress<TProgress> &>(static_cast<const D &>(*this)));
    GetResults();
}

template <typename D, typename TResult>
void impl_IAsyncOperation<D, TResult>::Completed(const AsyncOperationCompletedHandler<TResult> & handler) const
{
    check_hresult(static_cast<const IAsyncOperation<TResult> &>(static_cast<const D &>(*this))->put_Completed(winrt::get(handler)));
}

template <typename D, typename TResult>
AsyncOperationCompletedHandler<TResult> impl_IAsyncOperation<D, TResult>::Completed() const
{
    AsyncOperationCompletedHandler<TResult> temp;
    check_hresult(static_cast<const IAsyncOperation<TResult> &>(static_cast<const D &>(*this))->get_Completed(put(temp)));
    return temp;
}

template <typename D, typename TResult>
TResult impl_IAsyncOperation<D, TResult>::GetResults() const
{
    TResult result = impl::empty_value<TResult>();
    check_hresult(static_cast<const IAsyncOperation<TResult> &>(static_cast<const D &>(*this))->abi_GetResults(put(result)));
    return result;
}

template <typename D, typename TResult>
TResult impl_IAsyncOperation<D, TResult>::get() const
{
    impl::blocking_suspend(static_cast<const IAsyncOperation<TResult> &>(static_cast<const D &>(*this)));
    return GetResults();
}

template <typename D, typename TResult, typename TProgress>
void impl_IAsyncOperationWithProgress<D, TResult, TProgress>::Progress(const AsyncOperationProgressHandler<TResult, TProgress> & handler) const
{
    check_hresult(static_cast<const IAsyncOperationWithProgress<TResult, TProgress> &>(static_cast<const D &>(*this))->put_Progress(winrt::get(handler)));
}

template <typename D, typename TResult, typename TProgress>
AsyncOperationProgressHandler<TResult, TProgress> impl_IAsyncOperationWithProgress<D, TResult, TProgress>::Progress() const
{
    AsyncOperationProgressHandler<TResult, TProgress> handler;
    check_hresult(static_cast<const IAsyncOperationWithProgress<TResult, TProgress> &>(static_cast<const D &>(*this))->get_Progress(put(handler)));
    return handler;
}

template <typename D, typename TResult, typename TProgress>
void impl_IAsyncOperationWithProgress<D, TResult, TProgress>::Completed(const AsyncOperationWithProgressCompletedHandler<TResult, TProgress> & handler) const
{
    check_hresult(static_cast<const IAsyncOperationWithProgress<TResult, TProgress> &>(static_cast<const D &>(*this))->put_Completed(winrt::get(handler)));
}

template <typename D, typename TResult, typename TProgress>
AsyncOperationWithProgressCompletedHandler<TResult, TProgress> impl_IAsyncOperationWithProgress<D, TResult, TProgress>::Completed() const
{
    AsyncOperationWithProgressCompletedHandler<TResult, TProgress> handler;
    check_hresult(static_cast<const IAsyncOperationWithProgress<TResult, TProgress> &>(static_cast<const D &>(*this))->get_Completed(put(handler)));
    return handler;
}

template <typename D, typename TResult, typename TProgress>
TResult impl_IAsyncOperationWithProgress<D, TResult, TProgress>::GetResults() const
{
    TResult result = impl::empty_value<TResult>();
    check_hresult(static_cast<const IAsyncOperationWithProgress<TResult, TProgress> &>(static_cast<const D &>(*this))->abi_GetResults(put(result)));
    return result;
}

template <typename D, typename TResult, typename TProgress>
TResult impl_IAsyncOperationWithProgress<D, TResult, TProgress>::get() const
{
    impl::blocking_suspend(static_cast<const IAsyncOperationWithProgress<TResult, TProgress> &>(static_cast<const D &>(*this)));
    return GetResults();
}

}

namespace impl {

template <typename H> struct async_action_completed_handler : implements<async_action_completed_handler<H>, abi<Windows::Foundation::AsyncActionCompletedHandler>>, H
{
    async_action_completed_handler(H && handler) : H(std::forward<H>(handler)) {}

    HRESULT __stdcall abi_Invoke(abi_arg_in<Windows::Foundation::IAsyncAction> asyncInfo, Windows::Foundation::AsyncStatus asyncStatus) noexcept override
    {
        try
        {
            (*this)(*reinterpret_cast<const Windows::Foundation::IAsyncAction *>(&asyncInfo), asyncStatus);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename TProgress, typename H>
struct async_action_progress_handler : implements<async_action_progress_handler<TProgress, H>, abi<Windows::Foundation::AsyncActionProgressHandler<TProgress>>>, H
{
    async_action_progress_handler(H && handler) : H(std::forward<H>(handler)) {}

    HRESULT __stdcall abi_Invoke(abi_arg_in<Windows::Foundation::IAsyncActionWithProgress<TProgress>> sender, abi_arg_in<TProgress> args) noexcept override
    {
        try
        {
            (*this)(*reinterpret_cast<const Windows::Foundation::IAsyncActionWithProgress<TProgress> *>(&sender), *reinterpret_cast<const TProgress *>(&args));
            return S_OK;
        }
        catch (...) { return impl::to_hresult(); }
    }
};

template <typename TProgress, typename H>
struct async_action_with_progress_completed_handler : implements<async_action_with_progress_completed_handler<TProgress, H>, abi<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>>, H
{
    async_action_with_progress_completed_handler(H && handler) : H(std::forward<H>(handler)) {}

    HRESULT __stdcall abi_Invoke(abi_arg_in<Windows::Foundation::IAsyncActionWithProgress<TProgress>> sender, Windows::Foundation::AsyncStatus args) noexcept override
    {
        try
        {
            (*this)(*reinterpret_cast<const Windows::Foundation::IAsyncActionWithProgress<TProgress> *>(&sender), args);
            return S_OK;
        }
        catch (...) { return impl::to_hresult(); }
    }
};

template <typename TResult, typename TProgress, typename H>
struct async_operation_progress_handler : implements<async_operation_progress_handler<TResult, TProgress, H>, abi<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>>, H
{
    async_operation_progress_handler(H && handler) : H(std::forward<H>(handler)) {}

    HRESULT __stdcall abi_Invoke(abi_arg_in<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>> sender, abi_arg_in<TProgress> args) noexcept override
    {
        try
        {
            (*this)(*reinterpret_cast<const Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> *>(&sender), *reinterpret_cast<const TProgress *>(&args));
            return S_OK;
        }
        catch (...) { return impl::to_hresult(); }
    }
};

template <typename TResult, typename TProgress, typename H>
struct async_operation_with_progress_completed_handler : implements<async_operation_with_progress_completed_handler<TResult, TProgress, H>, abi<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>>, H
{
    async_operation_with_progress_completed_handler(H && handler) : H(std::forward<H>(handler)) {}

    HRESULT __stdcall abi_Invoke(abi_arg_in<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>> sender, Windows::Foundation::AsyncStatus args) noexcept override
    {
        try
        {
            (*this)(*reinterpret_cast<const Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> *>(&sender), args);
            return S_OK;
        }
        catch (...) { return impl::to_hresult(); }
    }
};

template <typename TResult, typename H>
struct async_operation_completed_handler : implements<async_operation_completed_handler<TResult, H>, abi<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>>, H
{
    async_operation_completed_handler(H && handler) : H(std::forward<H>(handler)) {}

    HRESULT __stdcall abi_Invoke(abi_arg_in<Windows::Foundation::IAsyncOperation<TResult>> sender, Windows::Foundation::AsyncStatus args) noexcept override
    {
        try
        {
            (*this)(*reinterpret_cast<const Windows::Foundation::IAsyncOperation<TResult> *>(&sender), args);
            return S_OK;
        }
        catch (...) { return impl::to_hresult(); }
    }
};

}

namespace Windows::Foundation {

template <typename L> AsyncActionCompletedHandler::AsyncActionCompletedHandler(L handler) :
    AsyncActionCompletedHandler(impl::make_delegate<impl::async_action_completed_handler<L>, AsyncActionCompletedHandler>(std::forward<L>(handler)))
{}

template <typename F> AsyncActionCompletedHandler::AsyncActionCompletedHandler(F * handler) :
    AsyncActionCompletedHandler([=](auto && ... args) { handler(args ...); })
{}

template <typename O, typename M> AsyncActionCompletedHandler::AsyncActionCompletedHandler(O * object, M method) :
    AsyncActionCompletedHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void AsyncActionCompletedHandler::operator()(const IAsyncAction & asyncInfo, const AsyncStatus asyncStatus) const
{
    check_hresult((*this)->abi_Invoke(get(asyncInfo), asyncStatus));
}

template <typename TProgress> template <typename L> AsyncActionProgressHandler<TProgress>::AsyncActionProgressHandler(L handler) :
    AsyncActionProgressHandler(impl::make_delegate<impl::async_action_progress_handler<TProgress, L>, AsyncActionProgressHandler>(std::forward<L>(handler)))
{}

template <typename TProgress> template <typename F> AsyncActionProgressHandler<TProgress>::AsyncActionProgressHandler(F * handler) :
    AsyncActionProgressHandler([=](auto && ... args) { handler(args ...); })
{}

template <typename TProgress> template <typename O, typename M> AsyncActionProgressHandler<TProgress>::AsyncActionProgressHandler(O * object, M method) :
    AsyncActionProgressHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

template <typename TProgress> void AsyncActionProgressHandler<TProgress>::operator()(const IAsyncActionWithProgress<TProgress> & sender, const TProgress & args) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(args)));
}

template <typename TProgress> template <typename L> AsyncActionWithProgressCompletedHandler<TProgress>::AsyncActionWithProgressCompletedHandler(L handler) :
    AsyncActionWithProgressCompletedHandler(impl::make_delegate<impl::async_action_with_progress_completed_handler<TProgress, L>, AsyncActionWithProgressCompletedHandler<TProgress>>(std::forward<L>(handler)))
{}

template <typename TProgress> template <typename F> AsyncActionWithProgressCompletedHandler<TProgress>::AsyncActionWithProgressCompletedHandler(F * handler) :
    AsyncActionWithProgressCompletedHandler([=](auto && ... args) { handler(args ...); })
{}

template <typename TProgress> template <typename O, typename M> AsyncActionWithProgressCompletedHandler<TProgress>::AsyncActionWithProgressCompletedHandler(O * object, M method) :
    AsyncActionWithProgressCompletedHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

template <typename TProgress> void AsyncActionWithProgressCompletedHandler<TProgress>::operator()(const IAsyncActionWithProgress<TProgress> & sender, const AsyncStatus args) const
{
    check_hresult((*this)->abi_Invoke(get(sender), args));
}

template <typename TResult, typename TProgress> template <typename L> AsyncOperationProgressHandler<TResult, TProgress>::AsyncOperationProgressHandler(L handler) :
    AsyncOperationProgressHandler(impl::make_delegate<impl::async_operation_progress_handler<TResult, TProgress, L>, AsyncOperationProgressHandler<TResult, TProgress>>(std::forward<L>(handler)))
{}

template <typename TResult, typename TProgress> template <typename F> AsyncOperationProgressHandler<TResult, TProgress>::AsyncOperationProgressHandler(F * handler) :
    AsyncOperationProgressHandler([=](auto && ... args) { handler(args ...); })
{}

template <typename TResult, typename TProgress> template <typename O, typename M> AsyncOperationProgressHandler<TResult, TProgress>::AsyncOperationProgressHandler(O * object, M method) :
    AsyncOperationProgressHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

template <typename TResult, typename TProgress> void AsyncOperationProgressHandler<TResult, TProgress>::operator()(const IAsyncOperationWithProgress<TResult, TProgress> & sender, const TProgress & args) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(args)));
}

template <typename TResult, typename TProgress> template <typename L> AsyncOperationWithProgressCompletedHandler<TResult, TProgress>::AsyncOperationWithProgressCompletedHandler(L handler) :
    AsyncOperationWithProgressCompletedHandler(impl::make_delegate<impl::async_operation_with_progress_completed_handler<TResult, TProgress, L>, AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>(std::forward<L>(handler)))
{}

template <typename TResult, typename TProgress> template <typename F> AsyncOperationWithProgressCompletedHandler<TResult, TProgress>::AsyncOperationWithProgressCompletedHandler(F * handler) :
    AsyncOperationWithProgressCompletedHandler([=](auto && ... args) { handler(args ...); })
{}

template <typename TResult, typename TProgress> template <typename O, typename M> AsyncOperationWithProgressCompletedHandler<TResult, TProgress>::AsyncOperationWithProgressCompletedHandler(O * object, M method) :
    AsyncOperationWithProgressCompletedHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

template <typename TResult, typename TProgress> void AsyncOperationWithProgressCompletedHandler<TResult, TProgress>::operator()(const IAsyncOperationWithProgress<TResult, TProgress> & sender, const AsyncStatus args) const
{
    check_hresult((*this)->abi_Invoke(get(sender), args));
}

template <typename TResult> template <typename L> AsyncOperationCompletedHandler<TResult>::AsyncOperationCompletedHandler(L handler) :
    AsyncOperationCompletedHandler(impl::make_delegate<impl::async_operation_completed_handler<TResult, L>, AsyncOperationCompletedHandler<TResult>>(std::forward<L>(handler)))
{}

template <typename TResult> template <typename F> AsyncOperationCompletedHandler<TResult>::AsyncOperationCompletedHandler(F * handler) :
    AsyncOperationCompletedHandler([=](auto && ... args) { handler(args ...); })
{}

template <typename TResult> template <typename O, typename M> AsyncOperationCompletedHandler<TResult>::AsyncOperationCompletedHandler(O * object, M method) :
    AsyncOperationCompletedHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

template <typename TResult> void AsyncOperationCompletedHandler<TResult>::operator()(const IAsyncOperation<TResult> & sender, const AsyncStatus args) const
{
    check_hresult((*this)->abi_Invoke(get(sender), args));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::Foundation::IAsyncAction> : produce_base<D, Windows::Foundation::IAsyncAction>
{
    HRESULT __stdcall put_Completed(abi_arg_in<Windows::Foundation::AsyncActionCompletedHandler> handler) noexcept final
    {
        try
        {
            this->shim().Completed(*reinterpret_cast<const Windows::Foundation::AsyncActionCompletedHandler *>(&handler));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Completed(abi_arg_out<Windows::Foundation::AsyncActionCompletedHandler> handler) noexcept final
    {
        try
        {
            *handler = detach(this->shim().Completed());
            return S_OK;
        }
        catch (...)
        {
            *handler = nullptr;
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_GetResults() noexcept final
    {
        try
        {
            this->shim().GetResults();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::IAsyncInfo> : produce_base<D, Windows::Foundation::IAsyncInfo>
{
    HRESULT __stdcall get_Id(uint32_t * id) noexcept final
    {
        try
        {
            *id = this->shim().Id();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Status(winrt::Windows::Foundation::AsyncStatus * status) noexcept final
    {
        try
        {
            *status = this->shim().Status();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(HRESULT * errorCode) noexcept final
    {
        try
        {
            *errorCode = this->shim().ErrorCode();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_Cancel() noexcept final
    {
        try
        {
            this->shim().Cancel();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_Close() noexcept final
    {
        try
        {
            this->shim().Close();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D, typename TProgress>
struct produce<D, Windows::Foundation::IAsyncActionWithProgress<TProgress>> : produce_base<D, Windows::Foundation::IAsyncActionWithProgress<TProgress>>
{
    HRESULT __stdcall put_Progress(abi_arg_in<Windows::Foundation::AsyncActionProgressHandler<TProgress>> handler) noexcept final
    {
        try
        {
            this->shim().Progress(*reinterpret_cast<const Windows::Foundation::AsyncActionProgressHandler<TProgress> *>(&handler));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Progress(abi_arg_out<Windows::Foundation::AsyncActionProgressHandler<TProgress>> handler) noexcept final
    {
        try
        {
            *handler = detach(this->shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            *handler = nullptr;
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Completed(abi_arg_in<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>> handler) noexcept final
    {
        try
        {
            this->shim().Completed(*reinterpret_cast<const Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> *>(&handler));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Completed(abi_arg_out<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>> handler) noexcept final
    {
        try
        {
            *handler = detach(this->shim().Completed());
            return S_OK;
        }
        catch (...)
        {
            *handler = nullptr;
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_GetResults() noexcept final
    {
        try
        {
            this->shim().GetResults();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D, typename TResult>
struct produce<D, Windows::Foundation::IAsyncOperation<TResult>> : produce_base<D, Windows::Foundation::IAsyncOperation<TResult>>
{
    HRESULT __stdcall put_Completed(abi_arg_in<Windows::Foundation::AsyncOperationCompletedHandler<TResult>> handler) noexcept final
    {
        try
        {
            this->shim().Completed(*reinterpret_cast<const Windows::Foundation::AsyncOperationCompletedHandler<TResult> *>(&handler));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Completed(abi_arg_out<Windows::Foundation::AsyncOperationCompletedHandler<TResult>> handler) noexcept final
    {
        try
        {
            *handler = detach(this->shim().Completed());
            return S_OK;
        }
        catch (...)
        {
            *handler = nullptr;
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_GetResults(abi_arg_out<TResult> results) noexcept final
    {
        try
        {
            *results = detach(this->shim().GetResults());
            return S_OK;
        }
        catch (...)
        {
            clear_abi(results);
            return to_hresult();
        }
    }
};

template <typename D, typename TResult, typename TProgress>
struct produce<D, Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>> : produce_base<D, Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>
{
    HRESULT __stdcall put_Progress(abi_arg_in<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>> handler) noexcept final
    {
        try
        {
            this->shim().Progress(*reinterpret_cast<const Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress> *>(&handler));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Progress(abi_arg_out<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>> handler) noexcept final
    {
        try
        {
            *handler = detach(this->shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            *handler = nullptr;
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Completed(abi_arg_in<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>> handler) noexcept final
    {
        try
        {
            this->shim().Completed(*reinterpret_cast<const Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> *>(&handler));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Completed(abi_arg_out<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>> handler) noexcept final
    {
        try
        {
            *handler = detach(this->shim().Completed());
            return S_OK;
        }
        catch (...)
        {
            *handler = nullptr;
            return to_hresult();
        }
    }

    HRESULT __stdcall abi_GetResults(abi_arg_out<TResult> results) noexcept final
    {
        try
        {
            *results = detach(this->shim().GetResults());
            return S_OK;
        }
        catch (...)
        {
            clear_abi(results);
            return to_hresult();
        }
    }
};

}

#ifndef WINRT_NO_AGILE_REFERENCE

template <typename T>
struct agile_ref
{
    agile_ref(std::nullptr_t = nullptr) noexcept {}

    agile_ref(const T & object)
    {
#ifdef WINRT_DEBUG
        if (object.template try_as<IAgileObject>())
        {
            WINRT_TRACE("winrt::agile_ref - wrapping an agile object is unnecessary.\n");
        }
#endif

        check_hresult(RoGetAgileReference(AGILEREFERENCE_DEFAULT,
                                          __uuidof(abi_default_interface<T>),
                                          winrt::get(object),
                                          put(m_ref)));
    }

    T get() const
    {
        T result = nullptr;
        check_hresult(m_ref->Resolve(put(result)));
        return result;
    }

    explicit operator bool() const noexcept
    {
        return static_cast<bool>(m_ref);
    }

private:

    com_ptr<IAgileReference> m_ref;
};

template <typename T>
agile_ref<T> make_agile(const T & object)
{
    return object;
}

#endif

#ifdef WINRT_ASYNC

namespace impl
{
    template <typename Async>
    struct await_adapter
    {
        const Async & async;

        bool await_ready() const
        {
            return async.Status() == Windows::Foundation::AsyncStatus::Completed;
        }

        void await_suspend(std::experimental::coroutine_handle<> handle) const
        {
            com_ptr<IContextCallback> context;
            check_hresult(CoGetObjectContext(__uuidof(context), reinterpret_cast<void **>(put(context))));

            async.Completed([handle, context = std::move(context)](const auto &, Windows::Foundation::AsyncStatus)
            {
                ComCallData data = {};
                data.pUserDefined = handle.address();

                auto callback = [](ComCallData * data)
                {
                    std::experimental::coroutine_handle<>::from_address(data->pUserDefined)();
                    return S_OK;
                };

                check_hresult(context->ContextCallback(callback, &data, IID_ICallbackWithNoReentrancyToApplicationSTA, 5, nullptr));
            });
        }

        auto await_resume() const
        {
            return async.GetResults();
        }
    };
}

namespace Windows::Foundation
{
    inline impl::await_adapter<IAsyncAction> operator co_await(const IAsyncAction & async)
    {
        return{ async };
    }

    template <typename TProgress>
    impl::await_adapter<IAsyncActionWithProgress<TProgress>> operator co_await(const IAsyncActionWithProgress<TProgress> & async)
    {
        return{ async };
    }

    template <typename TResult>
    impl::await_adapter<IAsyncOperation<TResult>> operator co_await(const IAsyncOperation<TResult> & async)
    {
        return{ async };
    }

    template <typename TResult, typename TProgress>
    impl::await_adapter<IAsyncOperationWithProgress<TResult, TProgress>> operator co_await(const IAsyncOperationWithProgress<TResult, TProgress> & async)
    {
        return{ async };
    }
}

#endif

#ifdef WINRT_ASYNC

struct resume_background
{
    bool await_ready() const noexcept
    {
        return false;
    }

    void await_resume() const noexcept
    {
    }

    void await_suspend(std::experimental::coroutine_handle<> handle) const
    {
        auto callback = [](PTP_CALLBACK_INSTANCE, void * context)
        {
            std::experimental::coroutine_handle<>::from_address(context)();
        };

        if (!TrySubmitThreadpoolCallback(callback, handle.address(), nullptr))
        {
            throw_last_error();
        }
    }
};

struct thread_context
{
    thread_context()
    {
        check_hresult(CoGetObjectContext(__uuidof(m_context), reinterpret_cast<void **>(put(m_context))));
    }

    bool await_ready() const noexcept
    {
        return false;
    }

    void await_resume() const noexcept
    {
    }

    void await_suspend(std::experimental::coroutine_handle<> handle) const
    {
        ComCallData data = {};
        data.pUserDefined = handle.address();

        auto callback = [](ComCallData * data)
        {
            std::experimental::coroutine_handle<>::from_address(data->pUserDefined)();
            return S_OK;
        };

        check_hresult(m_context->ContextCallback(callback, &data, IID_ICallbackWithNoReentrancyToApplicationSTA, 5, nullptr));
    }

private:

    com_ptr<IContextCallback> m_context;
};

struct resume_after
{
    explicit resume_after(Windows::Foundation::TimeSpan duration) noexcept :
        m_duration(duration)
    {
    }

    bool await_ready() const noexcept
    {
        return m_duration.count() <= 0;
    }

    void await_suspend(std::experimental::coroutine_handle<> handle)
    {
        m_timer = CreateThreadpoolTimer(callback, handle.address(), nullptr);

        if (!m_timer)
        {
            throw_last_error();
        }

        int64_t relative_count = -m_duration.count();
        SetThreadpoolTimer(get(m_timer), reinterpret_cast<PFILETIME>(&relative_count), 0, 0);
    }

    void await_resume() const noexcept
    {
    }

private:

    static void __stdcall callback(PTP_CALLBACK_INSTANCE, void * context, PTP_TIMER) noexcept
    {
        std::experimental::coroutine_handle<>::from_address(context)();
    }

    struct timer_traits : handle_traits<PTP_TIMER>
    {
        static void close(type value) noexcept
        {
            CloseThreadpoolTimer(value);
        }
    };

    handle<timer_traits> m_timer;
    Windows::Foundation::TimeSpan m_duration;
};

struct resume_on_signal
{
    explicit resume_on_signal(HANDLE handle) noexcept :
        m_handle(handle)
    {}

    resume_on_signal(HANDLE handle, Windows::Foundation::TimeSpan timeout) noexcept :
        m_handle(handle),
        m_timeout(timeout)
    {}

    bool await_ready() const noexcept
    {
        return WaitForSingleObject(m_handle, 0) == WAIT_OBJECT_0;
    }

    void await_suspend(std::experimental::coroutine_handle<> resume)
    {
        m_resume = resume;
        m_wait = CreateThreadpoolWait(callback, this, nullptr);

        if (!m_wait)
        {
            throw_last_error();
        }

        int64_t relative_count = -m_timeout.count();
        PFILETIME file_time = relative_count != 0 ? reinterpret_cast<PFILETIME>(&relative_count) : nullptr;
        SetThreadpoolWait(get(m_wait), m_handle, file_time);
    }

    bool await_resume() const noexcept
    {
        return m_result == WAIT_OBJECT_0;
    }

private:

    static void __stdcall callback(PTP_CALLBACK_INSTANCE, void * context, PTP_WAIT, TP_WAIT_RESULT result) noexcept
    {
        auto that = static_cast<resume_on_signal *>(context);
        that->m_result = result;
        that->m_resume();
    }

    struct wait_traits : handle_traits<PTP_WAIT>
    {
        static void close(type value) noexcept
        {
            CloseThreadpoolWait(value);
        }
    };

    handle<wait_traits> m_wait;
    Windows::Foundation::TimeSpan m_timeout{ 0 };
    HANDLE m_handle{};
    uint32_t m_result{};
    std::experimental::coroutine_handle<> m_resume{ nullptr };
};

struct awaitable_base
{
    static void __stdcall callback(PTP_CALLBACK_INSTANCE, void *, void * overlapped, ULONG result, ULONG_PTR, PTP_IO) noexcept
    {
        auto context = static_cast<awaitable_base *>(overlapped);
        context->m_result = result;
        context->m_resume();
    }

protected:

    OVERLAPPED m_overlapped{};
    uint32_t m_result{};
    std::experimental::coroutine_handle<> m_resume{ nullptr };
};

struct resumable_io
{
    resumable_io(HANDLE object) :
        m_io(CreateThreadpoolIo(object, awaitable_base::callback, nullptr, nullptr))
    {
        if (!m_io)
        {
            throw_last_error();
        }
    }

    template <typename F>
    auto start(F callback)
    {
        struct awaitable : awaitable_base, F
        {
            awaitable(PTP_IO io, F callback) noexcept :
                m_io(io),
                F(callback)
            {}

            bool await_ready() const noexcept
            {
                return false;
            }

            void await_suspend(std::experimental::coroutine_handle<> resume_handle)
            {
                m_resume = resume_handle;
                StartThreadpoolIo(m_io);

                try
                {
                    (*this)(m_overlapped);
                }
                catch (...)
                {
                    CancelThreadpoolIo(m_io);
                    throw;
                }
            }

            uint32_t await_resume() const
            {
                if (m_result != NO_ERROR && m_result != ERROR_HANDLE_EOF)
                {
                    throw hresult_error(HRESULT_FROM_WIN32(m_result));
                }

                return static_cast<uint32_t>(m_overlapped.InternalHigh);
            }

            PTP_IO m_io = nullptr;
        };

        return awaitable(get(), callback);
    }

    template <typename F>
    auto start_pending(F callback)
    {
        struct awaitable : awaitable_base, F
        {
            awaitable(PTP_IO io, F callback) noexcept :
                m_io(io),
                F(callback)
            {}

            bool await_ready() const noexcept
            {
                return false;
            }

            bool await_suspend(std::experimental::coroutine_handle<> resume_handle)
            {
                m_resume = resume_handle;
                StartThreadpoolIo(m_io);

                try
                {
                    const bool pending = (*this)(m_overlapped);

                    if (!pending)
                    {
                        CancelThreadpoolIo(m_io);
                    }

                    return pending;
                }
                catch (...)
                {
                    CancelThreadpoolIo(m_io);
                    throw;
                }
            }

            uint32_t await_resume() const
            {
                if (m_result != NO_ERROR && m_result != ERROR_HANDLE_EOF)
                {
                    throw hresult_error(HRESULT_FROM_WIN32(m_result));
                }

                return static_cast<uint32_t>(m_overlapped.InternalHigh);
            }

            PTP_IO m_io = nullptr;
        };

        return awaitable(get(), callback);
    }

    PTP_IO get() const noexcept
    {
        return winrt::get(m_io);
    }

private:

    struct io_traits : handle_traits<PTP_IO>
    {
        static void close(type value) noexcept
        {
            CloseThreadpoolIo(value);
        }
    };

    handle<io_traits> m_io;
};

inline auto operator co_await(Windows::Foundation::TimeSpan duration)
{
    return resume_after(duration);
}

struct get_progress_token_t {};
constexpr get_progress_token_t get_progress_token{};

struct get_cancellation_token_t {};
constexpr get_cancellation_token_t get_cancellation_token{};

struct fire_and_forget {};

namespace impl
{
    template <typename Derived, typename AsyncInterface, typename CompletedHandler>
    struct promise_base : implements<Derived, AsyncInterface, Windows::Foundation::IAsyncInfo>
    {
        using AsyncStatus = Windows::Foundation::AsyncStatus;

        ~promise_base() noexcept
        {
            if (m_status == AsyncStatus::Error || m_status == AsyncStatus::Canceled)
            {
                reinterpret_cast<std::exception_ptr *>(&m_exception)->~exception_ptr();
            }
        }

        unsigned long __stdcall Release() noexcept
        {
            const uint32_t remaining = just_release();

            if (remaining == 0)
            {
                std::atomic_thread_fence(std::memory_order_acquire);
                std::experimental::coroutine_handle<Derived>::from_promise(*static_cast<Derived *>(this)).destroy();
            }

            return remaining;
        }

        void Completed(const CompletedHandler & handler)
        {
            AsyncStatus status;

            {
                const lock_guard guard(m_lock);

                if (m_completed_assigned)
                {
                    throw winrt::hresult_illegal_delegate_assignment();
                }

                m_completed_assigned = true;

                if (m_status == AsyncStatus::Started)
                {
                    m_completed = handler;
                    return;
                }

                status = m_status;
            }

            if (handler)
            {
                handler(*this, status);
            }
        }

        CompletedHandler Completed() noexcept
        {
            const lock_guard guard(m_lock);
            return m_completed;
        }

        uint32_t Id() const noexcept
        {
            return 1;
        }

        AsyncStatus Status() noexcept
        {
            const lock_guard guard(m_lock);
            return m_status;
        }

        HRESULT ErrorCode() noexcept
        {
            try
            {
                const lock_guard guard(m_lock);

                if (m_status == AsyncStatus::Error)
                {
                    rethrow_exception(*reinterpret_cast<std::exception_ptr *>(&m_exception));
                }

                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        void Cancel() noexcept
        {
            const lock_guard guard(m_lock);

            if (m_status == AsyncStatus::Started)
            {
                m_status = AsyncStatus::Canceled;
            }
        }

        void Close()
        {
            const lock_guard guard(m_lock);

            if (m_status == AsyncStatus::Started)
            {
                throw winrt::hresult_illegal_state_change();
            }
        }

        AsyncInterface get_return_object() const noexcept
        {
            return *this;
        }

        std::experimental::suspend_never initial_suspend() const noexcept
        {
            return{};
        }

        struct final_suspend_type
        {
            promise_base * promise;

            bool await_ready() const noexcept
            {
                return false;
            }

            void await_resume() const noexcept
            {
            }

            bool await_suspend(std::experimental::coroutine_handle<>) const noexcept
            {
                return 0 < promise->just_release();
            }
        };

        final_suspend_type final_suspend() noexcept
        {
            return{ this };
        }

        void set_exception(std::exception_ptr && exception)
        {
            CompletedHandler handler;
            AsyncStatus status;

            {
                const winrt::lock_guard guard(m_lock);
                WINRT_ASSERT(m_status == AsyncStatus::Started || m_status == AsyncStatus::Canceled);

                try
                {
                    rethrow_exception(exception);
                }
                catch (const winrt::hresult_canceled &)
                {
                    m_status = AsyncStatus::Canceled;
                }
                catch (...)
                {
                    m_status = AsyncStatus::Error;
                }

                new (&m_exception) std::exception_ptr(std::move(exception));
                handler = std::move(m_completed);
                status = m_status;
            }

            if (handler)
            {
                handler(*this, status);
            }
        }

    protected:

        std::aligned_union_t<0, std::exception_ptr> m_exception;
        winrt::lock m_lock;
        CompletedHandler m_completed;
        AsyncStatus m_status{ AsyncStatus::Started };
        bool m_completed_assigned{ false };

    private:

        uint32_t just_release() noexcept
        {
            return this->m_references.fetch_sub(1, std::memory_order_acq_rel) - 1;
        }
    };

    template <typename Promise>
    struct cancellation_token
    {
        cancellation_token(Promise * promise) noexcept :
            m_promise(promise)
        {
        }

        bool await_ready() const noexcept
        {
            return true;
        }

        void await_suspend(std::experimental::coroutine_handle<>) const noexcept
        {
        }

        cancellation_token<Promise> await_resume() const noexcept
        {
            return *this;
        }

        bool operator()() const noexcept
        {
            return m_promise->Status() == AsyncStatus::Canceled;
        }

    private:

        Promise * m_promise;
    };

    template <typename Promise, typename Progress>
    struct progress_token
    {
        progress_token(Promise * promise) noexcept :
            m_promise(promise)
        {
        }

        bool await_ready() const noexcept
        {
            return true;
        }

        void await_suspend(std::experimental::coroutine_handle<>) const noexcept
        {
        }

        progress_token<Promise, Progress> await_resume() const noexcept
        {
            return *this;
        }

        void operator()(const Progress & result)
        {
            m_promise->set_progress(result);
        }

    private:

        Promise * m_promise;
    };
}

#endif

}

namespace std {

template <> struct hash<winrt::hstring>
{
    size_t operator()(const winrt::hstring & value) const noexcept
    {
#ifdef WINRT_64
        const size_t fnv_offset_basis = 14695981039346656037ULL;
        const size_t fnv_prime = 1099511628211ULL;
#else
        const size_t fnv_offset_basis = 2166136261U;
        const size_t fnv_prime = 16777619U;
#endif

        uint32_t length = 0;

        const uint8_t * const buffer = reinterpret_cast<const uint8_t *>(WindowsGetStringRawBuffer(get(value),
                                                                                                   &length));

        length *= sizeof(wchar_t);
        size_t result = fnv_offset_basis;

        for (size_t next = 0; next < length; ++next)
        {
            result ^= buffer[next];
            result *= fnv_prime;
        }

        return result;
    }
};

}

#ifdef WINRT_ASYNC

namespace std::experimental {

template <typename ... Args>
struct coroutine_traits<winrt::fire_and_forget, Args ...>
{
    struct promise_type
    {
        winrt::fire_and_forget get_return_object() const noexcept
        {
            return{};
        }

        void return_void() const noexcept
        {
        }

        suspend_never initial_suspend() const noexcept
        {
            return{};
        }

        suspend_never final_suspend() const noexcept
        {
            return{};
        }
    };
};

template <typename ... Args>
struct coroutine_traits<winrt::Windows::Foundation::IAsyncAction, Args ...>
{
    struct promise_type : winrt::impl::promise_base<promise_type, winrt::Windows::Foundation::IAsyncAction,
                                                                  winrt::Windows::Foundation::AsyncActionCompletedHandler>
    {
        void GetResults()
        {
            const winrt::lock_guard guard(this->m_lock);

            if (this->m_status == AsyncStatus::Completed)
            {
                return;
            }

            if (this->m_status == AsyncStatus::Error || this->m_status == AsyncStatus::Canceled)
            {
                rethrow_exception(*reinterpret_cast<exception_ptr *>(&this->m_exception));
            }

            WINRT_ASSERT(this->m_status == AsyncStatus::Started);
            throw winrt::hresult_illegal_method_call();
        }

        void return_void()
        {
            winrt::Windows::Foundation::AsyncActionCompletedHandler handler;
            winrt::Windows::Foundation::AsyncStatus status;

            {
                const winrt::lock_guard guard(this->m_lock);

                if (this->m_status == AsyncStatus::Started)
                {
                    this->m_status = AsyncStatus::Completed;
                }
                else
                {
                    WINRT_ASSERT(this->m_status == AsyncStatus::Canceled);
                    new (&this->m_exception) exception_ptr(make_exception_ptr(winrt::hresult_canceled()));
                }

                handler = std::move(this->m_completed);
                status = this->m_status;
            }

            if (handler)
            {
                handler(*this, status);
            }
        }

        template <typename Expression>
        Expression && await_transform(Expression && expression)
        {
            if (this->Status() == AsyncStatus::Canceled)
            {
                throw winrt::hresult_canceled();
            }

            return forward<Expression>(expression);
        }

        winrt::impl::cancellation_token<promise_type> await_transform(winrt::get_cancellation_token_t) noexcept
        {
            return{ this };
        }
    };
};

template <typename TProgress, typename ... Args>
struct coroutine_traits<winrt::Windows::Foundation::IAsyncActionWithProgress<TProgress>, Args ...>
{
    struct promise_type : winrt::impl::promise_base<promise_type, winrt::Windows::Foundation::IAsyncActionWithProgress<TProgress>,
                                                                  winrt::Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>
    {
        using ProgressHandler = winrt::Windows::Foundation::AsyncActionProgressHandler<TProgress>;

        void Progress(const ProgressHandler & handler)
        {
            const winrt::lock_guard guard(this->m_lock);
            m_progress = handler;
        }

        ProgressHandler Progress()
        {
            const winrt::lock_guard guard(this->m_lock);
            return m_progress;
        }

        void GetResults()
        {
            const winrt::lock_guard guard(this->m_lock);

            if (this->m_status == AsyncStatus::Completed)
            {
                return;
            }

            if (this->m_status == AsyncStatus::Error || this->m_status == AsyncStatus::Canceled)
            {
                rethrow_exception(*reinterpret_cast<exception_ptr *>(&this->m_exception));
            }

            WINRT_ASSERT(this->m_status == AsyncStatus::Started);
            throw winrt::hresult_illegal_method_call();
        }

        void return_void()
        {
            winrt::Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> handler;
            winrt::Windows::Foundation::AsyncStatus status;

            {
                const winrt::lock_guard guard(this->m_lock);

                if (this->m_status == AsyncStatus::Started)
                {
                    this->m_status = AsyncStatus::Completed;
                }
                else
                {
                    WINRT_ASSERT(this->m_status == AsyncStatus::Canceled);
                    new (&this->m_exception) exception_ptr(make_exception_ptr(winrt::hresult_canceled()));
                }

                handler = std::move(this->m_completed);
                status = this->m_status;
            }

            if (handler)
            {
                handler(*this, status);
            }
        }

        void set_progress(const TProgress & result)
        {
            if (auto handler = Progress())
            {
                handler(*this, result);
            }
        }

        template <typename Expression>
        Expression && await_transform(Expression && expression)
        {
            if (this->Status() == AsyncStatus::Canceled)
            {
                throw winrt::hresult_canceled();
            }

            return forward<Expression>(expression);
        }

        winrt::impl::cancellation_token<promise_type> await_transform(winrt::get_cancellation_token_t) noexcept
        {
            return{ this };
        }

        winrt::impl::progress_token<promise_type, TProgress> await_transform(winrt::get_progress_token_t) noexcept
        {
            return{ this };
        }

        ProgressHandler m_progress;
    };
};

template <typename TResult, typename ... Args>
struct coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<TResult>, Args ...>
{
    struct promise_type : winrt::impl::promise_base<promise_type, winrt::Windows::Foundation::IAsyncOperation<TResult>,
                                                                  winrt::Windows::Foundation::AsyncOperationCompletedHandler<TResult>>
    {
        TResult GetResults()
        {
            const winrt::lock_guard guard(this->m_lock);

            if (this->m_status == AsyncStatus::Completed)
            {
                return m_result;
            }

            if (this->m_status == AsyncStatus::Error || this->m_status == AsyncStatus::Canceled)
            {
                rethrow_exception(*reinterpret_cast<exception_ptr *>(&this->m_exception));
            }

            WINRT_ASSERT(this->m_status == AsyncStatus::Started);
            throw winrt::hresult_illegal_method_call();
        }

        void return_value(const TResult & result)
        {
            winrt::Windows::Foundation::AsyncOperationCompletedHandler<TResult> handler;
            winrt::Windows::Foundation::AsyncStatus status;

            {
                const winrt::lock_guard guard(this->m_lock);

                if (this->m_status == AsyncStatus::Started)
                {
                    this->m_status = AsyncStatus::Completed;
                    m_result = result;
                }
                else
                {
                    WINRT_ASSERT(this->m_status == AsyncStatus::Canceled);
                    new (&this->m_exception) exception_ptr(make_exception_ptr(winrt::hresult_canceled()));
                }

                handler = std::move(this->m_completed);
                status = this->m_status;
            }

            if (handler)
            {
                handler(*this, status);
            }
        }

        template <typename Expression>
        Expression && await_transform(Expression && expression)
        {
            if (this->Status() == AsyncStatus::Canceled)
            {
                throw winrt::hresult_canceled();
            }

            return forward<Expression>(expression);
        }

        winrt::impl::cancellation_token<promise_type> await_transform(winrt::get_cancellation_token_t) noexcept
        {
            return{ this };
        }

        TResult m_result{ winrt::impl::empty_value<TResult>() };
    };
};

template <typename TResult, typename TProgress, typename ... Args>
struct coroutine_traits<winrt::Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>, Args ...>
{
    struct promise_type : winrt::impl::promise_base<promise_type, winrt::Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>,
                                                                  winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>
    {
        using ProgressHandler = winrt::Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>;

        void Progress(const ProgressHandler & handler)
        {
            const winrt::lock_guard guard(this->m_lock);
            m_progress = handler;
        }

        ProgressHandler Progress()
        {
            const winrt::lock_guard guard(this->m_lock);
            return m_progress;
        }

        TResult GetResults()
        {
            const winrt::lock_guard guard(this->m_lock);

            if (this->m_status == AsyncStatus::Completed)
            {
                return m_result;
            }

            if (this->m_status == AsyncStatus::Error || this->m_status == AsyncStatus::Canceled)
            {
                rethrow_exception(*reinterpret_cast<exception_ptr *>(&this->m_exception));
            }

            WINRT_ASSERT(this->m_status == AsyncStatus::Started);
            throw winrt::hresult_illegal_method_call();
        }

        void return_value(const TResult & result)
        {
            winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> handler;
            winrt::Windows::Foundation::AsyncStatus status;

            {
                const winrt::lock_guard guard(this->m_lock);

                if (this->m_status == AsyncStatus::Started)
                {
                    this->m_status = AsyncStatus::Completed;
                    m_result = result;
                }
                else
                {
                    WINRT_ASSERT(this->m_status == AsyncStatus::Canceled);
                    new (&this->m_exception) exception_ptr(make_exception_ptr(winrt::hresult_canceled()));
                }

                handler = std::move(this->m_completed);
                status = this->m_status;
            }

            if (handler)
            {
                handler(*this, status);
            }
        }

        void set_progress(const TProgress & result)
        {
            if (auto handler = Progress())
            {
                handler(*this, result);
            }
        }

        template <typename Expression>
        Expression && await_transform(Expression && expression)
        {
            if (this->Status() == AsyncStatus::Canceled)
            {
                throw winrt::hresult_canceled();
            }

            return forward<Expression>(expression);
        }

        winrt::impl::cancellation_token<promise_type> await_transform(winrt::get_cancellation_token_t) noexcept
        {
            return{ this };
        }

        winrt::impl::progress_token<promise_type, TProgress> await_transform(winrt::get_progress_token_t) noexcept
        {
            return{ this };
        }

        TResult m_result{ winrt::impl::empty_value<TResult>() };
        ProgressHandler m_progress;
    };
};

}

#endif
