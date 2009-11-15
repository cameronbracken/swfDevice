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
     FOR = 259,
     CONTINUE = 260,
     IF = 261,
     ELSE = 262,
     DO = 263,
     WHILE = 264,
     THIS = 265,
     EVAL = 266,
     TIME = 267,
     RANDOM = 268,
     LENGTH = 269,
     INT = 270,
     CONCAT = 271,
     DUPLICATECLIP = 272,
     REMOVECLIP = 273,
     TRACE = 274,
     STARTDRAG = 275,
     STOPDRAG = 276,
     ORD = 277,
     CHR = 278,
     CALLFRAME = 279,
     GETURL = 280,
     GETURL1 = 281,
     LOADMOVIE = 282,
     LOADVARIABLES = 283,
     POSTURL = 284,
     SUBSTR = 285,
     GETPROPERTY = 286,
     NEXTFRAME = 287,
     PREVFRAME = 288,
     PLAY = 289,
     STOP = 290,
     TOGGLEQUALITY = 291,
     STOPSOUNDS = 292,
     GOTOFRAME = 293,
     GOTOANDPLAY = 294,
     FRAMELOADED = 295,
     SETTARGET = 296,
     ASM = 297,
     ASMADD = 298,
     ASMDIVIDE = 299,
     ASMMULTIPLY = 300,
     ASMEQUALS = 301,
     ASMLESS = 302,
     ASMLOGICALAND = 303,
     ASMLOGICALOR = 304,
     ASMLOGICALNOT = 305,
     ASMSTRINGAND = 306,
     ASMSTRINGEQUALS = 307,
     ASMSTRINGEXTRACT = 308,
     ASMSTRINGLENGTH = 309,
     ASMMBSTRINGEXTRACT = 310,
     ASMMBSTRINGLENGTH = 311,
     ASMPOP = 312,
     ASMPUSH = 313,
     ASMASCIITOCHAR = 314,
     ASMCHARTOASCII = 315,
     ASMTOINTEGER = 316,
     ASMCALL = 317,
     ASMIF = 318,
     ASMJUMP = 319,
     ASMGETVARIABLE = 320,
     ASMSETVARIABLE = 321,
     ASMGETURL2 = 322,
     ASMGETPROPERTY = 323,
     ASMGOTOFRAME2 = 324,
     ASMREMOVESPRITE = 325,
     ASMSETPROPERTY = 326,
     ASMSETTARGET2 = 327,
     ASMSTARTDRAG = 328,
     ASMWAITFORFRAME2 = 329,
     ASMCLONESPRITE = 330,
     ASMENDDRAG = 331,
     ASMGETTIME = 332,
     ASMRANDOMNUMBER = 333,
     ASMTRACE = 334,
     ASMMBASCIITOCHAR = 335,
     ASMMBCHARTOASCII = 336,
     ASMSUBSTRACT = 337,
     ASMSTRINGLESS = 338,
     TELLTARGET = 339,
     BROKENSTRING = 340,
     STRING = 341,
     NUMBER = 342,
     IDENTIFIER = 343,
     PATH = 344,
     EQ = 345,
     LE = 346,
     GE = 347,
     NE = 348,
     LAN = 349,
     LOR = 350,
     INC = 351,
     DEC = 352,
     IEQ = 353,
     DEQ = 354,
     MEQ = 355,
     SEQ = 356,
     STREQ = 357,
     STRNE = 358,
     STRCMP = 359,
     PARENT = 360,
     END = 361,
     UMINUS = 362,
     POSTFIX = 363,
     NEGATE = 364
   };
#endif
/* Tokens.  */
#define BREAK 258
#define FOR 259
#define CONTINUE 260
#define IF 261
#define ELSE 262
#define DO 263
#define WHILE 264
#define THIS 265
#define EVAL 266
#define TIME 267
#define RANDOM 268
#define LENGTH 269
#define INT 270
#define CONCAT 271
#define DUPLICATECLIP 272
#define REMOVECLIP 273
#define TRACE 274
#define STARTDRAG 275
#define STOPDRAG 276
#define ORD 277
#define CHR 278
#define CALLFRAME 279
#define GETURL 280
#define GETURL1 281
#define LOADMOVIE 282
#define LOADVARIABLES 283
#define POSTURL 284
#define SUBSTR 285
#define GETPROPERTY 286
#define NEXTFRAME 287
#define PREVFRAME 288
#define PLAY 289
#define STOP 290
#define TOGGLEQUALITY 291
#define STOPSOUNDS 292
#define GOTOFRAME 293
#define GOTOANDPLAY 294
#define FRAMELOADED 295
#define SETTARGET 296
#define ASM 297
#define ASMADD 298
#define ASMDIVIDE 299
#define ASMMULTIPLY 300
#define ASMEQUALS 301
#define ASMLESS 302
#define ASMLOGICALAND 303
#define ASMLOGICALOR 304
#define ASMLOGICALNOT 305
#define ASMSTRINGAND 306
#define ASMSTRINGEQUALS 307
#define ASMSTRINGEXTRACT 308
#define ASMSTRINGLENGTH 309
#define ASMMBSTRINGEXTRACT 310
#define ASMMBSTRINGLENGTH 311
#define ASMPOP 312
#define ASMPUSH 313
#define ASMASCIITOCHAR 314
#define ASMCHARTOASCII 315
#define ASMTOINTEGER 316
#define ASMCALL 317
#define ASMIF 318
#define ASMJUMP 319
#define ASMGETVARIABLE 320
#define ASMSETVARIABLE 321
#define ASMGETURL2 322
#define ASMGETPROPERTY 323
#define ASMGOTOFRAME2 324
#define ASMREMOVESPRITE 325
#define ASMSETPROPERTY 326
#define ASMSETTARGET2 327
#define ASMSTARTDRAG 328
#define ASMWAITFORFRAME2 329
#define ASMCLONESPRITE 330
#define ASMENDDRAG 331
#define ASMGETTIME 332
#define ASMRANDOMNUMBER 333
#define ASMTRACE 334
#define ASMMBASCIITOCHAR 335
#define ASMMBCHARTOASCII 336
#define ASMSUBSTRACT 337
#define ASMSTRINGLESS 338
#define TELLTARGET 339
#define BROKENSTRING 340
#define STRING 341
#define NUMBER 342
#define IDENTIFIER 343
#define PATH 344
#define EQ 345
#define LE 346
#define GE 347
#define NE 348
#define LAN 349
#define LOR 350
#define INC 351
#define DEC 352
#define IEQ 353
#define DEQ 354
#define MEQ 355
#define SEQ 356
#define STREQ 357
#define STRNE 358
#define STRCMP 359
#define PARENT 360
#define END 361
#define UMINUS 362
#define POSTFIX 363
#define NEGATE 364




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 19 "./swf4compiler.y"
{
  Buffer action;
  char *str;
  SWFActionFunction function;
  SWFGetUrl2Method getURLMethod;
  int len;
}
/* Line 1489 of yacc.c.  */
#line 275 "swf4compiler.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE swf4lval;

