/* -*- C -*-
 *
 * Copyright 2011 Sandia Corporation. Under the terms of Contract
 * DE-AC04-94AL85000 with Sandia Corporation, the U.S.  Government
 * retains certain rights in this software.
 * 
 * This file is part of the Portals SHMEM software package. For license
 * information, see the LICENSE file in the top level directory of the
 * distribution.
 *
 */

#include "config.h"

#include <portals4.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "shmem.h"
#include "shmem_internal.h"
#include "shmem_comm.h"


#define FC_SHMEM_CHARACTER_PUT FC_FUNC_(shmem_character_put, SHMEM_CHARACTER_PUT)
void FC_SHMEM_CHARACTER_PUT(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe);
void
FC_SHMEM_CHARACTER_PUT(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe)
{
    int ret;

#ifdef ENABLE_ERROR_CHECKING
    if (!shmem_int_initialized) {
        RAISE_ERROR_STR("library not initialized");
    }
#endif

    ret = shmem_internal_put(target, source, SIZEOF_FORTRAN_CHARACTER * *len, *pe);
    shmem_internal_put_wait(ret);
}


#define FC_SHMEM_COMPLEX_PUT FC_FUNC_(shmem_complex_put, SHMEM_COMPLEX_PUT)
void FC_SHMEM_COMPLEX_PUT(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe);
void
FC_SHMEM_COMPLEX_PUT(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe)
{
    int ret;

#ifdef ENABLE_ERROR_CHECKING
    if (!shmem_int_initialized) {
        RAISE_ERROR_STR("library not initialized");
    }
#endif

    ret = shmem_internal_put(target, source, SIZEOF_FORTRAN_COMPLEX * *len, *pe);
    shmem_internal_put_wait(ret);
}


#define FC_SHMEM_DOUBLE_PUT FC_FUNC_(shmem_double_put, SHMEM_DOUBLE_PUT)
void FC_SHMEM_DOUBLE_PUT(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe);
void
FC_SHMEM_DOUBLE_PUT(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe)
{
    int ret;

#ifdef ENABLE_ERROR_CHECKING
    if (!shmem_int_initialized) {
        RAISE_ERROR_STR("library not initialized");
    }
#endif

    ret = shmem_internal_put(target, source, SIZEOF_FORTRAN_DOUBLE_PRECISION * *len, *pe);
    shmem_internal_put_wait(ret);
}


#define FC_SHMEM_INTEGER_PUT FC_FUNC_(shmem_integer_put, SHMEM_INTEGER_PUT)
void FC_SHMEM_INTEGER_PUT(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe);
void
FC_SHMEM_INTEGER_PUT(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe)
{
    int ret;

#ifdef ENABLE_ERROR_CHECKING
    if (!shmem_int_initialized) {
        RAISE_ERROR_STR("library not initialized");
    }
#endif

    ret = shmem_internal_put(target, source, SIZEOF_FORTRAN_INTEGER * *len, *pe);
    shmem_internal_put_wait(ret);
}


#define FC_SHMEM_LOGICAL_PUT FC_FUNC_(shmem_logical_put, SHMEM_LOGICAL_PUT)
void FC_SHMEM_LOGICAL_PUT(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe);
void
FC_SHMEM_LOGICAL_PUT(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe)
{
    int ret;

#ifdef ENABLE_ERROR_CHECKING
    if (!shmem_int_initialized) {
        RAISE_ERROR_STR("library not initialized");
    }
#endif

    ret = shmem_internal_put(target, source, SIZEOF_FORTRAN_LOGICAL * *len, *pe);
    shmem_internal_put_wait(ret);
}


#define FC_SHMEM_REAL_PUT FC_FUNC_(shmem_real_put, SHMEM_REAL_PUT)
void FC_SHMEM_REAL_PUT(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe);
void
FC_SHMEM_REAL_PUT(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe)
{
    int ret;

#ifdef ENABLE_ERROR_CHECKING
    if (!shmem_int_initialized) {
        RAISE_ERROR_STR("library not initialized");
    }
#endif

    ret = shmem_internal_put(target, source, SIZEOF_FORTRAN_REAL * *len, *pe);
    shmem_internal_put_wait(ret);
}


#define FC_SHMEM_PUT FC_FUNC_(shmem_put, SHMEM_PUT)
void FC_SHMEM_PUT(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe);
void
FC_SHMEM_PUT(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe)
{
    int ret;

#ifdef ENABLE_ERROR_CHECKING
    if (!shmem_int_initialized) {
        RAISE_ERROR_STR("library not initialized");
    }
#endif

    ret = shmem_internal_put(target, source, *len, *pe);
    shmem_internal_put_wait(ret);
}


