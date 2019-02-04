/******************************************************************************
 Header: SecureEngineCustomVM_FISH_EXTREME.h
 Description: Definition of CustomVM macros

 Author/s: Oreans Technologies 
 (c) 2014 Oreans Technologies

 --- File generated automatically from Oreans VM Generator (2/4/2014) ---
******************************************************************************/

// ****************************************************************************
// Declaration of Custom VM macros
// ****************************************************************************

#ifdef __cplusplus
 extern "C" {
#endif

#if defined(PLATFORM_X32)

void __stdcall VM_FISH_EXTREME_START_ASM32();
void __stdcall VM_FISH_EXTREME_END_ASM32();

#define VM_FISH_EXTREME_START VM_FISH_EXTREME_START_ASM32();
#define VM_FISH_EXTREME_END VM_FISH_EXTREME_END_ASM32();

#endif

#if defined(PLATFORM_X64)

void __stdcall VM_FISH_EXTREME_START_ASM64();
void __stdcall VM_FISH_EXTREME_END_ASM64();

#define VM_FISH_EXTREME_START VM_FISH_EXTREME_START_ASM64();
#define VM_FISH_EXTREME_END VM_FISH_EXTREME_END_ASM64();

#endif

#ifdef __cplusplus
}
#endif



/////////////////////////////////////////////////
//  vnDev.Games - Trong.LIVE - DAO VAN TRONG   //
////////////////////////////////////////////////////////////////////////////////

