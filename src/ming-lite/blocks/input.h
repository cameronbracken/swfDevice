/* input.h
 * 
 * $Id: input.h,v 1.10 2007/05/17 15:54:43 krechert Exp $
 *
 * Notice: This header file contains declarations of functions and types that
 * are just used internally. All library functions and types that are supposed
 * to be publicly accessable are defined in ./src/ming.h.
 */

#ifndef SWF_INPUT_H_INCLUDED
#define SWF_INPUT_H_INCLUDED

#include "ming.h"

int SWFInput_read(SWFInput input, unsigned char* buffer, int count);

int SWFInput_getChar(SWFInput input);
int SWFInput_getUInt16(SWFInput input);
int SWFInput_getUInt16_BE(SWFInput input);
int SWFInput_getSInt16(SWFInput input);
unsigned long SWFInput_getUInt24_BE(SWFInput input);
unsigned long SWFInput_getUInt32(SWFInput input);
unsigned long SWFInput_getUInt32_BE(SWFInput input);
void SWFInput_byteAlign(SWFInput input);
int SWFInput_readBits(SWFInput input, int number);
int SWFInput_readSBits(SWFInput input, int number);

#endif /* SWF_INPUT_H_INCLUDED */