#define FC_SHMEM_PUT4 FC_FUNC_(shmem_put4, SHMEM_PUT4)
void FC_SHMEM_PUT4(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe);
void
FC_SHMEM_PUT4(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe)
{
    int ret;

#ifdef ENABLE_ERROR_CHECKING
    if (!shmem_int_initialized) {
        RAISE_ERROR_STR("library not initialized");
    }
#endif

    ret = shmem_internal_put(target, source, 4 * *len, *pe);
    shmem_internal_put_wait(ret);
}


#define FC_SHMEM_PUT8 FC_FUNC_(shmem_put8, SHMEM_PUT8)
void FC_SHMEM_PUT8(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe);
void
FC_SHMEM_PUT8(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe)
{
    int ret;

#ifdef ENABLE_ERROR_CHECKING
    if (!shmem_int_initialized) {
        RAISE_ERROR_STR("library not initialized");
    }
#endif

    ret = shmem_internal_put(target, source, 8 * *len, *pe);
    shmem_internal_put_wait(ret);
}


#define FC_SHMEM_PUT32 FC_FUNC_(shmem_put32, SHMEM_PUT32)
void FC_SHMEM_PUT32(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe);
void
FC_SHMEM_PUT32(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe)
{
    int ret;

#ifdef ENABLE_ERROR_CHECKING
    if (!shmem_int_initialized) {
        RAISE_ERROR_STR("library not initialized");
    }
#endif

    ret = shmem_internal_put(target, source, 4 * *len, *pe);
    shmem_internal_put_wait(ret);
}


#define FC_SHMEM_PUT64 FC_FUNC_(shmem_put64, SHMEM_PUT64)
void FC_SHMEM_PUT64(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe);
void
FC_SHMEM_PUT64(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe)
{
    int ret;

#ifdef ENABLE_ERROR_CHECKING
    if (!shmem_int_initialized) {
        RAISE_ERROR_STR("library not initialized");
    }
#endif

    ret = shmem_internal_put(target, source, 8 * *len, *pe);
    shmem_internal_put_wait(ret);
}


#define FC_SHMEM_PUT128 FC_FUNC_(shmem_put128, SHMEM_PUT128)
void FC_SHMEM_PUT128(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe);
void
FC_SHMEM_PUT128(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe)
{
    int ret;

#ifdef ENABLE_ERROR_CHECKING
    if (!shmem_int_initialized) {
        RAISE_ERROR_STR("library not initialized");
    }
#endif

    ret = shmem_internal_put(target, source, 16 * *len, *pe);
    shmem_internal_put_wait(ret);
}


#define FC_SHMEM_PUTMEM FC_FUNC_(shmem_putmem, SHMEM_PUTMEM)
void FC_SHMEM_PUTMEM(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe);
void
FC_SHMEM_PUTMEM(void *target, void *source, fortran_integer_t *len, fortran_integer_t *pe)
{
    int ret;

#ifdef ENABLE_ERROR_CHECKING
    if (!shmem_int_initialized) {
        RAISE_ERROR_STR("library not initialized");
    }
#endif

    ret = shmem_internal_put(target, source, *len, *pe);
    shmem_internal_put_wait(ret);
}


#define FC_SHMEM_COMPLEX_IPUT FC_FUNC_(shmem_complex_iput, SHMEM_COMPLEX_IPUT)
void FC_SHMEM_COMPLEX_IPUT(void *targetp, void *sourcep,
			   fortran_integer_t *tst, fortran_integer_t *sst,
			   fortran_integer_t *lenp, fortran_integer_t *pe);
void
FC_SHMEM_COMPLEX_IPUT(void *targetp, void *sourcep,
		      fortran_integer_t *tst, fortran_integer_t *sst,
		      fortran_integer_t *lenp, fortran_integer_t *pe)
{
    fortran_integer_t len = *lenp;
    char *target = (char*) targetp;
    char *source = (char*) sourcep;

#ifdef ENABLE_ERROR_CHECKING
    if (!shmem_int_initialized) {
        RAISE_ERROR_STR("library not initialized");
    }
#endif

    for ( ; len > 0 ; --len) {
        shmem_internal_put_single(target, source, SIZEOF_FORTRAN_COMPLEX, *pe);
	target += (*tst * SIZEOF_FORTRAN_COMPLEX);
	source += (*sst * SIZEOF_FORTRAN_COMPLEX);
    }
}


#define FC_SHMEM_DOUBLE_IPUT FC_FUNC_(shmem_double_iput, SHMEM_DOUBLE_IPUT)
void FC_SHMEM_DOUBLE_IPUT(void *targetp, void *sourcep,
			   fortran_integer_t *tst, fortran_integer_t *sst,
			   fortran_integer_t *lenp, fortran_integer_t *pe);
