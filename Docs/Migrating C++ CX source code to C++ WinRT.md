Migrating C++/CX source code to C++/WinRT
=========================================

Now that you've had a high-level introduction to working with Windows Runtime APIs using C++/WinRT, let's dive into some details showing construct-by-construct how to convert existing C++/CX code to its equivalent C++/WinRT form.

Changing C++/CX parameters to C++/WinRT parameters
--------------------------------------------------

When writing C++/CX source code, you pass C++/CX types as function parameters as hat (\^) references. Here's an example:

```C++
  void Sample::LogPresenceRecord( __in PresenceRecord^ record ) {
```

But in C++/WinRT, you pass the parameter by const reference instead, as shown:

```C++
  void Sample::LogPresenceRecord( __in PresenceRecord const & record ) {
```

Note that you **can** trivially rewrite the function signature to remove the hat. But doing so describes a function that take a **copy** of the passed value:

```C++
  // Don't do this!

  void Sample::LogPresenceRecord( __in PresenceRecord record ) {
```

This is valid code but it's not as efficient as passing by const reference.

> A C++/WinRT projected type is fundamentally a value that holds an interface pointer to the backing WinRT type. As such, when you make a copy of a C++/WinRT object, the compiler will properly copy the encapsulated interface pointer. Making the copy must call AddRef on the contained interface pointer. And, when the copy destructs, it must call Release on its interface pointer. Unnecessary calls to AddRef and Release are perf bottlenecks.

> Therefore, if all you do is simply remove the hat (\^) in the function declaration, you produce working, but unnecessarily slower code.

> Pass a C++/WinRT type by const reference avoids the copy, which eliminates the AddRef and Release calls.

Variable and Field references
-----------------------------

When writing C++/CX source code, you use hat (\^) variables to reference WinRT objects and the arrow (-&gt;) operator to dereference a hat variable.

For example:

```C++
  IVectorView<User^>^ userList = User::Users;

  if (userList != nullptr) {

    for (UINT32 iUser = 0; iUser < userList->Size; iUser++)
    . . .
```
When converting to the equivalent C++/WinRT code, you basically remove the hats and change the arrow operator (-&gt;) to the dot operator (.). Our projected types are values and not pointers, therefore you deference them using the dot operator, not the arrow operator.

For example, the equivalent to the preceding code is:

```C++
  IVectorView<User> userList = User::Users();

  if (userList != nullptr) {

    for (UINT32 iUser = 0; iUser < userList.Size; iUser++)
    . . .
```

Properties
----------

The C++/CX Windows Runtime language extensions include the concept of properties. When writing C++/CX source code, you can properties of a Windows Runtime object as if it were a field. However standard C++ does not have the concept of a property. As a result, in C++/WinRT all calls to retrieve or set a Windows Runtime property translates to a call to the respective get or set method.

In the following, XboxUserId, UserState, PresenceDeviceRecords and Size are all properties.

### Retrieving a value from a property

First let's look at how to get property values. Here's the C++/CX code:

```C++
  void Sample::LogPresenceRecord( __in PresenceRecord^ record ) {

    auto id = record->XboxUserId;

    auto state = record->UserState,

    auto size = record->PresenceDeviceRecords->Size;
 
  }
```

The equivalent C++/WinRT source code to retrieve the value for a Windows Runtime property calls a method with the same name as the Windows Runtime property but with no parameters:

```C++
  void Sample::LogPresenceRecord( __in PresenceRecord const & record ) {

    auto id = record.XboxUserId();

    auto state = record.UserState(),

    auto size = record.PresenceDeviceRecords().Size();

  }
```

Note that the PresenceDeviceRecords method returns a Windows Runtime object that has a Size method. As the returned object is a also C++/WinRT projected type, we dereference using the dot operator to call its Size() method.

```C++
  auto size = record.PresenceDeviceRecords().Size();
```

### Setting a property to a new value

Setting a property to a new value follows a similar pattern. In C++/CX, you assign the new value to the property, as shown.

```C++
  record->UserState = newValue; // Set the UserState property using C++/CX
```

The equivalent C++/WinRT source code to set the value for a Windows Runtime property calls a method with the same name as the Windows Runtime property and a parameter for the new value:

```C++
  Record.UserState(newValue); // Set the UserState property
```

