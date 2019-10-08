/* Header file automatically generated from Component.idl */
/*
 * File built with Microsoft(R) MIDLRT Compiler Engine Version 10.00.0226 
 */

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __Component_h_h__
#define __Component_h_h__
#ifndef __Component_h_p_h__
#define __Component_h_p_h__


#pragma once

// Ensure that the setting of the /ns_prefix command line switch is consistent for all headers.
// If you get an error from the compiler indicating "warning C4005: 'CHECK_NS_PREFIX_STATE': macro redefinition", this
// indicates that you have included two different headers with different settings for the /ns_prefix MIDL command line switch
#if !defined(DISABLE_NS_PREFIX_CHECKS)
#define CHECK_NS_PREFIX_STATE "always"
#endif // !defined(DISABLE_NS_PREFIX_CHECKS)


#pragma push_macro("MIDL_CONST_ID")
#undef MIDL_CONST_ID
#define MIDL_CONST_ID const __declspec(selectany)


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x80000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)
#define WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)
#define WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "Windows.Foundation.h"
#include "Composable.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CComponent_CIParameters_FWD_DEFINED__
#define ____x_ABI_CComponent_CIParameters_FWD_DEFINED__
namespace ABI {
    namespace Component {
        interface IParameters;
    } /* Component */} /* ABI */
#define __x_ABI_CComponent_CIParameters ABI::Component::IParameters

#endif // ____x_ABI_CComponent_CIParameters_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CIStructures_FWD_DEFINED__
#define ____x_ABI_CComponent_CIStructures_FWD_DEFINED__
namespace ABI {
    namespace Component {
        interface IStructures;
    } /* Component */} /* ABI */
#define __x_ABI_CComponent_CIStructures ABI::Component::IStructures

#endif // ____x_ABI_CComponent_CIStructures_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CICustomDelegate_FWD_DEFINED__
#define ____x_ABI_CComponent_CICustomDelegate_FWD_DEFINED__
namespace ABI {
    namespace Component {
        interface ICustomDelegate;
    } /* Component */} /* ABI */
#define __x_ABI_CComponent_CICustomDelegate ABI::Component::ICustomDelegate

#endif // ____x_ABI_CComponent_CICustomDelegate_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CIReturnDelegate_FWD_DEFINED__
#define ____x_ABI_CComponent_CIReturnDelegate_FWD_DEFINED__
namespace ABI {
    namespace Component {
        interface IReturnDelegate;
    } /* Component */} /* ABI */
#define __x_ABI_CComponent_CIReturnDelegate ABI::Component::IReturnDelegate

#endif // ____x_ABI_CComponent_CIReturnDelegate_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CITwoArgDelegate_FWD_DEFINED__
#define ____x_ABI_CComponent_CITwoArgDelegate_FWD_DEFINED__
namespace ABI {
    namespace Component {
        interface ITwoArgDelegate;
    } /* Component */} /* ABI */
#define __x_ABI_CComponent_CITwoArgDelegate ABI::Component::ITwoArgDelegate

#endif // ____x_ABI_CComponent_CITwoArgDelegate_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CITwoArgDelegateReturn_FWD_DEFINED__
#define ____x_ABI_CComponent_CITwoArgDelegateReturn_FWD_DEFINED__
namespace ABI {
    namespace Component {
        interface ITwoArgDelegateReturn;
    } /* Component */} /* ABI */
#define __x_ABI_CComponent_CITwoArgDelegateReturn ABI::Component::ITwoArgDelegateReturn

#endif // ____x_ABI_CComponent_CITwoArgDelegateReturn_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CIEventsStatics_FWD_DEFINED__
#define ____x_ABI_CComponent_CIEventsStatics_FWD_DEFINED__
namespace ABI {
    namespace Component {
        interface IEventsStatics;
    } /* Component */} /* ABI */
#define __x_ABI_CComponent_CIEventsStatics ABI::Component::IEventsStatics

#endif // ____x_ABI_CComponent_CIEventsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CIEvents_FWD_DEFINED__
#define ____x_ABI_CComponent_CIEvents_FWD_DEFINED__
namespace ABI {
    namespace Component {
        interface IEvents;
    } /* Component */} /* ABI */
#define __x_ABI_CComponent_CIEvents ABI::Component::IEvents

#endif // ____x_ABI_CComponent_CIEvents_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CIStatic_FWD_DEFINED__
#define ____x_ABI_CComponent_CIStatic_FWD_DEFINED__
namespace ABI {
    namespace Component {
        interface IStatic;
    } /* Component */} /* ABI */
#define __x_ABI_CComponent_CIStatic ABI::Component::IStatic

#endif // ____x_ABI_CComponent_CIStatic_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CIErrors_FWD_DEFINED__
#define ____x_ABI_CComponent_CIErrors_FWD_DEFINED__
namespace ABI {
    namespace Component {
        interface IErrors;
    } /* Component */} /* ABI */
#define __x_ABI_CComponent_CIErrors ABI::Component::IErrors

#endif // ____x_ABI_CComponent_CIErrors_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CIFastInput_FWD_DEFINED__
#define ____x_ABI_CComponent_CIFastInput_FWD_DEFINED__
namespace ABI {
    namespace Component {
        interface IFastInput;
    } /* Component */} /* ABI */
#define __x_ABI_CComponent_CIFastInput ABI::Component::IFastInput

#endif // ____x_ABI_CComponent_CIFastInput_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CIFastInputVectorFactory_FWD_DEFINED__
#define ____x_ABI_CComponent_CIFastInputVectorFactory_FWD_DEFINED__
namespace ABI {
    namespace Component {
        interface IFastInputVectorFactory;
    } /* Component */} /* ABI */
#define __x_ABI_CComponent_CIFastInputVectorFactory ABI::Component::IFastInputVectorFactory

#endif // ____x_ABI_CComponent_CIFastInputVectorFactory_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CIFastInputMapFactory_FWD_DEFINED__
#define ____x_ABI_CComponent_CIFastInputMapFactory_FWD_DEFINED__
namespace ABI {
    namespace Component {
        interface IFastInputMapFactory;
    } /* Component */} /* ABI */
#define __x_ABI_CComponent_CIFastInputMapFactory ABI::Component::IFastInputMapFactory

#endif // ____x_ABI_CComponent_CIFastInputMapFactory_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CICustomBase_FWD_DEFINED__
#define ____x_ABI_CComponent_CICustomBase_FWD_DEFINED__
namespace ABI {
    namespace Component {
        interface ICustomBase;
    } /* Component */} /* ABI */
#define __x_ABI_CComponent_CICustomBase ABI::Component::ICustomBase

#endif // ____x_ABI_CComponent_CICustomBase_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

#ifndef DEF___FIReference_1_UINT32_USE
#define DEF___FIReference_1_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("513ef3af-e784-5325-a91e-97c2b8111cf3"))
IReference<UINT32> : IReference_impl<UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<UINT32> __FIReference_1_UINT32_t;
#define __FIReference_1_UINT32 ABI::Windows::Foundation::__FIReference_1_UINT32_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_UINT32 ABI::Windows::Foundation::IReference<UINT32>
//#define __FIReference_1_UINT32_t ABI::Windows::Foundation::IReference<UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_UINT32_USE */



struct EventRegistrationToken;



#ifndef DEF___FIReference_1_EventRegistrationToken_USE
#define DEF___FIReference_1_EventRegistrationToken_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a9b18291-ce2a-5dae-8a23-b7f7388416db"))
IReference<struct EventRegistrationToken> : IReference_impl<struct EventRegistrationToken> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Foundation.EventRegistrationToken>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct EventRegistrationToken> __FIReference_1_EventRegistrationToken_t;
#define __FIReference_1_EventRegistrationToken ABI::Windows::Foundation::__FIReference_1_EventRegistrationToken_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_EventRegistrationToken ABI::Windows::Foundation::IReference<EventRegistrationToken>
//#define __FIReference_1_EventRegistrationToken_t ABI::Windows::Foundation::IReference<EventRegistrationToken>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_EventRegistrationToken_USE */




#ifndef DEF___FIReference_1_GUID_USE
#define DEF___FIReference_1_GUID_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7d50f649-632c-51f9-849a-ee49428933ea"))
IReference<GUID> : IReference_impl<GUID> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Guid>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<GUID> __FIReference_1_GUID_t;
#define __FIReference_1_GUID ABI::Windows::Foundation::__FIReference_1_GUID_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_GUID ABI::Windows::Foundation::IReference<GUID>
//#define __FIReference_1_GUID_t ABI::Windows::Foundation::IReference<GUID>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_GUID_USE */




#ifndef DEF___FIEventHandler_1_int_USE
#define DEF___FIEventHandler_1_int_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("12ecedac-1aee-5ba5-bd66-959a0fb2b1ff"))
IEventHandler<int> : IEventHandler_impl<int> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Int32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<int> __FIEventHandler_1_int_t;
#define __FIEventHandler_1_int ABI::Windows::Foundation::__FIEventHandler_1_int_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_int ABI::Windows::Foundation::IEventHandler<int>
//#define __FIEventHandler_1_int_t ABI::Windows::Foundation::IEventHandler<int>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_int_USE */



namespace ABI {
    namespace Component {
        class Events;
    } /* Component */} /* ABI */



#ifndef DEF___FITypedEventHandler_2_Component__CEvents_int_USE
#define DEF___FITypedEventHandler_2_Component__CEvents_int_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f3dcc7aa-7b59-5aed-9844-d740b58d09f9"))
ITypedEventHandler<ABI::Component::Events*,int> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Component::Events*, ABI::Component::IEvents*>,int> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Component.Events, Int32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Component::Events*,int> __FITypedEventHandler_2_Component__CEvents_int_t;
#define __FITypedEventHandler_2_Component__CEvents_int ABI::Windows::Foundation::__FITypedEventHandler_2_Component__CEvents_int_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Component__CEvents_int ABI::Windows::Foundation::ITypedEventHandler<ABI::Component::IEvents*,int>
//#define __FITypedEventHandler_2_Component__CEvents_int_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Component::IEvents*,int>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Component__CEvents_int_USE */




#ifndef DEF___FIIterator_1_HSTRING_USE
#define DEF___FIIterator_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236"))
IIterator<HSTRING> : IIterator_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<HSTRING> __FIIterator_1_HSTRING_t;
#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::IIterator<HSTRING>
//#define __FIIterator_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterator<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_HSTRING_USE */




#ifndef DEF___FIIterable_1_HSTRING_USE
#define DEF___FIIterable_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e"))
IIterable<HSTRING> : IIterable_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<HSTRING> __FIIterable_1_HSTRING_t;
#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::IIterable<HSTRING>
//#define __FIIterable_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterable<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_HSTRING_USE */




#ifndef DEF___FIVectorView_1_HSTRING_USE
#define DEF___FIVectorView_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e"))
IVectorView<HSTRING> : IVectorView_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<HSTRING> __FIVectorView_1_HSTRING_t;
#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::__FIVectorView_1_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::IVectorView<HSTRING>
//#define __FIVectorView_1_HSTRING_t ABI::Windows::Foundation::Collections::IVectorView<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_HSTRING_USE */




#ifndef DEF___FIVector_1_HSTRING_USE
#define DEF___FIVector_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("98b9acc1-4b56-532e-ac73-03d5291cca90"))
IVector<HSTRING> : IVector_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<HSTRING> __FIVector_1_HSTRING_t;
#define __FIVector_1_HSTRING ABI::Windows::Foundation::Collections::__FIVector_1_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_HSTRING ABI::Windows::Foundation::Collections::IVector<HSTRING>
//#define __FIVector_1_HSTRING_t ABI::Windows::Foundation::Collections::IVector<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_HSTRING_USE */




