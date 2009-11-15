/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     BREAK = 258,
     CONTINUE = 259,
     FUNCTION = 260,
     ELSE = 261,
     SWITCH = 262,
     CASE = 263,
     DEFAULT = 264,
     FOR = 265,
     IN = 266,
     IF = 267,
     WHILE = 268,
     DO = 269,
     VAR = 270,
     NEW = 271,
     DELETE = 272,
     TARGETPATH = 273,
     RETURN = 274,
     END = 275,
     WITH = 276,
     ASM = 277,
     EVAL = 278,
     RANDOM = 279,
     GETTIMER = 280,
     LENGTH = 281,
     CONCAT = 282,
     SUBSTR = 283,
     TRACE = 284,
     INT = 285,
     ORD = 286,
     CHR = 287,
     GETURL = 288,
     GETURL1 = 289,
     NEXTFRAME = 290,
     PREVFRAME = 291,
     PLAY = 292,
     STOP = 293,
     TOGGLEQUALITY = 294,
     STOPSOUNDS = 295,
     DUP = 296,
     SWAP = 297,
     POP = 298,
     PUSH = 299,
     SETREGISTER = 300,
     CALLFUNCTION = 301,
     CALLMETHOD = 302,
     NEWOBJECT = 303,
     NEWMETHOD = 304,
     AND = 305,
     OR = 306,
     XOR = 307,
     MODULO = 308,
     ADD = 309,
     LESSTHAN = 310,
     EQUALS = 311,
     INC = 312,
     DEC = 313,
     TYPEOF = 314,
     INSTANCEOF = 315,
     ENUMERATE = 316,
     INITOBJECT = 317,
     INITARRAY = 318,
     GETMEMBER = 319,
     SETMEMBER = 320,
     SHIFTLEFT = 321,
     SHIFTRIGHT = 322,
     SHIFTRIGHT2 = 323,
     VAREQUALS = 324,
     OLDADD = 325,
     SUBTRACT = 326,
     MULTIPLY = 327,
     DIVIDE = 328,
     OLDEQUALS = 329,
     OLDLESSTHAN = 330,
     LOGICALAND = 331,
     LOGICALOR = 332,
     NOT = 333,
     STRINGEQ = 334,
     STRINGLENGTH = 335,
     SUBSTRING = 336,
     GETVARIABLE = 337,
     SETVARIABLE = 338,
     SETTARGETEXPRESSION = 339,
     DUPLICATEMOVIECLIP = 340,
     REMOVEMOVIECLIP = 341,
     STRINGLESSTHAN = 342,
     MBLENGTH = 343,
     MBSUBSTRING = 344,
     MBORD = 345,
     MBCHR = 346,
     BRANCHALWAYS = 347,
     BRANCHIFTRUE = 348,
     GETURL2 = 349,
     POST = 350,
     GET = 351,
     CAST = 352,
     LOADVARIABLES = 353,
     LOADMOVIE = 354,
     LOADVARIABLESNUM = 355,
     LOADMOVIENUM = 356,
     CALLFRAME = 357,
     STARTDRAG = 358,
     STOPDRAG = 359,
     GOTOANDSTOP = 360,
     GOTOANDPLAY = 361,
     SETTARGET = 362,
     GETPROPERTY = 363,
     SETPROPERTY = 364,
     TONUMBER = 365,
     TOSTRING = 366,
     TRY = 367,
     THROW = 368,
     CATCH = 369,
     FINALLY = 370,
     THIS = 371,
     EXTENDS = 372,
     IMPLEMENTS = 373,
     FSCOMMAND2 = 374,
     CLASS = 375,
     PUBLIC = 376,
     PRIVATE = 377,
     NULLVAL = 378,
     UNDEFINED = 379,
     INTEGER = 380,
     DOUBLE = 381,
     BOOLEAN = 382,
     REGISTER = 383,
     BROKENSTRING = 384,
     STRING = 385,
     IDENTIFIER = 386,
     EQ = 387,
     EEQ = 388,
     NEE = 389,
     LE = 390,
     GE = 391,
     NE = 392,
     LAN = 393,
     LOR = 394,
     INCR = 395,
     DECR = 396,
     IEQ = 397,
     DEQ = 398,
     MEQ = 399,
     SEQ = 400,
     REQ = 401,
     AEQ = 402,
     OEQ = 403,
     SHL = 404,
     SHR = 405,
     SHR2 = 406,
     SHLEQ = 407,
     SHREQ = 408,
     SHR2EQ = 409,
     _P_X = 410,
     _P_Y = 411,
     _P_XSCALE = 412,
     _P_YSCALE = 413,
     _P_CURRENTFRAME = 414,
     _P_TOTALFRAMES = 415,
     _P_ALPHA = 416,
     _P_VISIBLE = 417,
     _P_WIDTH = 418,
     _P_HEIGHT = 419,
     _P_ROTATION = 420,
     _P_TARGET = 421,
     _P_FRAMESLOADED = 422,
     _P_NAME = 423,
     _P_DROPTARGET = 424,
     _P_URL = 425,
     _P_HIGHQUALITY = 426,
     _P_FOCUSRECT = 427,
     _P_SOUNDBUFTIME = 428,
     _P_QUALITY = 429,
     _P_XMOUSE = 430,
     _P_YMOUSE = 431,
     NOELSE = 432,
     UMINUS = 434,
     POSTFIX = 435
   };