Instantiating a C++/WinRT class
-------------------------------

As mentioned previously, C++/WinRT types are values. You allocate them on the stack or as a field of an object. Here's one example:

```C++
  #include "winrt/Windows.Foundations.Collections.h"
  using namespace winrt::Windows::Foundation::Collections;

  PropertySet mySet;
```

What does the above code actually do?

-   We stack allocate a C++/WinRT winrt::Windows.Foundation.Collections.PropertySet instance called 'mySet' using the default constructor.

-   The default constructor calls into the Windows Runtime asking it to instantiate the actual system Windows.Foundation.Collection.PropertySet.

-   The default constructor saves a reference to the default interface of the Windows Runtime PropertySet object as part of the state of the mySet variable.

When the 'mySet' variable falls out of scope, it destructs and releases the reference to the default interface. Thus, when that reference is the last reference to the Windows Runtime PropertySet object, then the WinRT object destructs as well. As always, when other code also holds references to the same Windows Runtime PropertySet object, it lives on until the last reference disappears.

In many ways, this 'mySet' variable, as well as instances of most of the other C++/WinRT types, is simply a smart pointer.

However, there is one substantive difference between C++/WinRT types and many smart pointer types. This is the behavior of the default constructor. Default construction of smart pointer results in a NULL pointer. However, default construction of a C++/WinRT class results in a call to the default constructor of the respective Windows Runtime runtime class. The C++/WinRT value then holds a reference to the default interface of the WinRT runtime class.

Sometimes, you want to create a projected type but not hook it up to a backing Windows Runtime type. Let's look at an example:

```C++
  struct MyStruct {
    PropertySet mySet;
  }

  . . .

  MyStruct s;

  . . .

  s.mySet = ... ; // Set the field to the desired value
```

The preceding code, as is, does the following:

-   You allocate the structure on the stack.

-   The default constructor for structure runs the default constructor for the PropertySet field.

-   That constructor calls into the Windows Runtime to create an instance of the system PropertySet type using its default constructor.

-   The structure is now initialized and the 'mySet' field references a WinRT PropertySet object.

-   You assign a new value to the 'mySet' field.

-   That assignment releases the newly created system PropertySet object and changes the 'mySet' object to reference a different PropertySet object.

**Allocating the structure caused an allocation of a backing WinRT PropertySet object to initialize the 'mySet' field. We then immediately discarded the allocation when we assigned a new value to the field.**

Often, we have no desire to create that initial object. Here's how to do that.

When we allocate the structure, let's use a different constructor for the 'mySet' field; one that does not call into the operating system to allocate the backing WinRT object.. Here's the code that does that:

```C++
  struct MyStruct {
    PropertySet mySet = nullptr; // Does not allocate the backing object!
  }

  . . .

  MyStruct s;

  . . .

  s.mySet = ... ; // Set the field to the desired value
```

This change invokes the PropertySet(nullptr\_t) constructor rather than the PropertySet() default constructor. The nullptr\_t constructor does not call into the Windows Runtime to create the backing type. Instead, the 'mySet' field is not connected to any backing object until you assign it a value.

Whenever you want to lazily initialize a C++/WinRT class variable, assign nullptr to the value when declaring the instance. Later you can then assign the appropriately constructed object to the variable.

Just say no to 'ref new'
------------------------

This was implied previously but you never use 'ref new' (or 'new') to allocate a C++/WinRT type. Instead you allocate the value on the stack or as a field of an object.

For example, this C++/CX code:

```C++
  class Sample : … {
    Buffer^ m_gamerPicBuffer;
  };

  . . .

  // Allocate the buffer

  m_gamerPicBuffer = ref new Buffer(MAX_IMAGE_SIZE);
```

translates to this C++/WinRT code:

```C++
  class Sample : … {
    Buffer m_gamerPicBuffer = nullptr;
  };

  . . .

  // Allocate the buffer

  m_gamerPicBuffer = Buffer(MAX_IMAGE_SIZE);
```

In this example, we know the appropriate constructor argument value at compile time. Therefore, you can eliminate a line of code and write:

```C++
  class Sample : … {
    Buffer m_gamerPicBuffer(MAX_IMAGE_SIZE); // Allocate the buffer
  };
```

