# C++/WinRT Change Log

## August 2017 release for Creator's Update SDK and Visual Studio 2017 v15.3

This release removes the Anniversary Update (10.0.14393.0) headers and now requires Visual Studio 2017 v15.3 or later.  If you require the older headers or support for Visual Studio 2015, you can sync to a previous commit such as the
[February 2017 Release](https://github.com/Microsoft/cppwinrt/tree/february_2017_release).


### Breaking Changes
For consistency with threading APIs, thread_context has been renamed:
* thread_context -> apartment_context

### Features

* Taking advantage of C\+\+17 to simplify C++/WinRT including: 
  * Simpler static_assert
  * Nested namespace definitions
  * constexpr functions
  * if constexpr
  * optional
  * string_view
  * __has_include
  * Logical operator traits
* Updated to reflect the latest coroutine draft standard
* Support for \[\[deprecated\]\]
* Improved support for WinRT error origination, propagation, chaining, and extensibility
* Improved code gen (fewer instructions) and build throughput
* Support for compile-time generic GUID calculation
* Simplified ABI interop
* Simplified and more intuitive parameter binding for strings and collections
* Removal of implementation details from winrt namespace
* Automatic object identity support
* Automatic object hashing support
* Optimized agility implementation 
* Optimized delegate implementation
* Support for derived classes in winrt::implements
* Support for binary composability in winrt::implements
* Default implementation of GetRuntimeClassName
* Support for disabling factory caching
* Experimental natvis support
* Bug fixes
 

## February 2017 release for Windows Anniversary SDK 

### Breaking Changes

#### Renames
To prevent name collisions, ABI accessors in the winrt namespace have been suffixed with "_abi":
* get -> get_abi
* put -> put_abi
* attach -> attach_abi
* copy_from -> copy_from_abi
* copy_to -> copy_to_abi
* detach -> detach_abi

For consistency with the C++17 standard’s wstring_view, the hstring and array read-only view types have been renamed:
* hstring_ref -> hstring_view
* array_ref -> array_view

To clarify their purpose and avoid name collisions, apartment initialization artifacts have been renamed:
* initialize_type -> apartment_type
* initialize -> init_apartment
* uninitialize -> uninit_apartment
 
#### Relocations
Artifacts have been relocated to more appropriate namespaces
* Implementation details have been moved from winrt to winrt\::impl, such as struct handle, abi_arg_in, and abi_arg_out
* Foundational types have been moved from winrt\::Windows to winrt\::Windows\::Foundation, such as IUnknown, IInspectable, IWeakReference, IWeakReferenceSource, and TrustLevel

#### Deprecated
The WinRT \[deprecated\] attribute is now propagated to the C++ \[\[deprecated\]\] attribute in projected artifacts.  Referencing these artifacts will now cause the VC compiler to emit a C4996 warning, which may break compilation.

#### Usability Improvements
A few breaking changes have been made to improve usability of the projection:
* Removal of IUnknown::operator->(): callers should use get_abi() instead.
* Windows\::Foundation\::IReference, which represents a nullable type, is now projected to winrt\::optional, which maps more closely to std\::optional usage.
* To support efficient (non-copying) passing of collection input parameters, conversion from standard collections has been redesigned.  The lvalue-reference converting (copying) constructors have been removed from projected interfaces (IIterable, IVectorView, IVector, IMapView, IMap).  Instead, the projection is now implemented with winrt view types (iterable, map_view, vector_view) providing rvalue-reference converting (moving) constructors.
