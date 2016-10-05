Including a namespace header
============================

**To use a Windows Runtime type in C++/WinRT code, you must first `#include` the appropriate namespace header file(s) that define the type(s) you want to use.**

Header file folder layout
------------------------------

Let's look at the folder structure and the naming convention for our header files.

First, the layout of the C++/WinRT header files places the header files that you use in the `winrt` folder. Additionally, we have sub-folders of `winrt` that contain implementation details of the library.

The 'winrt' folder contains a header file for each WinRT namespace. The header file has same name as the namespace.

└───winrt

        └───Windows.ApplicationModel.Activation.h

        └───Windows.ApplicationModel.AppExtensions.h

        └───Windows.ApplicationModel.Appointments.AppointmentsProvider.h

        └───Windows.ApplicationModel.Appointments.DataProvider.h

        └───Windows.ApplicationModel.Appointments.h

        └─── . . .

        └───Windows.Foundation.Collections.h

        └─── . . .

Example: To use the C++/WinRT projection for the `Windows.Foundation.Collections.PropertySet` runtime class, you realize that the Windows Runtime defines it in the `Windows.Foundation.Collections` namespace. Therefore you include the respective header file by writing:

```C++
    #include "winrt/Windows.Foundation.Collections.h"`.
```

Every namespace header includes its parent
------------------------------------------

It's common for types in a subordinate namespace to reference types in its immediate parent namespace. As such, each namespace header in C++/WinRT automatically includes its parent namespace header file, so you do not need to explicitly include it (though you can without error if you prefer).

Let’s walk through one example.

* The Universal API Contract defines types in the `Windows.Security.Cryptography.Certificates` namespace.
* The equivalent C++/WinRT type definitions reside in the `winrt\\Windows.Security.Cryptography.Certificates.h` header file.
* Types in the `Windows.Security.Cryptography.Certificates` namespace require types in the parent `Windows.Security.Cryptography` namespace.
* Additionally, types in that namespace could require types in its parent `Windows.Security` namespace, and so on.

When you include `Windows.Security.Cryptography.Certificates.h`, it includes `Windows.Security.Cryptography.h`. `Windows.Security.Cryptography.h` includes `Windows.Security.h`. And we're done because there is no `Windows.h` in the C++/WinRT projection. This transitive inclusion process stops at the second-level namespace.

> Tip: This process transitively includes the header files that provide the necessary *declaractions* and the *implementations* for the classes defined in these namespaces. This distinction becomes important in the next topic.

Every namespace header includes its dependencies' declarations
--------------------------------------------------------------

Additionally, members of types in a namespace can reference one or more types in other, unrelated namespaces. In order for the compile to compile these member definitions successfully, the compiler needs to see the type declaractions for all the referenced types that reside in other, unrelated namespaces. You, however, don't need to worry about this. Each C++/WinRT header file will include the namespace headers it needs to *declare* any dependent types.

However, note that this process does not pull in the *implementations* for referenced types that reside in another, unrelated namespace.

> Tip: When you want to actually *use* types (instantiate, call methods, etc.) declared in these unrelated namespaces, you must include the appropriate namespace header file for such types (as described previously). For dependencies, the automatic inclusion process pulls in needed type *declarations*, but not the type *implementations*.

Example:

When you include a C++/WinRT namespace header file, that file appropriately includes all its dependent header files. In this example, the inclusion of the Windows.Security.Cryptography.Certificates header file (currently) pulls in declarations from the following namespaces:

-   Windows.Foundation

-   Windows.Foundation.Collections

-   Windows.Networking

-   Windows.Storage.Streams

-   Windows.Security.Cryptography

Those declarations may, transitively, pull all additional declarations. But, from your point of view, you simply include the namespace that contains the type(s) you wish to use and you get everything required to compile. There’s no need to worry about transitive dependencies.

But if you call a member of a type that resides in one of these namespaces, e.g. `Windows.Foundation.Uri.RawUri()`, you will receive a linker error indicating that the member is undefined unless you explicitly `#include Windows.Foundation.h`.
