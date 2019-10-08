/* Header file automatically generated from Composable.idl */
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
#ifndef __Composable_h_h__
#define __Composable_h_h__
#ifndef __Composable_h_p_h__
#define __Composable_h_p_h__


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

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CComposable_CIBase_FWD_DEFINED__
#define ____x_ABI_CComposable_CIBase_FWD_DEFINED__
namespace ABI {
    namespace Composable {
        interface IBase;
    } /* Composable */} /* ABI */
#define __x_ABI_CComposable_CIBase ABI::Composable::IBase

#endif // ____x_ABI_CComposable_CIBase_FWD_DEFINED__

#ifndef ____x_ABI_CComposable_CIBaseFactory_FWD_DEFINED__
#define ____x_ABI_CComposable_CIBaseFactory_FWD_DEFINED__
namespace ABI {
    namespace Composable {
        interface IBaseFactory;
    } /* Composable */} /* ABI */
#define __x_ABI_CComposable_CIBaseFactory ABI::Composable::IBaseFactory

#endif // ____x_ABI_CComposable_CIBaseFactory_FWD_DEFINED__

#ifndef ____x_ABI_CComposable_CIBaseOverrides_FWD_DEFINED__
#define ____x_ABI_CComposable_CIBaseOverrides_FWD_DEFINED__
namespace ABI {
    namespace Composable {
        interface IBaseOverrides;
    } /* Composable */} /* ABI */
#define __x_ABI_CComposable_CIBaseOverrides ABI::Composable::IBaseOverrides

#endif // ____x_ABI_CComposable_CIBaseOverrides_FWD_DEFINED__

#ifndef ____x_ABI_CComposable_CIDerived_FWD_DEFINED__
#define ____x_ABI_CComposable_CIDerived_FWD_DEFINED__
namespace ABI {
    namespace Composable {
        interface IDerived;
    } /* Composable */} /* ABI */
#define __x_ABI_CComposable_CIDerived ABI::Composable::IDerived

#endif // ____x_ABI_CComposable_CIDerived_FWD_DEFINED__

#ifndef ____x_ABI_CComposable_CIDerivedFactory_FWD_DEFINED__
#define ____x_ABI_CComposable_CIDerivedFactory_FWD_DEFINED__
namespace ABI {
    namespace Composable {
        interface IDerivedFactory;
    } /* Composable */} /* ABI */
#define __x_ABI_CComposable_CIDerivedFactory ABI::Composable::IDerivedFactory

#endif // ____x_ABI_CComposable_CIDerivedFactory_FWD_DEFINED__

#ifndef ____x_ABI_CComposable_CITestStructCodeGen_FWD_DEFINED__
#define ____x_ABI_CComposable_CITestStructCodeGen_FWD_DEFINED__
namespace ABI {
    namespace Composable {
        interface ITestStructCodeGen;
    } /* Composable */} /* ABI */
#define __x_ABI_CComposable_CITestStructCodeGen ABI::Composable::ITestStructCodeGen

#endif // ____x_ABI_CComposable_CITestStructCodeGen_FWD_DEFINED__


namespace ABI {
    namespace Composable {
        class Base;
    } /* Composable */} /* ABI */


namespace ABI {
    namespace Composable {
        class Derived;
    } /* Composable */} /* ABI */



/*
 *
 * Interface Composable.IBase
 *
 * Interface is a part of the implementation of type Composable.Base
 *
 *
 */
