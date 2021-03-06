/*
    Ming, an SWF output library
    Copyright (C) 2001  Opaque Industries - http://www.opaque.net/

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

/* movie.h
 * 
 * $Id: movie.h,v 1.21 2006/08/01 07:11:31 anderson Exp $
 * 
 * Notice: This header file contains declarations of functions and types that
 * are just used internally. All library functions and types that are supposed
 * to be publicly accessable are defined in ./src/ming.h.
 */

#ifndef SWF_MOVIE_H_INCLUDED
#define SWF_MOVIE_H_INCLUDED

#include "ming.h"

void SWFMovie_addBlock(SWFMovie movie, SWFBlock block);

void SWFMovie_writeExports(SWFMovie movie);

/*int
SWFMovie_outputC(SWFMovie movie, SWFByteOutputMethod method, void *data, int level);*/

SWFCharacter SWFMovie_importChar(SWFMovie movie, const char *filename, const char *name);

/* FIXME: This function should go somewhere else */
int completeSWFImportCharacter(SWFBlock block);

#endif /* SWF_MOVIE_H_INCLUDED */
