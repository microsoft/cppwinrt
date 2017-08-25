# Interoperability

While the C++/WinRT language projection is designed to provide no-compromise
access to the modern Windows API, we recognize that there are instances where
you need to interop with other libraries or tools that may not support
C++/WinRT directly. The base library (winrt/base.h) provides a set of helper
functions that assist in converting between C++/WinRT types and their
equivalents in other language projections such as C++/CX or the Windows SDK
headers produced by the MIDL compiler. Although we don’t directly support
interop with other language projections, to avoid cross-dependencies, you can
use the following helper functions to streamline the process as you migrate
your code to C++/WinRT.

## Converting from C++/WinRT to C++/CX

The following helper function may be used to convert a C++/WinRT object to
an equivalent C++/CX object:

```C++
template <typename T>
T^ to_cx(winrt::Windows::Foundation::IUnknown const& from)
{
    return safe_cast<T^>(reinterpret_cast<Platform::Object^>(winrt::get_abi(from)));
}
```

This function uses the winrt::get_abi function to retrieve the source
object’s underlying IUnknown pointer and then casts this to a C++/CX
object before using the C++/CX safe_cast extension to query for the
requested C++/CX type. 

## Converting from C++/CX to C++/WinRT

The following helper function may be used to convert a C++/CX object to
an equivalent C++/WinRT object:

```C++
template <typename T>
T from_cx(Platform::Object^ from)
{
    T to{ nullptr };

    winrt::check_hresult(reinterpret_cast<::IUnknown*>(from)->QueryInterface(winrt::guid_of<T>(),
                                                                             reinterpret_cast<void**>(winrt::put_abi(to))));

    return to;
}
```

This function casts the C++/CX object to retrieve the source object’s
underlying IUnknown pointer and then calls QueryInterface (the ABI
equivalent of the C++/CX safe_cast extension) to query for the requested
C++/WinRT type.

## Converting from ABI to C++/WinRT

The following helper function may be used to convert an interface pointer
defined by the Windows SDK headers produced by the MIDL compiler to an
equivalent C++/WinRT object:

```C++
template <typename T>
T from_abi(::IUnknown* from)
{
    T to{ nullptr };

    winrt::check_hresult(from->QueryInterface(winrt::guid_of<T>(),
                                              reinterpret_cast<void**>(winrt::put_abi(to))));

    return to;
}
```

This function simply calls QueryInterface to query for the requested
C++/WinRT type.

## Converting from C++/WinRT to ABI

A helper function is not required to convert from a C++/WinRT object to the
equivalent interface pointer defined by the Windows SDK headers produced by
the MIDL compiler. Simply use the as member function to query for the
requested interface. It will return a winrt::com_ptr object wrapping the
requested ABI type.

## Sample

Here is a complete example of using these helpers. It also illustrates how
you can deal with the namespace collisions across the different projections.

```C++
#pragma comment(lib, "windowsapp") 

#include <windows.foundation.h>
#include <winrt/Windows.Foundation.h>

#include <windows.ui.composition.h>
#include <winrt/windows.ui.composition.h>

namespace cx
{
    using namespace Windows::Foundation;
    using namespace Windows::UI::Composition;
}

namespace winrt
{
    using namespace Windows::Foundation;
    using namespace Windows::UI::Composition;
}

namespace abi
{
    using namespace ABI::Windows::Foundation;
    using namespace ABI::Windows::UI::Composition;
};

void ui_sample()
{
    winrt::Compositor compositor;
    winrt::Visual cpp = compositor.CreateContainerVisual();
    cpp.Opacity(0.5f);
    printf("opacity: %.2f\n", cpp.Opacity());

    // Convert from a C++/WinRT type to a C++/CX type

    cx::Visual^ cx = to_cx<cx::Visual>(cpp);
    printf("opacity: %.2f\n", cx->Opacity);

    // Convert from a C++/CX type to a C++/WinRT type

    winrt::Visual cpp_from_cx = from_cx<winrt::Visual>(cx);
    printf("opacity: %.2f\n", cpp_from_cx.Opacity());

    // Convert from a C++/WinRT type to a Windows SDK type

    winrt::com_ptr<abi::IVisual> ptr = cpp.as<abi::IVisual>();
    float opacity{};
    winrt::check_hresult(ptr->get_Opacity(&opacity));
    printf("opacity: %.2f\n", opacity);

    // Convert from a Windows SDK type to a C++/WinRT type

    winrt::Visual cpp_from_abi = from_abi<winrt::Visual>(ptr.get());
    printf("opacity: %.2f\n", cpp_from_abi.Opacity());
}

void uri_sample()
{
    winrt::Uri cpp(L"http://moderncpp.com/");
    printf("C++/WinRT: %ls\n", cpp.Domain().c_str());

    // Convert from a C++/WinRT type to a C++/CX type

    cx::Uri ^ cx = to_cx<cx::Uri>(cpp);
    printf("C++/CX: %ls\n", cx->Domain->Data());

    // Convert from a C++/WinRT type to a Windows SDK type

    winrt::com_ptr<abi::IUriRuntimeClass> ptr = cpp.as<abi::IUriRuntimeClass>();
    winrt::hstring domain;
    winrt::check_hresult(ptr->get_Domain(put_abi(domain)));
    printf("ABI: %ls\n", domain.c_str());

    // Convert from a C++/CX type to a C++/WinRT type

    winrt::Uri cpp_from_cx = from_cx<winrt::Uri>(cx);
    WINRT_ASSERT(cpp.Domain() == cpp_from_cx.Domain());
    WINRT_ASSERT(cpp == cpp_from_cx);

    // Convert from a Windows SDK type to a C++/WinRT type

    winrt::Uri cpp_from_abi = from_abi<winrt::Uri>(ptr.get());
    WINRT_ASSERT(cpp.Domain() == cpp_from_abi.Domain());
    WINRT_ASSERT(cpp == cpp_from_abi);
}

int main()
{
    winrt::init_apartment();

    uri_sample();
    ui_sample();
}
```