#if !defined(____x_ABI_CComposable_CIBase_INTERFACE_DEFINED__)
#define ____x_ABI_CComposable_CIBase_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Composable_IBase[] = L"Composable.IBase";
namespace ABI {
    namespace Composable {
        /* [object, exclusiveto, uuid("1B0CDE64-5FAF-4316-AF37-48C790329D32"), version] */
        MIDL_INTERFACE("1B0CDE64-5FAF-4316-AF37-48C790329D32")
        IBase : public IInspectable
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE VirtualMethod(
                /* [retval, out] */HSTRING * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE CallOverridableMethod(
                /* [retval, out] */HSTRING * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE CallOverridableVirtualMethod(
                /* [retval, out] */HSTRING * value
                ) = 0;
            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                /* [retval, out] */HSTRING * value
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_IBase=_uuidof(IBase);
        
    } /* Composable */} /* ABI */

EXTERN_C const IID IID___x_ABI_CComposable_CIBase;
#endif /* !defined(____x_ABI_CComposable_CIBase_INTERFACE_DEFINED__) */


/*
 *
 * Interface Composable.IBaseFactory
 *
 * Interface is a part of the implementation of type Composable.Base
 *
 *
 */
#if !defined(____x_ABI_CComposable_CIBaseFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CComposable_CIBaseFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Composable_IBaseFactory[] = L"Composable.IBaseFactory";
namespace ABI {
    namespace Composable {
        /* [object, exclusiveto, uuid("37AF44A4-8FC6-4BD8-A12F-D63ED119EF45"), version] */
        MIDL_INTERFACE("37AF44A4-8FC6-4BD8-A12F-D63ED119EF45")
        IBaseFactory : public IInspectable
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                /* [in] */IInspectable * outer,
                /* [out] */IInspectable * * inner,
                /* [retval, out] */ABI::Composable::IBase * * instance
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE CreateInstanceWithName(
                /* [in] */HSTRING name,
                /* [in] */IInspectable * outer,
                /* [out] */IInspectable * * inner,
                /* [retval, out] */ABI::Composable::IBase * * instance
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_IBaseFactory=_uuidof(IBaseFactory);
        
    } /* Composable */} /* ABI */

EXTERN_C const IID IID___x_ABI_CComposable_CIBaseFactory;
#endif /* !defined(____x_ABI_CComposable_CIBaseFactory_INTERFACE_DEFINED__) */


/*
 *
 * Interface Composable.IBaseOverrides
 *
 * Interface is a part of the implementation of type Composable.Base
 *
 *
 */
#if !defined(____x_ABI_CComposable_CIBaseOverrides_INTERFACE_DEFINED__)
#define ____x_ABI_CComposable_CIBaseOverrides_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Composable_IBaseOverrides[] = L"Composable.IBaseOverrides";
namespace ABI {
    namespace Composable {
        /* [object, exclusiveto, uuid("A4DB9277-E6B7-4936-BF41-CDF042E278E2"), version] */
        MIDL_INTERFACE("A4DB9277-E6B7-4936-BF41-CDF042E278E2")
        IBaseOverrides : public IInspectable
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE OverridableMethod(
                /* [retval, out] */HSTRING * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE OverridableVirtualMethod(
                /* [retval, out] */HSTRING * value
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_IBaseOverrides=_uuidof(IBaseOverrides);
        
    } /* Composable */} /* ABI */

EXTERN_C const IID IID___x_ABI_CComposable_CIBaseOverrides;
#endif /* !defined(____x_ABI_CComposable_CIBaseOverrides_INTERFACE_DEFINED__) */


/*
 *
 * Interface Composable.IDerived
 *
 * Interface is a part of the implementation of type Composable.Derived
 *
 *
 */
#if !defined(____x_ABI_CComposable_CIDerived_INTERFACE_DEFINED__)
#define ____x_ABI_CComposable_CIDerived_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Composable_IDerived[] = L"Composable.IDerived";
namespace ABI {
    namespace Composable {
        /* [object, exclusiveto, uuid("5f3996e1-3cf7-4716-9a3d-11eb5d32caff"), version] */
        MIDL_INTERFACE("5f3996e1-3cf7-4716-9a3d-11eb5d32caff")
        IDerived : public IInspectable
        {
        public:
            
        };

