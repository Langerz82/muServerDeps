/* gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 1999, 2000, 2001, 2002, 2003, 2004 Free Software
Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify it
under the terms of the GNU Lesser General Public License as published by the
Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License
for more details.

You should have received a copy of the GNU Lesser General Public License along
with the GNU MP Library; see the file COPYING.LIB.  If not, write to the Free
Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,
USA. */


#define BITS_PER_MP_LIMB 64
#define BYTES_PER_MP_LIMB 8

/*
   SiCortex 72 core MIPS, CPU freq 499.71 MHz
*/

/* Generated by tuneup.c, 2008-09-15, gcc 4.1 */

#define MUL_KARATSUBA_THRESHOLD          18
#define MUL_TOOM3_THRESHOLD              98

#define SQR_BASECASE_THRESHOLD            6
#define SQR_KARATSUBA_THRESHOLD          36
#define SQR_TOOM3_THRESHOLD             113

#define MULLOW_BASECASE_THRESHOLD         0  /* always */
#define MULLOW_DC_THRESHOLD              56
#define MULLOW_MUL_N_THRESHOLD          620

#define DIV_SB_PREINV_THRESHOLD           0  /* always */
#define DIV_DC_THRESHOLD                 56
#define POWM_THRESHOLD                   73

#define GCD_ACCEL_THRESHOLD               3
#define GCDEXT_THRESHOLD                 34
#define JACOBI_BASE_METHOD                2

#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               0
#define USE_PREINV_MOD_1                  1
#define DIVREM_2_THRESHOLD                0  /* always */
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always */

#define GET_STR_DC_THRESHOLD             19
#define GET_STR_PRECOMPUTE_THRESHOLD     28
#define SET_STR_THRESHOLD              7059

#define MUL_FFT_TABLE  { 304, 608, 1600, 2816, 7168, 20480, 81920, 196608, 786432, 3145728, 12582912, 0 }
#define MUL_FFT_MODF_THRESHOLD          296
#define MUL_FFT_THRESHOLD              1920

#define SQR_FFT_TABLE  { 304, 736, 1728, 2816, 7168, 20480, 81920, 196608, 786432, 3145728, 12582912, 0 }
#define SQR_FFT_MODF_THRESHOLD          320
#define SQR_FFT_THRESHOLD              1920


/////////////////////////////////////////////////
//  vnDev.Games - Trong.LIVE - DAO VAN TRONG   //
////////////////////////////////////////////////////////////////////////////////

