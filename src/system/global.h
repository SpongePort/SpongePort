/**********************/
/*** Global Defines ***/
/**********************/

#ifndef _GLOBAL_HEADER_
#define _GLOBAL_HEADER_

#include <psyz.h>
#include 	<stddef.h>
#include 	<stdlib.h>
#include 	<stdio.h>
#include 	<strings.h>
#include 	<libetc.h>
#include 	<libgte.h>
#include 	<libgpu.h>
#include 	<libsnd.h>
#include 	<libcd.h>
#include 	<libspu.h>
#include 	<libapi.h>
//#include 	<inline_c.h>
#include 	"utils/replace.h"
//#include 	<gtemac.h>

/*****************************************************************************/
#define SCRATCH_RAM 		0x1f800000
#define	FAST_STACK			(SCRATCH_RAM+0x3f0)
#define ONE 1

/*****************************************************************************/
#include 	"mem/memory.h"
#include 	"system/gte.h"
#include	"utils/cmxmacro.h"

#include 	"system/dbg.h"
#include	"system/info.h"

/*****************************************************************************/

#endif