        extern MIDL_CONST_ID IID & IID_IDerived=_uuidof(IDerived);
        
    } /* Composable */} /* ABI */

EXTERN_C const IID IID___x_ABI_CComposable_CIDerived;
#endif /* !defined(____x_ABI_CComposable_CIDerived_INTERFACE_DEFINED__) */


/*
 *
 * Interface Composable.IDerivedFactory
 *
 * Interface is a part of the implementation of type Composable.Derived
 *
 *
 */
#if !defined(____x_ABI_CComposable_CIDerivedFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CComposable_CIDerivedFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Composable_IDerivedFactory[] = L"Composable.IDerivedFactory";
namespace ABI {
    namespace Composable {
        /* [object, exclusiveto, uuid("56dc2c28-edd1-4fa3-91e5-f63c3db47070"), version] */
        MIDL_INTERFACE("56dc2c28-edd1-4fa3-91e5-f63c3db47070")
        IDerivedFactory : public IInspectable
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                /* [in] */IInspectable * outer,
                /* [out] */IInspectable * * inner,
                /* [retval, out] */ABI::Composable::IDerived * * instance
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE CreateInstanceWithName(
                /* [in] */HSTRING name,
                /* [in] */IInspectable * outer,
                /* [out] */IInspectable * * inner,
                /* [retval, out] */ABI::Composable::IDerived * * instance
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_IDerivedFactory=_uuidof(IDerivedFactory);
        
    } /* Composable */} /* ABI */

EXTERN_C const IID IID___x_ABI_CComposable_CIDerivedFactory;
#endif /* !defined(____x_ABI_CComposable_CIDerivedFactory_INTERFACE_DEFINED__) */


/*
 *
 * Class Composable.Base
 *
 * Class implements the following interfaces:
 *    Composable.IBase ** Default Interface **
 *    Composable.IBaseOverrides
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Composable_Base_DEFINED
#define RUNTIMECLASS_Composable_Base_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Composable_Base[] = L"Composable.Base";
#endif


/*
 *
 * Class Composable.Derived
 *
 * Class implements the following interfaces:
 *    Composable.IDerived ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Composable_Derived_DEFINED
#define RUNTIMECLASS_Composable_Derived_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Composable_Derived[] = L"Composable.Derived";
#endif

namespace ABI {
    namespace Composable {
        
        typedef enum TestStructCodeGenType : int TestStructCodeGenType;
        
    } /* Composable */} /* ABI */

namespace ABI {
    namespace Composable {
        
