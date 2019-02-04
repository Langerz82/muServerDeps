; ******************************************************************************
; Header: SecureEngineCustomVM_TIGER_LONDON_masm32.inc
; Description: MASM32 macros definitions
;
; Author/s: Oreans Technologies 
; (c) 2015 Oreans Technologies
;
; --- File generated automatically from Oreans VM Generator (27/1/2015) ---
; ******************************************************************************

; ******************************************************************************
;                                 Macros definition
; ******************************************************************************

VM_TIGER_LONDON_START MACRO

    db    0ebh, 10h
    dd    20204c57h
    dd    132
    dd    0
    dd    20204c57h
ENDM


VM_TIGER_LONDON_END MACRO

    db    0ebh, 10h
    dd    20204c57h
    dd    532
    dd    0
    dd    20204c57h
ENDM


