

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for C:\Users\Peter\RpcTest\RpcTest\RpcTest\bdesvc.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __bdesvc_h__
#define __bdesvc_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __DefaultIfName_INTERFACE_DEFINED__
#define __DefaultIfName_INTERFACE_DEFINED__

/* interface DefaultIfName */
/* [version][uuid] */ 

typedef struct Struct_16_t
    {
    long StructMember0;
    short StructMember1;
    short StructMember2;
    byte StructMember3[ 8 ];
    } 	Struct_16_t;

long Proc0( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [out] */ struct Struct_16_t *arg_2);

long Proc1( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2);

long Proc2( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ long arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3);

long Proc3( 
    /* [in] */ handle_t IDL_handle,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [string][range][ref][out][in] */ wchar_t *arg_2,
    /* [string][range][ref][out][in] */ wchar_t *arg_3,
    /* [in] */ long arg_4);

long Proc4( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [in] */ long arg_3);

long Proc5( 
    /* [in] */ handle_t IDL_handle);

long Proc6( 
    /* [in] */ handle_t IDL_handle,
    /* [out] */ long *arg_1,
    /* [out] */ long *arg_2);

long Proc7( 
    /* [in] */ handle_t IDL_handle);

long Proc8( 
    /* [in] */ handle_t IDL_handle);

long Proc9( 
    /* [in] */ handle_t IDL_handle);

long Proc10( 
    /* [in] */ handle_t IDL_handle,
    /* [out] */ long *arg_1);

long Proc11( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1);

long Proc12( 
    /* [in] */ handle_t IDL_handle,
    /* [out] */ long *arg_1,
    /* [string][ref][out] */ wchar_t **arg_2);



extern RPC_IF_HANDLE DefaultIfName_v1_0_c_ifspec;
extern RPC_IF_HANDLE DefaultIfName_v1_0_s_ifspec;
#endif /* __DefaultIfName_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