Common mistakes when (not) using nullptr
----------------------------------------

Let's look at a similar, but different, example of the pattern discussed previously.

Here's another example where in C++/CX, we have a field of a class (m\_xboxLiveContext) and lazily initialize it:

```C++
  class Sample : . . .  {
    . . .
    private:

    XboxLiveContext^ m_xboxLiveContext;

    . . .

  };
```

Subsequently, the field could subsequently by initialized like this:

```C++
  m_xboxLiveContext = ref new XboxLiveContext(m_user);
```

Simply rewriting this example, like this, by removing the hat won't work, as shown shortly:

```C++
  class Sample : . . . {
    . . .

    private:
    XboxLiveContext m_xboxLiveContext;

    . . .

  };
```

The subsequent initialization, in C++/WinRT syntax, is to create the appropriate value and assign it to the field, like this:

```C++
  m_xboxLiveContext = XboxLiveContext(m_user);
```  

Unfortunately, you will see this error:

```C++
  'winrt::Microsoft::Xbox::Services::XboxLiveContext': no appropriate default constructor available
```  

The field declaration, as written, doesn't compile.

As described previously, such a field declaration invokes the default constructor for the type. The default constructor for C++/WinRT types will call RoActivateInstance to create the backing WinRT object and store the default interface into the new value.

But the XboxLiveContext class has no default constructor. It has a constructor that requires a User object parameter to the constructor. And we won't have the necessary User object until later, when we make the assignment to the field.

How can I tell the compile to \*not\* use the default constructor? The same as shown previously. Assign nullptr to the field:

```C++
  class Sample : . . . {
    . . .

    private:

    XboxLiveContext m_xboxLiveContext = nullptr;

    . . .

  };
```

This change invokes the XboxLiveContext(nullptr\_t) constructor instead of the default constructor. The nullptr\_t constructor does not attempt to call RoActivateInstance and instead sets the encapsulated default interface pointer to null. Effectively, we construct the m\_xboxLiveContext value but do not associate it with any backing WinRT object.

Whenever a type does not have a default constructor, assign nullptr to the value when declaring the instance. Later you can then assign the appropriately constructed object to the variable.

Registering for events using a lambda
-------------------------------------

The C++/CX syntax for registering for an event notification is rather verbose. Here's an example:

```C++
  User::SignInCompleted +=  ref new EventHandler<SignInCompletedEventArgs^> (
    [=] (Platform::Object^, SignInCompletedEventArgs^ args)
    {
      UpdateUsers();
    });
```

Basically, in the preceding, you use the += operator to add the heap allocated delegate object to the event. The delegate object signature must match the type of the event.

You can simplify it considerably when using C++/WinRT. Here's the equivalent. You basically call the event method passing the lambda as the argument:

```C++
  User::SignInCompleted( [=] (auto && , auto &&)
    {
      UpdateUsers();
    });
```

It's a big jump from the C++/CX example to the preceding C++/WinRT example so let's examime the example part by part.

### The registration method

First, in C++/CX you use the += operator to 'add' a newly-allocated delegate to an event. Calling the += operator invokes the event's registration method.

```C++
  User::SignInCompleted += ref new <delegate type> . . .
```

In C++/WinRT, an event becomes a set of overloaded methods (much like properties in many ways). The overload of interest here is the one that accepts a delegate type and registers for the event notifications:

```C++
  User::SignInCompleted (<delegate type>);
```
### The delegate type

In C++/CX, you use 'ref new' to instantiate the appropriate delegate type needed for the += method argument. We are registering for SignInCompleted event notifications so we need to create an EventHandler&lt;SignInCompletedEventArgs\^&gt;, as shown here:

```C++
  ref new EventHandler<SignInCompletedEventArgs^>( . . . );
```

With C++/WinRT, the compiler understands the type of the delegate parameter to the SignInCompleted method. Therefore, we allow the compiler to infer the type and create the argument required for the parameter. As a result, you don't write anything for the equivalent to the above, as shown here (or not, depending on your point of view):

```C++
                                                 ( . . . );
```
Now we passed a lambda as the function that the C++/CX EventHandler encapsulates. So we needed to declared the signature of the lambda, which must match that expected by the SignInCompleted event:

