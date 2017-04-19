Interoperability Helper Functions
=================

The base library provides a set of helper functions that are used within the projection to deal with type conversion generically between the ABI and the projected API surface. While this remains their primary purpose, they are also useful in cases where you might need to interop between C++/WinRT and other APIs or libraries that may not have any knowledge of C++/WinRT. This document briefly describes these helper functions and how you might use them to perform various common operations related to interop. Unless otherwise noted, all of the functions below are free functions available in the winrt namespace. 

`winrt::get_abi`
---

The `get_abi` function returns the ABI representation for a given value. C++/WinRT does not provide implicit conversions to the ABI types, so you might call this function to get a raw pointer to the COM interface backing a runtime class or interface. For example:

```C++
using namespace Windows::Foundation;
IAsyncInfo info = ...

ABI::Windows::Foundation::IAsyncInfo * ptr = winrt::get_abi(info);
```

Note that the `get_abi` function does not increment the reference count so it is a useful and efficient way to pass the pointer to some other function, provided it is synchronous in nature. You can also save some typing by using the `abi` alias template to avoid uttering the name of the ABI type:

```C++
using namespace Windows::Foundation;
IAsyncInfo info;

abi<IAsyncInfo> * ptr = winrt::get_abi(info);
```

The `get_abi` function works equally with other types like hstring:

```C++
HRESULT LogMessage(HSTRING value);

int main()
{
    winrt::hstring message = L"hello world";

    HRESULT hr = LogMessage(winrt::get_abi(message));
}
```

`winrt::put_abi`
---

The `put_abi` function returns the address of the ABI representation for a given value. This supports the COM convention of returning references as `out` parameters and is useful for safely taking ownership of a value returned from a classic COM or C-style function. For example:

```C++
HRESULT GetAsyncInfo(/* [out, retval] */ ABI::Windows::Foundation::IAsyncInfo ** value);

int main()
{
    using namespace Windows::Foundation;
    IAsyncInfo info;

    HRESULT hr = GetAsyncInfo(winrt::put_abi(info));
}
```

Even though the `GetAsyncInfo` function knows nothing of the projected `IAsyncInfo` type used within the main function, capturing the resulting value is simple and reliable. It works equally well with other types like `winrt::hstring`:

```C++
HRESULT GetMessage(HSTRING * value);

int main()
{
    winrt::hstring message;

    HRESULT hr = GetMessage(winrt::put_abi(message));
}
```

`winrt::attach_abi` & `winrt::detach_abi`
---------------

The `attach_abi` function takes ownership of an ABI value. Assuming you have a value, such as a COM interface pointer that is not owned, you can use the `attach_abi` function to give ownership of it to a C++/WinRT type. The `attach_abi` function is complemented by the `detach_abi` function that does the inverse.

For example:

```C++
IAsyncInfo info = ...

abi<IAsyncInfo> * ptr = winrt::detach_abi(info);

winrt::attach_abi(info, ptr);
```

This may be useful if you need to pass ownership between C++/WinRT and some other library like WRL or C++/CX.

The same is possible with other types like `winrt::hstring`:

```C++
winrt::hstring message = L"hello world";

HSTRING handle = winrt::detach_abi(message);
uint32_t size = WindowsGetStringLen(handle);

winrt::attach_abi(message, handle);
assert(message.size() == size);
```

`winrt::copy_to_abi` & `winrt::copy_from_abi`
-------------------

The `copy_to_abi` and `copy_from_abi` functions are similar to `attach_abi` and `detach_abi` except that they don't transfer ownership. Instead, they copy the underlying reference effectively calling `AddRef` or some equivalent. This is useful if you need to hold on to a reference but also need to return a reference-counted object to the caller.

For example:

```C++
abi<IAsyncInfo> * ptr = ...

IAsyncInfo info;
winrt::copy_from_abi(info, ptr);
```

In the preceding example, the `copy_from_abi` function first releases any reference held by the `info` object before acquiring a copy of `ptr`. If `ptr` does not hold a `nullptr` then `AddRef` is called so that the `info` variable has its own reference to the instance.

```C++
IAsyncInfo info = ...

abi<IAsyncInfo> * ptr = nullptr;
winrt::copy_to_abi(info, ptr);
```

In the preceding example, the `info` object presumably holds a reference to some instance and would like to give `ptr` its own reference. If `info` is not holding a reference then `ptr` will be assigned a `nullptr` value. 

The `copy_to_abi` and `copy_from_abi` functions are thus very useful for dealing with ABI parameters as they follow the rules of COM and make it very convenient for interoperability.