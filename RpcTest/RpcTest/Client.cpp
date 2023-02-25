#include <iostream>
#include <windows.h>
#include "bdesvc.h"
// Links the rpcrt4.lib that exposes the WinAPI RPC functions
#pragma comment(lib, "rpcrt4.lib")

int main()
{
	RPC_STATUS status;                 // Store the RPC status
	RPC_WSTR szStringBinding = NULL;   // Store the binding string
	RPC_BINDING_HANDLE ImplicitHandle = NULL;

	// Used to get a valid binding string
	status = RpcStringBindingComposeW(
		NULL,                         // UUID of the interface
		(RPC_WSTR)L"ncalrpc",    // TCP binding 
		NULL, // Server IP address
		NULL,           // Port on which the interface is listening
		NULL,                         // Network protocol to use
		&szStringBinding              // Variable in which the binding string is to be stored
	);

	printf("BindingString: %s\n", szStringBinding);

	// Validates the binding string and retrieves a binding handle
	status = RpcBindingFromStringBindingW(
		szStringBinding,      // The binding string to validate
		&ImplicitHandle       // The variable in which is stored the binding handle
	);

	long* a = (long*)malloc(sizeof(long));
	wchar_t** b = (wchar_t**)malloc(1000);

	RpcTryExcept{
		// Calls the remote function
		Proc12(ImplicitHandle, a, b);
	}
		RpcExcept(1) {
		printf("RPCExec: %d\n", RpcExceptionCode());
	}
	RpcEndExcept
	
	status = RpcStringFreeW(&szStringBinding);
	status = RpcBindingFree(&ImplicitHandle);
}

// Function used to allocate memory to the interface
void* __RPC_USER midl_user_allocate(size_t size) {
	return malloc(size);
}

// Function used to free memory allocated to the interface
void __RPC_USER midl_user_free(void* p) {
	free(p);
}