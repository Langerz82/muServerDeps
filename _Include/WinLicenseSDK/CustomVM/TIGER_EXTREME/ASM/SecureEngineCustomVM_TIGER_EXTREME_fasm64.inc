; ******************************************************************************
; Header: SecureEngineCustomVM_TIGER_EXTREME_fasm64.inc
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

macro VM_TIGER_EXTREME_START
{
    db    0ebh, 10h
    dd    20204c57h
    dd    127
    dd    0
    dd    20204c57h
}


macro VM_TIGER_EXTREME_END
{
    db    0ebh, 10h
    dd    20204c57h
    dd    527
    dd    0
    dd    20204c57h
}


