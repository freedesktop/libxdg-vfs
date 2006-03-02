#include <config.h>

#include "utils.h"

#include <stdarg.h>
#include <stdio.h>

void debug( const char* fmt, ... )
    {
    va_list va;
    va_start( va, fmt );
    vfprintf( stderr, fmt, va );
    va_end( va );
    fprintf( stderr, "\n" );
    }