```C++
  [=] (Platform::Object^, SignInCompletedEventArgs^ args)
```

For the C++/WinRT equivalent, we write this:

```C++
  [=]( winrt::Windows::IInspectable const & , SignInCompletedEventArgs const &)
```

Note that in the preceding, we've use the winrt::Windows::IInspectable type in place of the C++/CX Platform::Object\^ type. I'll discuss this change in the next section. As always, we take both parameters by const reference instead of using a hat reference.

Finally, we simplify the C++/WinRT code even more using type inference for the lambda function parameter types, like this:

```C++
  [=]( auto && , auto &&)
```

Putting it all together, this C++/CX code:

```C++
  User::SignInCompleted += ref new EventHandler<SignInCompletedEventArgs^> (
    [=] (Platform::Object^, SignInCompletedEventArgs^ args)
        {
          UpdateUsers();
        });
```

Converts to this much simpler, but equivalent, C++/WinRT code:

```C++
  User::SignInCompleted([=]( auto && , auto &&)
        {
          UpdateUsers();
        });
```

### The revocation method

In C++/CX you use the -= operator to revoke a prior event registration.

```C++
  User::SignInCompleted -= <revocationToken> . . .
```

Where did you get the revocation token? It is returned by the registration method. So, the prior C++/CX example becomes:

```C++
  auto token = User::SignInCompleted += ref new EventHandler . . .
```

And the C++/WinRT example becomes:


```C++
  auto token = User::SignInCompleted( . . .
```

In C++/WinRT, a different overload of the event method revokes the registration:

```C++
  User::SignInCompleted (<revocationToken>);
```

Therefore, the C++/WinRT revocation call is:

```C++
  User::SignInCompleted (token);
```

Mapping C++/CX Platform types to C++/WinRT types
------------------------------------------------

The C++ Windows Runtime language extensions provides several C++/CX specific data types. These reside in the Platform namespace. When you disable Windows Runtime language extensions, you can't use the Platform types (as they aren't standard C++). Therefore, for each, we provide an equivalent type defined using standard C++.

| C++/CX | CX++/WinRT |
| ---- | ---- |
| `Platform::String^`  | `winrt::hstring` |
| `Platform::InvalidArgumentException^` | `winrt::hresult_invalid_argument` |
| `Platform::Exception^` | `winrt::hresult_error` |

### Platform::Object\^

`Platform::Object^` is the C++ Windows Runtime language extension type equivalent to the Windows Runtime IInspectable interface pointer. For C++/WinRT, the equivalent is `winrt::Windows::IInspectable`.

Like all C++/WinRT types, `winrt::Windows::IInspectable' is a value. Therefore, to declare a variable of that type to null, you write:

```C++
 winrt::Windows::IInspectable var = nullptr;
```

### Platform::String\^

`Platform::String^` is the C++ Windows Runtime language extension type equivalent to the Windows Runtime HSTRING type. For C++/WiNRT, the equivalent is `winrt::hstring`.

However, you rarely need to define variables of type `winrt::hstring`. Generally, you can just use a C++ wide string type (i.e. std::wstring or a L"literal") and pass it directly to APIs that previously required a Platform::String.

As a result, to convert to C++/WinRT, you typically change all code that uses `Platform::String^` to use std::wstring or literals.

This C++/CX code:

```C++
  void LogWrapLine(Platform::String^ str)
```

converts to the standard C++ code:

```C++
  void LogWrapLine(std::wstring str)
```

You may want to get a `char*` for a string, e.g. to pass the string to a function like swprintf. When you have a C++/CX `Platform::String^`, you retrieve a `const wchar_t*` to the characters by calling the `Platform::String::Data()` method.

```C++
  auto var = titleRecord->TitleName->Data();
```

When you are using C++/CX with WinRT string types, you use the standard C++ c\_str() method just as you would when using std::wstring.

```C++
  auto var = titleRecord.TitleName().c_str();
```

### Platform::Exception\^

The `Platform::Exception^` type is the C++ Windows Runtime language extension exception type produced when a Windows Runtime API returns a non S\_OK HRESULT. For C++/WinRT, the equivalent is `winrt::hresult_error`.

To convert to C++/WinRT, you change all code that uses the `Platform::Exception^` to use `winrt::hresult_error`.

```C++
  catch (Platform::Exception^ ex)
