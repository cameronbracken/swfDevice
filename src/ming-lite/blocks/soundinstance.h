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

/* soundinstance.h
 * 
 * $Id: soundinstance.h,v 1.4 2003/11/08 18:24:58 whamann Exp $
 *
 * Notice: This header file contains declarations of functions and types that
 * are just used internally. All library functions and types that are supposed
 * to be publicly accessable are defined in ./src/ming.h.
 */

#ifndef SWF_SOUNDINSTANCE_H_INCLUDED
#define SWF_SOUNDINSTANCE_H_INCLUDED

#include "ming.h"

SWFSoundInstance newSWFSoundInstance(SWFSound sound);
SWFSoundInstance newSWFSoundInstance_stop(SWFSound sound);
SWFSoundInstance newSWFSoundInstance_startNoMultiple(SWFSound sound);

// button.c calls these, so they're exposed:
void writeSWFSoundInstanceToMethod(SWFBlock block,
				SWFByteOutputMethod method, void *data);
int completeSWFSoundInstance(SWFBlock block);

#endif /* SWF_SOUNDINSTANCE_H_INCLUDED */