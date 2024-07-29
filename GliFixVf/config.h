#pragma once

#include "framework.h"


typedef struct tdstDisplayMode_
{
	DWORD dwWidth;
	DWORD dwHeight;
}
tdstDisplayMode;


/*
 * Global Vars
 */

extern tdstDisplayMode CFG_stActualDispMode;
extern tdstDisplayMode CFG_stDispMode;
extern BOOL CFG_bHalfRefRate;

extern BOOL CFG_bIsMainModuleR2;
extern BOOL CFG_bIsFixEnabled;

extern BOOL CFG_bIsWidescreen;


/*
 * Functions
 */

void CFG_fn_vInitGlobals( void );
BOOL CFG_fn_bOpenConfigTool( void );
BOOL CFG_fn_bDetermineMainModule( void );
