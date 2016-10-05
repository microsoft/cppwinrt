Naming convention for C++/WinRT types
=====================================

For every Windows Runtime type defined in metadata, the C++/WinRT header files define a C++-friendly equivalent type (called the 'projected type') with the same name as the Windows Runtime type, but placed in the C++ ‘winrt’ namespace using C++ syntax.

For example:

| Projection | Example |
| --- | ---: |
| Windows Runtime | `Windows.Foundation.Collections.PropertySet` |
| C++/WinRT | `winrt::Windows::Foundation::Collections::PropertySet` |

We use the same mapping of names for all Windows Runtime types.

-   Take the Windows Runtime type name,

-   convert WinRT namespace separators (`.`) to C++ namespace separators (`::`), then

-   prefix it with `winrt::` and

-   you have the C++/WinRT type name.

Distinguishing between the Windows Runtime class and the C++/WinRT projection
-----------------------------------------------------------------------------

Much of the time, a developer can treat instances of the C++/WinRT projected type as if they are instances of the actual Windows Runtime class.

It's occasionally important to understand that an instance of the C++/WinRT projected type is a separate object from the instance of the backing WinRT runtime class. Technically, when you call methods, or set and get ‘properties’ on the C++/WinRT object, it forwards those calls to the actual WinRT object, which the state changes occur.

In a sense, the C++/WinRT type is a proxy for the actual Windows Runtime object.

Distinguishing between the Windows Runtime class and the C++/CX projection
--------------------------------------------------------------------------

Similarly, much of the time, a developer can treat instances of the C++/CX projected type as if they are instances of the actual Windows Runtime class.

But again, the C++/CX projected type is separate instance from the actual WinRT runtime class. You call methods, and set and get ‘properties’ on the C++/CX type and it forwards those calls to the actual WinRT object.

Therefore, the C++/CX type is also proxy for the actual Windows Runtime object.

Application Binary Interface types
----------------------------------

A Windows Runtime type is really an abstraction. This abstraction defines a binary interface that allows various programming languages to interact with an object. We call this interface the Application Binary Interface, or ABI for short.

Therefore, regardless of programming language, when client code uses functionality of a Windows Runtime object, it does so at the lowest level by translating client language constructs into calls via the ABI for the Windows Runtime object.

Generally, this is a detail you don't need to consider. However, occasionally you want to interact directly using this low-level abstraction. Often, this is called "working at the Application Binary Interface (ABI) layer." Commonly, you do this when writing interop code or creating a new language projection.

Therefore, the C++/WinRT header files also define C++ declarations for all the ABI types using the winrt::ABI namespace.

Hybrid (C++/CX and C++/WinRT) code uses all three types
-------------------------------------------------------

It's especially useful to keep these distinctions in mind when working with a hybrid code base where some code uses C++/CX, other code uses C++/WinRT, and (potentially) some code works at the ABI.

Now there are four very similarly named, but different, types:

| Projection | Example |
| --- | ---: |
| Windows Runtime | `Windows.Foundation.Collections.PropertySet ` |
| C++/CX | `Windows::Foundation::Collections::PropertySet^` |
| C++/WinRT | `winrt::Windows::Foundation::Collections::PropertySet ` |
| ABI | `winrt::ABI::Windows::Foundation::Collections::PropertySet ` |

Note the hat (\^) on the C++/CX type.

See the Interop with CX document for a discussion of coding hybrid applications.
