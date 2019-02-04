; ******************************************************************************
; Header: SecureEngineCustomVM_FISH_LITE_fasm64.inc
; Description: FASM64 macros definitions
;
; Author/s: Oreans Technologies 
; (c) 2014 Oreans Technologies
;
; --- File generated automatically from Oreans VM Generator (2/4/2014) ---
; ******************************************************************************

; ******************************************************************************
;                                 Macros definition
; ******************************************************************************

macro VM_FISH_LITE_START
{
    db    0ebh, 10h
    dd    20204c57h
    dd    129
    dd    0
    dd    20204c57h
}


macro VM_FISH_LITE_END
{
    db    0ebh, 10h
    dd    20204c57h
    dd    529
    dd    0
    dd    20204c57h
}