#endif
/* Tokens.  */
#define BREAK 258
#define CONTINUE 259
#define FUNCTION 260
#define ELSE 261
#define SWITCH 262
#define CASE 263
#define DEFAULT 264
#define FOR 265
#define IN 266
#define IF 267
#define WHILE 268
#define DO 269
#define VAR 270
#define NEW 271
#define DELETE 272
#define TARGETPATH 273
#define RETURN 274
#define END 275
#define WITH 276
#define ASM 277
#define EVAL 278
#define RANDOM 279
#define GETTIMER 280
#define LENGTH 281
#define CONCAT 282
#define SUBSTR 283
#define TRACE 284
#define INT 285
#define ORD 286
#define CHR 287
#define GETURL 288
#define GETURL1 289
#define NEXTFRAME 290
#define PREVFRAME 291
#define PLAY 292
#define STOP 293
#define TOGGLEQUALITY 294
#define STOPSOUNDS 295
#define DUP 296
#define SWAP 297
#define POP 298
#define PUSH 299
#define SETREGISTER 300
#define CALLFUNCTION 301
#define CALLMETHOD 302
#define NEWOBJECT 303
#define NEWMETHOD 304
#define AND 305
#define OR 306
#define XOR 307
#define MODULO 308
#define ADD 309
#define LESSTHAN 310
#define EQUALS 311
#define INC 312
#define DEC 313
#define TYPEOF 314
#define INSTANCEOF 315
#define ENUMERATE 316
#define INITOBJECT 317
#define INITARRAY 318
#define GETMEMBER 319
#define SETMEMBER 320
#define SHIFTLEFT 321
#define SHIFTRIGHT 322
#define SHIFTRIGHT2 323
#define VAREQUALS 324
#define OLDADD 325
#define SUBTRACT 326
#define MULTIPLY 327
#define DIVIDE 328
#define OLDEQUALS 329
#define OLDLESSTHAN 330
#define LOGICALAND 331
#define LOGICALOR 332
#define NOT 333
#define STRINGEQ 334
#define STRINGLENGTH 335
#define SUBSTRING 336
#define GETVARIABLE 337
#define SETVARIABLE 338
#define SETTARGETEXPRESSION 339
#define DUPLICATEMOVIECLIP 340
#define REMOVEMOVIECLIP 341
#define STRINGLESSTHAN 342
#define MBLENGTH 343
#define MBSUBSTRING 344
#define MBORD 345
#define MBCHR 346
#define BRANCHALWAYS 347
#define BRANCHIFTRUE 348
#define GETURL2 349
#define POST 350
#define GET 351
#define CAST 352
#define LOADVARIABLES 353
#define LOADMOVIE 354
#define LOADVARIABLESNUM 355
#define LOADMOVIENUM 356
#define CALLFRAME 357
#define STARTDRAG 358
#define STOPDRAG 359
#define GOTOANDSTOP 360
#define GOTOANDPLAY 361
#define SETTARGET 362
#define GETPROPERTY 363
#define SETPROPERTY 364
#define TONUMBER 365
#define TOSTRING 366
#define TRY 367
#define THROW 368
#define CATCH 369
#define FINALLY 370
#define THIS 371
#define EXTENDS 372
#define IMPLEMENTS 373
#define FSCOMMAND2 374
#define CLASS 375
#define PUBLIC 376
#define PRIVATE 377
#define NULLVAL 378
#define UNDEFINED 379
#define INTEGER 380
#define DOUBLE 381
#define BOOLEAN 382
#define REGISTER 383
#define BROKENSTRING 384
#define STRING 385
#define IDENTIFIER 386
#define EQ 387
#define EEQ 388
#define NEE 389
#define LE 390
#define GE 391
#define NE 392
#define LAN 393
#define LOR 394
#define INCR 395
#define DECR 396
#define IEQ 397
#define DEQ 398
#define MEQ 399
#define SEQ 400
#define REQ 401
#define AEQ 402
#define OEQ 403
#define SHL 404
#define SHR 405
#define SHR2 406
#define SHLEQ 407
#define SHREQ 408
#define SHR2EQ 409
#define _P_X 410
#define _P_Y 411
#define _P_XSCALE 412
#define _P_YSCALE 413
#define _P_CURRENTFRAME 414
#define _P_TOTALFRAMES 415
#define _P_ALPHA 416
#define _P_VISIBLE 417
#define _P_WIDTH 418
#define _P_HEIGHT 419
#define _P_ROTATION 420
#define _P_TARGET 421
#define _P_FRAMESLOADED 422
#define _P_NAME 423
#define _P_DROPTARGET 424
#define _P_URL 425
#define _P_HIGHQUALITY 426
#define _P_FOCUSRECT 427
#define _P_SOUNDBUFTIME 428
#define _P_QUALITY 429
#define _P_XMOUSE 430
#define _P_YMOUSE 431
#define NOELSE 432
#define UMINUS 434
#define POSTFIX 435




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 29 "./swf5compiler.y"
{
  Buffer action;
  char *str;
  SWFGetUrl2Method getURLMethod;
  int op;
  int intVal;
  int len;
  double doubleVal;
  ASFunction 		function;
  ASClass		clazz;
  ASClassMember		classMember;
  struct exprlist_s 	exprlist;
  struct switchcase	switchcase;
  struct switchcases	switchcases;
  struct
  {
	Buffer obj, ident, memexpr;
  } lval;
}
/* Line 1489 of yacc.c.  */
#line 427 "swf5compiler.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE swf5lval;