#ifndef DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("60310303-49c5-52e6-abc6-a9b36eccc716"))
IKeyValuePair<HSTRING,HSTRING> : IKeyValuePair_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,HSTRING> __FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>
//#define __FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("05eb86f1-7140-5517-b88d-cbaebe57e6b1"))
IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e9bdaaf0-cbf6-5c72-be90-29cbf3a1319b"))
IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */




#ifndef DEF___FIMapView_2_HSTRING_HSTRING_USE
#define DEF___FIMapView_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ac7f26f2-feb7-5b2a-8ac4-345bc62caede"))
IMapView<HSTRING,HSTRING> : IMapView_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,HSTRING> __FIMapView_2_HSTRING_HSTRING_t;
#define __FIMapView_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>
//#define __FIMapView_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_HSTRING_USE */




#ifndef DEF___FIMap_2_HSTRING_HSTRING_USE
#define DEF___FIMap_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f6d1f700-49c2-52ae-8154-826f9908773c"))
IMap<HSTRING,HSTRING> : IMap_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<HSTRING,HSTRING> __FIMap_2_HSTRING_HSTRING_t;
#define __FIMap_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IMap<HSTRING,HSTRING>
//#define __FIMap_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IMap<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_HSTRING_HSTRING_USE */




#ifndef DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE
#define DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b79a741f-7fb5-50ae-9e99-911201ec3d41"))
IAsyncOperationCompletedHandler<HSTRING> : IAsyncOperationCompletedHandler_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<HSTRING> __FIAsyncOperationCompletedHandler_1_HSTRING_t;
#define __FIAsyncOperationCompletedHandler_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_HSTRING_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_HSTRING ABI::Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING>
//#define __FIAsyncOperationCompletedHandler_1_HSTRING_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE */




#ifndef DEF___FIAsyncOperation_1_HSTRING_USE
#define DEF___FIAsyncOperation_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3e1fe603-f897-5263-b328-0806426b8a79"))
IAsyncOperation<HSTRING> : IAsyncOperation_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<HSTRING> __FIAsyncOperation_1_HSTRING_t;
#define __FIAsyncOperation_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperation_1_HSTRING_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_HSTRING ABI::Windows::Foundation::IAsyncOperation<HSTRING>
//#define __FIAsyncOperation_1_HSTRING_t ABI::Windows::Foundation::IAsyncOperation<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_HSTRING_USE */





namespace ABI {
    namespace Component {
        class Parameters;
    } /* Component */} /* ABI */



/*
 *
 * Interface Component.IParameters
 *
 * Interface is a part of the implementation of type Component.Parameters
 *
 *
 */