void
FC_SHMEM_DOUBLE_IPUT(void *targetp, void *sourcep,
		      fortran_integer_t *tst, fortran_integer_t *sst,
		      fortran_integer_t *lenp, fortran_integer_t *pe)
{
    fortran_integer_t len = *lenp;
    char *target = (char*) targetp;
    char *source = (char*) sourcep;

#ifdef ENABLE_ERROR_CHECKING
    if (!shmem_int_initialized) {
        RAISE_ERROR_STR("library not initialized");
    }
#endif

    for ( ; len > 0 ; --len) {
        shmem_internal_put_single(target, source, SIZEOF_FORTRAN_DOUBLE_PRECISION, *pe);
	target += (*tst * SIZEOF_FORTRAN_DOUBLE_PRECISION);
	source += (*sst * SIZEOF_FORTRAN_DOUBLE_PRECISION);
    }
}



#define FC_SHMEM_INTEGER_IPUT FC_FUNC_(shmem_integer_iput, SHMEM_INTEGER_IPUT)
void FC_SHMEM_INTEGER_IPUT(void *targetp, void *sourcep,
			   fortran_integer_t *tst, fortran_integer_t *sst,
			   fortran_integer_t *lenp, fortran_integer_t *pe);
void
FC_SHMEM_INTEGER_IPUT(void *targetp, void *sourcep,
		      fortran_integer_t *tst, fortran_integer_t *sst,
		      fortran_integer_t *lenp, fortran_integer_t *pe)
{
    fortran_integer_t len = *lenp;
    char *target = (char*) targetp;
    char *source = (char*) sourcep;

#ifdef ENABLE_ERROR_CHECKING
    if (!shmem_int_initialized) {
        RAISE_ERROR_STR("library not initialized");
    }
#endif

    for ( ; len > 0 ; --len) {
        shmem_internal_put_single(target, source, SIZEOF_FORTRAN_INTEGER, *pe);
	target += (*tst * SIZEOF_FORTRAN_INTEGER);
	source += (*sst * SIZEOF_FORTRAN_INTEGER);
    }
}


#define FC_SHMEM_LOGICAL_IPUT FC_FUNC_(shmem_logical_iput, SHMEM_LOGICAL_IPUT)
void FC_SHMEM_LOGICAL_IPUT(void *targetp, void *sourcep,
			   fortran_integer_t *tst, fortran_integer_t *sst,
			   fortran_integer_t *lenp, fortran_integer_t *pe);
void
FC_SHMEM_LOGICAL_IPUT(void *targetp, void *sourcep,
		      fortran_integer_t *tst, fortran_integer_t *sst,
		      fortran_integer_t *lenp, fortran_integer_t *pe)
{
    fortran_integer_t len = *lenp;
    char *target = (char*) targetp;
    char *source = (char*) sourcep;

#ifdef ENABLE_ERROR_CHECKING
    if (!shmem_int_initialized) {
        RAISE_ERROR_STR("library not initialized");
    }
#endif

    for ( ; len > 0 ; --len) {
        shmem_internal_put_single(target, source, SIZEOF_FORTRAN_LOGICAL, *pe);
	target += (*tst * SIZEOF_FORTRAN_LOGICAL);
	source += (*sst * SIZEOF_FORTRAN_LOGICAL);
    }
}


#define FC_SHMEM_REAL_IPUT FC_FUNC_(shmem_real_iput, SHMEM_REAL_IPUT)
void FC_SHMEM_REAL_IPUT(void *targetp, void *sourcep,
			fortran_integer_t *tst, fortran_integer_t *sst,
			fortran_integer_t *lenp, fortran_integer_t *pe);
void
FC_SHMEM_REAL_IPUT(void *targetp, void *sourcep,
		   fortran_integer_t *tst, fortran_integer_t *sst,
		   fortran_integer_t *lenp, fortran_integer_t *pe)
{
    fortran_integer_t len = *lenp;
    char *target = (char*) targetp;
    char *source = (char*) sourcep;

#ifdef ENABLE_ERROR_CHECKING
    if (!shmem_int_initialized) {
        RAISE_ERROR_STR("library not initialized");
    }
#endif

    for ( ; len > 0 ; --len) {
        shmem_internal_put_single(target, source, SIZEOF_FORTRAN_REAL, *pe);
	target += (*tst * SIZEOF_FORTRAN_REAL);
	source += (*sst * SIZEOF_FORTRAN_REAL);
    }
}


#define FC_SHMEM_IPUT4 FC_FUNC_(shmem_iput4, SHMEM_IPUT4)
void FC_SHMEM_IPUT4(void *targetp, void *sourcep,
		    fortran_integer_t *tst, fortran_integer_t *sst,
		    fortran_integer_t *lenp, fortran_integer_t *pe);