        typedef struct TestStructCodeGen TestStructCodeGen;
        
    } /* Composable */} /* ABI */


/*
 *
 * Struct Composable.TestStructCodeGenType
 *
 */

namespace ABI {
    namespace Composable {
        /* [v1_enum, version] */
        enum TestStructCodeGenType : int
        {
            TestStructCodeGenType_Auto = 0,
            TestStructCodeGenType_Pixel = 1,
            TestStructCodeGenType_Star = 2,
        };
        
    } /* Composable */} /* ABI */


/*
 *
 * Struct Composable.TestStructCodeGen
 *
 */

namespace ABI {
    namespace Composable {
        /* [version] */
        struct TestStructCodeGen
        {
            DOUBLE Value;
            ABI::Composable::TestStructCodeGenType GridUnitType;
        };
        
    } /* Composable */} /* ABI */


/*
 *
 * Interface Composable.ITestStructCodeGen
 *
 */
#if !defined(____x_ABI_CComposable_CITestStructCodeGen_INTERFACE_DEFINED__)
#define ____x_ABI_CComposable_CITestStructCodeGen_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Composable_ITestStructCodeGen[] = L"Composable.ITestStructCodeGen";
namespace ABI {
    namespace Composable {
        /* [object, uuid("9849e7b1-e906-4d32-a696-5df471b1727d"), version] */
        MIDL_INTERFACE("9849e7b1-e906-4d32-a696-5df471b1727d")
        ITestStructCodeGen : public IInspectable
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE Test1(
                /* [in] */int a,
                /* [in] */ABI::Composable::TestStructCodeGen b,
                /* [retval, out] */DOUBLE * result
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE Test2(
                /* [in] */ABI::Composable::TestStructCodeGen b,
                /* [in] */int a,
                /* [retval, out] */DOUBLE * result
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_ITestStructCodeGen=_uuidof(ITestStructCodeGen);
        
    } /* Composable */} /* ABI */

EXTERN_C const IID IID___x_ABI_CComposable_CITestStructCodeGen;
#endif /* !defined(____x_ABI_CComposable_CITestStructCodeGen_INTERFACE_DEFINED__) */


#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CComposable_CIBase_FWD_DEFINED__
#define ____x_ABI_CComposable_CIBase_FWD_DEFINED__
typedef interface __x_ABI_CComposable_CIBase __x_ABI_CComposable_CIBase;

#endif // ____x_ABI_CComposable_CIBase_FWD_DEFINED__

#ifndef ____x_ABI_CComposable_CIBaseFactory_FWD_DEFINED__
#define ____x_ABI_CComposable_CIBaseFactory_FWD_DEFINED__
typedef interface __x_ABI_CComposable_CIBaseFactory __x_ABI_CComposable_CIBaseFactory;

#endif // ____x_ABI_CComposable_CIBaseFactory_FWD_DEFINED__

#ifndef ____x_ABI_CComposable_CIBaseOverrides_FWD_DEFINED__
#define ____x_ABI_CComposable_CIBaseOverrides_FWD_DEFINED__
typedef interface __x_ABI_CComposable_CIBaseOverrides __x_ABI_CComposable_CIBaseOverrides;

#endif // ____x_ABI_CComposable_CIBaseOverrides_FWD_DEFINED__

#ifndef ____x_ABI_CComposable_CIDerived_FWD_DEFINED__
#define ____x_ABI_CComposable_CIDerived_FWD_DEFINED__
typedef interface __x_ABI_CComposable_CIDerived __x_ABI_CComposable_CIDerived;

#endif // ____x_ABI_CComposable_CIDerived_FWD_DEFINED__

#ifndef ____x_ABI_CComposable_CIDerivedFactory_FWD_DEFINED__
#define ____x_ABI_CComposable_CIDerivedFactory_FWD_DEFINED__
typedef interface __x_ABI_CComposable_CIDerivedFactory __x_ABI_CComposable_CIDerivedFactory;

#endif // ____x_ABI_CComposable_CIDerivedFactory_FWD_DEFINED__

#ifndef ____x_ABI_CComposable_CITestStructCodeGen_FWD_DEFINED__
#define ____x_ABI_CComposable_CITestStructCodeGen_FWD_DEFINED__
typedef interface __x_ABI_CComposable_CITestStructCodeGen __x_ABI_CComposable_CITestStructCodeGen;

#endif // ____x_ABI_CComposable_CITestStructCodeGen_FWD_DEFINED__




/*
 *
 * Interface Composable.IBase
 *
 * Interface is a part of the implementation of type Composable.Base
 *
 *
 */
#if !defined(____x_ABI_CComposable_CIBase_INTERFACE_DEFINED__)
#define ____x_ABI_CComposable_CIBase_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Composable_IBase[] = L"Composable.IBase";
/* [object, exclusiveto, uuid("1B0CDE64-5FAF-4316-AF37-48C790329D32"), version] */
typedef struct __x_ABI_CComposable_CIBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CComposable_CIBase * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CComposable_CIBase * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CComposable_CIBase * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CComposable_CIBase * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CComposable_CIBase * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CComposable_CIBase * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *VirtualMethod )(
        __x_ABI_CComposable_CIBase * This,
        /* [retval, out] */HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *CallOverridableMethod )(
        __x_ABI_CComposable_CIBase * This,
        /* [retval, out] */HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *CallOverridableVirtualMethod )(
        __x_ABI_CComposable_CIBase * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CComposable_CIBase * This,
        /* [retval, out] */HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CComposable_CIBaseVtbl;

interface __x_ABI_CComposable_CIBase
{
    CONST_VTBL struct __x_ABI_CComposable_CIBaseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CComposable_CIBase_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CComposable_CIBase_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CComposable_CIBase_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CComposable_CIBase_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CComposable_CIBase_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CComposable_CIBase_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CComposable_CIBase_VirtualMethod(This,value) \
    ( (This)->lpVtbl->VirtualMethod(This,value) )

#define __x_ABI_CComposable_CIBase_CallOverridableMethod(This,value) \
    ( (This)->lpVtbl->CallOverridableMethod(This,value) )

#define __x_ABI_CComposable_CIBase_CallOverridableVirtualMethod(This,value) \
    ( (This)->lpVtbl->CallOverridableVirtualMethod(This,value) )

#define __x_ABI_CComposable_CIBase_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CComposable_CIBase;
#endif /* !defined(____x_ABI_CComposable_CIBase_INTERFACE_DEFINED__) */


/*
 *
 * Interface Composable.IBaseFactory
 *
 * Interface is a part of the implementation of type Composable.Base
 *
 *
 */
#if !defined(____x_ABI_CComposable_CIBaseFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CComposable_CIBaseFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Composable_IBaseFactory[] = L"Composable.IBaseFactory";
/* [object, exclusiveto, uuid("37AF44A4-8FC6-4BD8-A12F-D63ED119EF45"), version] */
typedef struct __x_ABI_CComposable_CIBaseFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CComposable_CIBaseFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CComposable_CIBaseFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CComposable_CIBaseFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CComposable_CIBaseFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CComposable_CIBaseFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CComposable_CIBaseFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CComposable_CIBaseFactory * This,
        /* [in] */IInspectable * outer,
        /* [out] */IInspectable * * inner,
        /* [retval, out] */__x_ABI_CComposable_CIBase * * instance
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithName )(
        __x_ABI_CComposable_CIBaseFactory * This,
        /* [in] */HSTRING name,
        /* [in] */IInspectable * outer,
        /* [out] */IInspectable * * inner,
        /* [retval, out] */__x_ABI_CComposable_CIBase * * instance
        );
    END_INTERFACE
    
} __x_ABI_CComposable_CIBaseFactoryVtbl;

interface __x_ABI_CComposable_CIBaseFactory
{
    CONST_VTBL struct __x_ABI_CComposable_CIBaseFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CComposable_CIBaseFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CComposable_CIBaseFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CComposable_CIBaseFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CComposable_CIBaseFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CComposable_CIBaseFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CComposable_CIBaseFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CComposable_CIBaseFactory_CreateInstance(This,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstance(This,outer,inner,instance) )

#define __x_ABI_CComposable_CIBaseFactory_CreateInstanceWithName(This,name,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstanceWithName(This,name,outer,inner,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CComposable_CIBaseFactory;
#endif /* !defined(____x_ABI_CComposable_CIBaseFactory_INTERFACE_DEFINED__) */


/*
 *
 * Interface Composable.IBaseOverrides
 *
 * Interface is a part of the implementation of type Composable.Base
 *
 *
 */
#if !defined(____x_ABI_CComposable_CIBaseOverrides_INTERFACE_DEFINED__)
#define ____x_ABI_CComposable_CIBaseOverrides_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Composable_IBaseOverrides[] = L"Composable.IBaseOverrides";
/* [object, exclusiveto, uuid("A4DB9277-E6B7-4936-BF41-CDF042E278E2"), version] */
typedef struct __x_ABI_CComposable_CIBaseOverridesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CComposable_CIBaseOverrides * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CComposable_CIBaseOverrides * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CComposable_CIBaseOverrides * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CComposable_CIBaseOverrides * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CComposable_CIBaseOverrides * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CComposable_CIBaseOverrides * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OverridableMethod )(
        __x_ABI_CComposable_CIBaseOverrides * This,
        /* [retval, out] */HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *OverridableVirtualMethod )(
        __x_ABI_CComposable_CIBaseOverrides * This,
        /* [retval, out] */HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CComposable_CIBaseOverridesVtbl;

interface __x_ABI_CComposable_CIBaseOverrides
{
    CONST_VTBL struct __x_ABI_CComposable_CIBaseOverridesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CComposable_CIBaseOverrides_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CComposable_CIBaseOverrides_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CComposable_CIBaseOverrides_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CComposable_CIBaseOverrides_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CComposable_CIBaseOverrides_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CComposable_CIBaseOverrides_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CComposable_CIBaseOverrides_OverridableMethod(This,value) \
    ( (This)->lpVtbl->OverridableMethod(This,value) )

#define __x_ABI_CComposable_CIBaseOverrides_OverridableVirtualMethod(This,value) \
    ( (This)->lpVtbl->OverridableVirtualMethod(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CComposable_CIBaseOverrides;
#endif /* !defined(____x_ABI_CComposable_CIBaseOverrides_INTERFACE_DEFINED__) */


/*
 *
 * Interface Composable.IDerived
 *
 * Interface is a part of the implementation of type Composable.Derived
 *
 *
 */
#if !defined(____x_ABI_CComposable_CIDerived_INTERFACE_DEFINED__)
#define ____x_ABI_CComposable_CIDerived_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Composable_IDerived[] = L"Composable.IDerived";
/* [object, exclusiveto, uuid("5f3996e1-3cf7-4716-9a3d-11eb5d32caff"), version] */
typedef struct __x_ABI_CComposable_CIDerivedVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CComposable_CIDerived * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CComposable_CIDerived * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CComposable_CIDerived * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CComposable_CIDerived * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CComposable_CIDerived * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CComposable_CIDerived * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CComposable_CIDerivedVtbl;

interface __x_ABI_CComposable_CIDerived
{
    CONST_VTBL struct __x_ABI_CComposable_CIDerivedVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CComposable_CIDerived_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CComposable_CIDerived_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CComposable_CIDerived_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CComposable_CIDerived_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CComposable_CIDerived_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CComposable_CIDerived_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CComposable_CIDerived;
#endif /* !defined(____x_ABI_CComposable_CIDerived_INTERFACE_DEFINED__) */


/*
 *
 * Interface Composable.IDerivedFactory
 *
 * Interface is a part of the implementation of type Composable.Derived
 *
 *
 */
#if !defined(____x_ABI_CComposable_CIDerivedFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CComposable_CIDerivedFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Composable_IDerivedFactory[] = L"Composable.IDerivedFactory";
/* [object, exclusiveto, uuid("56dc2c28-edd1-4fa3-91e5-f63c3db47070"), version] */
typedef struct __x_ABI_CComposable_CIDerivedFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CComposable_CIDerivedFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CComposable_CIDerivedFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CComposable_CIDerivedFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CComposable_CIDerivedFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CComposable_CIDerivedFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CComposable_CIDerivedFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CComposable_CIDerivedFactory * This,
        /* [in] */IInspectable * outer,
        /* [out] */IInspectable * * inner,
        /* [retval, out] */__x_ABI_CComposable_CIDerived * * instance
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithName )(
        __x_ABI_CComposable_CIDerivedFactory * This,
        /* [in] */HSTRING name,
        /* [in] */IInspectable * outer,
        /* [out] */IInspectable * * inner,
        /* [retval, out] */__x_ABI_CComposable_CIDerived * * instance
        );
    END_INTERFACE
    
} __x_ABI_CComposable_CIDerivedFactoryVtbl;

interface __x_ABI_CComposable_CIDerivedFactory
{
    CONST_VTBL struct __x_ABI_CComposable_CIDerivedFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CComposable_CIDerivedFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CComposable_CIDerivedFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CComposable_CIDerivedFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CComposable_CIDerivedFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CComposable_CIDerivedFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CComposable_CIDerivedFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CComposable_CIDerivedFactory_CreateInstance(This,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstance(This,outer,inner,instance) )

#define __x_ABI_CComposable_CIDerivedFactory_CreateInstanceWithName(This,name,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstanceWithName(This,name,outer,inner,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CComposable_CIDerivedFactory;
#endif /* !defined(____x_ABI_CComposable_CIDerivedFactory_INTERFACE_DEFINED__) */


/*
 *
 * Class Composable.Base
 *
 * Class implements the following interfaces:
 *    Composable.IBase ** Default Interface **
 *    Composable.IBaseOverrides
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Composable_Base_DEFINED
#define RUNTIMECLASS_Composable_Base_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Composable_Base[] = L"Composable.Base";
#endif


/*
 *
 * Class Composable.Derived
 *
 * Class implements the following interfaces:
 *    Composable.IDerived ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Composable_Derived_DEFINED
#define RUNTIMECLASS_Composable_Derived_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Composable_Derived[] = L"Composable.Derived";
#endif


typedef enum __x_ABI_CComposable_CTestStructCodeGenType __x_ABI_CComposable_CTestStructCodeGenType;


typedef struct __x_ABI_CComposable_CTestStructCodeGen __x_ABI_CComposable_CTestStructCodeGen;


/*
 *
 * Struct Composable.TestStructCodeGenType
 *
 */

/* [v1_enum, version] */
enum __x_ABI_CComposable_CTestStructCodeGenType
{
    TestStructCodeGenType_Auto = 0,
    TestStructCodeGenType_Pixel = 1,
    TestStructCodeGenType_Star = 2,
};


/*
 *
 * Struct Composable.TestStructCodeGen
 *
 */

/* [version] */
struct __x_ABI_CComposable_CTestStructCodeGen
{
    DOUBLE Value;
    __x_ABI_CComposable_CTestStructCodeGenType GridUnitType;
};


/*
 *
 * Interface Composable.ITestStructCodeGen
 *
 */
#if !defined(____x_ABI_CComposable_CITestStructCodeGen_INTERFACE_DEFINED__)
#define ____x_ABI_CComposable_CITestStructCodeGen_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Composable_ITestStructCodeGen[] = L"Composable.ITestStructCodeGen";
/* [object, uuid("9849e7b1-e906-4d32-a696-5df471b1727d"), version] */
typedef struct __x_ABI_CComposable_CITestStructCodeGenVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CComposable_CITestStructCodeGen * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CComposable_CITestStructCodeGen * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CComposable_CITestStructCodeGen * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CComposable_CITestStructCodeGen * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CComposable_CITestStructCodeGen * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CComposable_CITestStructCodeGen * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Test1 )(
        __x_ABI_CComposable_CITestStructCodeGen * This,
        /* [in] */int a,
        /* [in] */__x_ABI_CComposable_CTestStructCodeGen b,
        /* [retval, out] */DOUBLE * result
        );
    HRESULT ( STDMETHODCALLTYPE *Test2 )(
        __x_ABI_CComposable_CITestStructCodeGen * This,
        /* [in] */__x_ABI_CComposable_CTestStructCodeGen b,
        /* [in] */int a,
        /* [retval, out] */DOUBLE * result
        );
    END_INTERFACE
    
} __x_ABI_CComposable_CITestStructCodeGenVtbl;

interface __x_ABI_CComposable_CITestStructCodeGen
{
    CONST_VTBL struct __x_ABI_CComposable_CITestStructCodeGenVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CComposable_CITestStructCodeGen_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CComposable_CITestStructCodeGen_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CComposable_CITestStructCodeGen_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CComposable_CITestStructCodeGen_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CComposable_CITestStructCodeGen_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CComposable_CITestStructCodeGen_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CComposable_CITestStructCodeGen_Test1(This,a,b,result) \
    ( (This)->lpVtbl->Test1(This,a,b,result) )

#define __x_ABI_CComposable_CITestStructCodeGen_Test2(This,b,a,result) \
    ( (This)->lpVtbl->Test2(This,b,a,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CComposable_CITestStructCodeGen;
#endif /* !defined(____x_ABI_CComposable_CITestStructCodeGen_INTERFACE_DEFINED__) */


#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Composable_h_p_h__

#endif // __Composable_h_h__
