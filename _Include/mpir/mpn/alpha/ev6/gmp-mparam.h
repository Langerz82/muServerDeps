/* gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 1999, 2000, 2001, 2002, 2004, 2005, 2006 Free
Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library; see the file COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
MA 02110-1301, USA. */

#define BITS_PER_MP_LIMB 64
#define BYTES_PER_MP_LIMB 8

/* 1000 MHz 21164B */

/* Generated by tuneup.c, 2006-03-21, gcc 3.3 */

#define MUL_KARATSUBA_THRESHOLD          31
#define MUL_TOOM3_THRESHOLD             105

#define SQR_BASECASE_THRESHOLD            0  /* always */
#define SQR_KARATSUBA_THRESHOLD          61
#define SQR_TOOM3_THRESHOLD             116

#define MULLOW_BASECASE_THRESHOLD         0  /* always */
#define MULLOW_DC_THRESHOLD             100
#define MULLOW_MUL_N_THRESHOLD          620

#define DIV_SB_PREINV_THRESHOLD           0  /* preinv always */
#define DIV_DC_THRESHOLD                120
#define POWM_THRESHOLD                  230

#define GCD_ACCEL_THRESHOLD               3

#define JACOBI_BASE_METHOD                1

#define DIVREM_1_NORM_THRESHOLD           0  /* preinv always */
#define DIVREM_1_UNNORM_THRESHOLD         0  /* always */
#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               1  /* preinv always */
#define USE_PREINV_MOD_1                  1  /* preinv always */
#define DIVREM_2_THRESHOLD                0  /* preinv always */
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always */

#define GET_STR_DC_THRESHOLD             21
#define GET_STR_PRECOMPUTE_THRESHOLD     26
#define SET_STR_THRESHOLD             29473

#define MUL_FFT_TABLE  { 496, 1120, 2624, 5376, 15360, 28672, 81920, 327680, 1310720, 5242880, 12582912, 0 }
#define MUL_FFT_MODF_THRESHOLD          512
#define MUL_FFT_THRESHOLD              3712

#define SQR_FFT_TABLE  { 592, 1312, 2880, 5888, 13312, 28672, 81920, 327680, 786432, 5242880, 12582912, 0 }
#define SQR_FFT_MODF_THRESHOLD          552
#define SQR_FFT_THRESHOLD              3968


/////////////////////////////////////////////////
//  vnDev.Games - Trong.LIVE - DAO VAN TRONG   //
////////////////////////////////////////////////////////////////////////////////

