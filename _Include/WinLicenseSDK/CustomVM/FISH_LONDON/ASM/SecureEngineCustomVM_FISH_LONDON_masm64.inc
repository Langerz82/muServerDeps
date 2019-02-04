; ******************************************************************************
; Header: SecureEngineCustomVM_FISH_LONDON_masm64.inc
; Description: MASM64 macros definitions
;
; Author/s: Oreans Technologies 
; (c) 2015 Oreans Technologies
;
; --- File generated automatically from Oreans VM Generator (27/1/2015) ---
; ******************************************************************************

; ******************************************************************************
;                                 Macros definition
; ******************************************************************************

VM_FISH_LONDON_START MACRO

    db    0ebh, 10h
    dd    20204c57h
    dd    131
    dd    0
    dd    20204c57h
ENDM


VM_FISH_LONDON_END MACRO

    db    0ebh, 10h
    dd    20204c57h
    dd    531
    dd    0
    dd    20204c57h
ENDM


