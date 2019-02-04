/******************************************************************************
 Header: SecureEngineCustomVM_FISH_LONDON.h
 Description: Definition of CustomVM macros

 Author/s: Oreans Technologies 
 (c) 2015 Oreans Technologies

 --- File generated automatically from Oreans VM Generator (27/1/2015) ---
******************************************************************************/

// ****************************************************************************
// Declaration of Custom VM macros
// ****************************************************************************

#ifdef __cplusplus
 extern "C" {
#endif

#if defined(PLATFORM_X32)

void __stdcall VM_FISH_LONDON_START_ASM32();
void __stdcall VM_FISH_LONDON_END_ASM32();

#define VM_FISH_LONDON_START VM_FISH_LONDON_START_ASM32();
#define VM_FISH_LONDON_END VM_FISH_LONDON_END_ASM32();

#endif

#if defined(PLATFORM_X64)

void __stdcall VM_FISH_LONDON_START_ASM64();
void __stdcall VM_FISH_LONDON_END_ASM64();

#define VM_FISH_LONDON_START VM_FISH_LONDON_START_ASM64();
#define VM_FISH_LONDON_END VM_FISH_LONDON_END_ASM64();

#endif

#ifdef __cplusplus
}
#endif



/////////////////////////////////////////////////
//  vnDev.Games - Trong.LIVE - DAO VAN TRONG   //
////////////////////////////////////////////////////////////////////////////////