#if !defined(____x_ABI_CComponent_CIParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CIParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IParameters[] = L"Component.IParameters";
namespace ABI {
    namespace Component {
        /* [object, exclusiveto, uuid("461c8806-8bc2-4622-8eac-b547c39f867e"), version] */
        MIDL_INTERFACE("461c8806-8bc2-4622-8eac-b547c39f867e")
        IParameters : public IInspectable
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE SetInt32(
                /* [in] */INT32 value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE GetInt32(
                /* [retval, out] */INT32 * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE OutInt32(
                /* [out] */INT32 * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE SetString(
                /* [in] */HSTRING value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE GetString(
                /* [retval, out] */HSTRING * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE OutString(
                /* [out] */HSTRING * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE SetObject(
                /* [in] */IInspectable * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE GetObject(
                /* [retval, out] */IInspectable * * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE OutObject(
                /* [out] */IInspectable * * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE SetInt32Array(
                /* [in] */UINT32 count,
                /* [size_is(count), in] */INT32 * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE GetInt32Array(
                /* [out] */UINT32 * count,
                /* [size_is(, *(count)), retval, out] */INT32 * * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE OutInt32Array(
                /* [out] */UINT32 * count,
                /* [size_is(, *(count)), out] */INT32 * * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE CopyInt32Array(
                /* [in] */UINT32 count,
                /* [size_is(count), out] */INT32 * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE SetStringArray(
                /* [in] */UINT32 count,
                /* [size_is(count), in] */HSTRING * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE GetStringArray(
                /* [out] */UINT32 * count,
                /* [size_is(, *(count)), retval, out] */HSTRING * * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE OutStringArray(
                /* [out] */UINT32 * count,
                /* [size_is(, *(count)), out] */HSTRING * * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE CopyStringArray(
                /* [in] */UINT32 count,
                /* [size_is(count), out] */HSTRING * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE SetObjectArray(
                /* [in] */UINT32 count,
                /* [size_is(count), in] */IInspectable * * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE GetObjectArray(
                /* [out] */UINT32 * count,
                /* [size_is(, *(count)), retval, out] */IInspectable * * * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE OutObjectArray(
                /* [out] */UINT32 * count,
                /* [size_is(, *(count)), out] */IInspectable * * * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE CopyObjectArray(
                /* [in] */UINT32 count,
                /* [size_is(count), out] */IInspectable * * value
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_IParameters=_uuidof(IParameters);
        
    } /* Component */} /* ABI */

EXTERN_C const IID IID___x_ABI_CComponent_CIParameters;
#endif /* !defined(____x_ABI_CComponent_CIParameters_INTERFACE_DEFINED__) */


/*
 *
 * Class Component.Parameters
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Component.IParameters ** Default Interface **
 *
 */

#ifndef RUNTIMECLASS_Component_Parameters_DEFINED
#define RUNTIMECLASS_Component_Parameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Component_Parameters[] = L"Component.Parameters";
#endif

namespace ABI {
    namespace Component {
        class Structures;
    } /* Component */} /* ABI */


namespace ABI {
    namespace Component {
        
        typedef struct SimpleStructure SimpleStructure;
        
    } /* Component */} /* ABI */

namespace ABI {
    namespace Component {
        
        typedef struct ComplexStructure ComplexStructure;
        
    } /* Component */} /* ABI */

namespace ABI {
    namespace Component {
        
        typedef struct WrapStructure WrapStructure;
        
    } /* Component */} /* ABI */


/*
 *
 * Struct Component.SimpleStructure
 *
 */

namespace ABI {
    namespace Component {
        /* [version] */
        struct SimpleStructure
        {
            UINT32 Value;
            HRESULT Value2;
            EventRegistrationToken Value3;
            GUID Value4;
        };
        
    } /* Component */} /* ABI */


/*
 *
 * Struct Component.ComplexStructure
 *
 */

namespace ABI {
    namespace Component {
        /* [version] */
        struct ComplexStructure
        {
            HSTRING String;
            __FIReference_1_UINT32 * Object;
            __FIReference_1_EventRegistrationToken * Object2;
            __FIReference_1_GUID * Object3;
            ABI::Component::SimpleStructure Simple;
        };
        
    } /* Component */} /* ABI */


/*
 *
 * Struct Component.WrapStructure
 *
 */

namespace ABI {
    namespace Component {
        /* [version] */
        struct WrapStructure
        {
            ABI::Component::ComplexStructure Inner;
        };
        
    } /* Component */} /* ABI */


/*
 *
 * Interface Component.IStructures
 *
 * Interface is a part of the implementation of type Component.Structures
 *
 *
 */
#if !defined(____x_ABI_CComponent_CIStructures_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CIStructures_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IStructures[] = L"Component.IStructures";
namespace ABI {
    namespace Component {
        /* [object, exclusiveto, uuid("f591f768-96d6-48f0-9d20-0b70bc0e41f2"), version] */
        MIDL_INTERFACE("f591f768-96d6-48f0-9d20-0b70bc0e41f2")
        IStructures : public IInspectable
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE Set(
                /* [in] */ABI::Component::WrapStructure value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE Get(
                /* [retval, out] */ABI::Component::WrapStructure * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE Out(
                /* [out] */ABI::Component::WrapStructure * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE Ref(
                /* [in] */const ABI::Component::WrapStructure * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE SetArray(
                /* [in] */UINT32 count,
                /* [size_is(count), in] */ABI::Component::WrapStructure * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE GetArray(
                /* [out] */UINT32 * count,
                /* [size_is(, *(count)), retval, out] */ABI::Component::WrapStructure * * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE OutArray(
                /* [out] */UINT32 * count,
                /* [size_is(, *(count)), out] */ABI::Component::WrapStructure * * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE CopyArray(
                /* [in] */UINT32 count,
                /* [size_is(count), out] */ABI::Component::WrapStructure * value
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_IStructures=_uuidof(IStructures);
        
    } /* Component */} /* ABI */

EXTERN_C const IID IID___x_ABI_CComponent_CIStructures;
#endif /* !defined(____x_ABI_CComponent_CIStructures_INTERFACE_DEFINED__) */


/*
 *
 * Class Component.Structures
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Component.IStructures ** Default Interface **
 *
 */

#ifndef RUNTIMECLASS_Component_Structures_DEFINED
#define RUNTIMECLASS_Component_Structures_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Component_Structures[] = L"Component.Structures";
#endif



/*
 *
 * Delegate Component.CustomDelegate
 *
 */
#if !defined(____x_ABI_CComponent_CICustomDelegate_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CICustomDelegate_INTERFACE_DEFINED__
namespace ABI {
    namespace Component {
        /* [object, uuid("da38922c-3d3a-404f-8477-de9c104c4f34"), version] */
        MIDL_INTERFACE("da38922c-3d3a-404f-8477-de9c104c4f34")
        ICustomDelegate : public IUnknown
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE Invoke(
                /* [in] */int value
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_ICustomDelegate=_uuidof(ICustomDelegate);
        
    } /* Component */} /* ABI */

EXTERN_C const IID IID___x_ABI_CComponent_CICustomDelegate;
#endif /* !defined(____x_ABI_CComponent_CICustomDelegate_INTERFACE_DEFINED__) */


/*
 *
 * Delegate Component.ReturnDelegate
 *
 */
#if !defined(____x_ABI_CComponent_CIReturnDelegate_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CIReturnDelegate_INTERFACE_DEFINED__
namespace ABI {
    namespace Component {
        /* [object, uuid("fe92ce62-9f80-48f0-8264-86735adb9f8b"), version] */
        MIDL_INTERFACE("fe92ce62-9f80-48f0-8264-86735adb9f8b")
        IReturnDelegate : public IUnknown
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE Invoke(
                /* [retval, out] */HSTRING * value
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_IReturnDelegate=_uuidof(IReturnDelegate);
        
    } /* Component */} /* ABI */

EXTERN_C const IID IID___x_ABI_CComponent_CIReturnDelegate;
#endif /* !defined(____x_ABI_CComponent_CIReturnDelegate_INTERFACE_DEFINED__) */


/*
 *
 * Delegate Component.TwoArgDelegate
 *
 */
#if !defined(____x_ABI_CComponent_CITwoArgDelegate_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CITwoArgDelegate_INTERFACE_DEFINED__
namespace ABI {
    namespace Component {
        /* [object, uuid("e85655d9-9972-4aa5-92ad-83ecb01017dd"), version] */
        MIDL_INTERFACE("e85655d9-9972-4aa5-92ad-83ecb01017dd")
        ITwoArgDelegate : public IUnknown
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE Invoke(
                /* [in] */int sender,
                /* [in] */int args
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_ITwoArgDelegate=_uuidof(ITwoArgDelegate);
        
    } /* Component */} /* ABI */

EXTERN_C const IID IID___x_ABI_CComponent_CITwoArgDelegate;
#endif /* !defined(____x_ABI_CComponent_CITwoArgDelegate_INTERFACE_DEFINED__) */


/*
 *
 * Delegate Component.TwoArgDelegateReturn
 *
 */
#if !defined(____x_ABI_CComponent_CITwoArgDelegateReturn_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CITwoArgDelegateReturn_INTERFACE_DEFINED__
namespace ABI {
    namespace Component {
        /* [object, uuid("e85655d9-9972-4aa5-92ad-83ecb01017dd"), version] */
        MIDL_INTERFACE("e85655d9-9972-4aa5-92ad-83ecb01017dd")
        ITwoArgDelegateReturn : public IUnknown
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE Invoke(
                /* [in] */int sender,
                /* [in] */int args,
                /* [retval, out] */BOOL * result
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_ITwoArgDelegateReturn=_uuidof(ITwoArgDelegateReturn);
        
    } /* Component */} /* ABI */

EXTERN_C const IID IID___x_ABI_CComponent_CITwoArgDelegateReturn;
#endif /* !defined(____x_ABI_CComponent_CITwoArgDelegateReturn_INTERFACE_DEFINED__) */


/*
 *
 * Interface Component.IEventsStatics
 *
 * Interface is a part of the implementation of type Component.Events
 *
 *
 */
#if !defined(____x_ABI_CComponent_CIEventsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CIEventsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IEventsStatics[] = L"Component.IEventsStatics";
namespace ABI {
    namespace Component {
        /* [object, exclusiveto, uuid("c5784dcd-8bed-444e-95f2-58f00878615f"), version] */
        MIDL_INTERFACE("c5784dcd-8bed-444e-95f2-58f00878615f")
        IEventsStatics : public IInspectable
        {
        public:
            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_StaticEvent(
                /* [in] */__FIEventHandler_1_int * handler,
                /* [retval, out] */EventRegistrationToken * cookie
                ) = 0;
            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_StaticEvent(
                /* [in] */EventRegistrationToken cookie
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE RaiseStaticEvent(
                /* [in] */int value
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_IEventsStatics=_uuidof(IEventsStatics);
        
    } /* Component */} /* ABI */

EXTERN_C const IID IID___x_ABI_CComponent_CIEventsStatics;
#endif /* !defined(____x_ABI_CComponent_CIEventsStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Component.IEvents
 *
 * Interface is a part of the implementation of type Component.Events
 *
 *
 */
#if !defined(____x_ABI_CComponent_CIEvents_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CIEvents_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IEvents[] = L"Component.IEvents";
namespace ABI {
    namespace Component {
        /* [object, exclusiveto, uuid("6ac35d2c-b2cf-4c36-995c-a9c0764636c9"), version] */
        MIDL_INTERFACE("6ac35d2c-b2cf-4c36-995c-a9c0764636c9")
        IEvents : public IInspectable
        {
        public:
            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SimpleEvent(
                /* [in] */__FIEventHandler_1_int * handler,
                /* [retval, out] */EventRegistrationToken * cookie
                ) = 0;
            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SimpleEvent(
                /* [in] */EventRegistrationToken cookie
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE RaiseSimpleEvent(
                /* [in] */int value
                ) = 0;
            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_TypedEvent(
                /* [in] */__FITypedEventHandler_2_Component__CEvents_int * handler,
                /* [retval, out] */EventRegistrationToken * cookie
                ) = 0;
            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_TypedEvent(
                /* [in] */EventRegistrationToken cookie
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE RaiseTypedEvent(
                /* [in] */int value
                ) = 0;
            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CustomEvent(
                /* [in] */ABI::Component::ICustomDelegate  * handler,
                /* [retval, out] */EventRegistrationToken * cookie
                ) = 0;
            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CustomEvent(
                /* [in] */EventRegistrationToken cookie
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE RaiseCustomEvent(
                /* [in] */int value
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_IEvents=_uuidof(IEvents);
        
    } /* Component */} /* ABI */

EXTERN_C const IID IID___x_ABI_CComponent_CIEvents;
#endif /* !defined(____x_ABI_CComponent_CIEvents_INTERFACE_DEFINED__) */


/*
 *
 * Class Component.Events
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Component.IEvents ** Default Interface **
 *
 */

#ifndef RUNTIMECLASS_Component_Events_DEFINED
#define RUNTIMECLASS_Component_Events_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Component_Events[] = L"Component.Events";
#endif


/*
 *
 * Interface Component.IStatic
 *
 */
#if !defined(____x_ABI_CComponent_CIStatic_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CIStatic_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IStatic[] = L"Component.IStatic";
namespace ABI {
    namespace Component {
        /* [object, uuid("c242f075-4be5-4000-b77e-5634bc87547f"), version] */
        MIDL_INTERFACE("c242f075-4be5-4000-b77e-5634bc87547f")
        IStatic : public IInspectable
        {
        public:
            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_StaticEvent(
                /* [in] */__FIEventHandler_1_int * handler,
                /* [retval, out] */EventRegistrationToken * cookie
                ) = 0;
            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_StaticEvent(
                /* [in] */EventRegistrationToken cookie
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE RaiseStaticEvent(
                /* [in] */int value
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_IStatic=_uuidof(IStatic);
        
    } /* Component */} /* ABI */

EXTERN_C const IID IID___x_ABI_CComponent_CIStatic;
#endif /* !defined(____x_ABI_CComponent_CIStatic_INTERFACE_DEFINED__) */



/*
 *
 * Class Component.Static
 *
 * RuntimeClass contains static methods.
 *
 */
#ifndef RUNTIMECLASS_Component_Static_DEFINED
#define RUNTIMECLASS_Component_Static_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Component_Static[] = L"Component.Static";
#endif



/*
 *
 * Class Component.NonCachedStatic
 *
 * RuntimeClass contains static methods.
 *
 */
#ifndef RUNTIMECLASS_Component_NonCachedStatic_DEFINED
#define RUNTIMECLASS_Component_NonCachedStatic_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Component_NonCachedStatic[] = L"Component.NonCachedStatic";
#endif

namespace ABI {
    namespace Component {
        class Errors;
    } /* Component */} /* ABI */



/*
 *
 * Interface Component.IErrors
 *
 * Interface is a part of the implementation of type Component.Errors
 *
 *
 */
#if !defined(____x_ABI_CComponent_CIErrors_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CIErrors_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IErrors[] = L"Component.IErrors";
namespace ABI {
    namespace Component {
        /* [object, exclusiveto, uuid("04fa8f8b-70c0-4b7c-998d-8c44d9614786"), version] */
        MIDL_INTERFACE("04fa8f8b-70c0-4b7c-998d-8c44d9614786")
        IErrors : public IInspectable
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE Fail(
                /* [in] */HSTRING message
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE Propagate(void) = 0;
            virtual HRESULT STDMETHODCALLTYPE std_bad_alloc(void) = 0;
            virtual HRESULT STDMETHODCALLTYPE std_out_of_range(void) = 0;
            virtual HRESULT STDMETHODCALLTYPE std_invalid_argument(void) = 0;
            virtual HRESULT STDMETHODCALLTYPE std_exception(void) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_IErrors=_uuidof(IErrors);
        
    } /* Component */} /* ABI */

EXTERN_C const IID IID___x_ABI_CComponent_CIErrors;
#endif /* !defined(____x_ABI_CComponent_CIErrors_INTERFACE_DEFINED__) */


/*
 *
 * Class Component.Errors
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Component.IErrors ** Default Interface **
 *
 */

#ifndef RUNTIMECLASS_Component_Errors_DEFINED
#define RUNTIMECLASS_Component_Errors_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Component_Errors[] = L"Component.Errors";
#endif

namespace ABI {
    namespace Component {
        class FastInput;
    } /* Component */} /* ABI */



/*
 *
 * Interface Component.IFastInput
 *
 * Interface is a part of the implementation of type Component.FastInput
 *
 *
 */
#if !defined(____x_ABI_CComponent_CIFastInput_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CIFastInput_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IFastInput[] = L"Component.IFastInput";
namespace ABI {
    namespace Component {
        /* [object, exclusiveto, uuid("a2a8d27d-9836-4f21-9a84-066ddb90652d"), version] */
        MIDL_INTERFACE("a2a8d27d-9836-4f21-9a84-066ddb90652d")
        IFastInput : public IInspectable
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE String(
                /* [in] */HSTRING _in,
                /* [retval, out] */HSTRING * _out
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE Array(
                /* [in] */UINT32 count,
                /* [size_is(count), in] */HSTRING * _in,
                /* [retval, out] */HSTRING * _out
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE Iterable(
                /* [in] */__FIIterable_1_HSTRING * _in,
                /* [retval, out] */HSTRING * _out
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE VectorView(
                /* [in] */__FIVectorView_1_HSTRING * _in,
                /* [retval, out] */HSTRING * _out
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE Vector(
                /* [in] */__FIVector_1_HSTRING * _in,
                /* [retval, out] */HSTRING * _out
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE IterablePair(
                /* [in] */__FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * _in,
                /* [retval, out] */HSTRING * _out
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE MapView(
                /* [in] */__FIMapView_2_HSTRING_HSTRING * _in,
                /* [retval, out] */HSTRING * _out
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE Map(
                /* [in] */__FIMap_2_HSTRING_HSTRING * _in,
                /* [retval, out] */HSTRING * _out
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE IterableAsync(
                /* [in] */__FIIterable_1_HSTRING * _in,
                /* [retval, out] */__FIAsyncOperation_1_HSTRING * * _out
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE VectorViewAsync(
                /* [in] */__FIVectorView_1_HSTRING * _in,
                /* [retval, out] */__FIAsyncOperation_1_HSTRING * * _out
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE IterablePairAsync(
                /* [in] */__FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * _in,
                /* [retval, out] */__FIAsyncOperation_1_HSTRING * * _out
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE MapViewAsync(
                /* [in] */__FIMapView_2_HSTRING_HSTRING * _in,
                /* [retval, out] */__FIAsyncOperation_1_HSTRING * * _out
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE UseIterable(void) = 0;
            virtual HRESULT STDMETHODCALLTYPE UseIterablePair(void) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_IFastInput=_uuidof(IFastInput);
        
    } /* Component */} /* ABI */

EXTERN_C const IID IID___x_ABI_CComponent_CIFastInput;
#endif /* !defined(____x_ABI_CComponent_CIFastInput_INTERFACE_DEFINED__) */


/*
 *
 * Class Component.FastInput
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Component.IFastInput ** Default Interface **
 *
 */

#ifndef RUNTIMECLASS_Component_FastInput_DEFINED
#define RUNTIMECLASS_Component_FastInput_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Component_FastInput[] = L"Component.FastInput";
#endif

namespace ABI {
    namespace Component {
        class FastInputVector;
    } /* Component */} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IClosable;
        } /* Foundation */
    } /* Windows */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIClosable ABI::Windows::Foundation::IClosable

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__



/*
 *
 * Interface Component.IFastInputVectorFactory
 *
 * Interface is a part of the implementation of type Component.FastInputVector
 *
 *
 */
#if !defined(____x_ABI_CComponent_CIFastInputVectorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CIFastInputVectorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IFastInputVectorFactory[] = L"Component.IFastInputVectorFactory";
namespace ABI {
    namespace Component {
        /* [object, exclusiveto, uuid("bb649b98-7582-4970-8adc-e2a13aca24aa"), version] */
        MIDL_INTERFACE("bb649b98-7582-4970-8adc-e2a13aca24aa")
        IFastInputVectorFactory : public IInspectable
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE Create(
                /* [in] */__FIVectorView_1_HSTRING * _in,
                /* [retval, out] */ABI::Windows::Foundation::IClosable * * _out
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_IFastInputVectorFactory=_uuidof(IFastInputVectorFactory);
        
    } /* Component */} /* ABI */

EXTERN_C const IID IID___x_ABI_CComponent_CIFastInputVectorFactory;
#endif /* !defined(____x_ABI_CComponent_CIFastInputVectorFactory_INTERFACE_DEFINED__) */


/*
 *
 * Class Component.FastInputVector
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.IClosable ** Default Interface **
 *    Windows.Foundation.Collections.IVector_1_HSTRING
 *    Windows.Foundation.Collections.IVectorView_1_HSTRING
 *
 */

#ifndef RUNTIMECLASS_Component_FastInputVector_DEFINED
#define RUNTIMECLASS_Component_FastInputVector_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Component_FastInputVector[] = L"Component.FastInputVector";
#endif

namespace ABI {
    namespace Component {
        class FastInputMap;
    } /* Component */} /* ABI */



/*
 *
 * Interface Component.IFastInputMapFactory
 *
 * Interface is a part of the implementation of type Component.FastInputMap
 *
 *
 */
#if !defined(____x_ABI_CComponent_CIFastInputMapFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CIFastInputMapFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IFastInputMapFactory[] = L"Component.IFastInputMapFactory";
namespace ABI {
    namespace Component {
        /* [object, exclusiveto, uuid("26b63306-8ddc-4ddb-8612-a4ef8fbc3abd"), version] */
        MIDL_INTERFACE("26b63306-8ddc-4ddb-8612-a4ef8fbc3abd")
        IFastInputMapFactory : public IInspectable
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE Create(
                /* [in] */__FIMapView_2_HSTRING_HSTRING * _in,
                /* [retval, out] */ABI::Windows::Foundation::IClosable * * _out
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_IFastInputMapFactory=_uuidof(IFastInputMapFactory);
        
    } /* Component */} /* ABI */

EXTERN_C const IID IID___x_ABI_CComponent_CIFastInputMapFactory;
#endif /* !defined(____x_ABI_CComponent_CIFastInputMapFactory_INTERFACE_DEFINED__) */


/*
 *
 * Class Component.FastInputMap
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.IClosable ** Default Interface **
 *    Windows.Foundation.Collections.IMap_2_HSTRING,HSTRING
 *    Windows.Foundation.Collections.IMapView_2_HSTRING,HSTRING
 *
 */

#ifndef RUNTIMECLASS_Component_FastInputMap_DEFINED
#define RUNTIMECLASS_Component_FastInputMap_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Component_FastInputMap[] = L"Component.FastInputMap";
#endif


/*
 *
 * Struct Component.SignedEnum
 *
 */

namespace ABI {
    namespace Component {
        /* [v1_enum, version] */
        enum SignedEnum : int
        {
            SignedEnum_Negative = -5,
            SignedEnum_Positive = 5,
        };
        
    } /* Component */} /* ABI */


/*
 *
 * Struct Component.UnsignedEnum
 *
 */

namespace ABI {
    namespace Component {
        /* [v1_enum, flags, version] */
        enum UnsignedEnum : unsigned int
        {
            UnsignedEnum_First = 0x1,
            UnsignedEnum_Second = 0x2,
        };
        
        DEFINE_ENUM_FLAG_OPERATORS(UnsignedEnum)
        
    } /* Component */} /* ABI */

namespace ABI {
    namespace Component {
        class CustomBase;
    } /* Component */} /* ABI */




/*
 *
 * Interface Component.ICustomBase
 *
 * Interface is a part of the implementation of type Component.CustomBase
 *
 *
 */
#if !defined(____x_ABI_CComponent_CICustomBase_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CICustomBase_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_ICustomBase[] = L"Component.ICustomBase";
namespace ABI {
    namespace Component {
        /* [object, exclusiveto, uuid("c0f867fc-c8a8-49ff-b327-81dc306695ff"), version] */
        MIDL_INTERFACE("c0f867fc-c8a8-49ff-b327-81dc306695ff")
        ICustomBase : public IInspectable
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE CustomVirtualMethod(
                /* [retval, out] */HSTRING * value
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_ICustomBase=_uuidof(ICustomBase);
        
    } /* Component */} /* ABI */

EXTERN_C const IID IID___x_ABI_CComponent_CICustomBase;
#endif /* !defined(____x_ABI_CComponent_CICustomBase_INTERFACE_DEFINED__) */


/*
 *
 * Class Component.CustomBase
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Component.ICustomBase ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Component_CustomBase_DEFINED
#define RUNTIMECLASS_Component_CustomBase_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Component_CustomBase[] = L"Component.CustomBase";
#endif


#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CComponent_CIParameters_FWD_DEFINED__
#define ____x_ABI_CComponent_CIParameters_FWD_DEFINED__
typedef interface __x_ABI_CComponent_CIParameters __x_ABI_CComponent_CIParameters;

#endif // ____x_ABI_CComponent_CIParameters_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CIStructures_FWD_DEFINED__
#define ____x_ABI_CComponent_CIStructures_FWD_DEFINED__
typedef interface __x_ABI_CComponent_CIStructures __x_ABI_CComponent_CIStructures;

#endif // ____x_ABI_CComponent_CIStructures_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CICustomDelegate_FWD_DEFINED__
#define ____x_ABI_CComponent_CICustomDelegate_FWD_DEFINED__
typedef interface __x_ABI_CComponent_CICustomDelegate __x_ABI_CComponent_CICustomDelegate;

#endif // ____x_ABI_CComponent_CICustomDelegate_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CIReturnDelegate_FWD_DEFINED__
#define ____x_ABI_CComponent_CIReturnDelegate_FWD_DEFINED__
typedef interface __x_ABI_CComponent_CIReturnDelegate __x_ABI_CComponent_CIReturnDelegate;

#endif // ____x_ABI_CComponent_CIReturnDelegate_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CITwoArgDelegate_FWD_DEFINED__
#define ____x_ABI_CComponent_CITwoArgDelegate_FWD_DEFINED__
typedef interface __x_ABI_CComponent_CITwoArgDelegate __x_ABI_CComponent_CITwoArgDelegate;

#endif // ____x_ABI_CComponent_CITwoArgDelegate_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CITwoArgDelegateReturn_FWD_DEFINED__
#define ____x_ABI_CComponent_CITwoArgDelegateReturn_FWD_DEFINED__
typedef interface __x_ABI_CComponent_CITwoArgDelegateReturn __x_ABI_CComponent_CITwoArgDelegateReturn;

#endif // ____x_ABI_CComponent_CITwoArgDelegateReturn_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CIEventsStatics_FWD_DEFINED__
#define ____x_ABI_CComponent_CIEventsStatics_FWD_DEFINED__
typedef interface __x_ABI_CComponent_CIEventsStatics __x_ABI_CComponent_CIEventsStatics;

#endif // ____x_ABI_CComponent_CIEventsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CIEvents_FWD_DEFINED__
#define ____x_ABI_CComponent_CIEvents_FWD_DEFINED__
typedef interface __x_ABI_CComponent_CIEvents __x_ABI_CComponent_CIEvents;

#endif // ____x_ABI_CComponent_CIEvents_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CIStatic_FWD_DEFINED__
#define ____x_ABI_CComponent_CIStatic_FWD_DEFINED__
typedef interface __x_ABI_CComponent_CIStatic __x_ABI_CComponent_CIStatic;

#endif // ____x_ABI_CComponent_CIStatic_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CIErrors_FWD_DEFINED__
#define ____x_ABI_CComponent_CIErrors_FWD_DEFINED__
typedef interface __x_ABI_CComponent_CIErrors __x_ABI_CComponent_CIErrors;

#endif // ____x_ABI_CComponent_CIErrors_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CIFastInput_FWD_DEFINED__
#define ____x_ABI_CComponent_CIFastInput_FWD_DEFINED__
typedef interface __x_ABI_CComponent_CIFastInput __x_ABI_CComponent_CIFastInput;

#endif // ____x_ABI_CComponent_CIFastInput_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CIFastInputVectorFactory_FWD_DEFINED__
#define ____x_ABI_CComponent_CIFastInputVectorFactory_FWD_DEFINED__
typedef interface __x_ABI_CComponent_CIFastInputVectorFactory __x_ABI_CComponent_CIFastInputVectorFactory;

#endif // ____x_ABI_CComponent_CIFastInputVectorFactory_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CIFastInputMapFactory_FWD_DEFINED__
#define ____x_ABI_CComponent_CIFastInputMapFactory_FWD_DEFINED__
typedef interface __x_ABI_CComponent_CIFastInputMapFactory __x_ABI_CComponent_CIFastInputMapFactory;

#endif // ____x_ABI_CComponent_CIFastInputMapFactory_FWD_DEFINED__

#ifndef ____x_ABI_CComponent_CICustomBase_FWD_DEFINED__
#define ____x_ABI_CComponent_CICustomBase_FWD_DEFINED__
typedef interface __x_ABI_CComponent_CICustomBase __x_ABI_CComponent_CICustomBase;

#endif // ____x_ABI_CComponent_CICustomBase_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
#if !defined(____FIReference_1_UINT32_INTERFACE_DEFINED__)
#define ____FIReference_1_UINT32_INTERFACE_DEFINED__

typedef interface __FIReference_1_UINT32 __FIReference_1_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_UINT32;

typedef struct __FIReference_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_UINT32 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_UINT32 * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_UINT32 * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_UINT32 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_UINT32 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_UINT32 * This, /* [retval][out] */ __RPC__out unsigned int *value);
    END_INTERFACE
} __FIReference_1_UINT32Vtbl;

interface __FIReference_1_UINT32
{
    CONST_VTBL struct __FIReference_1_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_UINT32_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_UINT32_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_UINT32_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_UINT32_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_UINT32_INTERFACE_DEFINED__


struct EventRegistrationToken;

#if !defined(____FIReference_1_EventRegistrationToken_INTERFACE_DEFINED__)
#define ____FIReference_1_EventRegistrationToken_INTERFACE_DEFINED__

typedef interface __FIReference_1_EventRegistrationToken __FIReference_1_EventRegistrationToken;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_EventRegistrationToken;

typedef struct __FIReference_1_EventRegistrationTokenVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_EventRegistrationToken * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_EventRegistrationToken * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_EventRegistrationToken * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_EventRegistrationToken * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_EventRegistrationToken * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_EventRegistrationToken * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_EventRegistrationToken * This, /* [retval][out] */ __RPC__out struct EventRegistrationToken *value);
    END_INTERFACE
} __FIReference_1_EventRegistrationTokenVtbl;

interface __FIReference_1_EventRegistrationToken
{
    CONST_VTBL struct __FIReference_1_EventRegistrationTokenVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_EventRegistrationToken_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_EventRegistrationToken_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_EventRegistrationToken_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_EventRegistrationToken_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_EventRegistrationToken_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_EventRegistrationToken_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_EventRegistrationToken_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_EventRegistrationToken_INTERFACE_DEFINED__


#if !defined(____FIReference_1_GUID_INTERFACE_DEFINED__)
#define ____FIReference_1_GUID_INTERFACE_DEFINED__

typedef interface __FIReference_1_GUID __FIReference_1_GUID;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_GUID;

typedef struct __FIReference_1_GUIDVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_GUID * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_GUID * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_GUID * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_GUID * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_GUID * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_GUID * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_GUID * This, /* [retval][out] */ __RPC__out GUID *value);
    END_INTERFACE
} __FIReference_1_GUIDVtbl;

interface __FIReference_1_GUID
{
    CONST_VTBL struct __FIReference_1_GUIDVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_GUID_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_GUID_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_GUID_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_GUID_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_GUID_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_GUID_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_GUID_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_GUID_INTERFACE_DEFINED__


#if !defined(____FIEventHandler_1_int_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_int_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_int __FIEventHandler_1_int;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_int;

typedef struct __FIEventHandler_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_int * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_int * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_int * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_int * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt int *e);
    END_INTERFACE
} __FIEventHandler_1_intVtbl;

interface __FIEventHandler_1_int
{
    CONST_VTBL struct __FIEventHandler_1_intVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_int_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_int_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_int_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_int_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_int_INTERFACE_DEFINED__



#if !defined(____FITypedEventHandler_2_Component__CEvents_int_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Component__CEvents_int_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Component__CEvents_int __FITypedEventHandler_2_Component__CEvents_int;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Component__CEvents_int;

typedef struct __FITypedEventHandler_2_Component__CEvents_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Component__CEvents_int * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Component__CEvents_int * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Component__CEvents_int * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Component__CEvents_int * This,/* [in] */ __RPC__in_opt __x_ABI_CComponent_CIEvents * sender,/* [in] */ __RPC__in_opt int e);
    END_INTERFACE
} __FITypedEventHandler_2_Component__CEvents_intVtbl;

interface __FITypedEventHandler_2_Component__CEvents_int
{
    CONST_VTBL struct __FITypedEventHandler_2_Component__CEvents_intVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Component__CEvents_int_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Component__CEvents_int_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Component__CEvents_int_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Component__CEvents_int_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Component__CEvents_int_INTERFACE_DEFINED__


#if !defined(____FIIterator_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1_HSTRING __FIIterator_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_HSTRING;

typedef struct __FIIterator_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_HSTRING * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_HSTRINGVtbl;

interface __FIIterator_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_HSTRING_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_HSTRING_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_HSTRING_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_HSTRING_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIIterable_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1_HSTRING __FIIterable_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_HSTRING;

typedef  struct __FIIterable_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_HSTRING * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_HSTRING **first);

    END_INTERFACE
} __FIIterable_1_HSTRINGVtbl;

interface __FIIterable_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_HSTRING_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIVectorView_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIVectorView_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_HSTRING __FIVectorView_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_HSTRING;

typedef struct __FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_HSTRING * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_HSTRING * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out HSTRING *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_HSTRING * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_HSTRING * This,
            /* [in] */ HSTRING item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_HSTRING * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_HSTRINGVtbl;

interface __FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIVectorView_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_HSTRING_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_HSTRING_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_HSTRING_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIVector_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIVector_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIVector_1_HSTRING __FIVector_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_HSTRING;

typedef struct __FIVector_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_HSTRING * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt HSTRING *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_HSTRING * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_HSTRING **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ __RPC__in HSTRING item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in HSTRING item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in HSTRING item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_HSTRING * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_HSTRING * This, /* [in] */ __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) HSTRING *value);

    END_INTERFACE
} __FIVector_1_HSTRINGVtbl;

interface __FIVector_1_HSTRING
{
    CONST_VTBL struct __FIVector_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_HSTRING_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_HSTRING_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_HSTRING_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_HSTRING_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_HSTRING_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_HSTRING_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_HSTRING_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_HSTRING_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_HSTRING_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_HSTRING_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_HSTRING_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_HSTRING __FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_HSTRING;

typedef struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_HSTRING_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_HSTRING * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_HSTRING * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_HSTRING __FIMapView_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_HSTRING;

typedef struct __FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt HSTRING *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_HSTRINGVtbl;

interface __FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_HSTRING_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_HSTRING_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_HSTRING_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMap_2_HSTRING_HSTRING __FIMap_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING_HSTRING;

typedef struct __FIMap_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [in] */ HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt HSTRING **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [in] */ HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [in] */ HSTRING key,
        /* [in] */ __RPC__in_opt HSTRING *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,/* [in] */ HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    END_INTERFACE
} __FIMap_2_HSTRING_HSTRINGVtbl;

interface __FIMap_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMap_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_HSTRING_HSTRING_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_HSTRING_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_HSTRING_HSTRING_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_HSTRING_HSTRING_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_HSTRING_HSTRING_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_HSTRING_HSTRING_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_HSTRING_HSTRING_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_HSTRING __FIAsyncOperationCompletedHandler_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_HSTRING;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;

typedef struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_HSTRING *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl;

interface __FIAsyncOperationCompletedHandler_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_HSTRING_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_HSTRING;

typedef struct __FIAsyncOperation_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_HSTRING *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *results);
    END_INTERFACE
} __FIAsyncOperation_1_HSTRINGVtbl;

interface __FIAsyncOperation_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_HSTRING_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_HSTRING_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_HSTRING_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__





/*
 *
 * Interface Component.IParameters
 *
 * Interface is a part of the implementation of type Component.Parameters
 *
 *
 */
#if !defined(____x_ABI_CComponent_CIParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CIParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IParameters[] = L"Component.IParameters";
/* [object, exclusiveto, uuid("461c8806-8bc2-4622-8eac-b547c39f867e"), version] */
typedef struct __x_ABI_CComponent_CIParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CComponent_CIParameters * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CComponent_CIParameters * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CComponent_CIParameters * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CComponent_CIParameters * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CComponent_CIParameters * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CComponent_CIParameters * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetInt32 )(
        __x_ABI_CComponent_CIParameters * This,
        /* [in] */INT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *GetInt32 )(
        __x_ABI_CComponent_CIParameters * This,
        /* [retval, out] */INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *OutInt32 )(
        __x_ABI_CComponent_CIParameters * This,
        /* [out] */INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetString )(
        __x_ABI_CComponent_CIParameters * This,
        /* [in] */HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *GetString )(
        __x_ABI_CComponent_CIParameters * This,
        /* [retval, out] */HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *OutString )(
        __x_ABI_CComponent_CIParameters * This,
        /* [out] */HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetObject )(
        __x_ABI_CComponent_CIParameters * This,
        /* [in] */IInspectable * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetObject )(
        __x_ABI_CComponent_CIParameters * This,
        /* [retval, out] */IInspectable * * value
        );
    HRESULT ( STDMETHODCALLTYPE *OutObject )(
        __x_ABI_CComponent_CIParameters * This,
        /* [out] */IInspectable * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetInt32Array )(
        __x_ABI_CComponent_CIParameters * This,
        /* [in] */UINT32 count,
        /* [size_is(count), in] */INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetInt32Array )(
        __x_ABI_CComponent_CIParameters * This,
        /* [out] */UINT32 * count,
        /* [size_is(, *(count)), retval, out] */INT32 * * value
        );
    HRESULT ( STDMETHODCALLTYPE *OutInt32Array )(
        __x_ABI_CComponent_CIParameters * This,
        /* [out] */UINT32 * count,
        /* [size_is(, *(count)), out] */INT32 * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CopyInt32Array )(
        __x_ABI_CComponent_CIParameters * This,
        /* [in] */UINT32 count,
        /* [size_is(count), out] */INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStringArray )(
        __x_ABI_CComponent_CIParameters * This,
        /* [in] */UINT32 count,
        /* [size_is(count), in] */HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStringArray )(
        __x_ABI_CComponent_CIParameters * This,
        /* [out] */UINT32 * count,
        /* [size_is(, *(count)), retval, out] */HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *OutStringArray )(
        __x_ABI_CComponent_CIParameters * This,
        /* [out] */UINT32 * count,
        /* [size_is(, *(count)), out] */HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CopyStringArray )(
        __x_ABI_CComponent_CIParameters * This,
        /* [in] */UINT32 count,
        /* [size_is(count), out] */HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetObjectArray )(
        __x_ABI_CComponent_CIParameters * This,
        /* [in] */UINT32 count,
        /* [size_is(count), in] */IInspectable * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetObjectArray )(
        __x_ABI_CComponent_CIParameters * This,
        /* [out] */UINT32 * count,
        /* [size_is(, *(count)), retval, out] */IInspectable * * * value
        );
    HRESULT ( STDMETHODCALLTYPE *OutObjectArray )(
        __x_ABI_CComponent_CIParameters * This,
        /* [out] */UINT32 * count,
        /* [size_is(, *(count)), out] */IInspectable * * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CopyObjectArray )(
        __x_ABI_CComponent_CIParameters * This,
        /* [in] */UINT32 count,
        /* [size_is(count), out] */IInspectable * * value
        );
    END_INTERFACE
    
} __x_ABI_CComponent_CIParametersVtbl;

interface __x_ABI_CComponent_CIParameters
{
    CONST_VTBL struct __x_ABI_CComponent_CIParametersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CComponent_CIParameters_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CComponent_CIParameters_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CComponent_CIParameters_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CComponent_CIParameters_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CComponent_CIParameters_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CComponent_CIParameters_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CComponent_CIParameters_SetInt32(This,value) \
    ( (This)->lpVtbl->SetInt32(This,value) )

#define __x_ABI_CComponent_CIParameters_GetInt32(This,value) \
    ( (This)->lpVtbl->GetInt32(This,value) )

#define __x_ABI_CComponent_CIParameters_OutInt32(This,value) \
    ( (This)->lpVtbl->OutInt32(This,value) )

#define __x_ABI_CComponent_CIParameters_SetString(This,value) \
    ( (This)->lpVtbl->SetString(This,value) )

#define __x_ABI_CComponent_CIParameters_GetString(This,value) \
    ( (This)->lpVtbl->GetString(This,value) )

#define __x_ABI_CComponent_CIParameters_OutString(This,value) \
    ( (This)->lpVtbl->OutString(This,value) )

#define __x_ABI_CComponent_CIParameters_SetObject(This,value) \
    ( (This)->lpVtbl->SetObject(This,value) )

#define __x_ABI_CComponent_CIParameters_GetObject(This,value) \
    ( (This)->lpVtbl->GetObject(This,value) )

#define __x_ABI_CComponent_CIParameters_OutObject(This,value) \
    ( (This)->lpVtbl->OutObject(This,value) )

#define __x_ABI_CComponent_CIParameters_SetInt32Array(This,count,value) \
    ( (This)->lpVtbl->SetInt32Array(This,count,value) )

#define __x_ABI_CComponent_CIParameters_GetInt32Array(This,count,value) \
    ( (This)->lpVtbl->GetInt32Array(This,count,value) )

#define __x_ABI_CComponent_CIParameters_OutInt32Array(This,count,value) \
    ( (This)->lpVtbl->OutInt32Array(This,count,value) )

#define __x_ABI_CComponent_CIParameters_CopyInt32Array(This,count,value) \
    ( (This)->lpVtbl->CopyInt32Array(This,count,value) )

#define __x_ABI_CComponent_CIParameters_SetStringArray(This,count,value) \
    ( (This)->lpVtbl->SetStringArray(This,count,value) )

#define __x_ABI_CComponent_CIParameters_GetStringArray(This,count,value) \
    ( (This)->lpVtbl->GetStringArray(This,count,value) )

#define __x_ABI_CComponent_CIParameters_OutStringArray(This,count,value) \
    ( (This)->lpVtbl->OutStringArray(This,count,value) )

#define __x_ABI_CComponent_CIParameters_CopyStringArray(This,count,value) \
    ( (This)->lpVtbl->CopyStringArray(This,count,value) )

#define __x_ABI_CComponent_CIParameters_SetObjectArray(This,count,value) \
    ( (This)->lpVtbl->SetObjectArray(This,count,value) )

#define __x_ABI_CComponent_CIParameters_GetObjectArray(This,count,value) \
    ( (This)->lpVtbl->GetObjectArray(This,count,value) )

#define __x_ABI_CComponent_CIParameters_OutObjectArray(This,count,value) \
    ( (This)->lpVtbl->OutObjectArray(This,count,value) )

#define __x_ABI_CComponent_CIParameters_CopyObjectArray(This,count,value) \
    ( (This)->lpVtbl->CopyObjectArray(This,count,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CComponent_CIParameters;
#endif /* !defined(____x_ABI_CComponent_CIParameters_INTERFACE_DEFINED__) */


/*
 *
 * Class Component.Parameters
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Component.IParameters ** Default Interface **
 *
 */

#ifndef RUNTIMECLASS_Component_Parameters_DEFINED
#define RUNTIMECLASS_Component_Parameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Component_Parameters[] = L"Component.Parameters";
#endif



typedef struct __x_ABI_CComponent_CSimpleStructure __x_ABI_CComponent_CSimpleStructure;


typedef struct __x_ABI_CComponent_CComplexStructure __x_ABI_CComponent_CComplexStructure;


typedef struct __x_ABI_CComponent_CWrapStructure __x_ABI_CComponent_CWrapStructure;


/*
 *
 * Struct Component.SimpleStructure
 *
 */

/* [version] */
struct __x_ABI_CComponent_CSimpleStructure
{
    UINT32 Value;
    HRESULT Value2;
    EventRegistrationToken Value3;
    GUID Value4;
};


/*
 *
 * Struct Component.ComplexStructure
 *
 */

/* [version] */
struct __x_ABI_CComponent_CComplexStructure
{
    HSTRING String;
    __FIReference_1_UINT32 * Object;
    __FIReference_1_EventRegistrationToken * Object2;
    __FIReference_1_GUID * Object3;
    __x_ABI_CComponent_CSimpleStructure Simple;
};


/*
 *
 * Struct Component.WrapStructure
 *
 */

/* [version] */
struct __x_ABI_CComponent_CWrapStructure
{
    __x_ABI_CComponent_CComplexStructure Inner;
};


/*
 *
 * Interface Component.IStructures
 *
 * Interface is a part of the implementation of type Component.Structures
 *
 *
 */
#if !defined(____x_ABI_CComponent_CIStructures_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CIStructures_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IStructures[] = L"Component.IStructures";
/* [object, exclusiveto, uuid("f591f768-96d6-48f0-9d20-0b70bc0e41f2"), version] */
typedef struct __x_ABI_CComponent_CIStructuresVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CComponent_CIStructures * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CComponent_CIStructures * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CComponent_CIStructures * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CComponent_CIStructures * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CComponent_CIStructures * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CComponent_CIStructures * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Set )(
        __x_ABI_CComponent_CIStructures * This,
        /* [in] */__x_ABI_CComponent_CWrapStructure value
        );
    HRESULT ( STDMETHODCALLTYPE *Get )(
        __x_ABI_CComponent_CIStructures * This,
        /* [retval, out] */__x_ABI_CComponent_CWrapStructure * value
        );
    HRESULT ( STDMETHODCALLTYPE *Out )(
        __x_ABI_CComponent_CIStructures * This,
        /* [out] */__x_ABI_CComponent_CWrapStructure * value
        );
    HRESULT ( STDMETHODCALLTYPE *Ref )(
        __x_ABI_CComponent_CIStructures * This,
        /* [in] */const __x_ABI_CComponent_CWrapStructure * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetArray )(
        __x_ABI_CComponent_CIStructures * This,
        /* [in] */UINT32 count,
        /* [size_is(count), in] */__x_ABI_CComponent_CWrapStructure * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetArray )(
        __x_ABI_CComponent_CIStructures * This,
        /* [out] */UINT32 * count,
        /* [size_is(, *(count)), retval, out] */__x_ABI_CComponent_CWrapStructure * * value
        );
    HRESULT ( STDMETHODCALLTYPE *OutArray )(
        __x_ABI_CComponent_CIStructures * This,
        /* [out] */UINT32 * count,
        /* [size_is(, *(count)), out] */__x_ABI_CComponent_CWrapStructure * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CopyArray )(
        __x_ABI_CComponent_CIStructures * This,
        /* [in] */UINT32 count,
        /* [size_is(count), out] */__x_ABI_CComponent_CWrapStructure * value
        );
    END_INTERFACE
    
} __x_ABI_CComponent_CIStructuresVtbl;

interface __x_ABI_CComponent_CIStructures
{
    CONST_VTBL struct __x_ABI_CComponent_CIStructuresVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CComponent_CIStructures_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CComponent_CIStructures_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CComponent_CIStructures_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CComponent_CIStructures_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CComponent_CIStructures_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CComponent_CIStructures_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CComponent_CIStructures_Set(This,value) \
    ( (This)->lpVtbl->Set(This,value) )

#define __x_ABI_CComponent_CIStructures_Get(This,value) \
    ( (This)->lpVtbl->Get(This,value) )

#define __x_ABI_CComponent_CIStructures_Out(This,value) \
    ( (This)->lpVtbl->Out(This,value) )

#define __x_ABI_CComponent_CIStructures_Ref(This,value) \
    ( (This)->lpVtbl->Ref(This,value) )

#define __x_ABI_CComponent_CIStructures_SetArray(This,count,value) \
    ( (This)->lpVtbl->SetArray(This,count,value) )

#define __x_ABI_CComponent_CIStructures_GetArray(This,count,value) \
    ( (This)->lpVtbl->GetArray(This,count,value) )

#define __x_ABI_CComponent_CIStructures_OutArray(This,count,value) \
    ( (This)->lpVtbl->OutArray(This,count,value) )

#define __x_ABI_CComponent_CIStructures_CopyArray(This,count,value) \
    ( (This)->lpVtbl->CopyArray(This,count,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CComponent_CIStructures;
#endif /* !defined(____x_ABI_CComponent_CIStructures_INTERFACE_DEFINED__) */


/*
 *
 * Class Component.Structures
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Component.IStructures ** Default Interface **
 *
 */

#ifndef RUNTIMECLASS_Component_Structures_DEFINED
#define RUNTIMECLASS_Component_Structures_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Component_Structures[] = L"Component.Structures";
#endif



/*
 *
 * Delegate Component.CustomDelegate
 *
 */
#if !defined(____x_ABI_CComponent_CICustomDelegate_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CICustomDelegate_INTERFACE_DEFINED__
/* [object, uuid("da38922c-3d3a-404f-8477-de9c104c4f34"), version] */
typedef struct __x_ABI_CComponent_CICustomDelegateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CComponent_CICustomDelegate * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CComponent_CICustomDelegate * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CComponent_CICustomDelegate * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CComponent_CICustomDelegate * This,
        /* [in] */int value
        );
    END_INTERFACE
    
} __x_ABI_CComponent_CICustomDelegateVtbl;

interface __x_ABI_CComponent_CICustomDelegate
{
    CONST_VTBL struct __x_ABI_CComponent_CICustomDelegateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CComponent_CICustomDelegate_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CComponent_CICustomDelegate_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CComponent_CICustomDelegate_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CComponent_CICustomDelegate_Invoke(This,value) \
    ( (This)->lpVtbl->Invoke(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CComponent_CICustomDelegate;
#endif /* !defined(____x_ABI_CComponent_CICustomDelegate_INTERFACE_DEFINED__) */


/*
 *
 * Delegate Component.ReturnDelegate
 *
 */
#if !defined(____x_ABI_CComponent_CIReturnDelegate_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CIReturnDelegate_INTERFACE_DEFINED__
/* [object, uuid("fe92ce62-9f80-48f0-8264-86735adb9f8b"), version] */
typedef struct __x_ABI_CComponent_CIReturnDelegateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CComponent_CIReturnDelegate * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CComponent_CIReturnDelegate * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CComponent_CIReturnDelegate * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CComponent_CIReturnDelegate * This,
        /* [retval, out] */HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CComponent_CIReturnDelegateVtbl;

interface __x_ABI_CComponent_CIReturnDelegate
{
    CONST_VTBL struct __x_ABI_CComponent_CIReturnDelegateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CComponent_CIReturnDelegate_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CComponent_CIReturnDelegate_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CComponent_CIReturnDelegate_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CComponent_CIReturnDelegate_Invoke(This,value) \
    ( (This)->lpVtbl->Invoke(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CComponent_CIReturnDelegate;
#endif /* !defined(____x_ABI_CComponent_CIReturnDelegate_INTERFACE_DEFINED__) */


/*
 *
 * Delegate Component.TwoArgDelegate
 *
 */
#if !defined(____x_ABI_CComponent_CITwoArgDelegate_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CITwoArgDelegate_INTERFACE_DEFINED__
/* [object, uuid("e85655d9-9972-4aa5-92ad-83ecb01017dd"), version] */
typedef struct __x_ABI_CComponent_CITwoArgDelegateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CComponent_CITwoArgDelegate * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CComponent_CITwoArgDelegate * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CComponent_CITwoArgDelegate * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CComponent_CITwoArgDelegate * This,
        /* [in] */int sender,
        /* [in] */int args
        );
    END_INTERFACE
    
} __x_ABI_CComponent_CITwoArgDelegateVtbl;

interface __x_ABI_CComponent_CITwoArgDelegate
{
    CONST_VTBL struct __x_ABI_CComponent_CITwoArgDelegateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CComponent_CITwoArgDelegate_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CComponent_CITwoArgDelegate_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CComponent_CITwoArgDelegate_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CComponent_CITwoArgDelegate_Invoke(This,sender,args) \
    ( (This)->lpVtbl->Invoke(This,sender,args) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CComponent_CITwoArgDelegate;
#endif /* !defined(____x_ABI_CComponent_CITwoArgDelegate_INTERFACE_DEFINED__) */


/*
 *
 * Delegate Component.TwoArgDelegateReturn
 *
 */
#if !defined(____x_ABI_CComponent_CITwoArgDelegateReturn_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CITwoArgDelegateReturn_INTERFACE_DEFINED__
/* [object, uuid("e85655d9-9972-4aa5-92ad-83ecb01017dd"), version] */
typedef struct __x_ABI_CComponent_CITwoArgDelegateReturnVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CComponent_CITwoArgDelegateReturn * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CComponent_CITwoArgDelegateReturn * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CComponent_CITwoArgDelegateReturn * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CComponent_CITwoArgDelegateReturn * This,
        /* [in] */int sender,
        /* [in] */int args,
        /* [retval, out] */BOOL * result
        );
    END_INTERFACE
    
} __x_ABI_CComponent_CITwoArgDelegateReturnVtbl;

interface __x_ABI_CComponent_CITwoArgDelegateReturn
{
    CONST_VTBL struct __x_ABI_CComponent_CITwoArgDelegateReturnVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CComponent_CITwoArgDelegateReturn_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CComponent_CITwoArgDelegateReturn_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CComponent_CITwoArgDelegateReturn_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CComponent_CITwoArgDelegateReturn_Invoke(This,sender,args,result) \
    ( (This)->lpVtbl->Invoke(This,sender,args,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CComponent_CITwoArgDelegateReturn;
#endif /* !defined(____x_ABI_CComponent_CITwoArgDelegateReturn_INTERFACE_DEFINED__) */


/*
 *
 * Interface Component.IEventsStatics
 *
 * Interface is a part of the implementation of type Component.Events
 *
 *
 */
#if !defined(____x_ABI_CComponent_CIEventsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CIEventsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IEventsStatics[] = L"Component.IEventsStatics";
/* [object, exclusiveto, uuid("c5784dcd-8bed-444e-95f2-58f00878615f"), version] */
typedef struct __x_ABI_CComponent_CIEventsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CComponent_CIEventsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CComponent_CIEventsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CComponent_CIEventsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CComponent_CIEventsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CComponent_CIEventsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CComponent_CIEventsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_StaticEvent )(
        __x_ABI_CComponent_CIEventsStatics * This,
        /* [in] */__FIEventHandler_1_int * handler,
        /* [retval, out] */EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_StaticEvent )(
        __x_ABI_CComponent_CIEventsStatics * This,
        /* [in] */EventRegistrationToken cookie
        );
    HRESULT ( STDMETHODCALLTYPE *RaiseStaticEvent )(
        __x_ABI_CComponent_CIEventsStatics * This,
        /* [in] */int value
        );
    END_INTERFACE
    
} __x_ABI_CComponent_CIEventsStaticsVtbl;

interface __x_ABI_CComponent_CIEventsStatics
{
    CONST_VTBL struct __x_ABI_CComponent_CIEventsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CComponent_CIEventsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CComponent_CIEventsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CComponent_CIEventsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CComponent_CIEventsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CComponent_CIEventsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CComponent_CIEventsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CComponent_CIEventsStatics_add_StaticEvent(This,handler,cookie) \
    ( (This)->lpVtbl->add_StaticEvent(This,handler,cookie) )

#define __x_ABI_CComponent_CIEventsStatics_remove_StaticEvent(This,cookie) \
    ( (This)->lpVtbl->remove_StaticEvent(This,cookie) )

#define __x_ABI_CComponent_CIEventsStatics_RaiseStaticEvent(This,value) \
    ( (This)->lpVtbl->RaiseStaticEvent(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CComponent_CIEventsStatics;
#endif /* !defined(____x_ABI_CComponent_CIEventsStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Component.IEvents
 *
 * Interface is a part of the implementation of type Component.Events
 *
 *
 */
#if !defined(____x_ABI_CComponent_CIEvents_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CIEvents_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IEvents[] = L"Component.IEvents";
/* [object, exclusiveto, uuid("6ac35d2c-b2cf-4c36-995c-a9c0764636c9"), version] */
typedef struct __x_ABI_CComponent_CIEventsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CComponent_CIEvents * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CComponent_CIEvents * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CComponent_CIEvents * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CComponent_CIEvents * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CComponent_CIEvents * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CComponent_CIEvents * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SimpleEvent )(
        __x_ABI_CComponent_CIEvents * This,
        /* [in] */__FIEventHandler_1_int * handler,
        /* [retval, out] */EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SimpleEvent )(
        __x_ABI_CComponent_CIEvents * This,
        /* [in] */EventRegistrationToken cookie
        );
    HRESULT ( STDMETHODCALLTYPE *RaiseSimpleEvent )(
        __x_ABI_CComponent_CIEvents * This,
        /* [in] */int value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_TypedEvent )(
        __x_ABI_CComponent_CIEvents * This,
        /* [in] */__FITypedEventHandler_2_Component__CEvents_int * handler,
        /* [retval, out] */EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_TypedEvent )(
        __x_ABI_CComponent_CIEvents * This,
        /* [in] */EventRegistrationToken cookie
        );
    HRESULT ( STDMETHODCALLTYPE *RaiseTypedEvent )(
        __x_ABI_CComponent_CIEvents * This,
        /* [in] */int value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CustomEvent )(
        __x_ABI_CComponent_CIEvents * This,
        /* [in] */__x_ABI_CComponent_CICustomDelegate  * handler,
        /* [retval, out] */EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CustomEvent )(
        __x_ABI_CComponent_CIEvents * This,
        /* [in] */EventRegistrationToken cookie
        );
    HRESULT ( STDMETHODCALLTYPE *RaiseCustomEvent )(
        __x_ABI_CComponent_CIEvents * This,
        /* [in] */int value
        );
    END_INTERFACE
    
} __x_ABI_CComponent_CIEventsVtbl;

interface __x_ABI_CComponent_CIEvents
{
    CONST_VTBL struct __x_ABI_CComponent_CIEventsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CComponent_CIEvents_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CComponent_CIEvents_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CComponent_CIEvents_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CComponent_CIEvents_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CComponent_CIEvents_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CComponent_CIEvents_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CComponent_CIEvents_add_SimpleEvent(This,handler,cookie) \
    ( (This)->lpVtbl->add_SimpleEvent(This,handler,cookie) )

#define __x_ABI_CComponent_CIEvents_remove_SimpleEvent(This,cookie) \
    ( (This)->lpVtbl->remove_SimpleEvent(This,cookie) )

#define __x_ABI_CComponent_CIEvents_RaiseSimpleEvent(This,value) \
    ( (This)->lpVtbl->RaiseSimpleEvent(This,value) )

#define __x_ABI_CComponent_CIEvents_add_TypedEvent(This,handler,cookie) \
    ( (This)->lpVtbl->add_TypedEvent(This,handler,cookie) )

#define __x_ABI_CComponent_CIEvents_remove_TypedEvent(This,cookie) \
    ( (This)->lpVtbl->remove_TypedEvent(This,cookie) )

#define __x_ABI_CComponent_CIEvents_RaiseTypedEvent(This,value) \
    ( (This)->lpVtbl->RaiseTypedEvent(This,value) )

#define __x_ABI_CComponent_CIEvents_add_CustomEvent(This,handler,cookie) \
    ( (This)->lpVtbl->add_CustomEvent(This,handler,cookie) )

#define __x_ABI_CComponent_CIEvents_remove_CustomEvent(This,cookie) \
    ( (This)->lpVtbl->remove_CustomEvent(This,cookie) )

#define __x_ABI_CComponent_CIEvents_RaiseCustomEvent(This,value) \
    ( (This)->lpVtbl->RaiseCustomEvent(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CComponent_CIEvents;
#endif /* !defined(____x_ABI_CComponent_CIEvents_INTERFACE_DEFINED__) */


/*
 *
 * Class Component.Events
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Component.IEvents ** Default Interface **
 *
 */

#ifndef RUNTIMECLASS_Component_Events_DEFINED
#define RUNTIMECLASS_Component_Events_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Component_Events[] = L"Component.Events";
#endif


/*
 *
 * Interface Component.IStatic
 *
 */
#if !defined(____x_ABI_CComponent_CIStatic_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CIStatic_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IStatic[] = L"Component.IStatic";
/* [object, uuid("c242f075-4be5-4000-b77e-5634bc87547f"), version] */
typedef struct __x_ABI_CComponent_CIStaticVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CComponent_CIStatic * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CComponent_CIStatic * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CComponent_CIStatic * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CComponent_CIStatic * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CComponent_CIStatic * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CComponent_CIStatic * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_StaticEvent )(
        __x_ABI_CComponent_CIStatic * This,
        /* [in] */__FIEventHandler_1_int * handler,
        /* [retval, out] */EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_StaticEvent )(
        __x_ABI_CComponent_CIStatic * This,
        /* [in] */EventRegistrationToken cookie
        );
    HRESULT ( STDMETHODCALLTYPE *RaiseStaticEvent )(
        __x_ABI_CComponent_CIStatic * This,
        /* [in] */int value
        );
    END_INTERFACE
    
} __x_ABI_CComponent_CIStaticVtbl;

interface __x_ABI_CComponent_CIStatic
{
    CONST_VTBL struct __x_ABI_CComponent_CIStaticVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CComponent_CIStatic_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CComponent_CIStatic_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CComponent_CIStatic_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CComponent_CIStatic_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CComponent_CIStatic_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CComponent_CIStatic_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CComponent_CIStatic_add_StaticEvent(This,handler,cookie) \
    ( (This)->lpVtbl->add_StaticEvent(This,handler,cookie) )

#define __x_ABI_CComponent_CIStatic_remove_StaticEvent(This,cookie) \
    ( (This)->lpVtbl->remove_StaticEvent(This,cookie) )

#define __x_ABI_CComponent_CIStatic_RaiseStaticEvent(This,value) \
    ( (This)->lpVtbl->RaiseStaticEvent(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CComponent_CIStatic;
#endif /* !defined(____x_ABI_CComponent_CIStatic_INTERFACE_DEFINED__) */



/*
 *
 * Class Component.Static
 *
 * RuntimeClass contains static methods.
 *
 */
#ifndef RUNTIMECLASS_Component_Static_DEFINED
#define RUNTIMECLASS_Component_Static_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Component_Static[] = L"Component.Static";
#endif



/*
 *
 * Class Component.NonCachedStatic
 *
 * RuntimeClass contains static methods.
 *
 */
#ifndef RUNTIMECLASS_Component_NonCachedStatic_DEFINED
#define RUNTIMECLASS_Component_NonCachedStatic_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Component_NonCachedStatic[] = L"Component.NonCachedStatic";
#endif



/*
 *
 * Interface Component.IErrors
 *
 * Interface is a part of the implementation of type Component.Errors
 *
 *
 */
#if !defined(____x_ABI_CComponent_CIErrors_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CIErrors_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IErrors[] = L"Component.IErrors";
/* [object, exclusiveto, uuid("04fa8f8b-70c0-4b7c-998d-8c44d9614786"), version] */
typedef struct __x_ABI_CComponent_CIErrorsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CComponent_CIErrors * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CComponent_CIErrors * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CComponent_CIErrors * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CComponent_CIErrors * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CComponent_CIErrors * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CComponent_CIErrors * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Fail )(
        __x_ABI_CComponent_CIErrors * This,
        /* [in] */HSTRING message
        );
    HRESULT ( STDMETHODCALLTYPE *Propagate )(
        __x_ABI_CComponent_CIErrors * This
        );
    HRESULT ( STDMETHODCALLTYPE *std_bad_alloc )(
        __x_ABI_CComponent_CIErrors * This
        );
    HRESULT ( STDMETHODCALLTYPE *std_out_of_range )(
        __x_ABI_CComponent_CIErrors * This
        );
    HRESULT ( STDMETHODCALLTYPE *std_invalid_argument )(
        __x_ABI_CComponent_CIErrors * This
        );
    HRESULT ( STDMETHODCALLTYPE *std_exception )(
        __x_ABI_CComponent_CIErrors * This
        );
    END_INTERFACE
    
} __x_ABI_CComponent_CIErrorsVtbl;

interface __x_ABI_CComponent_CIErrors
{
    CONST_VTBL struct __x_ABI_CComponent_CIErrorsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CComponent_CIErrors_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CComponent_CIErrors_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CComponent_CIErrors_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CComponent_CIErrors_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CComponent_CIErrors_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CComponent_CIErrors_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CComponent_CIErrors_Fail(This,message) \
    ( (This)->lpVtbl->Fail(This,message) )

#define __x_ABI_CComponent_CIErrors_Propagate(This) \
    ( (This)->lpVtbl->Propagate(This) )

#define __x_ABI_CComponent_CIErrors_std_bad_alloc(This) \
    ( (This)->lpVtbl->std_bad_alloc(This) )

#define __x_ABI_CComponent_CIErrors_std_out_of_range(This) \
    ( (This)->lpVtbl->std_out_of_range(This) )

#define __x_ABI_CComponent_CIErrors_std_invalid_argument(This) \
    ( (This)->lpVtbl->std_invalid_argument(This) )

#define __x_ABI_CComponent_CIErrors_std_exception(This) \
    ( (This)->lpVtbl->std_exception(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CComponent_CIErrors;
#endif /* !defined(____x_ABI_CComponent_CIErrors_INTERFACE_DEFINED__) */


/*
 *
 * Class Component.Errors
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Component.IErrors ** Default Interface **
 *
 */

#ifndef RUNTIMECLASS_Component_Errors_DEFINED
#define RUNTIMECLASS_Component_Errors_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Component_Errors[] = L"Component.Errors";
#endif



/*
 *
 * Interface Component.IFastInput
 *
 * Interface is a part of the implementation of type Component.FastInput
 *
 *
 */
#if !defined(____x_ABI_CComponent_CIFastInput_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CIFastInput_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IFastInput[] = L"Component.IFastInput";
/* [object, exclusiveto, uuid("a2a8d27d-9836-4f21-9a84-066ddb90652d"), version] */
typedef struct __x_ABI_CComponent_CIFastInputVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CComponent_CIFastInput * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CComponent_CIFastInput * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CComponent_CIFastInput * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CComponent_CIFastInput * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CComponent_CIFastInput * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CComponent_CIFastInput * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *String )(
        __x_ABI_CComponent_CIFastInput * This,
        /* [in] */HSTRING _in,
        /* [retval, out] */HSTRING * _out
        );
    HRESULT ( STDMETHODCALLTYPE *Array )(
        __x_ABI_CComponent_CIFastInput * This,
        /* [in] */UINT32 count,
        /* [size_is(count), in] */HSTRING * _in,
        /* [retval, out] */HSTRING * _out
        );
    HRESULT ( STDMETHODCALLTYPE *Iterable )(
        __x_ABI_CComponent_CIFastInput * This,
        /* [in] */__FIIterable_1_HSTRING * _in,
        /* [retval, out] */HSTRING * _out
        );
    HRESULT ( STDMETHODCALLTYPE *VectorView )(
        __x_ABI_CComponent_CIFastInput * This,
        /* [in] */__FIVectorView_1_HSTRING * _in,
        /* [retval, out] */HSTRING * _out
        );
    HRESULT ( STDMETHODCALLTYPE *Vector )(
        __x_ABI_CComponent_CIFastInput * This,
        /* [in] */__FIVector_1_HSTRING * _in,
        /* [retval, out] */HSTRING * _out
        );
    HRESULT ( STDMETHODCALLTYPE *IterablePair )(
        __x_ABI_CComponent_CIFastInput * This,
        /* [in] */__FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * _in,
        /* [retval, out] */HSTRING * _out
        );
    HRESULT ( STDMETHODCALLTYPE *MapView )(
        __x_ABI_CComponent_CIFastInput * This,
        /* [in] */__FIMapView_2_HSTRING_HSTRING * _in,
        /* [retval, out] */HSTRING * _out
        );
    HRESULT ( STDMETHODCALLTYPE *Map )(
        __x_ABI_CComponent_CIFastInput * This,
        /* [in] */__FIMap_2_HSTRING_HSTRING * _in,
        /* [retval, out] */HSTRING * _out
        );
    HRESULT ( STDMETHODCALLTYPE *IterableAsync )(
        __x_ABI_CComponent_CIFastInput * This,
        /* [in] */__FIIterable_1_HSTRING * _in,
        /* [retval, out] */__FIAsyncOperation_1_HSTRING * * _out
        );
    HRESULT ( STDMETHODCALLTYPE *VectorViewAsync )(
        __x_ABI_CComponent_CIFastInput * This,
        /* [in] */__FIVectorView_1_HSTRING * _in,
        /* [retval, out] */__FIAsyncOperation_1_HSTRING * * _out
        );
    HRESULT ( STDMETHODCALLTYPE *IterablePairAsync )(
        __x_ABI_CComponent_CIFastInput * This,
        /* [in] */__FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * _in,
        /* [retval, out] */__FIAsyncOperation_1_HSTRING * * _out
        );
    HRESULT ( STDMETHODCALLTYPE *MapViewAsync )(
        __x_ABI_CComponent_CIFastInput * This,
        /* [in] */__FIMapView_2_HSTRING_HSTRING * _in,
        /* [retval, out] */__FIAsyncOperation_1_HSTRING * * _out
        );
    HRESULT ( STDMETHODCALLTYPE *UseIterable )(
        __x_ABI_CComponent_CIFastInput * This
        );
    HRESULT ( STDMETHODCALLTYPE *UseIterablePair )(
        __x_ABI_CComponent_CIFastInput * This
        );
    END_INTERFACE
    
} __x_ABI_CComponent_CIFastInputVtbl;

interface __x_ABI_CComponent_CIFastInput
{
    CONST_VTBL struct __x_ABI_CComponent_CIFastInputVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CComponent_CIFastInput_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CComponent_CIFastInput_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CComponent_CIFastInput_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CComponent_CIFastInput_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CComponent_CIFastInput_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CComponent_CIFastInput_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CComponent_CIFastInput_String(This,_in,_out) \
    ( (This)->lpVtbl->String(This,_in,_out) )

#define __x_ABI_CComponent_CIFastInput_Array(This,count,_in,_out) \
    ( (This)->lpVtbl->Array(This,count,_in,_out) )

#define __x_ABI_CComponent_CIFastInput_Iterable(This,_in,_out) \
    ( (This)->lpVtbl->Iterable(This,_in,_out) )

#define __x_ABI_CComponent_CIFastInput_VectorView(This,_in,_out) \
    ( (This)->lpVtbl->VectorView(This,_in,_out) )

#define __x_ABI_CComponent_CIFastInput_Vector(This,_in,_out) \
    ( (This)->lpVtbl->Vector(This,_in,_out) )

#define __x_ABI_CComponent_CIFastInput_IterablePair(This,_in,_out) \
    ( (This)->lpVtbl->IterablePair(This,_in,_out) )

#define __x_ABI_CComponent_CIFastInput_MapView(This,_in,_out) \
    ( (This)->lpVtbl->MapView(This,_in,_out) )

#define __x_ABI_CComponent_CIFastInput_Map(This,_in,_out) \
    ( (This)->lpVtbl->Map(This,_in,_out) )

#define __x_ABI_CComponent_CIFastInput_IterableAsync(This,_in,_out) \
    ( (This)->lpVtbl->IterableAsync(This,_in,_out) )

#define __x_ABI_CComponent_CIFastInput_VectorViewAsync(This,_in,_out) \
    ( (This)->lpVtbl->VectorViewAsync(This,_in,_out) )

#define __x_ABI_CComponent_CIFastInput_IterablePairAsync(This,_in,_out) \
    ( (This)->lpVtbl->IterablePairAsync(This,_in,_out) )

#define __x_ABI_CComponent_CIFastInput_MapViewAsync(This,_in,_out) \
    ( (This)->lpVtbl->MapViewAsync(This,_in,_out) )

#define __x_ABI_CComponent_CIFastInput_UseIterable(This) \
    ( (This)->lpVtbl->UseIterable(This) )

#define __x_ABI_CComponent_CIFastInput_UseIterablePair(This) \
    ( (This)->lpVtbl->UseIterablePair(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CComponent_CIFastInput;
#endif /* !defined(____x_ABI_CComponent_CIFastInput_INTERFACE_DEFINED__) */


/*
 *
 * Class Component.FastInput
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Component.IFastInput ** Default Interface **
 *
 */

#ifndef RUNTIMECLASS_Component_FastInput_DEFINED
#define RUNTIMECLASS_Component_FastInput_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Component_FastInput[] = L"Component.FastInput";
#endif

#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__



/*
 *
 * Interface Component.IFastInputVectorFactory
 *
 * Interface is a part of the implementation of type Component.FastInputVector
 *
 *
 */
#if !defined(____x_ABI_CComponent_CIFastInputVectorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CIFastInputVectorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IFastInputVectorFactory[] = L"Component.IFastInputVectorFactory";
/* [object, exclusiveto, uuid("bb649b98-7582-4970-8adc-e2a13aca24aa"), version] */
typedef struct __x_ABI_CComponent_CIFastInputVectorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CComponent_CIFastInputVectorFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CComponent_CIFastInputVectorFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CComponent_CIFastInputVectorFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CComponent_CIFastInputVectorFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CComponent_CIFastInputVectorFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CComponent_CIFastInputVectorFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CComponent_CIFastInputVectorFactory * This,
        /* [in] */__FIVectorView_1_HSTRING * _in,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CIClosable * * _out
        );
    END_INTERFACE
    
} __x_ABI_CComponent_CIFastInputVectorFactoryVtbl;

interface __x_ABI_CComponent_CIFastInputVectorFactory
{
    CONST_VTBL struct __x_ABI_CComponent_CIFastInputVectorFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CComponent_CIFastInputVectorFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CComponent_CIFastInputVectorFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CComponent_CIFastInputVectorFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CComponent_CIFastInputVectorFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CComponent_CIFastInputVectorFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CComponent_CIFastInputVectorFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CComponent_CIFastInputVectorFactory_Create(This,_in,_out) \
    ( (This)->lpVtbl->Create(This,_in,_out) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CComponent_CIFastInputVectorFactory;
#endif /* !defined(____x_ABI_CComponent_CIFastInputVectorFactory_INTERFACE_DEFINED__) */


/*
 *
 * Class Component.FastInputVector
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.IClosable ** Default Interface **
 *    Windows.Foundation.Collections.IVector_1_HSTRING
 *    Windows.Foundation.Collections.IVectorView_1_HSTRING
 *
 */

#ifndef RUNTIMECLASS_Component_FastInputVector_DEFINED
#define RUNTIMECLASS_Component_FastInputVector_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Component_FastInputVector[] = L"Component.FastInputVector";
#endif



/*
 *
 * Interface Component.IFastInputMapFactory
 *
 * Interface is a part of the implementation of type Component.FastInputMap
 *
 *
 */
#if !defined(____x_ABI_CComponent_CIFastInputMapFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CIFastInputMapFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IFastInputMapFactory[] = L"Component.IFastInputMapFactory";
/* [object, exclusiveto, uuid("26b63306-8ddc-4ddb-8612-a4ef8fbc3abd"), version] */
typedef struct __x_ABI_CComponent_CIFastInputMapFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CComponent_CIFastInputMapFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CComponent_CIFastInputMapFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CComponent_CIFastInputMapFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CComponent_CIFastInputMapFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CComponent_CIFastInputMapFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CComponent_CIFastInputMapFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CComponent_CIFastInputMapFactory * This,
        /* [in] */__FIMapView_2_HSTRING_HSTRING * _in,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CIClosable * * _out
        );
    END_INTERFACE
    
} __x_ABI_CComponent_CIFastInputMapFactoryVtbl;

interface __x_ABI_CComponent_CIFastInputMapFactory
{
    CONST_VTBL struct __x_ABI_CComponent_CIFastInputMapFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CComponent_CIFastInputMapFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CComponent_CIFastInputMapFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CComponent_CIFastInputMapFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CComponent_CIFastInputMapFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CComponent_CIFastInputMapFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CComponent_CIFastInputMapFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CComponent_CIFastInputMapFactory_Create(This,_in,_out) \
    ( (This)->lpVtbl->Create(This,_in,_out) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CComponent_CIFastInputMapFactory;
#endif /* !defined(____x_ABI_CComponent_CIFastInputMapFactory_INTERFACE_DEFINED__) */


/*
 *
 * Class Component.FastInputMap
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.IClosable ** Default Interface **
 *    Windows.Foundation.Collections.IMap_2_HSTRING,HSTRING
 *    Windows.Foundation.Collections.IMapView_2_HSTRING,HSTRING
 *
 */

#ifndef RUNTIMECLASS_Component_FastInputMap_DEFINED
#define RUNTIMECLASS_Component_FastInputMap_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Component_FastInputMap[] = L"Component.FastInputMap";
#endif


/*
 *
 * Struct Component.SignedEnum
 *
 */

/* [v1_enum, version] */
enum __x_ABI_CComponent_CSignedEnum
{
    SignedEnum_Negative = -5,
    SignedEnum_Positive = 5,
};


/*
 *
 * Struct Component.UnsignedEnum
 *
 */

/* [v1_enum, flags, version] */
enum __x_ABI_CComponent_CUnsignedEnum
{
    UnsignedEnum_First = 0x1,
    UnsignedEnum_Second = 0x2,
};




/*
 *
 * Interface Component.ICustomBase
 *
 * Interface is a part of the implementation of type Component.CustomBase
 *
 *
 */
#if !defined(____x_ABI_CComponent_CICustomBase_INTERFACE_DEFINED__)
#define ____x_ABI_CComponent_CICustomBase_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_ICustomBase[] = L"Component.ICustomBase";
/* [object, exclusiveto, uuid("c0f867fc-c8a8-49ff-b327-81dc306695ff"), version] */
typedef struct __x_ABI_CComponent_CICustomBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CComponent_CICustomBase * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CComponent_CICustomBase * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CComponent_CICustomBase * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CComponent_CICustomBase * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CComponent_CICustomBase * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CComponent_CICustomBase * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CustomVirtualMethod )(
        __x_ABI_CComponent_CICustomBase * This,
        /* [retval, out] */HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CComponent_CICustomBaseVtbl;

interface __x_ABI_CComponent_CICustomBase
{
    CONST_VTBL struct __x_ABI_CComponent_CICustomBaseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CComponent_CICustomBase_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CComponent_CICustomBase_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CComponent_CICustomBase_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CComponent_CICustomBase_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CComponent_CICustomBase_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CComponent_CICustomBase_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CComponent_CICustomBase_CustomVirtualMethod(This,value) \
    ( (This)->lpVtbl->CustomVirtualMethod(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CComponent_CICustomBase;
#endif /* !defined(____x_ABI_CComponent_CICustomBase_INTERFACE_DEFINED__) */


/*
 *
 * Class Component.CustomBase
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Component.ICustomBase ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Component_CustomBase_DEFINED
#define RUNTIMECLASS_Component_CustomBase_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Component_CustomBase[] = L"Component.CustomBase";
#endif


#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Component_h_p_h__

#endif // __Component_h_h__