void
FC_SHMEM_IPUT4(void *targetp, void *sourcep,
	       fortran_integer_t *tst, fortran_integer_t *sst,
	       fortran_integer_t *lenp, fortran_integer_t *pe)
{
    fortran_integer_t len = *lenp;
    char *target = (char*) targetp;
    char *source = (char*) sourcep;

#ifdef ENABLE_ERROR_CHECKING
    if (!shmem_int_initialized) {
        RAISE_ERROR_STR("library not initialized");
    }
#endif

    for ( ; len > 0 ; --len) {
        shmem_internal_put_single(target, source, 4, *pe);
	target += (*tst * 4);
	source += (*sst * 4);
    }
}


#define FC_SHMEM_IPUT8 FC_FUNC_(shmem_iput8, SHMEM_IPUT8)
void FC_SHMEM_IPUT8(void *targetp, void *sourcep,
		    fortran_integer_t *tst, fortran_integer_t *sst,
		    fortran_integer_t *lenp, fortran_integer_t *pe);
void
FC_SHMEM_IPUT8(void *targetp, void *sourcep,
	       fortran_integer_t *tst, fortran_integer_t *sst,
	       fortran_integer_t *lenp, fortran_integer_t *pe)
{
    fortran_integer_t len = *lenp;
    char *target = (char*) targetp;
    char *source = (char*) sourcep;

#ifdef ENABLE_ERROR_CHECKING
    if (!shmem_int_initialized) {
        RAISE_ERROR_STR("library not initialized");
    }
#endif

    for ( ; len > 0 ; --len) {
        shmem_internal_put_single(target, source, 8, *pe);
	target += (*tst * 8);
	source += (*sst * 8);
    }
}



#define FC_SHMEM_IPUT32 FC_FUNC_(shmem_iput32, SHMEM_IPUT32)
void FC_SHMEM_IPUT32(void *targetp, void *sourcep,
		     fortran_integer_t *tst, fortran_integer_t *sst,
		     fortran_integer_t *lenp, fortran_integer_t *pe);
void
FC_SHMEM_IPUT32(void *targetp, void *sourcep,
		fortran_integer_t *tst, fortran_integer_t *sst,
		fortran_integer_t *lenp, fortran_integer_t *pe)
{
    fortran_integer_t len = *lenp;
    char *target = (char*) targetp;
    char *source = (char*) sourcep;

#ifdef ENABLE_ERROR_CHECKING
    if (!shmem_int_initialized) {
        RAISE_ERROR_STR("library not initialized");
    }
#endif

    for ( ; len > 0 ; --len) {
        shmem_internal_put_single(target, source, 4, *pe);
	target += (*tst * 4);
	source += (*sst * 4);
    }
}


#define FC_SHMEM_IPUT64 FC_FUNC_(shmem_iput64, SHMEM_IPUT64)
void FC_SHMEM_IPUT64(void *targetp, void *sourcep,
		     fortran_integer_t *tst, fortran_integer_t *sst,
		     fortran_integer_t *lenp, fortran_integer_t *pe);
void
FC_SHMEM_IPUT64(void *targetp, void *sourcep,
		fortran_integer_t *tst, fortran_integer_t *sst,
		fortran_integer_t *lenp, fortran_integer_t *pe)
{
    fortran_integer_t len = *lenp;
    char *target = (char*) targetp;
    char *source = (char*) sourcep;

#ifdef ENABLE_ERROR_CHECKING
    if (!shmem_int_initialized) {
        RAISE_ERROR_STR("library not initialized");
    }
#endif

    for ( ; len > 0 ; --len) {
        shmem_internal_put_single(target, source, 8, *pe);
	target += (*tst * 8);
	source += (*sst * 8);
    }
}


#define FC_SHMEM_IPUT128 FC_FUNC_(shmem_iput128, SHMEM_IPUT128)
void FC_SHMEM_IPUT128(void *targetp, void *sourcep,
		      fortran_integer_t *tst, fortran_integer_t *sst,
		      fortran_integer_t *lenp, fortran_integer_t *pe);
void
FC_SHMEM_IPUT128(void *targetp, void *sourcep,
		 fortran_integer_t *tst, fortran_integer_t *sst,
		 fortran_integer_t *lenp, fortran_integer_t *pe)
{
    fortran_integer_t len = *lenp;
    char *target = (char*) targetp;
    char *source = (char*) sourcep;

#ifdef ENABLE_ERROR_CHECKING
    if (!shmem_int_initialized) {
        RAISE_ERROR_STR("library not initialized");
    }
#endif

    for ( ; len > 0 ; --len) {
        shmem_internal_put_single(target, source, 16, *pe);
	target += (*tst * 16);
	source += (*sst * 16);
    }
}