```

becomes:

```C++
  catch (winrt::hresult_error const & ex)
```

As always, the C++/WinRT version accepts the parameter by const reference.

C++/WinRT provides the following exception classes.

| Exception type | base | HRESULT |
| ---- | ---- | ---- |
| `hresult_error`                |                 | `code()` |
| `hresult_access_denied`        | `hresult_error` | `E_ACCESSDENIED` |
| `hresult_wrong_thread`         | `hresult_error` | `RPC_E_WRONG_THREAD` |
| `hresult_not_implemented`      | `hresult_error` | `E_NOTIMPL` |
| `hresult_invalid_argument`     | `hresult_error` | `E_INVALIDARG` |
| `hresult_out_of_bounds`        | `hresult_error` | `E_BOUNDS` |
| `hresult_no_interface`         | `hresult_error` | `E_NOINTERFACE` |
| `hresult_disconnected`         | `hresult_error` | `RPC_E_DISCONNECTED` |
| `hresult_class_not_available`  | `hresult_error` | `CLASS_E_CLASSNOTAVAILABLE` |
| `hresult_changed_state`        | `hresult_error` | `E_CHANGED_STATE` |

Note that each class provides a `code()` method that returns the HRESULT of the error, and a `message()` method that returns the string representation of that HRESULT.

Therefore the following C++/CX code:

```C++
  throw ref new Platform::InvalidArgumentException(L"A valid User is required");
```

becomes:

```C++
  throw winrt::hresult_invalid_argument(L"A valid User is required");
```

Using PPL with C++/WinRT types
==============================

There is one significant change that you will need to make to any code using PPL and C++/WinRT types.

Let's look at the following C++/CX example:

```C++
  auto pAsyncOp = requester->SocialService->GetSocialRelationshipsAsync(
                                               SocialRelationship::All,
                                               startIndex,
                                               maxItems);

  create_task(pAsyncOp).then( [this, maxItems] (task<XboxSocialRelationshipResult^> resultTask)
  {
    int itemCount = 0;
    try {
      XboxSocialRelationshipResult^ lastResult = resultTask.get();
      . . .
    }
    catch (winrt::hresult_error const & ex) {
      . . .
    }
  });

```

Now the equivalent C++/WinRT rewrite:

```C++
  using namespace winrt::ppl;

  auto pAsyncOp = requester.SocialService().GetSocialRelationshipsAsync(
                                               SocialRelationship::All,
                                               startIndex,
                                               maxItems);

  create_task(pAsyncOp).then( [this, maxItems] (task<adapter> const & resultTask)
  {
    int itemCount = 0;
    try {
      XboxSocialRelationshipResult lastResult = resultTask.get();
      . . .
    }
    catch (winrt::hresult_error const & ex) {
      . . .
    }
  });
```

Most of the changes you've already seen. We change arrows (-&gt;) to dots (.). We change property accessors to method calls. We remove hats (\^). And instead of receiving an argument by value, we receive it as a const reference.

The only remaining change is the change of:

```C++
 task<XboxSocialRelationshipResult^> esultTask
```
to

```C++
  task<adapter>; const & resultTask
```

Eliminating the hat and const reference changes, already discussed, we simply changed task&lt;XboxSocialRelationShipResult&gt; to task&lt;adapter&gt;.

Why? Unfortunately, the current implementation of PPL does not support types without a default constructor. As described previously, many Windows Runtime types do not have a default constructor. As such, the C++/WinRT projection of those types also do not have a default constructor. Therefore, these projected types don't work, as is, with PPL. 

To adapt C++/WinRT types without a default constructor for use with PPL, the C++/WinRT header files define an `winrt::ppl::adapter` class that adapts C++/WinRT types without a default constructor in a way that allows them to be used by PPL. This adapter class allows the compiler to infer the necessary type from the type of the asynchronous operation passed to create\_task. Therefore, you do not need to specify the type mentioned in the original C++/CX code, `XboxSocialRelationshipResult` in this example.

Tip: When you see the following error, followed by many, many lines of template errors, you likely need to change the task template type to 'winrt::ppl::adapter'.

```C++
error C2787: 'Concurrency::task<XboxSocialRelationshipResult>': no GUID has been associated with this object
```
