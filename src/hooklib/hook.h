#pragma once
#include "disasm/disasm.h"

/*
Definition of the Hook's descriptor struct.
*/
typedef struct _HOOK_DESCRIPTOR
HOOK_DESCRIPTOR, *PHOOK_DESCRIPTOR;

/*
Creates a Hook desriptor.
@param pOriginal, pointer to the original function.
@param pHooked, pointer to the hooked function.
@param ppTrampoline, pointer to the destination trampoline function.
*/
PHOOK_DESCRIPTOR CreateHook(LPVOID pOriginal, LPVOID pHooked, LPVOID *ppTrampoline);

/*
Enable the Hook, i.e. make it functional.
@param pHook, the Hook's descriptor.
@return TRUE if the function succeeds, FALSE if it fails.
*/
BOOL EnableHook(PHOOK_DESCRIPTOR pHook);

/*
Disable the Hook, i.e. revert to original state.
@param pHook, the Hook's descriptor.
*/
BOOL DisableHook(PHOOK_DESCRIPTOR pHook);