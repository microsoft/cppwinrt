Breaking Changes from PREVIEW to RTM Release
============================================

Renames
-------
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
 
Relocations
-----------
Artifacts have been relocated to more appropriate namespaces
* Implementation details have been moved from winrt to winrt\::impl, such as struct handle, abi_arg_in, and abi_arg_out
* Foundational types have been moved from winrt\::Windows to winrt\::Windows\::Foundation, such as IUnknown, IInspectable, IWeakReference, IWeakReferenceSource, and TrustLevel

Deprecated
----------
The WinRT \[deprecated\] attribute is now propagated to the C++ \[\[deprecated\]\] attribute in projected artifacts.  Referencing these artifacts will now cause the VC compiler to emit a C4996 warning, which may break compilation.

Usability Improvements
----------------------
A few breaking changes have been made to improve usability of the projection:
* Removal of IUnknown::operator->(): callers should use get_abi() instead.
* Windows\::Foundation\::IReference, which represents a nullable type, is now projected to winrt\::optional, which maps more closely to std\::optional usage.
* To support efficient (non-copying) passing of collection input parameters, conversion from standard collections has been redesigned.  The lvalue-reference converting (copying) constructors have been removed from projected interfaces (IIterable, IVectorView, IVector, IMapView, IMap).  Instead, the projection is now implemented with winrt view types (iterable, map_view, vector_view) providing rvalue-reference converting (moving) constructors.
