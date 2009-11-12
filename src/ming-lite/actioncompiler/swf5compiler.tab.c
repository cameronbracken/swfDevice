/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse swf5parse
#define yylex   swf5lex
#define yyerror swf5error
#define yylval  swf5lval
#define yychar  swf5char
#define yydebug swf5debug
#define yynerrs swf5nerrs


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




/* Copy the first part of user declarations.  */
#line 5 "./swf5compiler.y"


#include <time.h>
#include <string.h>
#include <stdlib.h>
#include "compile.h"
#include "actiontypes.h"
#include "assembler.h"

#define YYERROR_VERBOSE 1
#define YYPARSE_PARAM buffer
//#define DEBUG 1

#ifdef _MSC_VER 
#define strcasecmp stricmp 
#endif


Buffer bf, bc;
static int classContext = 0;



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

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
/* Line 187 of yacc.c.  */
#line 505 "swf5compiler.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 518 "swf5compiler.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6603

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  205
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  72
/* YYNRULES -- Number of rules.  */
#define YYNRULES  450
/* YYNRULES -- Number of states.  */
#define YYNSTATES  757

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   435

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   193,     2,     2,     2,   192,   185,     2,
     203,   204,   190,   188,   178,   189,   197,   191,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   182,   202,
     183,   179,   184,   181,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   198,     2,   199,   187,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   200,   186,   201,   194,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   180,   195,   196
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     8,    10,    13,    15,    17,
      19,    21,    24,    27,    29,    33,    35,    38,    40,    42,
      44,    46,    48,    50,    52,    55,    57,    59,    62,    65,
      70,    72,    74,    78,    82,    83,    85,    87,    88,    91,
      93,    97,   102,   105,   109,   112,   120,   125,   135,   143,
     146,   150,   152,   156,   164,   170,   171,   173,   175,   183,
     184,   187,   192,   196,   198,   200,   202,   204,   206,   208,
     210,   212,   214,   216,   218,   220,   222,   224,   226,   228,
     230,   232,   234,   236,   238,   240,   242,   244,   246,   248,
     250,   252,   254,   256,   258,   260,   262,   264,   266,   268,
     270,   272,   274,   276,   278,   280,   282,   284,   286,   288,
     290,   292,   294,   296,   298,   300,   302,   304,   306,   308,
     310,   312,   314,   316,   318,   320,   322,   324,   326,   328,
     330,   332,   334,   336,   338,   340,   342,   344,   346,   348,
     350,   352,   354,   356,   358,   360,   362,   364,   366,   368,
     370,   372,   374,   376,   378,   380,   382,   384,   386,   388,
     390,   392,   394,   396,   398,   400,   402,   404,   406,   408,
     410,   412,   413,   416,   421,   422,   424,   432,   435,   437,
     439,   441,   443,   445,   447,   449,   453,   455,   457,   458,
     459,   465,   472,   483,   491,   500,   501,   503,   506,   509,
     510,   513,   516,   519,   521,   526,   531,   539,   547,   555,
     563,   571,   576,   583,   598,   602,   611,   616,   623,   627,
     631,   635,   639,   643,   647,   652,   657,   662,   667,   672,
     677,   682,   687,   696,   701,   706,   711,   715,   720,   725,
     730,   735,   740,   747,   756,   761,   768,   771,   772,   774,
     778,   785,   793,   797,   799,   803,   805,   807,   809,   811,
     813,   815,   817,   819,   821,   823,   825,   827,   829,   831,
     833,   835,   837,   841,   846,   848,   850,   853,   856,   859,
     863,   867,   871,   875,   879,   883,   887,   891,   895,   899,
     903,   907,   911,   915,   919,   923,   927,   931,   935,   939,
     943,   949,   953,   957,   959,   962,   968,   973,   979,   987,
     996,  1000,  1002,  1006,  1008,  1010,  1012,  1015,  1018,  1022,
    1026,  1028,  1030,  1032,  1034,  1036,  1038,  1040,  1044,  1049,
    1052,  1053,  1059,  1062,  1064,  1066,  1068,  1070,  1073,  1076,
    1080,  1084,  1086,  1089,  1090,  1095,  1097,  1099,  1101,  1103,
    1105,  1107,  1109,  1111,  1115,  1116,  1120,  1122,  1125,  1127,
    1129,  1131,  1133,  1135,  1137,  1139,  1141,  1143,  1145,  1147,
    1149,  1151,  1153,  1155,  1157,  1159,  1161,  1163,  1165,  1167,
    1169,  1171,  1173,  1175,  1177,  1179,  1181,  1183,  1185,  1187,
    1189,  1191,  1193,  1195,  1197,  1199,  1201,  1203,  1205,  1207,
    1209,  1211,  1213,  1215,  1217,  1219,  1221,  1223,  1225,  1227,
    1229,  1231,  1233,  1235,  1237,  1239,  1241,  1243,  1245,  1247,
    1249,  1251,  1253,  1255,  1257,  1259,  1261,  1264,  1267,  1269,
    1271,  1273,  1275,  1277,  1279,  1281,  1283,  1285,  1287,  1289,
    1291,  1293,  1295,  1297,  1299,  1301,  1303,  1305,  1307,  1309,
    1311
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     206,     0,    -1,    -1,   207,   208,    -1,    -1,   209,    -1,
     208,   209,    -1,   212,    -1,   236,    -1,   217,    -1,   212,
      -1,   210,   212,    -1,   200,   201,    -1,   211,    -1,   200,
     210,   201,    -1,   202,    -1,   267,   202,    -1,   227,    -1,
     244,    -1,   246,    -1,   247,    -1,   230,    -1,   225,    -1,
     224,    -1,   223,   202,    -1,   222,    -1,   214,    -1,   213,
     214,    -1,   218,   236,    -1,   218,    15,   220,   202,    -1,
     120,    -1,   211,    -1,   200,   213,   201,    -1,   215,   233,
     216,    -1,    -1,   121,    -1,   122,    -1,    -1,   182,   233,
      -1,   221,    -1,   220,   178,   221,    -1,   233,   219,   179,
     264,    -1,   233,   219,    -1,   113,   262,   202,    -1,   112,
     212,    -1,   112,   212,   114,   203,   233,   204,   212,    -1,
     112,   212,   115,   212,    -1,   112,   212,   114,   203,   233,
     204,   212,   115,   212,    -1,    21,   203,   261,   204,   200,
     210,   201,    -1,    19,   202,    -1,    19,   262,   202,    -1,
     267,    -1,   226,   178,   267,    -1,    12,   203,   261,   204,
     212,     6,   212,    -1,    12,   203,   261,   204,   212,    -1,
      -1,   261,    -1,     7,    -1,   229,   203,   261,   204,   200,
     231,   201,    -1,    -1,   231,   232,    -1,     8,   261,   182,
     210,    -1,     9,   182,   210,    -1,   131,    -1,    18,    -1,
      24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,
      29,    -1,    30,    -1,    31,    -1,    32,    -1,    33,    -1,
      34,    -1,    35,    -1,    36,    -1,    37,    -1,    38,    -1,
      39,    -1,    40,    -1,    41,    -1,    42,    -1,    43,    -1,
      44,    -1,    45,    -1,    46,    -1,    47,    -1,    50,    -1,
      51,    -1,    52,    -1,    53,    -1,    54,    -1,    55,    -1,
      56,    -1,    57,    -1,    58,    -1,    59,    -1,    61,    -1,
      62,    -1,    63,    -1,    64,    -1,    65,    -1,    66,    -1,
      67,    -1,    68,    -1,    69,    -1,    70,    -1,    71,    -1,
      72,    -1,    73,    -1,    74,    -1,    75,    -1,    76,    -1,
      77,    -1,    78,    -1,    79,    -1,    80,    -1,    81,    -1,
      82,    -1,    83,    -1,    84,    -1,    85,    -1,    86,    -1,
     103,    -1,   104,    -1,    87,    -1,    88,    -1,    89,    -1,
      90,    -1,    91,    -1,    92,    -1,    93,    -1,    94,    -1,
      95,    -1,    96,    -1,    98,    -1,   100,    -1,    99,    -1,
     101,    -1,   105,    -1,   106,    -1,   107,    -1,   102,    -1,
     108,    -1,   109,    -1,    97,    -1,   116,    -1,   155,    -1,
     156,    -1,   157,    -1,   158,    -1,   159,    -1,   160,    -1,
     161,    -1,   162,    -1,   163,    -1,   164,    -1,   165,    -1,
     166,    -1,   167,    -1,   168,    -1,   169,    -1,   170,    -1,
     171,    -1,   172,    -1,   173,    -1,   174,    -1,   175,    -1,
     176,    -1,    -1,   233,   219,    -1,   234,   178,   233,   219,
      -1,    -1,   233,    -1,     5,   235,   203,   234,   204,   219,
     212,    -1,    11,   238,    -1,   260,    -1,   251,    -1,   254,
      -1,   260,    -1,   251,    -1,   250,    -1,   254,    -1,   203,
     239,   204,    -1,    13,    -1,    14,    -1,    -1,    -1,   240,
     203,   261,   204,   212,    -1,   241,   212,    13,   203,   261,
     204,    -1,    10,   203,   245,   202,   228,   202,   245,   204,
     242,   212,    -1,    10,   203,   233,   237,   204,   243,   212,
      -1,    10,   203,    15,   233,   237,   204,   243,   212,    -1,
      -1,   226,    -1,     4,   202,    -1,     3,   202,    -1,    -1,
     178,    96,    -1,   178,    95,    -1,   178,   130,    -1,   261,
      -1,    29,   203,   262,   204,    -1,    33,   203,   261,   204,
      -1,    33,   203,   261,   178,   261,   248,   204,    -1,    98,
     203,   261,   178,   261,   248,   204,    -1,   100,   203,   261,
     178,   249,   248,   204,    -1,    99,   203,   261,   178,   261,
     248,   204,    -1,   101,   203,   261,   178,   249,   248,   204,
      -1,   102,   203,   261,   204,    -1,   103,   203,   261,   178,
     261,   204,    -1,   103,   203,   261,   178,   261,   178,   261,
     178,   261,   178,   261,   178,   261,   204,    -1,   104,   203,
     204,    -1,    85,   203,   261,   178,   261,   178,   261,   204,
      -1,    86,   203,   261,   204,    -1,    34,   203,   130,   178,
     130,   204,    -1,    35,   203,   204,    -1,    36,   203,   204,
      -1,    37,   203,   204,    -1,    38,   203,   204,    -1,    40,
     203,   204,    -1,    39,   203,   204,    -1,   106,   203,   125,
     204,    -1,   105,   203,   125,   204,    -1,   106,   203,   130,
     204,    -1,   105,   203,   130,   204,    -1,   106,   203,   261,
     204,    -1,   105,   203,   261,   204,    -1,   107,   203,   130,
     204,    -1,   107,   203,   261,   204,    -1,   109,   203,   261,
     178,   276,   178,   261,   204,    -1,   131,   203,   253,   204,
      -1,    18,   203,   131,   204,    -1,    23,   203,   261,   204,
      -1,    25,   203,   204,    -1,    24,   203,   261,   204,    -1,
      26,   203,   262,   204,    -1,    30,   203,   261,   204,    -1,
      31,   203,   261,   204,    -1,    32,   203,   261,   204,    -1,
      27,   203,   261,   178,   261,   204,    -1,    81,   203,   261,
     178,   261,   178,   261,   204,    -1,    59,   203,   262,   204,
      -1,   108,   203,   261,   178,   276,   204,    -1,    17,   239,
      -1,    -1,   262,    -1,   253,   178,   262,    -1,   259,   197,
     233,   203,   253,   204,    -1,   259,   198,   261,   199,   203,
     253,   204,    -1,   233,   182,   262,    -1,   255,    -1,   256,
     178,   255,    -1,   142,    -1,   145,    -1,   144,    -1,   143,
      -1,   146,    -1,   147,    -1,   148,    -1,   180,    -1,   152,
      -1,   153,    -1,   154,    -1,   140,    -1,   141,    -1,   260,
      -1,   251,    -1,   254,    -1,   233,    -1,   259,   197,   233,
      -1,   259,   198,   261,   199,    -1,   263,    -1,   264,    -1,
     189,   261,    -1,   194,   261,    -1,   193,   261,    -1,   261,
     138,   261,    -1,   261,   139,   261,    -1,   261,   190,   261,
      -1,   261,   191,   261,    -1,   261,   192,   261,    -1,   261,
     188,   261,    -1,   261,   189,   261,    -1,   261,   185,   261,
      -1,   261,   186,   261,    -1,   261,   187,   261,    -1,   261,
     183,   261,    -1,   261,   184,   261,    -1,   261,   135,   261,
      -1,   261,   136,   261,    -1,   261,   132,   261,    -1,   261,
     133,   261,    -1,   261,   137,   261,    -1,   261,   134,   261,
      -1,   261,   149,   261,    -1,   261,   150,   261,    -1,   261,
     151,   261,    -1,   261,   181,   261,   182,   261,    -1,   260,
     179,   262,    -1,   261,    60,   259,    -1,   261,    -1,    16,
     233,    -1,    16,   131,   203,   253,   204,    -1,    16,   259,
     197,   131,    -1,    16,   259,   198,   261,   199,    -1,    16,
     259,   197,   131,   203,   253,   204,    -1,    16,   259,   198,
     261,   199,   203,   253,   204,    -1,   198,   253,   199,    -1,
     211,    -1,   200,   256,   201,    -1,   236,    -1,   259,    -1,
     252,    -1,   258,   260,    -1,   260,   258,    -1,   203,   261,
     204,    -1,   260,   257,   261,    -1,   127,    -1,   123,    -1,
     124,    -1,   130,    -1,   125,    -1,   126,    -1,   266,    -1,
     265,   178,   266,    -1,   233,   219,   179,   262,    -1,   233,
     219,    -1,    -1,    22,   200,   268,   269,   201,    -1,    15,
     265,    -1,   250,    -1,   252,    -1,   251,    -1,   254,    -1,
     258,   260,    -1,   260,   258,    -1,   260,   179,   262,    -1,
     260,   257,   261,    -1,   274,    -1,   269,   274,    -1,    -1,
      21,   271,   269,    20,    -1,   130,    -1,   125,    -1,   126,
      -1,   127,    -1,   123,    -1,   124,    -1,   128,    -1,   272,
      -1,   273,   178,   272,    -1,    -1,    44,   275,   273,    -1,
     270,    -1,    45,   128,    -1,    46,    -1,    19,    -1,    47,
      -1,    48,    -1,    49,    -1,    50,    -1,    51,    -1,    52,
      -1,    53,    -1,    54,    -1,    55,    -1,    56,    -1,    57,
      -1,    58,    -1,    59,    -1,    60,    -1,    61,    -1,    17,
      -1,    16,    -1,    63,    -1,    62,    -1,    64,    -1,    65,
      -1,    66,    -1,    67,    -1,    68,    -1,    15,    -1,   117,
      -1,    18,    -1,   118,    -1,   119,    -1,    97,    -1,    70,
      -1,    71,    -1,    72,    -1,    73,    -1,    74,    -1,    75,
      -1,    76,    -1,    77,    -1,    78,    -1,    79,    -1,    80,
      -1,    81,    -1,    30,    -1,    41,    -1,    42,    -1,    43,
      -1,    82,    -1,    83,    -1,   108,    -1,   109,    -1,   110,
      -1,   111,    -1,    84,    -1,    27,    -1,    85,    -1,    86,
      -1,    29,    -1,    87,    -1,    24,    -1,    88,    -1,    31,
      -1,    32,    -1,    25,    -1,    89,    -1,    90,    -1,    91,
      -1,    92,   130,    -1,    93,   130,    -1,   130,    -1,   155,
      -1,   156,    -1,   157,    -1,   158,    -1,   159,    -1,   160,
      -1,   161,    -1,   162,    -1,   163,    -1,   164,    -1,   165,
      -1,   166,    -1,   167,    -1,   168,    -1,   169,    -1,   170,
      -1,   171,    -1,   172,    -1,   173,    -1,   174,    -1,   175,
      -1,   176,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   183,   183,   183,   191,   195,   196,   200,   202,   210,
     215,   218,   224,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   245,   246,   254,   255,
     259,   271,   272,   276,   283,   285,   286,   289,   291,   294,
     296,   303,   308,   316,   320,   330,   344,   355,   373,   384,
     397,   412,   413,   417,   428,   438,   439,   443,   448,   462,
     465,   473,   485,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,   561,   562,   563,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,   587,   589,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,   611,   612,
     613,   618,   621,   627,   635,   636,   640,   651,   656,   673,
     674,   679,   694,   695,   696,   697,   701,   706,   712,   717,
     721,   734,   747,   786,   823,   861,   862,   868,   883,   908,
     910,   912,   914,   923,   932,   936,   948,   959,   966,   973,
     980,   987,   993,  1000,  1011,  1016,  1024,  1028,  1038,  1042,
    1046,  1050,  1054,  1058,  1062,  1069,  1076,  1084,  1092,  1098,
    1104,  1111,  1115,  1126,  1137,  1144,  1148,  1152,  1156,  1160,
    1164,  1168,  1172,  1177,  1183,  1191,  1201,  1213,  1216,  1221,
    1230,  1238,  1247,  1255,  1259,  1265,  1266,  1267,  1268,  1269,
    1270,  1271,  1272,  1273,  1274,  1275,  1279,  1280,  1286,  1303,
    1304,  1309,  1316,  1323,  1332,  1334,  1336,  1341,  1346,  1350,
    1360,  1369,  1374,  1379,  1384,  1389,  1394,  1399,  1404,  1409,
    1414,  1419,  1425,  1430,  1434,  1438,  1443,  1448,  1452,  1456,
    1460,  1470,  1497,  1505,  1507,  1518,  1529,  1541,  1553,  1565,
    1576,  1581,  1586,  1594,  1607,  1609,  1611,  1656,  1701,  1705,
    1754,  1757,  1761,  1765,  1769,  1772,  1778,  1780,  1786,  1793,
    1802,  1801,  1806,  1809,  1811,  1815,  1819,  1823,  1862,  1901,
    1922,  1967,  1968,  1973,  1972,  1980,  1983,  1985,  1987,  1991,
    1994,  1997,  2005,  2006,  2010,  2010,  2015,  2017,  2024,  2026,
    2028,  2030,  2032,  2034,  2036,  2038,  2040,  2042,  2044,  2046,
    2048,  2050,  2052,  2054,  2056,  2058,  2060,  2062,  2064,  2066,
    2068,  2070,  2072,  2074,  2076,  2078,  2080,  2082,  2084,  2086,
    2090,  2091,  2092,  2093,  2094,  2095,  2096,  2097,  2098,  2099,
    2100,  2101,  2102,  2103,  2104,  2105,  2106,  2107,  2108,  2109,
    2110,  2111,  2112,  2113,  2114,  2115,  2116,  2117,  2118,  2119,
    2120,  2121,  2122,  2123,  2124,  2125,  2128,  2132,  2139,  2140,
    2141,  2142,  2143,  2144,  2145,  2146,  2147,  2148,  2149,  2150,
    2151,  2152,  2153,  2154,  2155,  2156,  2157,  2158,  2159,  2160,
    2161
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BREAK", "CONTINUE", "FUNCTION", "ELSE",
  "SWITCH", "CASE", "DEFAULT", "FOR", "IN", "IF", "WHILE", "DO", "VAR",
  "NEW", "DELETE", "TARGETPATH", "RETURN", "END", "WITH", "ASM", "EVAL",
  "RANDOM", "GETTIMER", "LENGTH", "CONCAT", "SUBSTR", "TRACE", "INT",
  "ORD", "CHR", "GETURL", "GETURL1", "NEXTFRAME", "PREVFRAME", "PLAY",
  "STOP", "TOGGLEQUALITY", "STOPSOUNDS", "DUP", "SWAP", "POP", "PUSH",
  "SETREGISTER", "CALLFUNCTION", "CALLMETHOD", "NEWOBJECT", "NEWMETHOD",
  "AND", "OR", "XOR", "MODULO", "ADD", "LESSTHAN", "EQUALS", "INC", "DEC",
  "TYPEOF", "INSTANCEOF", "ENUMERATE", "INITOBJECT", "INITARRAY",
  "GETMEMBER", "SETMEMBER", "SHIFTLEFT", "SHIFTRIGHT", "SHIFTRIGHT2",
  "VAREQUALS", "OLDADD", "SUBTRACT", "MULTIPLY", "DIVIDE", "OLDEQUALS",
  "OLDLESSTHAN", "LOGICALAND", "LOGICALOR", "NOT", "STRINGEQ",
  "STRINGLENGTH", "SUBSTRING", "GETVARIABLE", "SETVARIABLE",
  "SETTARGETEXPRESSION", "DUPLICATEMOVIECLIP", "REMOVEMOVIECLIP",
  "STRINGLESSTHAN", "MBLENGTH", "MBSUBSTRING", "MBORD", "MBCHR",
  "BRANCHALWAYS", "BRANCHIFTRUE", "GETURL2", "POST", "GET", "CAST",
  "LOADVARIABLES", "LOADMOVIE", "LOADVARIABLESNUM", "LOADMOVIENUM",
  "CALLFRAME", "STARTDRAG", "STOPDRAG", "GOTOANDSTOP", "GOTOANDPLAY",
  "SETTARGET", "GETPROPERTY", "SETPROPERTY", "TONUMBER", "TOSTRING", "TRY",
  "THROW", "CATCH", "FINALLY", "THIS", "EXTENDS", "IMPLEMENTS",
  "FSCOMMAND2", "CLASS", "PUBLIC", "PRIVATE", "NULLVAL", "UNDEFINED",
  "INTEGER", "DOUBLE", "BOOLEAN", "REGISTER", "BROKENSTRING", "STRING",
  "IDENTIFIER", "\"==\"", "\"===\"", "\"!==\"", "\"<=\"", "\">=\"",
  "\"!=\"", "\"&&\"", "\"||\"", "\"++\"", "\"--\"", "\"+=\"", "\"/=\"",
  "\"*=\"", "\"-=\"", "\"%=\"", "\"&=\"", "\"|=\"", "\"<<\"", "\">>\"",
  "\">>>\"", "\"<<=\"", "\">>=\"", "\">>>=\"", "_P_X", "_P_Y", "_P_XSCALE",
  "_P_YSCALE", "_P_CURRENTFRAME", "_P_TOTALFRAMES", "_P_ALPHA",
  "_P_VISIBLE", "_P_WIDTH", "_P_HEIGHT", "_P_ROTATION", "_P_TARGET",
  "_P_FRAMESLOADED", "_P_NAME", "_P_DROPTARGET", "_P_URL",
  "_P_HIGHQUALITY", "_P_FOCUSRECT", "_P_SOUNDBUFTIME", "_P_QUALITY",
  "_P_XMOUSE", "_P_YMOUSE", "NOELSE", "','", "'='", "\"^=\"", "'?'", "':'",
  "'<'", "'>'", "'&'", "'|'", "'^'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'!'", "'~'", "UMINUS", "POSTFIX", "'.'", "'['", "']'", "'{'", "'}'",
  "';'", "'('", "')'", "$accept", "program", "@1", "code", "anycode",
  "stmts", "emptybraces", "stmt", "class_stmts", "class_stmt",
  "class_init", "class_body", "class_decl", "access_attr", "type_attr",
  "class_vars", "class_var", "throw_stmt", "try_catch_stmt", "with_stmt",
  "return_stmt", "assign_stmts", "if_stmt", "expr_opt", "switch_init",
  "switch_stmt", "switch_cases", "switch_case", "identifier",
  "formals_list", "function_identifier", "function_decl", "inpart",
  "obj_ref", "obj_ref_for_delete_only", "while_init", "do_init",
  "for_init", "for_in_init", "iter_stmt", "assign_stmts_opt", "cont_stmt",
  "break_stmt", "urlmethod", "level", "void_function_call",
  "function_call", "delete_call", "expr_list", "method_call", "objexpr",
  "objexpr_list", "assignop", "incdecop", "lvalue_expr", "lvalue", "expr",
  "expr_or_obj", "primary", "primary_constant", "init_vars", "init_var",
  "assign_stmt", "@2", "opcode_list", "with", "@3", "push_item",
  "push_list", "opcode", "@4", "property", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,    44,    61,
     433,    63,    58,    60,    62,    38,   124,    94,    43,    45,
      42,    47,    37,    33,   126,   434,   435,    46,    91,    93,
     123,   125,    59,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   205,   207,   206,   206,   208,   208,   209,   209,   209,
     210,   210,   211,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   213,   213,   214,   214,
     215,   216,   216,   217,   218,   218,   218,   219,   219,   220,
     220,   221,   221,   222,   223,   223,   223,   223,   224,   225,
     225,   226,   226,   227,   227,   228,   228,   229,   230,   231,
     231,   232,   232,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   234,   234,   234,   235,   235,   236,   237,   238,   238,
     238,   239,   239,   239,   239,   239,   240,   241,   242,   243,
     244,   244,   244,   244,   244,   245,   245,   246,   247,   248,
     248,   248,   248,   249,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   252,   253,   253,   253,
     254,   254,   255,   256,   256,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   258,   258,   259,   259,
     259,   260,   260,   260,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   263,   263,   263,   263,   263,   263,   263,
     264,   264,   264,   264,   264,   264,   265,   265,   266,   266,
     268,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   269,   269,   271,   270,   272,   272,   272,   272,   272,
     272,   272,   273,   273,   275,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     1,     2,     1,     1,     1,
       1,     2,     2,     1,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     2,     2,     4,
       1,     1,     3,     3,     0,     1,     1,     0,     2,     1,
       3,     4,     2,     3,     2,     7,     4,     9,     7,     2,
       3,     1,     3,     7,     5,     0,     1,     1,     7,     0,
       2,     4,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     4,     0,     1,     7,     2,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     0,     0,
       5,     6,    10,     7,     8,     0,     1,     2,     2,     0,
       2,     2,     2,     1,     4,     4,     7,     7,     7,     7,
       7,     4,     6,    14,     3,     8,     4,     6,     3,     3,
       3,     3,     3,     3,     4,     4,     4,     4,     4,     4,
       4,     4,     8,     4,     4,     4,     3,     4,     4,     4,
       4,     4,     6,     8,     4,     6,     2,     0,     1,     3,
       6,     7,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     1,     1,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     3,     3,     1,     2,     5,     4,     5,     7,     8,
       3,     1,     3,     1,     1,     1,     2,     2,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     2,
       0,     5,     2,     1,     1,     1,     1,     2,     2,     3,
       3,     1,     2,     0,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     0,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     1,     0,     0,   174,    57,     0,     0,
     186,   187,     0,     0,    64,     0,     0,     0,     0,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   147,
     137,   139,   138,   140,   144,   125,   126,   141,   142,   143,
     145,   146,     0,     0,   148,    30,    63,   266,   267,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,     0,    15,     3,     5,    13,     7,     0,     9,    25,
       0,    23,    22,    17,     0,    21,   271,     8,     0,     0,
      18,    19,    20,   333,   335,   334,   336,     0,     0,   268,
       0,   198,   197,    64,    65,    66,    67,    68,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      98,   119,   123,   124,   137,   139,   138,   140,   144,   125,
     126,   141,   142,   143,   145,   146,    63,   175,     0,   195,
       0,    37,   332,   326,     0,   246,   183,   182,   184,   181,
       0,     0,   321,   322,   324,   325,   320,   323,     0,     0,
       0,   247,     0,    49,     0,   311,   313,   269,   315,   270,
       0,   314,   268,   303,     0,   274,   275,     0,   330,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    44,     0,   247,    12,     0,    10,     6,     0,
      24,     0,     0,     0,   337,     0,     0,   255,   258,   257,
     256,   259,   260,   261,   263,   264,   265,     0,   262,     0,
     338,    16,   171,     0,   196,   271,     0,    51,     0,     0,
     329,     0,     0,     0,    63,   304,     0,   268,   276,   278,
     277,     0,   248,     0,   253,     0,     0,   316,     0,     0,
     317,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,     0,   236,
       0,     0,     0,     0,     0,     0,     0,     0,   218,   219,
     220,   221,   223,   222,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   214,   324,   323,     0,   324,   323,
       0,   323,     0,     0,     0,     0,     0,    43,     0,    14,
      11,    34,    31,    33,     0,     0,     0,   272,     0,   339,
     340,    37,     0,    37,     0,     0,     0,    55,     0,    38,
       0,   327,   185,   234,   247,     0,     0,     0,   310,     0,
       0,   312,   318,   301,   319,   302,   293,   294,   296,   291,
     292,   295,   279,   280,   297,   298,   299,     0,   289,   290,
     286,   287,   288,   284,   285,   281,   282,   283,     0,   384,
     376,   375,   386,   359,   343,   418,   422,   413,   416,   402,
     420,   421,   403,   404,   405,   354,     0,   358,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   378,   377,   379,   380,   381,   382,   383,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   406,   407,   412,   414,   415,   417,   419,   423,
     424,   425,     0,     0,   389,   408,   409,   410,   411,   385,
     387,   388,     0,   356,   341,   235,   237,   238,     0,   204,
     239,   240,   241,     0,   205,     0,   244,     0,     0,   216,
       0,     0,     0,     0,   211,     0,   225,   227,   229,   224,
     226,   228,   230,   231,     0,     0,     0,    46,   233,    35,
      36,    34,    26,     0,     0,     0,     0,   247,   273,   172,
       0,    37,     0,    52,   177,   269,   270,   268,   189,     0,
      56,    54,   328,     0,   306,     0,   249,   252,   254,     0,
       0,     0,     0,   357,   426,   427,   331,   342,     0,   199,
       0,     0,     0,   199,   199,   199,   203,   199,     0,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,     0,     0,     0,    32,    27,     0,    28,    59,
     190,     0,     0,   247,    37,     0,   189,     0,   195,     0,
     305,   247,   307,   300,     0,     0,   349,   350,   346,   347,
     348,   351,   345,   352,   355,   242,     0,     0,   217,     0,
       0,     0,     0,     0,     0,     0,   212,   245,     0,     0,
       0,    39,    37,     0,   191,   250,     0,   173,   176,     0,
     193,     0,    53,     0,   247,    48,   344,     0,   201,   200,
     202,   206,     0,     0,   207,   209,   208,   210,     0,     0,
      45,     0,    29,    42,     0,     0,    58,    60,   251,   194,
     188,   308,     0,   353,   243,   215,     0,   232,     0,    40,
       0,     0,     0,     0,   309,     0,    47,    41,     0,    62,
     192,     0,    61,     0,     0,     0,   213
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,   133,   134,   276,   135,   277,   571,   572,
     137,   403,   138,   573,   310,   690,   691,   139,   140,   141,
     142,   304,   143,   589,   144,   145,   693,   727,   146,   412,
     198,   226,   416,   584,   205,   148,   149,   743,   657,   150,
     306,   151,   152,   677,   615,   153,   227,   228,   321,   229,
     324,   325,   299,   230,   231,   232,   233,   322,   235,   236,
     202,   203,   160,   356,   532,   533,   601,   673,   674,   534,
     602,   642
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -593
static const yytype_int16 yypact[] =
{
      25,    40,  1410,  -593,  -134,  -128,  4481,  -593,  -120,  -117,
    -593,  -593,  4481,  3482,  -104,  2381,   -81,   -79,   -77,   -76,
     -70,   -68,   -66,  -593,   -63,   -62,   -60,   -58,   -57,   -55,
     -54,   -51,   -45,   -37,   -29,   -25,  -593,  -593,  -593,  -593,
    -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,
    -593,  -593,   -24,  -593,  -593,  -593,  -593,  -593,  -593,  -593,
    -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,
    -593,  -593,  -593,   -18,  -593,  -593,  -593,   -17,   -16,  -593,
    -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,
     -15,   -14,   -13,   -12,   -11,    -8,    -7,    -4,    -3,     3,
       8,     9,  2201,  2571,  -593,  -593,    10,  -593,  -593,  -593,
    -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,
    -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,
    -593,  1601,  -593,  1410,  -593,  -593,  -593,  4481,  -593,  -593,
     -21,  -593,  -593,  -593,    13,  -593,  -593,  -593,    15,  2201,
    -593,  -593,  -593,  -593,  -164,  -593,  -103,  4163,  -100,   -88,
      -9,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,
    -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,
    -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,
    -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,    17,  3842,
    2758,   -59,   -53,  -593,  3482,  -593,  -593,  -164,  -103,   -91,
      53,  4322,  -593,  -593,  -593,  -593,  -593,  -593,  2758,  2758,
    2758,  2571,  3662,  -593,  2758,  -593,  -593,  -593,  -593,  -593,
    4163,  -100,   257,  6201,    12,  -593,  -593,  2758,  -593,  2758,
    2758,    19,  2571,  2758,  2571,  2758,  2758,  2758,  2758,     4,
      20,    22,    23,    28,    30,    31,  2571,  2758,  2758,  2758,
    2758,  2758,  2758,  2758,  2758,  2758,    32,  2939,  3120,  3301,
    2758,  2758,    -5,    29,  2571,  -593,  1801,  -593,  -593,    21,
    -593,  2758,  2758,   111,   -91,  4481,  2758,  -593,  -593,  -593,
    -593,  -593,  -593,  -593,  -593,  -593,  -593,  2571,  -593,  2758,
    -593,  -593,  4481,  4481,    41,   218,    37,  -593,   841,  4481,
      58,  4481,    36,    43,    46,   -86,   -82,  -593,   191,   191,
     191,  -109,  -593,    70,  -593,  -116,  1091,   -91,  2571,  2758,
    -593,  4163,  2758,  2758,  2758,  2758,  2758,  2758,  2758,  2758,
    2758,  2758,  2758,  2758,  2758,  2758,  2758,  2758,  2758,  2758,
    2758,  2758,  2758,  2758,  -593,  1152,  6484,  1176,  4690,  -593,
      50,  5472,    51,  4712,  4773,  4795,   336,    79,  -593,  -593,
    -593,  -593,  -593,  -593,    55,  5533,  5553,  4857,  5614,  5634,
    5695,  5715,  4879,  5776,  -593,    56,    60,  4940,    61,    62,
    4962,    63,  5024,  5796,  5857,    59,  2201,  -593,  -166,  -593,
    -593,  -112,  -593,  -593,  5046,  5107,    65,    67,  5380,  -593,
    6201,   -59,  -160,    -6,  4004,  4163,    68,  2758,  2201,  -593,
    2571,  -593,  -593,  -593,  2571,  4640,  2758,  2571,  -593,  2571,
    4481,  -593,  -593,  -593,  6201,  -100,   431,   431,   431,   772,
     772,   431,   346,   346,   -19,   -19,   -19,  5877,   772,   772,
      54,    54,    54,   -28,   -28,   191,   191,   191,    73,  -593,
    -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,
    -593,  -593,  -593,  -593,  -593,  -593,   130,  -593,  -593,  -593,
    -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,
    -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,
    -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,
    -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,
    -593,  -593,   146,   148,  -593,  -593,  -593,  -593,  -593,  -593,
    -593,  -593,  1056,  -593,  -593,  -593,  -593,  -593,  2758,  -593,
    -593,  -593,  -593,  2758,  -593,   150,  -593,  2758,  2758,  -593,
    2758,  2758,  2758,  2758,  -593,  2758,  -593,  -593,  -593,  -593,
    -593,  -593,  -593,  -593,   891,   891,  4481,  -593,  -593,  -593,
    -593,  -105,  -593,    16,    85,  2201,  2758,  2571,    86,  -593,
    4481,   -59,    89,  -593,  -593,    90,    91,    92,  -593,    88,
    6201,   291,  -593,  -159,  -168,  5450,  -593,  -593,  -593,  2758,
    2201,  6484,   -46,  -593,  -593,  -593,  -593,  -593,  5129,  5938,
      94,  5958,  6019,  5938,  5938,   121,  6201,   121,   692,  -593,
    -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,
    -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,
    -593,  -593,    97,   125,   100,  -593,  -593,  4481,  -593,  -593,
    -593,  5191,  -158,  2571,   -59,  2201,  -593,  2201,  4004,  2201,
     -80,  2571,  -110,  6201,  2001,  6379,  -593,  -593,  -593,  -593,
    -593,  -593,  -593,  -593,   127,  -593,   -69,   102,  -593,  2758,
    2758,   107,   108,   109,   112,  2758,  -593,  -593,  2758,  2201,
    -135,  -593,   -59,     6,  -593,  -593,  -156,  -593,  -593,  2201,
    -593,   113,  -593,  -155,  2571,  -593,  -593,   -46,  -593,  -593,
    -593,  -593,  5213,  5274,  -593,  -593,  -593,  -593,  6039,  5296,
     200,  4481,  -593,   139,  2758,   137,  -593,  -593,  -593,  -593,
    -593,  -593,  -141,  -593,  -593,  -593,  2758,  -593,  2201,  -593,
     -22,  6100,  2201,  2201,   -78,  6120,  -593,  -593,  2201,  2201,
    -593,  2758,  2201,  6181,  2758,  5358,  -593
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -593,  -593,  -593,  -593,   187,  -592,    35,   159,  -593,  -250,
    -593,  -593,  -593,  -593,  -404,  -593,  -399,  -593,  -593,  -593,
    -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,    64,  -593,
    -593,    -1,   -90,  -593,   122,  -593,  -593,  -593,  -329,  -593,
    -330,  -593,  -593,  -542,  -223,   -10,    26,   151,  -270,    34,
     -99,  -593,   101,    49,    -2,    11,   667,    27,  -593,  -406,
    -593,    24,  -197,  -593,  -265,  -593,  -593,  -370,  -593,  -526,
    -593,  -227
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -274
static const yytype_int16 yytable[] =
{
     158,   147,   307,   206,   398,   415,   607,   579,   664,   569,
     570,   158,   427,   159,   724,   725,   569,   570,   580,   427,
     427,     6,   427,   427,   209,    -4,   708,   709,   154,   -63,
     -63,   647,   331,  -269,  -269,   661,   156,   427,   568,   207,
       3,   331,   234,   721,   581,   660,   695,   208,   728,   731,
     225,   157,   107,   108,   287,   288,   289,   290,   291,   292,
     293,   710,   430,   744,   294,   295,   296,   722,   161,   427,
     197,   681,   682,   683,   162,   684,   201,   666,   667,   668,
     669,   670,   671,   199,   672,   431,   200,  -273,  -273,   275,
     428,   297,   298,   704,  -270,  -270,   645,   285,   286,   210,
     158,   212,   213,   214,   215,   216,  -268,  -268,   217,   395,
     396,  -271,  -271,   159,   331,   425,   426,  -233,  -233,  -251,
    -251,   238,   237,   309,   406,   311,   239,   240,   154,   158,
     273,   158,   147,   241,   367,   242,   156,   243,   225,   607,
     244,   245,   159,   246,   159,   247,   248,   158,   249,   250,
     749,   157,   251,   155,   593,   158,   752,   154,   252,   154,
     159,   136,   351,   352,   353,   156,   253,   156,   284,   349,
     350,   351,   352,   353,   254,   154,   309,   655,   255,   256,
     157,   280,   157,   156,   313,   257,   258,   259,   260,   261,
     262,   263,   264,   301,   206,   265,   266,   158,   157,   267,
     268,   279,   158,   340,   341,   342,   269,   726,   300,   316,
     159,   270,   271,   274,   354,   209,   281,   583,   282,   414,
     302,   401,   317,   359,   368,   154,   369,   370,   158,   415,
     207,   397,   371,   156,   372,   373,   384,   420,   208,   417,
     422,   327,   349,   350,   351,   352,   353,   423,   157,   424,
     697,   331,   429,   155,   537,   539,   225,   545,   603,   546,
     556,   272,   566,   305,   557,   559,   560,   562,   576,   360,
     577,   362,   588,   600,   158,   315,   604,   225,   605,   225,
     610,   330,   155,   374,   155,   649,   323,   159,   723,   653,
     658,   225,   136,   656,  -179,  -180,  -178,   659,   678,   676,
     155,   687,   154,   688,   689,   707,   711,   652,   283,   225,
     156,   714,   715,   716,   402,   738,   717,   730,   740,   742,
     278,   646,   739,   582,   409,   157,   312,   699,   701,   435,
     617,   598,   225,   329,   747,   421,   665,   733,   643,     0,
       0,     0,   317,     0,     0,     0,     0,     0,     0,   407,
     155,     0,     0,     0,     0,   433,     0,     0,     0,     0,
       0,     0,     0,   225,     0,     0,   411,   413,     0,     0,
       0,     0,     0,   419,     0,   201,     0,     0,     0,     0,
       0,     0,     0,   696,     0,     0,     0,     0,     0,     0,
       0,   703,     0,     0,   158,     0,   331,   107,   108,   287,
     288,   289,   290,   291,   292,   293,   331,   159,     0,   294,
     295,   296,   158,   158,     0,     0,   158,     0,     0,     0,
       0,     0,   154,     0,     0,   159,   587,   155,     0,   159,
     156,     0,     0,     0,   732,   400,   328,   298,     0,     0,
     154,   585,     0,     0,   154,   157,     0,   592,   156,   586,
       0,     0,   156,     0,   596,   225,   597,     0,     0,   225,
       0,   307,   225,   157,   225,     0,     0,   157,   332,   333,
     334,   335,   336,   337,   338,   339,     0,     0,   332,   333,
     334,   335,   336,   337,     0,   340,   341,   342,     0,   407,
       0,   331,     0,     0,   323,   340,   341,   342,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   543,     0,     0,   343,     0,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,     0,
     544,     0,     0,     0,     0,     0,     0,   155,     0,     0,
       0,     0,     0,     0,     0,   567,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   155,   335,   336,     0,   155,
       0,     0,   648,   158,     0,     0,     0,   591,     0,     0,
     340,   341,   342,     0,     0,     0,   159,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   158,     0,
       0,   154,     0,     0,     0,     0,     0,     0,     0,   156,
       0,   159,   225,     0,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   157,     0,   154,     0,     0,     0,
     644,     0,     0,     0,   156,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   654,     0,     0,     0,     0,   157,
       0,     0,     0,   158,     0,   158,   158,   158,     0,     0,
       0,     0,   158,     0,     0,     0,   159,     0,   159,   159,
     159,     0,     0,     0,     0,   159,     0,     0,     0,     0,
       0,   154,     0,   154,   154,   154,     0,   158,   225,   156,
     154,   156,   156,   156,     0,     0,   225,   158,   156,     0,
     159,     0,     0,     0,   157,     0,   157,   157,   157,     0,
     159,   692,     0,   157,     0,   154,     0,     0,     0,     0,
       0,     0,     0,   156,     0,   154,   155,     0,     0,     0,
       0,     0,     0,   156,   650,     0,   158,     0,   157,   225,
     158,   158,     0,     0,     0,     0,   158,   158,   157,   159,
     158,   155,   331,   159,   159,     0,     0,     0,     0,   159,
     159,     0,     0,   159,   154,     0,     0,     0,   154,   154,
       0,     0,   156,     0,   154,   154,   156,   156,   154,     0,
       0,     0,   156,   156,     0,   692,   156,   157,     0,     0,
       0,   157,   157,     0,     0,     0,     0,   157,   157,     0,
       0,   157,     0,     0,     0,     0,   155,     0,   155,   155,
     155,     0,     0,     0,   698,   155,   700,     0,   702,     0,
       0,     0,     0,   400,   332,   333,   334,   335,   336,   337,
     338,   339,   331,     0,     0,     0,     0,     0,     0,     0,
     155,   340,   341,   342,     0,     0,     0,     0,   720,     0,
     155,     0,     0,     0,     0,     0,     0,     0,   729,     0,
       0,     0,     0,     0,     0,     0,     0,   308,     0,     0,
     685,     0,     0,   343,     0,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   318,   319,   320,     0,   155,
       0,   326,     0,   155,   155,     0,   686,   746,     0,   155,
     155,   331,   750,   155,   355,     0,   357,   358,   400,     0,
     361,   400,   363,   364,   365,   366,     0,     0,     0,     0,
       0,   340,   341,   342,   375,   376,   377,   378,   379,   380,
     381,   382,   383,     0,   387,   390,   392,   393,   394,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   404,   405,
       0,     0,     0,   408,     0,     0,     0,   346,   347,   348,
     349,   350,   351,   352,   353,     0,   410,     0,     0,     0,
       0,     0,     0,   332,   333,   334,   335,   336,   337,   338,
     339,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     340,   341,   342,     0,     0,     0,   434,     0,     0,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   619,   343,     0,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   418,   620,   621,   622,   623,
     624,   625,   626,   627,   628,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,     0,     0,
       0,   459,   460,   461,   462,   463,     0,   464,     0,     0,
     465,   466,     0,   467,   590,   468,   469,   470,   471,     0,
       0,     0,     0,   595,     0,     0,     0,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,     0,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
       0,   331,     0,   524,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   525,   526,   527,   528,     0,     0,
       0,     0,     0,   529,   530,   531,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   608,     0,     0,     0,     0,
     609,     0,   331,     0,   611,   612,     0,   613,   614,   616,
     616,     0,   618,   332,   333,   334,   335,   336,   337,   338,
     339,     0,     0,     0,     0,     0,   331,     0,     0,     0,
     340,   341,   342,   651,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   606,     0,     0,
       0,     0,     0,     0,     0,     0,   663,     0,     0,     0,
       0,     0,   343,     0,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   332,   333,   334,   335,   336,   337,
     338,   339,     0,     0,     0,   432,     0,     0,     0,     0,
       0,   340,   341,   342,     0,     0,     0,     0,   332,   333,
     334,   335,   336,   337,   338,   339,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   342,     0,     0,
       0,     0,     0,   343,     0,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,     0,   712,   713,     0,     0,
       0,     0,   718,     0,     0,   719,   458,   343,     0,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     535,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   741,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   745,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     5,     6,     0,     7,   753,     0,
       8,   755,     9,    10,    11,    12,     0,    13,    14,    15,
       0,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     0,     0,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       0,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
       0,     0,   102,   103,     0,     0,   104,     0,     0,     0,
     105,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   106,     0,     0,     0,     0,     0,     0,     0,     0,
     107,   108,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     5,     0,     0,     7,     0,
     131,     8,   132,     9,    10,    11,    12,     0,    13,    14,
      15,     0,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     0,
       0,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,     0,     0,   102,   103,     0,     0,   104,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   106,     0,     0,     0,     0,     0,     0,     0,
       0,   107,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   131,   275,   132,     4,     5,     0,     0,     7,     0,
       0,     8,     0,     9,    10,    11,    12,     0,    13,    14,
      15,     0,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     0,
       0,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,     0,     0,   102,   103,     0,     0,   104,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   106,     0,     0,     0,     0,     0,     0,     0,
       0,   107,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   131,   399,   132,     4,     5,     0,     0,     7,     0,
       0,     8,     0,     9,    10,    11,    12,     0,    13,    14,
      15,     0,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     0,
       0,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,     0,     0,   102,   103,     0,     0,   104,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   106,     0,     0,     0,     0,     0,     0,     0,
       0,   107,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   131,   705,   132,     4,     5,     0,     0,     7,     0,
       0,     8,     0,     9,    10,    11,    12,     0,    13,    14,
      15,     0,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     0,
       0,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,     0,     0,   102,   103,     0,     0,   104,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   106,     0,     0,     0,     0,     0,     0,     0,
       0,   107,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,     0,     0,
       0,     0,     0,     0,     0,     0,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   211,    13,    14,
       0,   131,     0,   132,    18,    19,    20,    21,    22,    23,
     168,    25,    26,    27,   172,   173,   174,   175,   176,   177,
     178,   179,    36,    37,    38,    39,    40,    41,    42,     0,
       0,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,   182,   183,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   100,
     195,     0,     0,     0,     0,     0,     0,   104,     0,     0,
       0,     0,     0,     0,   212,   213,   214,   215,   216,     0,
       0,   217,   106,     0,     0,     0,     0,     0,     0,     0,
       0,   107,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     218,     0,     0,     0,   219,   220,     6,     0,     0,   221,
       0,   222,     0,   223,   224,     0,     0,   211,    13,    14,
       0,     0,     0,     0,    18,    19,    20,    21,    22,    23,
     168,    25,    26,    27,   172,   173,   174,   175,   176,   177,
     178,   179,    36,    37,    38,    39,    40,    41,    42,     0,
       0,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,   182,   183,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   100,
     195,     0,     0,     0,     0,     0,     0,   104,     0,     0,
       0,     0,     0,     0,   212,   213,   214,   215,   216,     0,
       0,   217,   106,     0,     0,     0,     0,     0,     0,     0,
       0,   107,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     218,     0,     0,     6,   219,   220,     0,     0,     0,   221,
       0,   222,     0,     0,   224,    13,    14,     0,     0,     0,
       0,    18,    19,    20,    21,    22,    23,   168,    25,    26,
      27,   172,   173,   174,   175,   176,   177,   178,   179,    36,
      37,    38,    39,    40,    41,    42,     0,     0,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,     0,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,   182,   183,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   100,   195,     0,     0,
       0,     0,     0,     0,   104,     0,     0,     0,     0,     0,
       0,   212,   213,   214,   215,   216,     0,     0,   217,   106,
       0,     0,     0,     0,     0,     0,     0,     0,   107,   108,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,     0,     0,   218,     0,     0,
       0,   219,   220,     0,     0,     0,    13,    14,     0,     0,
       0,   224,    18,    19,    20,    21,    22,    23,   168,    25,
      26,    27,   172,   173,   174,   175,   176,   177,   178,   179,
      36,    37,    38,    39,    40,    41,    42,     0,     0,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     0,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,   182,   183,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   100,   195,     0,
       0,     0,     0,     0,     0,   104,     0,     0,     0,     0,
       0,     0,   212,   213,   385,   215,   216,     0,     0,   386,
     106,     0,     0,     0,     0,     0,     0,     0,     0,   107,
     108,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     6,     0,     0,   218,     0,
       0,     0,   219,   220,     0,     0,     0,    13,    14,     0,
       0,     0,   224,    18,    19,    20,    21,    22,    23,   168,
      25,    26,    27,   172,   173,   174,   175,   176,   177,   178,
     179,    36,    37,    38,    39,    40,    41,    42,     0,     0,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       0,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,   182,   183,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   100,   195,
       0,     0,     0,     0,     0,     0,   104,     0,     0,     0,
       0,     0,     0,   212,   213,   388,   215,   216,     0,     0,
     389,   106,     0,     0,     0,     0,     0,     0,     0,     0,
     107,   108,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     6,     0,     0,   218,
       0,     0,     0,   219,   220,     0,     0,     0,    13,    14,
       0,     0,     0,   224,    18,    19,    20,    21,    22,    23,
     168,    25,    26,    27,   172,   173,   174,   175,   176,   177,
     178,   179,    36,    37,    38,    39,    40,    41,    42,     0,
       0,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,   182,   183,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   100,
     195,     0,     0,     0,     0,     0,     0,   104,     0,     0,
       0,     0,     0,     0,   212,   213,   214,   215,   216,     0,
       0,   391,   106,     0,     0,     0,     0,     0,     0,     0,
       0,   107,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     218,     0,     0,     0,   219,   220,     0,     0,     0,     0,
      14,     0,     0,     0,   224,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
       0,     0,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,     0,     0,     0,     0,     0,     0,   104,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   106,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     163,     0,     0,     0,     0,   204,   164,   165,   166,   167,
      23,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,    36,    37,    38,    39,    40,    41,    42,
       0,     0,    43,    44,    45,    46,    47,    48,    49,    50,
      51,   180,     0,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,   181,    74,    75,    76,   182,   183,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,     0,     0,     0,     0,     0,     0,   104,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   303,     0,    13,
      14,     0,     0,   275,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
       0,     0,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,     0,     0,     0,     0,     0,     0,   104,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   106,     0,     0,     0,     0,     0,     0,
       0,     0,   107,   108,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,    12,
       0,    13,    14,     0,     0,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,     0,     0,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,     0,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,     0,     0,     0,     0,     0,     0,
     104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   106,     0,     0,     0,     0,
       0,     0,     0,     0,   107,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,    14,     0,     0,     0,     0,    18,    19,    20,    21,
      22,    23,   168,    25,    26,    27,   172,   173,   174,   175,
     176,   177,   178,   179,    36,    37,    38,    39,    40,    41,
      42,     0,     0,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,     0,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,   182,   183,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   100,   195,     0,     0,     0,     0,     0,     0,   104,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
      14,     0,     0,     0,     0,    18,    19,    20,    21,    22,
      23,   168,    25,    26,    27,   172,   173,   174,   175,   176,
     177,   178,   179,    36,    37,    38,    39,    40,    41,    42,
       0,     0,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,   182,   183,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     100,   195,     0,     0,     0,     0,     0,     0,   104,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   314,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   163,
       0,     0,     0,     0,     0,   164,   165,   166,   167,    23,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,    36,    37,    38,    39,    40,    41,    42,     0,
       0,    43,    44,    45,    46,    47,    48,    49,    50,    51,
     180,     0,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,   181,    74,    75,    76,   182,   183,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,     0,     0,     0,     0,     0,     0,   104,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   196,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   163,     0,
       0,     0,     0,     0,   164,   165,   166,   167,    23,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,    36,    37,    38,    39,    40,    41,    42,     0,     0,
      43,    44,    45,    46,    47,    48,    49,    50,    51,   180,
       0,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,   181,    74,    75,    76,   182,   183,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     331,     0,     0,     0,     0,     0,   104,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   594,   331,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,     0,     0,     0,
       0,     0,   332,   333,   334,   335,   336,   337,   338,   339,
       0,     0,     0,   331,     0,     0,     0,     0,     0,   340,
     341,   342,     0,     0,   332,   333,   334,   335,   336,   337,
     338,   339,     0,     0,     0,   331,     0,     0,     0,     0,
       0,   340,   341,   342,     0,     0,     0,     0,     0,     0,
       0,   343,     0,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   343,   536,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   332,   333,   334,   335,   336,
     337,   338,   339,     0,     0,     0,   540,   331,     0,     0,
       0,     0,   340,   341,   342,     0,     0,   332,   333,   334,
     335,   336,   337,   338,   339,     0,     0,     0,     0,   331,
       0,     0,     0,     0,   340,   341,   342,     0,     0,     0,
       0,     0,     0,     0,   343,     0,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   343,   541,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,     0,   332,
     333,   334,   335,   336,   337,   338,   339,     0,     0,   542,
     331,     0,     0,     0,     0,     0,   340,   341,   342,     0,
       0,   332,   333,   334,   335,   336,   337,   338,   339,     0,
       0,     0,   331,     0,     0,     0,     0,     0,   340,   341,
     342,     0,     0,     0,     0,     0,     0,     0,   343,     0,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     343,   549,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   332,   333,   334,   335,   336,   337,   338,   339,
       0,     0,     0,   554,   331,     0,     0,     0,     0,   340,
     341,   342,     0,     0,   332,   333,   334,   335,   336,   337,
     338,   339,     0,     0,     0,     0,   331,     0,     0,     0,
       0,   340,   341,   342,     0,     0,     0,     0,     0,     0,
       0,   343,     0,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   343,   558,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,     0,   332,   333,   334,   335,
     336,   337,   338,   339,     0,     0,   561,   331,     0,     0,
       0,     0,     0,   340,   341,   342,     0,     0,   332,   333,
     334,   335,   336,   337,   338,   339,     0,     0,     0,   331,
       0,     0,     0,     0,     0,   340,   341,   342,     0,     0,
       0,     0,     0,     0,     0,   343,     0,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   343,   563,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   332,
     333,   334,   335,   336,   337,   338,   339,     0,     0,     0,
     574,   331,     0,     0,     0,     0,   340,   341,   342,     0,
       0,   332,   333,   334,   335,   336,   337,   338,   339,     0,
       0,     0,     0,   331,     0,     0,     0,     0,   340,   341,
     342,     0,     0,     0,     0,     0,     0,     0,   343,     0,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     343,   575,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,     0,   332,   333,   334,   335,   336,   337,   338,
     339,     0,     0,   675,   331,     0,     0,     0,     0,     0,
     340,   341,   342,     0,     0,   332,   333,   334,   335,   336,
     337,   338,   339,     0,     0,     0,   331,     0,     0,     0,
       0,     0,   340,   341,   342,     0,     0,     0,     0,     0,
       0,     0,   343,     0,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   343,   694,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   332,   333,   334,   335,
     336,   337,   338,   339,     0,     0,     0,   734,   331,     0,
       0,     0,     0,   340,   341,   342,     0,     0,   332,   333,
     334,   335,   336,   337,   338,   339,     0,     0,     0,     0,
     331,     0,     0,     0,     0,   340,   341,   342,     0,     0,
       0,     0,     0,     0,     0,   343,     0,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   343,   735,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,     0,
     332,   333,   334,   335,   336,   337,   338,   339,     0,     0,
     737,     0,     0,     0,     0,     0,     0,   340,   341,   342,
     331,     0,   332,   333,   334,   335,   336,   337,   338,   339,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   340,
     341,   342,   331,     0,     0,     0,     0,     0,     0,   343,
       0,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   343,   756,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,     0,     0,     0,     0,     0,     0,   578,
       0,     0,   332,   333,   334,   335,   336,   337,   338,   339,
       0,     0,     0,   331,     0,     0,     0,     0,     0,   340,
     341,   342,     0,     0,   332,   333,   334,   335,   336,   337,
     338,   339,     0,   331,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,     0,     0,     0,     0,     0,     0,
       0,   343,     0,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,     0,     0,     0,     0,     0,     0,   662,
     538,     0,     0,   343,     0,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   332,   333,   334,   335,   336,
     337,   338,   339,     0,   331,     0,     0,     0,     0,     0,
       0,     0,   340,   341,   342,   332,   333,   334,   335,   336,
     337,   338,   339,     0,   331,     0,     0,     0,     0,     0,
       0,     0,   340,   341,   342,     0,     0,     0,     0,     0,
       0,   547,     0,     0,   343,     0,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,     0,     0,     0,     0,
       0,   548,     0,     0,   343,     0,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   332,   333,   334,   335,
     336,   337,   338,   339,     0,   331,     0,     0,     0,     0,
       0,     0,     0,   340,   341,   342,   332,   333,   334,   335,
     336,   337,   338,   339,     0,   331,     0,     0,     0,     0,
       0,     0,     0,   340,   341,   342,     0,     0,     0,     0,
       0,     0,   550,     0,     0,   343,     0,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,     0,     0,     0,
       0,     0,   551,     0,     0,   343,     0,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   332,   333,   334,
     335,   336,   337,   338,   339,     0,   331,     0,     0,     0,
       0,     0,     0,     0,   340,   341,   342,   332,   333,   334,
     335,   336,   337,   338,   339,     0,   331,     0,     0,     0,
       0,     0,     0,     0,   340,   341,   342,     0,     0,     0,
       0,     0,     0,   552,     0,     0,   343,     0,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,     0,     0,
       0,     0,     0,   553,     0,     0,   343,     0,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   332,   333,
     334,   335,   336,   337,   338,   339,     0,   331,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   342,   332,   333,
     334,   335,   336,   337,   338,   339,     0,   331,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   342,     0,     0,
       0,     0,     0,     0,   555,     0,     0,   343,     0,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,     0,
       0,     0,     0,     0,   564,     0,     0,   343,     0,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   332,
     333,   334,   335,   336,   337,   338,   339,     0,   331,     0,
       0,     0,     0,     0,     0,     0,   340,   341,   342,   332,
     333,   334,   335,   336,   337,   338,   339,     0,   331,     0,
       0,     0,     0,     0,     0,     0,   340,   341,   342,     0,
       0,     0,     0,     0,     0,   565,     0,     0,   343,     0,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
       0,     0,     0,     0,     0,     0,     0,     0,   343,   599,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     332,   333,   334,   335,   336,   337,   338,   339,     0,   331,
       0,     0,     0,     0,     0,     0,     0,   340,   341,   342,
     332,   333,   334,   335,   336,   337,   338,   339,     0,   331,
       0,     0,     0,     0,     0,     0,     0,   340,   341,   342,
       0,     0,     0,     0,     0,     0,   676,     0,     0,   343,
       0,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,     0,     0,     0,     0,     0,   679,     0,     0,   343,
       0,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   332,   333,   334,   335,   336,   337,   338,   339,     0,
     331,     0,     0,     0,     0,     0,     0,     0,   340,   341,
     342,   332,   333,   334,   335,   336,   337,   338,   339,     0,
     331,     0,     0,     0,     0,     0,     0,     0,   340,   341,
     342,     0,     0,     0,     0,     0,     0,   680,     0,     0,
     343,     0,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,     0,     0,     0,     0,     0,   736,     0,     0,
     343,     0,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   332,   333,   334,   335,   336,   337,   338,   339,
       0,   331,     0,     0,     0,     0,     0,     0,     0,   340,
     341,   342,   332,   333,   334,   335,   336,   337,   338,   339,
       0,   331,     0,     0,     0,     0,     0,     0,     0,   340,
     341,   342,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   343,   748,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,     0,     0,     0,     0,     0,   751,     0,
       0,   343,     0,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   332,   333,   334,   335,   336,   337,   338,
     339,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     340,   341,   342,   332,   333,   334,   335,   336,   337,   338,
     339,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     340,   341,   342,     0,     0,     0,     0,     0,     0,   754,
       0,     0,   343,     0,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,     0,     0,     0,     0,     0,     0,
       0,     0,   343,     0,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   459,   460,   461,   462,   463,   706,
     464,     0,     0,   465,   466,     0,   467,     0,   468,   469,
     470,   471,     0,     0,     0,     0,     0,     0,     0,     0,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,     0,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,     0,     0,     0,   524,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   525,   526,   527,
     528,     0,     0,     0,     0,     0,   529,   530,   531,   459,
     460,   461,   462,   463,     0,   464,     0,     0,   465,   466,
       0,   467,     0,   468,   469,   470,   471,     0,     0,     0,
       0,     0,     0,     0,     0,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,     0,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,     0,     0,
       0,   524,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   525,   526,   527,   528,     0,     0,     0,     0,
       0,   529,   530,   531
};

static const yytype_int16 yycheck[] =
{
       2,     2,   199,    13,   274,    11,   532,   411,   600,   121,
     122,    13,   178,     2,     8,     9,   121,   122,   178,   178,
     178,     5,   178,   178,    13,     0,    95,    96,     2,   197,
     198,    15,    60,   197,   198,   203,     2,   178,   204,    13,
       0,    60,    15,   178,   204,   204,   204,    13,   204,   204,
      15,     2,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   130,   178,   204,   152,   153,   154,   202,   202,   178,
       6,   613,   614,   615,   202,   617,    12,   123,   124,   125,
     126,   127,   128,   203,   130,   201,   203,   197,   198,   201,
     199,   179,   180,   203,   197,   198,   201,   197,   198,   203,
     102,   123,   124,   125,   126,   127,   197,   198,   130,   114,
     115,   197,   198,   102,    60,   197,   198,   197,   198,   197,
     198,   200,   203,   182,    13,   178,   203,   203,   102,   131,
     103,   133,   133,   203,   130,   203,   102,   203,   103,   665,
     203,   203,   131,   203,   133,   203,   203,   149,   203,   203,
     742,   102,   203,     2,   424,   157,   748,   131,   203,   133,
     149,     2,   190,   191,   192,   131,   203,   133,   157,   188,
     189,   190,   191,   192,   203,   149,   182,   581,   203,   203,
     131,   202,   133,   149,   131,   203,   203,   203,   203,   203,
     203,   203,   203,   202,   204,   203,   203,   199,   149,   203,
     203,   137,   204,   149,   150,   151,   203,   201,   159,   211,
     199,   203,   203,   203,   202,   204,   203,   414,   203,   178,
     203,   200,   211,   204,   204,   199,   204,   204,   230,    11,
     204,   202,   204,   199,   204,   204,   204,   179,   204,   202,
     204,   230,   188,   189,   190,   191,   192,   204,   199,   203,
     654,    60,   182,   102,   204,   204,   221,   178,   128,   204,
     204,   102,   203,   199,   204,   204,   204,   204,   203,   242,
     203,   244,   204,   200,   276,   211,   130,   242,   130,   244,
     130,   232,   131,   256,   133,   200,   222,   276,   692,   203,
     202,   256,   133,   204,   204,   204,   204,     6,   204,   178,
     149,   204,   276,   178,   204,   178,   204,   577,   149,   274,
     276,   204,   204,   204,   279,   115,   204,   204,   179,   182,
     133,   571,   721,   413,   297,   276,   204,   656,   658,   331,
     553,   430,   297,   232,   740,   311,   601,   707,   565,    -1,
      -1,    -1,   331,    -1,    -1,    -1,    -1,    -1,    -1,   285,
     199,    -1,    -1,    -1,    -1,   328,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   328,    -1,    -1,   302,   303,    -1,    -1,
      -1,    -1,    -1,   309,    -1,   311,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   653,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   661,    -1,    -1,   396,    -1,    60,   140,   141,   142,
     143,   144,   145,   146,   147,   148,    60,   396,    -1,   152,
     153,   154,   414,   415,    -1,    -1,   418,    -1,    -1,    -1,
      -1,    -1,   396,    -1,    -1,   414,   415,   276,    -1,   418,
     396,    -1,    -1,    -1,   704,   276,   179,   180,    -1,    -1,
     414,   415,    -1,    -1,   418,   396,    -1,   420,   414,   415,
      -1,    -1,   418,    -1,   427,   420,   429,    -1,    -1,   424,
      -1,   658,   427,   414,   429,    -1,    -1,   418,   132,   133,
     134,   135,   136,   137,   138,   139,    -1,    -1,   132,   133,
     134,   135,   136,   137,    -1,   149,   150,   151,    -1,   425,
      -1,    60,    -1,    -1,   430,   149,   150,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   178,    -1,    -1,   181,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,    -1,
     204,    -1,    -1,    -1,    -1,    -1,    -1,   396,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   396,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   414,   135,   136,    -1,   418,
      -1,    -1,   573,   575,    -1,    -1,    -1,   418,    -1,    -1,
     149,   150,   151,    -1,    -1,    -1,   575,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   600,    -1,
      -1,   575,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   575,
      -1,   600,   577,    -1,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   575,    -1,   600,    -1,    -1,    -1,
     566,    -1,    -1,    -1,   600,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   580,    -1,    -1,    -1,    -1,   600,
      -1,    -1,    -1,   655,    -1,   657,   658,   659,    -1,    -1,
      -1,    -1,   664,    -1,    -1,    -1,   655,    -1,   657,   658,
     659,    -1,    -1,    -1,    -1,   664,    -1,    -1,    -1,    -1,
      -1,   655,    -1,   657,   658,   659,    -1,   689,   653,   655,
     664,   657,   658,   659,    -1,    -1,   661,   699,   664,    -1,
     689,    -1,    -1,    -1,   655,    -1,   657,   658,   659,    -1,
     699,   647,    -1,   664,    -1,   689,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   689,    -1,   699,   575,    -1,    -1,    -1,
      -1,    -1,    -1,   699,   575,    -1,   738,    -1,   689,   704,
     742,   743,    -1,    -1,    -1,    -1,   748,   749,   699,   738,
     752,   600,    60,   742,   743,    -1,    -1,    -1,    -1,   748,
     749,    -1,    -1,   752,   738,    -1,    -1,    -1,   742,   743,
      -1,    -1,   738,    -1,   748,   749,   742,   743,   752,    -1,
      -1,    -1,   748,   749,    -1,   721,   752,   738,    -1,    -1,
      -1,   742,   743,    -1,    -1,    -1,    -1,   748,   749,    -1,
      -1,   752,    -1,    -1,    -1,    -1,   655,    -1,   657,   658,
     659,    -1,    -1,    -1,   655,   664,   657,    -1,   659,    -1,
      -1,    -1,    -1,   664,   132,   133,   134,   135,   136,   137,
     138,   139,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     689,   149,   150,   151,    -1,    -1,    -1,    -1,   689,    -1,
     699,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   699,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   200,    -1,    -1,
     178,    -1,    -1,   181,    -1,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   218,   219,   220,    -1,   738,
      -1,   224,    -1,   742,   743,    -1,   204,   738,    -1,   748,
     749,    60,   743,   752,   237,    -1,   239,   240,   749,    -1,
     243,   752,   245,   246,   247,   248,    -1,    -1,    -1,    -1,
      -1,   149,   150,   151,   257,   258,   259,   260,   261,   262,
     263,   264,   265,    -1,   267,   268,   269,   270,   271,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,   282,
      -1,    -1,    -1,   286,    -1,    -1,    -1,   185,   186,   187,
     188,   189,   190,   191,   192,    -1,   299,    -1,    -1,    -1,
      -1,    -1,    -1,   132,   133,   134,   135,   136,   137,   138,
     139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     149,   150,   151,    -1,    -1,    -1,   329,    -1,    -1,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   130,   181,    -1,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   204,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    -1,    21,    -1,    -1,
      24,    25,    -1,    27,   417,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,   426,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      -1,    60,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   108,   109,   110,   111,    -1,    -1,
      -1,    -1,    -1,   117,   118,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   538,    -1,    -1,    -1,    -1,
     543,    -1,    60,    -1,   547,   548,    -1,   550,   551,   552,
     553,    -1,   555,   132,   133,   134,   135,   136,   137,   138,
     139,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
     149,   150,   151,   576,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   599,    -1,    -1,    -1,
      -1,    -1,   181,    -1,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   132,   133,   134,   135,   136,   137,
     138,   139,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,
      -1,   149,   150,   151,    -1,    -1,    -1,    -1,   132,   133,
     134,   135,   136,   137,   138,   139,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   149,   150,   151,    -1,    -1,
      -1,    -1,    -1,   181,    -1,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,    -1,   679,   680,    -1,    -1,
      -1,    -1,   685,    -1,    -1,   688,   204,   181,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   724,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   736,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,   751,    -1,
      10,   754,    12,    13,    14,    15,    -1,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
      -1,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,    -1,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     140,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,    -1,     7,    -1,
     200,    10,   202,    12,    13,    14,    15,    -1,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    -1,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   200,   201,   202,     3,     4,    -1,    -1,     7,    -1,
      -1,    10,    -1,    12,    13,    14,    15,    -1,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    -1,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   200,   201,   202,     3,     4,    -1,    -1,     7,    -1,
      -1,    10,    -1,    12,    13,    14,    15,    -1,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    -1,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   200,   201,   202,     3,     4,    -1,    -1,     7,    -1,
      -1,    10,    -1,    12,    13,    14,    15,    -1,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    -1,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      -1,   200,    -1,   202,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,    -1,
      -1,   130,   131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     189,    -1,    -1,    -1,   193,   194,     5,    -1,    -1,   198,
      -1,   200,    -1,   202,   203,    -1,    -1,    16,    17,    18,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,    -1,
      -1,   130,   131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     189,    -1,    -1,     5,   193,   194,    -1,    -1,    -1,   198,
      -1,   200,    -1,    -1,   203,    17,    18,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,   123,   124,   125,   126,   127,    -1,    -1,   130,   131,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,    -1,    -1,   189,    -1,    -1,
      -1,   193,   194,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,   203,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,    -1,    -1,   130,
     131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,   189,    -1,
      -1,    -1,   193,   194,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,   203,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
      -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,   123,   124,   125,   126,   127,    -1,    -1,
     130,   131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     140,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,   189,
      -1,    -1,    -1,   193,   194,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,   203,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,    -1,
      -1,   130,   131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     189,    -1,    -1,    -1,   193,   194,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    -1,   203,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    -1,   203,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,    17,
      18,    -1,    -1,   201,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,    15,
      -1,    17,    18,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,    18,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   131,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
      18,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,    18,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,    18,    -1,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
      60,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,   149,
     150,   151,    -1,    -1,   132,   133,   134,   135,   136,   137,
     138,   139,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,
      -1,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   181,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   181,   204,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   132,   133,   134,   135,   136,
     137,   138,   139,    -1,    -1,    -1,   204,    60,    -1,    -1,
      -1,    -1,   149,   150,   151,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,   149,   150,   151,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   181,    -1,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   181,   204,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,    -1,   204,
      60,    -1,    -1,    -1,    -1,    -1,   149,   150,   151,    -1,
      -1,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,   149,   150,
     151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     181,   204,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,    -1,   204,    60,    -1,    -1,    -1,    -1,   149,
     150,   151,    -1,    -1,   132,   133,   134,   135,   136,   137,
     138,   139,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      -1,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   181,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   181,   204,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,   204,    60,    -1,    -1,
      -1,    -1,    -1,   149,   150,   151,    -1,    -1,   132,   133,
     134,   135,   136,   137,   138,   139,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,   149,   150,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   181,    -1,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,   204,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,    -1,    -1,
     204,    60,    -1,    -1,    -1,    -1,   149,   150,   151,    -1,
      -1,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,   149,   150,
     151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     181,   204,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,   132,   133,   134,   135,   136,   137,   138,
     139,    -1,    -1,   204,    60,    -1,    -1,    -1,    -1,    -1,
     149,   150,   151,    -1,    -1,   132,   133,   134,   135,   136,
     137,   138,   139,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   181,    -1,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   181,   204,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,    -1,   204,    60,    -1,
      -1,    -1,    -1,   149,   150,   151,    -1,    -1,   132,   133,
     134,   135,   136,   137,   138,   139,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,   149,   150,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   181,    -1,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,   204,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,    -1,
     132,   133,   134,   135,   136,   137,   138,   139,    -1,    -1,
     204,    -1,    -1,    -1,    -1,    -1,    -1,   149,   150,   151,
      60,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,
     150,   151,    60,    -1,    -1,    -1,    -1,    -1,    -1,   181,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   181,   204,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,    -1,    -1,    -1,    -1,    -1,    -1,   199,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,   149,
     150,   151,    -1,    -1,   132,   133,   134,   135,   136,   137,
     138,   139,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   181,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,    -1,    -1,    -1,    -1,    -1,    -1,   199,
     178,    -1,    -1,   181,    -1,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   132,   133,   134,   135,   136,
     137,   138,   139,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   149,   150,   151,   132,   133,   134,   135,   136,
     137,   138,   139,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,
      -1,   178,    -1,    -1,   181,    -1,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,    -1,    -1,    -1,    -1,
      -1,   178,    -1,    -1,   181,    -1,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   149,   150,   151,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   149,   150,   151,    -1,    -1,    -1,    -1,
      -1,    -1,   178,    -1,    -1,   181,    -1,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,    -1,    -1,    -1,
      -1,    -1,   178,    -1,    -1,   181,    -1,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   149,   150,   151,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   149,   150,   151,    -1,    -1,    -1,
      -1,    -1,    -1,   178,    -1,    -1,   181,    -1,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,    -1,    -1,
      -1,    -1,    -1,   178,    -1,    -1,   181,    -1,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   132,   133,
     134,   135,   136,   137,   138,   139,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   149,   150,   151,   132,   133,
     134,   135,   136,   137,   138,   139,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   149,   150,   151,    -1,    -1,
      -1,    -1,    -1,    -1,   178,    -1,    -1,   181,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,    -1,
      -1,    -1,    -1,    -1,   178,    -1,    -1,   181,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   149,   150,   151,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   149,   150,   151,    -1,
      -1,    -1,    -1,    -1,    -1,   178,    -1,    -1,   181,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     132,   133,   134,   135,   136,   137,   138,   139,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,   150,   151,
     132,   133,   134,   135,   136,   137,   138,   139,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,   150,   151,
      -1,    -1,    -1,    -1,    -1,    -1,   178,    -1,    -1,   181,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,    -1,    -1,    -1,    -1,    -1,   178,    -1,    -1,   181,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,   150,
     151,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,   150,
     151,    -1,    -1,    -1,    -1,    -1,    -1,   178,    -1,    -1,
     181,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,    -1,    -1,    -1,    -1,   178,    -1,    -1,
     181,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,
     150,   151,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,
     150,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,    -1,    -1,    -1,    -1,    -1,   178,    -1,
      -1,   181,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   132,   133,   134,   135,   136,   137,   138,
     139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     149,   150,   151,   132,   133,   134,   135,   136,   137,   138,
     139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,   178,
      -1,    -1,   181,    -1,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   181,    -1,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    25,    -1,    27,    -1,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    -1,    -1,    -1,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,
     111,    -1,    -1,    -1,    -1,    -1,   117,   118,   119,    15,
      16,    17,    18,    19,    -1,    21,    -1,    -1,    24,    25,
      -1,    27,    -1,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    -1,    -1,
      -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   108,   109,   110,   111,    -1,    -1,    -1,    -1,
      -1,   117,   118,   119
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   206,   207,     0,     3,     4,     5,     7,    10,    12,
      13,    14,    15,    17,    18,    19,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   112,   113,   116,   120,   131,   140,   141,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   200,   202,   208,   209,   211,   212,   215,   217,   222,
     223,   224,   225,   227,   229,   230,   233,   236,   240,   241,
     244,   246,   247,   250,   251,   252,   254,   258,   259,   260,
     267,   202,   202,    18,    24,    25,    26,    27,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      59,    81,    85,    86,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   131,   233,   235,   203,
     203,   233,   265,   266,   203,   239,   250,   251,   254,   260,
     203,    16,   123,   124,   125,   126,   127,   130,   189,   193,
     194,   198,   200,   202,   203,   211,   236,   251,   252,   254,
     258,   259,   260,   261,   262,   263,   264,   203,   200,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     203,   203,   212,   262,   203,   201,   210,   212,   209,   233,
     202,   203,   203,   212,   260,   197,   198,   142,   143,   144,
     145,   146,   147,   148,   152,   153,   154,   179,   180,   257,
     258,   202,   203,    15,   226,   233,   245,   267,   261,   182,
     219,   178,   239,   131,   131,   233,   259,   260,   261,   261,
     261,   253,   262,   233,   255,   256,   261,   260,   179,   257,
     258,    60,   132,   133,   134,   135,   136,   137,   138,   139,
     149,   150,   151,   181,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   202,   261,   268,   261,   261,   204,
     262,   261,   262,   261,   261,   261,   261,   130,   204,   204,
     204,   204,   204,   204,   262,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   204,   125,   130,   261,   125,   130,
     261,   130,   261,   261,   261,   114,   115,   202,   253,   201,
     212,   200,   211,   216,   261,   261,    13,   233,   261,   262,
     261,   233,   234,   233,   178,    11,   237,   202,   204,   233,
     179,   266,   204,   204,   203,   197,   198,   178,   199,   182,
     178,   201,   204,   262,   261,   259,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   204,    15,
      16,    17,    18,    19,    21,    24,    25,    27,    29,    30,
      31,    32,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    97,   108,   109,   110,   111,   117,
     118,   119,   269,   270,   274,   204,   204,   204,   178,   204,
     204,   204,   204,   178,   204,   178,   204,   178,   178,   204,
     178,   178,   178,   178,   204,   178,   204,   204,   204,   204,
     204,   204,   204,   204,   178,   178,   203,   212,   204,   121,
     122,   213,   214,   218,   204,   204,   203,   203,   199,   219,
     178,   204,   237,   267,   238,   251,   254,   260,   204,   228,
     261,   212,   262,   253,   131,   261,   262,   262,   255,   182,
     200,   271,   275,   128,   130,   130,   201,   274,   261,   261,
     130,   261,   261,   261,   261,   249,   261,   249,   261,   130,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   276,   276,   233,   201,   214,    15,   236,   200,
     212,   261,   253,   203,   233,   219,   204,   243,   202,     6,
     204,   203,   199,   261,   210,   269,   123,   124,   125,   126,
     127,   128,   130,   272,   273,   204,   178,   248,   204,   178,
     178,   248,   248,   248,   248,   178,   204,   204,   178,   204,
     220,   221,   233,   231,   204,   204,   253,   219,   212,   243,
     212,   245,   212,   253,   203,   201,    20,   178,    95,    96,
     130,   204,   261,   261,   204,   204,   204,   204,   261,   261,
     212,   178,   202,   219,     8,     9,   201,   232,   204,   212,
     204,   204,   253,   272,   204,   204,   178,   204,   115,   221,
     179,   261,   182,   242,   204,   261,   212,   264,   182,   210,
     212,   178,   210,   261,   178,   261,   204
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 183 "./swf5compiler.y"
    { bf = newBuffer();
		bc = newBuffer();
	}
    break;

  case 3:
#line 186 "./swf5compiler.y"
    { Buffer b = newBuffer();
		  bufferWriteConstants(b);
		  bufferConcat(b, bf);
		  bufferConcat(b, bc);
		  *((Buffer *)buffer) = b; }
    break;

  case 4:
#line 191 "./swf5compiler.y"
    { Buffer b = newBuffer(); *((Buffer *)buffer) = b; }
    break;

  case 7:
#line 201 "./swf5compiler.y"
    { bufferConcat(bc, (yyvsp[(1) - (1)].action)); }
    break;

  case 8:
#line 203 "./swf5compiler.y"
    { 
		  if(swfVersion > 6)
			bufferWriteFunction(bf, (yyvsp[(1) - (1)].function), 2); 
		  else
			bufferWriteFunction(bf, (yyvsp[(1) - (1)].function), 1);
		}
    break;

  case 9:
#line 211 "./swf5compiler.y"
    { bufferWriteClass(bf, (yyvsp[(1) - (1)].clazz)); }
    break;

  case 10:
#line 216 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(1) - (1)].action); }
    break;

  case 11:
#line 219 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(1) - (2)].action);
		  bufferConcat((yyval.action), (yyvsp[(2) - (2)].action)); }
    break;

  case 12:
#line 224 "./swf5compiler.y"
    { }
    break;

  case 13:
#line 228 "./swf5compiler.y"
    { (yyval.action) = NULL; }
    break;

  case 14:
#line 229 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(2) - (3)].action); }
    break;

  case 15:
#line 230 "./swf5compiler.y"
    { (yyval.action) = NULL; }
    break;

  case 16:
#line 231 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(1) - (2)].action); }
    break;

  case 27:
#line 247 "./swf5compiler.y"
    { 	
		(yyval.classMember) = (yyvsp[(1) - (2)].classMember);
		ASClassMember_append((yyvsp[(1) - (2)].classMember), (yyvsp[(2) - (2)].classMember));			
	}
    break;

  case 28:
#line 254 "./swf5compiler.y"
    { (yyval.classMember) = newASClassMember_function((yyvsp[(2) - (2)].function)); }
    break;

  case 29:
#line 255 "./swf5compiler.y"
    { (yyval.classMember) = (yyvsp[(3) - (4)].classMember); }
    break;

  case 30:
#line 260 "./swf5compiler.y"
    {
		if(classContext)
		{
			swf5error("Nested classes are not allowed\n");
			YYABORT;
		}
		classContext = 1;
	}
    break;

  case 31:
#line 271 "./swf5compiler.y"
    {(yyval.classMember) = NULL; }
    break;

  case 32:
#line 272 "./swf5compiler.y"
    { (yyval.classMember) = (yyvsp[(2) - (3)].classMember); }
    break;

  case 33:
#line 277 "./swf5compiler.y"
    { 
		(yyval.clazz) = newASClass((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].classMember));
		classContext = 0;
	}
    break;

  case 40:
#line 297 "./swf5compiler.y"
    { (yyval.classMember) = (yyvsp[(1) - (3)].classMember);
		  ASClassMember_append((yyvsp[(1) - (3)].classMember), (yyvsp[(3) - (3)].classMember)); 
		}
    break;

  case 41:
#line 304 "./swf5compiler.y"
    { 
		  ASVariable v = newASVariable((yyvsp[(1) - (4)].str), (yyvsp[(4) - (4)].action)); 
		  (yyval.classMember) = newASClassMember_variable(v);
		}
    break;

  case 42:
#line 309 "./swf5compiler.y"
    { 
			ASVariable v = newASVariable((yyvsp[(1) - (2)].str), NULL);
			(yyval.classMember) = newASClassMember_variable(v);
		}
    break;

  case 43:
#line 316 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(2) - (3)].action); bufferWriteOp((yyval.action), SWFACTION_THROW); }
    break;

  case 44:
#line 320 "./swf5compiler.y"
    { 	(yyval.action) = newBuffer();
									bufferWriteOp((yyval.action), SWFACTION_TRY);
									bufferWriteS16((yyval.action), 8);                /* TRY tag length */
									bufferWriteU8((yyval.action), 0);                 /* flags */
									bufferWriteS16((yyval.action), bufferLength((yyvsp[(2) - (2)].action))); /* try block length */
									bufferWriteS16((yyval.action), 0);                /* catch block length */
									bufferWriteS16((yyval.action), 0);                /* finally block length */
									bufferWriteU8((yyval.action), 0);                 /* catch name - empty string */
									bufferConcat((yyval.action), (yyvsp[(2) - (2)].action));                 /* append TRY body */
								 }
    break;

  case 45:
#line 330 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
									bufferWriteOp((yyval.action), SWFACTION_TRY);
									bufferWriteS16((yyval.action), 8+strlen((yyvsp[(5) - (7)].str)));       /* TRY tag length */
									bufferWriteU8((yyval.action), 1);                   /* flags */
									bufferWriteS16((yyval.action), bufferLength((yyvsp[(2) - (7)].action))+5); /* try block length + JUMP length */
									bufferWriteS16((yyval.action), bufferLength((yyvsp[(7) - (7)].action)));   /* catch block length */
									bufferWriteS16((yyval.action), 0);                  /* finally block length */
									bufferWriteHardString((yyval.action), (yyvsp[(5) - (7)].str), strlen((yyvsp[(5) - (7)].str))+1); /* catch name */
									bufferConcat((yyval.action), (yyvsp[(2) - (7)].action));                   /* append TRY body */
									bufferWriteOp((yyval.action), SWFACTION_JUMP);      /* jump after catch */
									bufferWriteS16((yyval.action), 2);                  /* ... */
									bufferWriteS16((yyval.action), bufferLength((yyvsp[(7) - (7)].action)));   /* ... */
									bufferConcat((yyval.action), (yyvsp[(7) - (7)].action));                   /* append CATCH body */
								}
    break;

  case 46:
#line 344 "./swf5compiler.y"
    {	(yyval.action) = newBuffer();
									bufferWriteOp((yyval.action), SWFACTION_TRY);
									bufferWriteS16((yyval.action), 8);                /* TRY tag length */
									bufferWriteU8((yyval.action), 2);                 /* flags */
									bufferWriteS16((yyval.action), bufferLength((yyvsp[(2) - (4)].action))); /* try block length */
									bufferWriteS16((yyval.action), 0);                /* catch block length */
									bufferWriteS16((yyval.action), bufferLength((yyvsp[(4) - (4)].action))); /* finally block length */
									bufferWriteU8((yyval.action), 0);                 /* catch name - empty string */
									bufferConcat((yyval.action), (yyvsp[(2) - (4)].action));                 /* append TRY body */
									bufferConcat((yyval.action), (yyvsp[(4) - (4)].action));                 /* append FINALLY body */
								 }
    break;

  case 47:
#line 355 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
									bufferWriteOp((yyval.action), SWFACTION_TRY);
									bufferWriteS16((yyval.action), 8+strlen((yyvsp[(5) - (9)].str)));        /* TRY tag length */
									bufferWriteU8((yyval.action), 3);                    /* flags */
									bufferWriteS16((yyval.action), bufferLength((yyvsp[(2) - (9)].action))+5);  /* try block length + JUMP length */
									bufferWriteS16((yyval.action), bufferLength((yyvsp[(7) - (9)].action)));    /* catch block length */
									bufferWriteS16((yyval.action), bufferLength((yyvsp[(9) - (9)].action)));    /* finally block length */
									bufferWriteHardString((yyval.action), (yyvsp[(5) - (9)].str), strlen((yyvsp[(5) - (9)].str))+1); /* catch name */
									bufferConcat((yyval.action), (yyvsp[(2) - (9)].action));                    /* append TRY body */
									bufferWriteOp((yyval.action), SWFACTION_JUMP);       /* jump after catch */
									bufferWriteS16((yyval.action), 2); 
									bufferWriteS16((yyval.action), bufferLength((yyvsp[(7) - (9)].action)));
									bufferConcat((yyval.action), (yyvsp[(7) - (9)].action));                    /* append CATCH body */
									bufferConcat((yyval.action), (yyvsp[(9) - (9)].action));                    /* append FINALLY body */
								}
    break;

  case 48:
#line 374 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (7)].action);
		  bufferWriteOp((yyval.action), SWFACTION_WITH);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), bufferLength((yyvsp[(6) - (7)].action)));
		  bufferConcat((yyval.action), (yyvsp[(6) - (7)].action)); }
    break;

  case 49:
#line 385 "./swf5compiler.y"
    { int tmp = chkctx(CTX_FUNCTION);
		  if(tmp < 0) 
		  {
			swf5error("return outside function");
			YYABORT;
		  }
		  (yyval.action) = newBuffer();
		  while(--tmp >= 0)
			bufferWriteOp((yyval.action), SWFACTION_POP);
		  bufferWriteUndef((yyval.action));
		  bufferWriteOp((yyval.action), SWFACTION_RETURN); }
    break;

  case 50:
#line 398 "./swf5compiler.y"
    { int tmp = chkctx(CTX_FUNCTION);
		  if(tmp < 0)
		  {
			swf5error("return outside function");
			YYABORT;
		  }
		  (yyval.action) = newBuffer();
		  while(--tmp >= 0)
			bufferWriteOp((yyval.action), SWFACTION_POP);
		  bufferConcat((yyval.action), (yyvsp[(2) - (3)].action));
		  bufferWriteOp((yyval.action), SWFACTION_RETURN); }
    break;

  case 52:
#line 413 "./swf5compiler.y"
    { bufferConcat((yyvsp[(1) - (3)].action), (yyvsp[(3) - (3)].action)); }
    break;

  case 53:
#line 418 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (7)].action);
		  bufferWriteOp((yyval.action), SWFACTION_IF);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), bufferLength((yyvsp[(7) - (7)].action))+5);
		  bufferConcatSimple((yyval.action), (yyvsp[(7) - (7)].action));
		  bufferWriteOp((yyval.action), SWFACTION_JUMP);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), bufferLength((yyvsp[(5) - (7)].action)));
		  bufferConcatSimple((yyval.action), (yyvsp[(5) - (7)].action)); }
    break;

  case 54:
#line 429 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (5)].action);
		  bufferWriteOp((yyval.action), SWFACTION_LOGICALNOT);
		  bufferWriteOp((yyval.action), SWFACTION_IF);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), bufferLength((yyvsp[(5) - (5)].action)));
		  bufferConcatSimple((yyval.action), (yyvsp[(5) - (5)].action)); }
    break;

  case 55:
#line 438 "./swf5compiler.y"
    { (yyval.action) = NULL; }
    break;

  case 56:
#line 439 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(1) - (1)].action); }
    break;

  case 57:
#line 444 "./swf5compiler.y"
    { addctx(CTX_SWITCH); }
    break;

  case 58:
#line 450 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (7)].action);
		  bufferResolveSwitch((yyval.action), &(yyvsp[(6) - (7)].switchcases));
		  bufferResolveJumps((yyval.action));
		  bufferWriteOp((yyval.action), SWFACTION_POP);
		  delctx(CTX_SWITCH);
 /* FIXME: continue in switch continues surrounding loop, if any */
	}
    break;

  case 59:
#line 462 "./swf5compiler.y"
    { (yyval.switchcases).count = 0;
		  (yyval.switchcases).list = 0; }
    break;

  case 60:
#line 466 "./swf5compiler.y"
    { (yyval.switchcases) = (yyvsp[(1) - (2)].switchcases);
		  (yyval.switchcases).list = (struct switchcase*) realloc((yyval.switchcases).list, ((yyval.switchcases).count+1) * sizeof(struct switchcase));
		  (yyval.switchcases).list[(yyval.switchcases).count] = (yyvsp[(2) - (2)].switchcase);
		  (yyval.switchcases).count++; }
    break;

  case 61:
#line 474 "./swf5compiler.y"
    { (yyval.switchcase).cond = (yyvsp[(2) - (4)].action);
		  (yyval.switchcase).action = (yyvsp[(4) - (4)].action);
		  if(chkctx(CTX_BREAK) == CTX_BREAK)
		  {
			delctx(CTX_BREAK);
		  	(yyval.switchcase).isbreak = 1;
		  }
		  else
			(yyval.switchcase).isbreak = 0; 
		}
    break;

  case 62:
#line 486 "./swf5compiler.y"
    { (yyval.switchcase).cond = NULL;
		  (yyval.switchcase).action = (yyvsp[(3) - (3)].action);
		  if(chkctx(CTX_BREAK) == CTX_BREAK)
	          {
			delctx(CTX_BREAK);
		  	(yyval.switchcase).isbreak = 1;
		  }
		  else
			(yyval.switchcase).isbreak = 0;
		}
    break;

  case 64:
#line 504 "./swf5compiler.y"
    { (yyval.str) = strdup("targetPath"); }
    break;

  case 65:
#line 505 "./swf5compiler.y"
    { (yyval.str) = strdup("random"); }
    break;

  case 66:
#line 506 "./swf5compiler.y"
    { (yyval.str) = strdup("getTimer"); }
    break;

  case 67:
#line 507 "./swf5compiler.y"
    { (yyval.str) = strdup("length"); }
    break;

  case 68:
#line 508 "./swf5compiler.y"
    { (yyval.str) = strdup("concat"); }
    break;

  case 69:
#line 509 "./swf5compiler.y"
    { (yyval.str) = strdup("substr"); }
    break;

  case 70:
#line 510 "./swf5compiler.y"
    { (yyval.str) = strdup("trace"); }
    break;

  case 71:
#line 511 "./swf5compiler.y"
    { (yyval.str) = strdup("int"); }
    break;

  case 72:
#line 512 "./swf5compiler.y"
    { (yyval.str) = strdup("ord"); }
    break;

  case 73:
#line 513 "./swf5compiler.y"
    { (yyval.str) = strdup("chr"); }
    break;

  case 74:
#line 514 "./swf5compiler.y"
    { (yyval.str) = strdup("getURL"); }
    break;

  case 75:
#line 515 "./swf5compiler.y"
    { (yyval.str) = strdup("getURL1"); }
    break;

  case 76:
#line 516 "./swf5compiler.y"
    { (yyval.str) = strdup("nextFrame"); }
    break;

  case 77:
#line 517 "./swf5compiler.y"
    { (yyval.str) = strdup("prevFrame"); }
    break;

  case 78:
#line 518 "./swf5compiler.y"
    { (yyval.str) = strdup("play"); }
    break;

  case 79:
#line 519 "./swf5compiler.y"
    { (yyval.str) = strdup("stop"); }
    break;

  case 80:
#line 520 "./swf5compiler.y"
    { (yyval.str) = strdup("toggleQuality"); }
    break;

  case 81:
#line 521 "./swf5compiler.y"
    { (yyval.str) = strdup("stopSounds"); }
    break;

  case 82:
#line 522 "./swf5compiler.y"
    { (yyval.str) = strdup("dup"); }
    break;

  case 83:
#line 523 "./swf5compiler.y"
    { (yyval.str) = strdup("swap"); }
    break;

  case 84:
#line 524 "./swf5compiler.y"
    { (yyval.str) = strdup("pop"); }
    break;

  case 85:
#line 525 "./swf5compiler.y"
    { (yyval.str) = strdup("push"); }
    break;

  case 86:
#line 526 "./swf5compiler.y"
    { (yyval.str) = strdup("setRegister"); }
    break;

  case 87:
#line 527 "./swf5compiler.y"
    { (yyval.str) = strdup("callFunction"); }
    break;

  case 88:
#line 528 "./swf5compiler.y"
    { (yyval.str) = strdup("callMethod"); }
    break;

  case 89:
#line 529 "./swf5compiler.y"
    { (yyval.str) = strdup("and"); }
    break;

  case 90:
#line 530 "./swf5compiler.y"
    { (yyval.str) = strdup("or"); }
    break;

  case 91:
#line 531 "./swf5compiler.y"
    { (yyval.str) = strdup("xor"); }
    break;

  case 92:
#line 532 "./swf5compiler.y"
    { (yyval.str) = strdup("modulo"); }
    break;

  case 93:
#line 533 "./swf5compiler.y"
    { (yyval.str) = strdup("add"); }
    break;

  case 94:
#line 534 "./swf5compiler.y"
    { (yyval.str) = strdup("lessThan"); }
    break;

  case 95:
#line 535 "./swf5compiler.y"
    { (yyval.str) = strdup("equals"); }
    break;

  case 96:
#line 536 "./swf5compiler.y"
    { (yyval.str) = strdup("inc"); }
    break;

  case 97:
#line 537 "./swf5compiler.y"
    { (yyval.str) = strdup("dec"); }
    break;

  case 98:
#line 538 "./swf5compiler.y"
    { (yyval.str) = strdup("typeof"); }
    break;

  case 99:
#line 539 "./swf5compiler.y"
    { (yyval.str) = strdup("enumerate"); }
    break;

  case 100:
#line 540 "./swf5compiler.y"
    { (yyval.str) = strdup("initobject"); }
    break;

  case 101:
#line 541 "./swf5compiler.y"
    { (yyval.str) = strdup("initarray"); }
    break;

  case 102:
#line 542 "./swf5compiler.y"
    { (yyval.str) = strdup("getmember"); }
    break;

  case 103:
#line 543 "./swf5compiler.y"
    { (yyval.str) = strdup("setmember"); }
    break;

  case 104:
#line 544 "./swf5compiler.y"
    { (yyval.str) = strdup("shiftleft"); }
    break;

  case 105:
#line 545 "./swf5compiler.y"
    { (yyval.str) = strdup("shiftright"); }
    break;

  case 106:
#line 546 "./swf5compiler.y"
    { (yyval.str) = strdup("shiftright2"); }
    break;

  case 107:
#line 547 "./swf5compiler.y"
    { (yyval.str) = strdup("varequals"); }
    break;

  case 108:
#line 548 "./swf5compiler.y"
    { (yyval.str) = strdup("oldAdd"); }
    break;

  case 109:
#line 549 "./swf5compiler.y"
    { (yyval.str) = strdup("subtract"); }
    break;

  case 110:
#line 550 "./swf5compiler.y"
    { (yyval.str) = strdup("multiply"); }
    break;

  case 111:
#line 551 "./swf5compiler.y"
    { (yyval.str) = strdup("divide"); }
    break;

  case 112:
#line 552 "./swf5compiler.y"
    { (yyval.str) = strdup("oldequals"); }
    break;

  case 113:
#line 553 "./swf5compiler.y"
    { (yyval.str) = strdup("oldlessthan"); }
    break;

  case 114:
#line 554 "./swf5compiler.y"
    { (yyval.str) = strdup("logicaland"); }
    break;

  case 115:
#line 555 "./swf5compiler.y"
    { (yyval.str) = strdup("logicalor"); }
    break;

  case 116:
#line 556 "./swf5compiler.y"
    { (yyval.str) = strdup("not"); }
    break;

  case 117:
#line 557 "./swf5compiler.y"
    { (yyval.str) = strdup("stringeq"); }
    break;

  case 118:
#line 558 "./swf5compiler.y"
    { (yyval.str) = strdup("stringlength"); }
    break;

  case 119:
#line 559 "./swf5compiler.y"
    { (yyval.str) = strdup("substring"); }
    break;

  case 120:
#line 560 "./swf5compiler.y"
    { (yyval.str) = strdup("getvariable"); }
    break;

  case 121:
#line 561 "./swf5compiler.y"
    { (yyval.str) = strdup("setvariable"); }
    break;

  case 122:
#line 562 "./swf5compiler.y"
    { (yyval.str) = strdup("settargetexpression"); }
    break;

  case 123:
#line 563 "./swf5compiler.y"
    { (yyval.str) = strdup("duplicateMovieClip"); }
    break;

  case 124:
#line 564 "./swf5compiler.y"
    { (yyval.str) = strdup("removeMovieClip"); }
    break;

  case 125:
#line 565 "./swf5compiler.y"
    { (yyval.str) = strdup("startDrag"); }
    break;

  case 126:
#line 566 "./swf5compiler.y"
    { (yyval.str) = strdup("stopDrag"); }
    break;

  case 127:
#line 567 "./swf5compiler.y"
    { (yyval.str) = strdup("stringlessthan"); }
    break;

  case 128:
#line 568 "./swf5compiler.y"
    { (yyval.str) = strdup("mblength"); }
    break;

  case 129:
#line 569 "./swf5compiler.y"
    { (yyval.str) = strdup("mbsubstring"); }
    break;

  case 130:
#line 570 "./swf5compiler.y"
    { (yyval.str) = strdup("mbord"); }
    break;

  case 131:
#line 571 "./swf5compiler.y"
    { (yyval.str) = strdup("mbchr"); }
    break;

  case 132:
#line 572 "./swf5compiler.y"
    { (yyval.str) = strdup("branchalways"); }
    break;

  case 133:
#line 573 "./swf5compiler.y"
    { (yyval.str) = strdup("branchiftrue"); }
    break;

  case 134:
#line 574 "./swf5compiler.y"
    { (yyval.str) = strdup("getURL2"); }
    break;

  case 135:
#line 575 "./swf5compiler.y"
    { (yyval.str) = strdup("post"); }
    break;

  case 136:
#line 576 "./swf5compiler.y"
    { (yyval.str) = strdup("get"); }
    break;

  case 137:
#line 577 "./swf5compiler.y"
    { (yyval.str) = strdup("loadVariables"); }
    break;

  case 138:
#line 578 "./swf5compiler.y"
    { (yyval.str) = strdup("loadVariablesNum"); }
    break;

  case 139:
#line 579 "./swf5compiler.y"
    { (yyval.str) = strdup("loadMovie"); }
    break;

  case 140:
#line 580 "./swf5compiler.y"
    { (yyval.str) = strdup("loadMovieNum"); }
    break;

  case 141:
#line 581 "./swf5compiler.y"
    { (yyval.str) = strdup("gotoAndStop"); }
    break;

  case 142:
#line 582 "./swf5compiler.y"
    { (yyval.str) = strdup("gotoAndPlay"); }
    break;

  case 143:
#line 583 "./swf5compiler.y"
    { (yyval.str) = strdup("setTarget"); }
    break;

  case 144:
#line 584 "./swf5compiler.y"
    { (yyval.str) = strdup("call"); }
    break;

  case 145:
#line 585 "./swf5compiler.y"
    { (yyval.str) = strdup("getProperty"); }
    break;

  case 146:
#line 586 "./swf5compiler.y"
    { (yyval.str) = strdup("setProperty"); }
    break;

  case 147:
#line 587 "./swf5compiler.y"
    { (yyval.str) = strdup("cast"); }
    break;

  case 148:
#line 589 "./swf5compiler.y"
    { (yyval.str) = strdup("this"); }
    break;

  case 149:
#line 592 "./swf5compiler.y"
    { (yyval.str) = strdup("_x"); }
    break;

  case 150:
#line 593 "./swf5compiler.y"
    { (yyval.str) = strdup("_y"); }
    break;

  case 151:
#line 594 "./swf5compiler.y"
    { (yyval.str) = strdup("_xscale"); }
    break;

  case 152:
#line 595 "./swf5compiler.y"
    { (yyval.str) = strdup("_yscale"); }
    break;

  case 153:
#line 596 "./swf5compiler.y"
    { (yyval.str) = strdup("_currentframe"); }
    break;

  case 154:
#line 597 "./swf5compiler.y"
    { (yyval.str) = strdup("_totalframes"); }
    break;

  case 155:
#line 598 "./swf5compiler.y"
    { (yyval.str) = strdup("_alpha"); }
    break;

  case 156:
#line 599 "./swf5compiler.y"
    { (yyval.str) = strdup("_visible"); }
    break;

  case 157:
#line 600 "./swf5compiler.y"
    { (yyval.str) = strdup("_width"); }
    break;

  case 158:
#line 601 "./swf5compiler.y"
    { (yyval.str) = strdup("_height"); }
    break;

  case 159:
#line 602 "./swf5compiler.y"
    { (yyval.str) = strdup("_rotation"); }
    break;

  case 160:
#line 603 "./swf5compiler.y"
    { (yyval.str) = strdup("_target"); }
    break;

  case 161:
#line 604 "./swf5compiler.y"
    { (yyval.str) = strdup("_framesloaded"); }
    break;

  case 162:
#line 605 "./swf5compiler.y"
    { (yyval.str) = strdup("_name"); }
    break;

  case 163:
#line 606 "./swf5compiler.y"
    { (yyval.str) = strdup("_droptarget"); }
    break;

  case 164:
#line 607 "./swf5compiler.y"
    { (yyval.str) = strdup("_url"); }
    break;

  case 165:
#line 608 "./swf5compiler.y"
    { (yyval.str) = strdup("_highquality"); }
    break;

  case 166:
#line 609 "./swf5compiler.y"
    { (yyval.str) = strdup("_focusrect"); }
    break;

  case 167:
#line 610 "./swf5compiler.y"
    { (yyval.str) = strdup("_soundbuftime"); }
    break;

  case 168:
#line 611 "./swf5compiler.y"
    { (yyval.str) = strdup("_quality"); }
    break;

  case 169:
#line 612 "./swf5compiler.y"
    { (yyval.str) = strdup("_xmouse"); }
    break;

  case 170:
#line 613 "./swf5compiler.y"
    { (yyval.str) = strdup("_ymouse"); }
    break;

  case 171:
#line 618 "./swf5compiler.y"
    { (yyval.exprlist).buffer = newBuffer();
		  (yyval.exprlist).count = 0; }
    break;

  case 172:
#line 622 "./swf5compiler.y"
    { (yyval.exprlist).buffer = newBuffer();
		  bufferWriteHardString((yyval.exprlist).buffer, (yyvsp[(1) - (2)].str), strlen((yyvsp[(1) - (2)].str))+1);
		  (yyval.exprlist).count = 1;
		  free((yyvsp[(1) - (2)].str)); }
    break;

  case 173:
#line 628 "./swf5compiler.y"
    { (yyval.exprlist) = (yyvsp[(1) - (4)].exprlist);
		  bufferWriteHardString((yyval.exprlist).buffer, (yyvsp[(3) - (4)].str), strlen((yyvsp[(3) - (4)].str))+1);
		  ++(yyval.exprlist).count;
		  free((yyvsp[(3) - (4)].str)); }
    break;

  case 174:
#line 635 "./swf5compiler.y"
    { addctx(CTX_FUNCTION); (yyval.str) = NULL; }
    break;

  case 175:
#line 636 "./swf5compiler.y"
    { addctx(CTX_FUNCTION); (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 176:
#line 641 "./swf5compiler.y"
    {
		(yyval.function) = newASFunction();
		(yyval.function)->name = (yyvsp[(2) - (7)].str);
		(yyval.function)->params = (yyvsp[(4) - (7)].exprlist);
		(yyval.function)->code = (yyvsp[(7) - (7)].action);	
		delctx(CTX_FUNCTION);	
	}
    break;

  case 177:
#line 652 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(2) - (2)].action); }
    break;

  case 178:
#line 657 "./swf5compiler.y"
    { if((yyvsp[(1) - (1)].lval).obj)
		  {
		    (yyval.action) = (yyvsp[(1) - (1)].lval).obj;
		    (yyval.action)->hasObject = 1;
		    if((yyvsp[(1) - (1)].lval).ident)
		      bufferConcat((yyval.action), (yyvsp[(1) - (1)].lval).ident);
		    else
		      bufferConcat((yyval.action), (yyvsp[(1) - (1)].lval).memexpr);

		    bufferWriteOp((yyval.action), SWFACTION_GETMEMBER);
		  }
		  else
		  {
		    (yyval.action) = (yyvsp[(1) - (1)].lval).ident;
		  }
		}
    break;

  case 181:
#line 680 "./swf5compiler.y"
    { if((yyvsp[(1) - (1)].lval).obj)
		  {
		    (yyval.action) = (yyvsp[(1) - (1)].lval).obj;
		    (yyval.action)->hasObject = 1; 
		    if((yyvsp[(1) - (1)].lval).ident)
		      bufferConcat((yyval.action), (yyvsp[(1) - (1)].lval).ident);
		    else
		      bufferConcat((yyval.action), (yyvsp[(1) - (1)].lval).memexpr);
		  }
		  else
		  {
		    (yyval.action) = (yyvsp[(1) - (1)].lval).ident;
		  }
		}
    break;

  case 185:
#line 697 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(2) - (3)].action); }
    break;

  case 186:
#line 702 "./swf5compiler.y"
    { addctx(CTX_LOOP); }
    break;

  case 187:
#line 707 "./swf5compiler.y"
    { addctx(CTX_LOOP); }
    break;

  case 188:
#line 712 "./swf5compiler.y"
    { addctx(CTX_LOOP); }
    break;

  case 189:
#line 717 "./swf5compiler.y"
    { addctx(CTX_FOR_IN); }
    break;

  case 190:
#line 722 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (5)].action);
		  bufferWriteOp((yyval.action), SWFACTION_LOGICALNOT);
		  bufferWriteOp((yyval.action), SWFACTION_IF);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), bufferLength((yyvsp[(5) - (5)].action))+5);
		  bufferConcat((yyval.action), (yyvsp[(5) - (5)].action));
		  bufferWriteOp((yyval.action), SWFACTION_JUMP);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), -(bufferLength((yyval.action))+2));
		  bufferResolveJumps((yyval.action));
		  delctx(CTX_LOOP); }
    break;

  case 191:
#line 735 "./swf5compiler.y"
    { if((yyvsp[(2) - (6)].action))
			{	(yyval.action) = (yyvsp[(2) - (6)].action);
		  		bufferConcat((yyval.action), (yyvsp[(5) - (6)].action));
			}
			else
				(yyval.action) = (yyvsp[(5) - (6)].action);
		  bufferWriteOp((yyval.action), SWFACTION_IF);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), -(bufferLength((yyval.action))+2));
		  bufferResolveJumps((yyval.action));
		  delctx(CTX_LOOP); }
    break;

  case 192:
#line 748 "./swf5compiler.y"
    {
		  int continue_len;
		  if((yyvsp[(3) - (10)].action))
		    (yyval.action) = (yyvsp[(3) - (10)].action);
		  else
		    (yyval.action) = newBuffer();

		  continue_len = bufferLength ((yyvsp[(7) - (10)].action));
		  if((yyvsp[(10) - (10)].action))
		    bufferConcatSimple((yyvsp[(10) - (10)].action), (yyvsp[(7) - (10)].action));
		  else if ((yyvsp[(7) - (10)].action))
		    (yyvsp[(10) - (10)].action) = (yyvsp[(7) - (10)].action);
		  else 
		    (yyvsp[(10) - (10)].action) = newBuffer();
		  if((yyvsp[(5) - (10)].action))
		  {
                    bufferWriteOp((yyvsp[(5) - (10)].action), SWFACTION_LOGICALNOT);
                    bufferWriteOp((yyvsp[(5) - (10)].action), SWFACTION_IF);
                    bufferWriteS16((yyvsp[(5) - (10)].action), 2);
                    bufferWriteS16((yyvsp[(5) - (10)].action), bufferLength((yyvsp[(10) - (10)].action))+5);
		    bufferConcat((yyvsp[(5) - (10)].action), (yyvsp[(10) - (10)].action));
                  }
		  else
		    (yyvsp[(5) - (10)].action) = (yyvsp[(10) - (10)].action);

                  bufferWriteOp((yyvsp[(5) - (10)].action), SWFACTION_JUMP);
                  bufferWriteS16((yyvsp[(5) - (10)].action), 2);
                  bufferWriteS16((yyvsp[(5) - (10)].action), -(bufferLength((yyvsp[(5) - (10)].action))+2));
		  /* need to jump to last part of for stmt in continue case */
		  if (continue_len)
		    bufferResolveJumpsFull((yyvsp[(5) - (10)].action), (yyvsp[(5) - (10)].action)->pos, (yyvsp[(5) - (10)].action)->pos - continue_len - 5);
		  else
		    bufferResolveJumps((yyvsp[(5) - (10)].action));

                  bufferConcat((yyval.action), (yyvsp[(5) - (10)].action));
		  delctx(CTX_LOOP);
                }
    break;

  case 193:
#line 787 "./swf5compiler.y"
    { Buffer b2, b3;
		  int tmp;

		  (yyval.action) = (yyvsp[(4) - (7)].action);
		  if((yyvsp[(4) - (7)].action)->hasObject)
			bufferWriteOp((yyval.action), SWFACTION_ENUMERATE2);
		  else
			bufferWriteOp((yyval.action), SWFACTION_ENUMERATE);

		  b2 = newBuffer();
		  bufferWriteSetRegister(b2, 0);
		  bufferWriteOp(b2, SWFACTION_PUSH);
		  bufferWriteS16(b2, 1);
		  bufferWriteU8(b2, 2);
		  bufferWriteOp(b2, SWFACTION_EQUALS2);
		  bufferWriteOp(b2, SWFACTION_IF);
		  bufferWriteS16(b2, 2);

		  b3 = newBuffer();
/* basically a lvalue could be used here rather than an ident !!! */
/* probably by using reg1 for the test rather than reg0 */
		  bufferWriteString(b3, (yyvsp[(3) - (7)].str), strlen((yyvsp[(3) - (7)].str))+1);
		  bufferWriteRegister(b3, 0);
		  bufferWriteOp(b3, SWFACTION_SETVARIABLE);
		  bufferConcat(b3, (yyvsp[(7) - (7)].action));
		  bufferWriteS16(b2, bufferLength(b3) + 5);
		  tmp = bufferLength(b2) + bufferLength(b3) + 5;
		  bufferWriteOp(b3, SWFACTION_JUMP);
		  bufferWriteS16(b3, 2);
		  bufferWriteS16(b3, -tmp);
		  bufferConcat(b2, b3);
		  bufferResolveJumps(b2);
		  bufferConcat((yyval.action), b2);
		  delctx(CTX_FOR_IN);
		  free((yyvsp[(3) - (7)].str)); }
    break;

  case 194:
#line 824 "./swf5compiler.y"
    { Buffer b2, b3;
		  int tmp;

		  (yyval.action) = (yyvsp[(5) - (8)].action);
		  if((yyvsp[(5) - (8)].action)->hasObject)
			bufferWriteOp((yyval.action), SWFACTION_ENUMERATE2);        
		  else
			bufferWriteOp((yyval.action), SWFACTION_ENUMERATE); 

		  b2 = newBuffer();
		  bufferWriteSetRegister(b2, 0);
		  bufferWriteOp(b2, SWFACTION_PUSH);
		  bufferWriteS16(b2, 1);
		  bufferWriteU8(b2, 2);
		  bufferWriteOp(b2, SWFACTION_EQUALS2);
		  bufferWriteOp(b2, SWFACTION_IF);
		  bufferWriteS16(b2, 2);
		  // add size later

		  b3 = newBuffer();
		  bufferWriteString(b3, (yyvsp[(4) - (8)].str), strlen((yyvsp[(4) - (8)].str))+1);
		  bufferWriteRegister(b3, 0);
		  bufferWriteOp(b3, SWFACTION_DEFINELOCAL);
		  bufferConcat(b3, (yyvsp[(8) - (8)].action));
		  bufferWriteS16(b2, bufferLength(b3) + 5);
		  tmp = bufferLength(b2) + bufferLength(b3) + 5;
		  bufferWriteOp(b3, SWFACTION_JUMP);
		  bufferWriteS16(b3, 2);
		  bufferWriteS16(b3, -tmp);
		  bufferConcat(b2, b3);
		  bufferResolveJumps(b2);
		  bufferConcat((yyval.action), b2);
		  delctx(CTX_FOR_IN);
		  free((yyvsp[(4) - (8)].str)); }
    break;

  case 195:
#line 861 "./swf5compiler.y"
    { (yyval.action) = NULL; }
    break;

  case 197:
#line 869 "./swf5compiler.y"
    { 
		  if(chkctx(CTX_CONTINUE) < 0)
		  {
			swf5error("continue outside loop");
			YYABORT;
		  }
		  (yyval.action) = newBuffer();
		  bufferWriteOp((yyval.action), SWFACTION_JUMP);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), MAGIC_CONTINUE_NUMBER); }
    break;

  case 198:
#line 884 "./swf5compiler.y"
    { int context = chkctx(CTX_BREAK);
		  (yyval.action) = newBuffer();
		  if(context == CTX_FOR_IN || context == CTX_LOOP)
		  {
		  	if(CTX_FOR_IN)	/* break out of a for .. in */
				bufferWriteOp((yyval.action), SWFACTION_POP);
		  	bufferWriteOp((yyval.action), SWFACTION_JUMP);
		  	bufferWriteS16((yyval.action), 2);
		  	bufferWriteS16((yyval.action), MAGIC_BREAK_NUMBER); 
		  }
		  else if(context == CTX_SWITCH)
		  {
			addctx(CTX_BREAK);	
		  }
		  else
		  {
			swf5error("break outside switch / loop");
			YYABORT;
		  }
		}
    break;

  case 199:
#line 908 "./swf5compiler.y"
    { (yyval.getURLMethod) = GETURL_METHOD_NOSEND; }
    break;

  case 200:
#line 910 "./swf5compiler.y"
    { (yyval.getURLMethod) = GETURL_METHOD_GET; }
    break;

  case 201:
#line 912 "./swf5compiler.y"
    { (yyval.getURLMethod) = GETURL_METHOD_POST; }
    break;

  case 202:
#line 914 "./swf5compiler.y"
    { if(strcasecmp((yyvsp[(2) - (2)].str), "GET") == 0)
				    (yyval.getURLMethod) = GETURL_METHOD_GET;
				  else if(strcasecmp((yyvsp[(2) - (2)].str), "POST") == 0)
				    (yyval.getURLMethod) = GETURL_METHOD_POST;
				  else (yyval.getURLMethod) = GETURL_METHOD_NOSEND;
				}
    break;

  case 203:
#line 924 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), "_level", 7);
		  bufferConcat((yyval.action), (yyvsp[(1) - (1)].action));
		  bufferWriteOp((yyval.action), SWFACTION_STRINGCONCAT); }
    break;

  case 204:
#line 933 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteOp((yyval.action), SWFACTION_TRACE); }
    break;

  case 205:
#line 937 "./swf5compiler.y"
    {
#ifdef DEBUG
		  printf("void_function_call: GETURL '(' expr ')'\n");
#endif
		  (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteOp((yyval.action), SWFACTION_PUSH);
		  bufferWriteS16((yyval.action), 2); bufferWriteS16((yyval.action), 0); // two 0 bytes	
		  bufferWriteOp((yyval.action), SWFACTION_GETURL2);
		  bufferWriteS16((yyval.action), 1);
		  bufferWriteU8((yyval.action), 0); }
    break;

  case 206:
#line 949 "./swf5compiler.y"
    {
#ifdef DEBUG
		  printf("void_function_call: GETURL '(' expr ',' expr urlmethod ')'\n");
#endif
		  (yyval.action) = (yyvsp[(3) - (7)].action);
		  bufferConcat((yyval.action), (yyvsp[(5) - (7)].action));
		  bufferWriteOp((yyval.action), SWFACTION_GETURL2);
		  bufferWriteS16((yyval.action), 1);
		  bufferWriteU8((yyval.action), (yyvsp[(6) - (7)].getURLMethod)); }
    break;

  case 207:
#line 960 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (7)].action);
		  bufferConcat((yyval.action), (yyvsp[(5) - (7)].action));
		  bufferWriteOp((yyval.action), SWFACTION_GETURL2);
		  bufferWriteS16((yyval.action), 1);
		  bufferWriteU8((yyval.action), 0xc0+(yyvsp[(6) - (7)].getURLMethod)); }
    break;

  case 208:
#line 967 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (7)].action);
		  bufferConcat((yyval.action), (yyvsp[(5) - (7)].action));
		  bufferWriteOp((yyval.action), SWFACTION_GETURL2);
		  bufferWriteS16((yyval.action), 1);
		  bufferWriteU8((yyval.action), 0x80+(yyvsp[(6) - (7)].getURLMethod)); }
    break;

  case 209:
#line 974 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (7)].action);
		  bufferConcat((yyval.action), (yyvsp[(5) - (7)].action));
		  bufferWriteOp((yyval.action), SWFACTION_GETURL2);
		  bufferWriteS16((yyval.action), 1);
		  bufferWriteU8((yyval.action), 0x40+(yyvsp[(6) - (7)].getURLMethod)); }
    break;

  case 210:
#line 981 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (7)].action);
		  bufferConcat((yyval.action), (yyvsp[(5) - (7)].action));
		  bufferWriteOp((yyval.action), SWFACTION_GETURL2);
		  bufferWriteS16((yyval.action), 1);
		  bufferWriteU8((yyval.action), (yyvsp[(6) - (7)].getURLMethod)); }
    break;

  case 211:
#line 988 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteOp((yyval.action), SWFACTION_CALLFRAME);
		  bufferWriteS16((yyval.action), 0); }
    break;

  case 212:
#line 994 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), "0", 2); /* no constraint */
		  bufferConcat((yyval.action), (yyvsp[(5) - (6)].action));
		  bufferConcat((yyval.action), (yyvsp[(3) - (6)].action));
		  bufferWriteOp((yyval.action), SWFACTION_STARTDRAG); }
    break;

  case 213:
#line 1001 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferConcat((yyval.action), (yyvsp[(7) - (14)].action));
		  bufferConcat((yyval.action), (yyvsp[(11) - (14)].action));
		  bufferConcat((yyval.action), (yyvsp[(9) - (14)].action));
		  bufferConcat((yyval.action), (yyvsp[(13) - (14)].action));
		  bufferWriteString((yyval.action), "1", 2); /* has constraint */
		  bufferConcat((yyval.action), (yyvsp[(5) - (14)].action));
		  bufferConcat((yyval.action), (yyvsp[(3) - (14)].action));
		  bufferWriteOp((yyval.action), SWFACTION_STARTDRAG); }
    break;

  case 214:
#line 1012 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteOp((yyval.action), SWFACTION_ENDDRAG); }
    break;

  case 215:
#line 1017 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (8)].action);
		  bufferConcat((yyval.action), (yyvsp[(5) - (8)].action));
		  bufferConcat((yyval.action), (yyvsp[(7) - (8)].action));
		  bufferWriteInt((yyval.action), 16384); /* magic number */
		  bufferWriteOp((yyval.action), SWFACTION_ADD);
		  bufferWriteOp((yyval.action), SWFACTION_DUPLICATECLIP); }
    break;

  case 216:
#line 1025 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteOp((yyval.action), SWFACTION_REMOVECLIP); }
    break;

  case 217:
#line 1029 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteOp((yyval.action), SWFACTION_GETURL);
		  bufferWriteS16((yyval.action), strlen((yyvsp[(3) - (6)].str)) + strlen((yyvsp[(5) - (6)].str)) + 2);
		  bufferWriteHardString((yyval.action), (yyvsp[(3) - (6)].str), strlen((yyvsp[(3) - (6)].str)));
		  bufferWriteU8((yyval.action), 0);
		  bufferWriteHardString((yyval.action), (yyvsp[(5) - (6)].str), strlen((yyvsp[(5) - (6)].str)));
		  bufferWriteU8((yyval.action), 0); }
    break;

  case 218:
#line 1039 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteOp((yyval.action), SWFACTION_NEXTFRAME); }
    break;

  case 219:
#line 1043 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteOp((yyval.action), SWFACTION_PREVFRAME); }
    break;

  case 220:
#line 1047 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteOp((yyval.action), SWFACTION_PLAY); }
    break;

  case 221:
#line 1051 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteOp((yyval.action), SWFACTION_STOP); }
    break;

  case 222:
#line 1055 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteOp((yyval.action), SWFACTION_STOPSOUNDS); }
    break;

  case 223:
#line 1059 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteOp((yyval.action), SWFACTION_TOGGLEQUALITY); }
    break;

  case 224:
#line 1063 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteOp((yyval.action), SWFACTION_GOTOFRAME);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), (yyvsp[(3) - (4)].intVal)-1); /* GOTOFRAME target is 0-based */
		  bufferWriteOp((yyval.action), SWFACTION_PLAY); }
    break;

  case 225:
#line 1070 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteOp((yyval.action), SWFACTION_GOTOFRAME);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), (yyvsp[(3) - (4)].intVal)-1);  /* GOTOFRAME target is 0-based */
		  bufferWriteOp((yyval.action), SWFACTION_STOP); }
    break;

  case 226:
#line 1077 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteOp((yyval.action), SWFACTION_GOTOLABEL);
		  bufferWriteS16((yyval.action), strlen((yyvsp[(3) - (4)].str))+1);
		  bufferWriteHardString((yyval.action), (yyvsp[(3) - (4)].str), strlen((yyvsp[(3) - (4)].str))+1);
		  free((yyvsp[(3) - (4)].str)); 
		  bufferWriteOp((yyval.action), SWFACTION_PLAY); }
    break;

  case 227:
#line 1085 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteOp((yyval.action), SWFACTION_GOTOLABEL);
		  bufferWriteS16((yyval.action), strlen((yyvsp[(3) - (4)].str))+1);
		  bufferWriteHardString((yyval.action), (yyvsp[(3) - (4)].str), strlen((yyvsp[(3) - (4)].str))+1);
		  free((yyvsp[(3) - (4)].str)); 
		  bufferWriteOp((yyval.action), SWFACTION_STOP); }
    break;

  case 228:
#line 1093 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteOp((yyval.action), SWFACTION_GOTOFRAME2);
		  bufferWriteS16((yyval.action), 1);
		  bufferWriteU8((yyval.action), 1); }
    break;

  case 229:
#line 1099 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteOp((yyval.action), SWFACTION_GOTOFRAME2);
		  bufferWriteS16((yyval.action), 1);
		  bufferWriteU8((yyval.action), 0); }
    break;

  case 230:
#line 1105 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteOp((yyval.action), SWFACTION_SETTARGET);
		  bufferWriteS16((yyval.action), strlen((yyvsp[(3) - (4)].str))+1);
		  bufferWriteHardString((yyval.action), (yyvsp[(3) - (4)].str), strlen((yyvsp[(3) - (4)].str))+1);
		  free((yyvsp[(3) - (4)].str)); }
    break;

  case 231:
#line 1112 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteOp((yyval.action), SWFACTION_SETTARGET2); }
    break;

  case 232:
#line 1116 "./swf5compiler.y"
    {
			(yyval.action) = (yyvsp[(3) - (8)].action);
			bufferWriteFloat((yyval.action), (yyvsp[(5) - (8)].intVal));
			bufferConcat((yyval.action), (yyvsp[(7) - (8)].action));
			bufferWriteOp((yyval.action), SWFACTION_SETPROPERTY);	
		}
    break;

  case 233:
#line 1127 "./swf5compiler.y"
    {
#ifdef DEBUG
		  printf("function_call: %s '(' expr_list ')'\n", (yyvsp[(1) - (4)].str));
#endif
		  (yyval.action) = (yyvsp[(3) - (4)].exprlist).buffer;
		  bufferWriteInt((yyval.action), (yyvsp[(3) - (4)].exprlist).count);
		  bufferWriteString((yyval.action), (yyvsp[(1) - (4)].str), strlen((yyvsp[(1) - (4)].str))+1);
		  bufferWriteOp((yyval.action), SWFACTION_CALLFUNCTION);
		  free((yyvsp[(1) - (4)].str)); }
    break;

  case 234:
#line 1138 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), (yyvsp[(3) - (4)].str), strlen((yyvsp[(3) - (4)].str))+1);
		  free((yyvsp[(3) - (4)].str));
		  bufferWriteOp((yyval.action), SWFACTION_GETVARIABLE); 
		  bufferWriteOp((yyval.action), SWFACTION_TARGETPATH); }
    break;

  case 235:
#line 1145 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteOp((yyval.action), SWFACTION_GETVARIABLE); }
    break;

  case 236:
#line 1149 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteOp((yyval.action), SWFACTION_GETTIME); }
    break;

  case 237:
#line 1153 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteOp((yyval.action), SWFACTION_RANDOMNUMBER); }
    break;

  case 238:
#line 1157 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteOp((yyval.action), SWFACTION_STRINGLENGTH); }
    break;

  case 239:
#line 1161 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteOp((yyval.action), SWFACTION_INT); }
    break;

  case 240:
#line 1165 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteOp((yyval.action), SWFACTION_ORD); }
    break;

  case 241:
#line 1169 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteOp((yyval.action), SWFACTION_CHR); }
    break;

  case 242:
#line 1173 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (6)].action);
		  bufferConcat((yyval.action), (yyvsp[(5) - (6)].action));
		  bufferWriteOp((yyval.action), SWFACTION_STRINGCONCAT); }
    break;

  case 243:
#line 1178 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (8)].action);
		  bufferConcat((yyval.action), (yyvsp[(5) - (8)].action));
		  bufferConcat((yyval.action), (yyvsp[(7) - (8)].action));
		  bufferWriteOp((yyval.action), SWFACTION_SUBSTRING); }
    break;

  case 244:
#line 1184 "./swf5compiler.y"
    {
#ifdef DEBUG
		  printf("function_call: TYPEOF '(' expr_or_obj ')'\n");
#endif
		  (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteOp((yyval.action), SWFACTION_TYPEOF); }
    break;

  case 245:
#line 1192 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferConcat((yyval.action), (yyvsp[(3) - (6)].action));
		  bufferWriteFloat((yyval.action), (yyvsp[(5) - (6)].intVal));
		  bufferWriteOp((yyval.action), SWFACTION_GETPROPERTY);
		}
    break;

  case 246:
#line 1202 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(2) - (2)].action);
		  if((yyvsp[(2) - (2)].action)->hasObject)
		    bufferWriteOp((yyval.action), SWFACTION_DELETE);
		  else 
		    bufferWriteOp((yyval.action), SWFACTION_DELETE2);
		}
    break;

  case 247:
#line 1213 "./swf5compiler.y"
    { (yyval.exprlist).buffer = newBuffer();
		  (yyval.exprlist).count = 0; }
    break;

  case 248:
#line 1217 "./swf5compiler.y"
    { (yyval.exprlist).buffer = (yyvsp[(1) - (1)].action);
		  (yyval.exprlist).count = 1; }
    break;

  case 249:
#line 1222 "./swf5compiler.y"
    { Buffer tmp = newBuffer();
		  bufferConcat(tmp, (yyvsp[(3) - (3)].action));
		  bufferConcat(tmp, (yyval.exprlist).buffer);
		  (yyval.exprlist).buffer = tmp;
		  ++(yyval.exprlist).count;  }
    break;

  case 250:
#line 1231 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(5) - (6)].exprlist).buffer;
		  bufferWriteInt((yyval.action), (yyvsp[(5) - (6)].exprlist).count);
		  bufferConcat((yyval.action), (yyvsp[(1) - (6)].action));
		  bufferWriteString((yyval.action), (yyvsp[(3) - (6)].str), strlen((yyvsp[(3) - (6)].str))+1);
		  bufferWriteOp((yyval.action), SWFACTION_CALLMETHOD);
		  free((yyvsp[(3) - (6)].str)); }
    break;

  case 251:
#line 1239 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(6) - (7)].exprlist).buffer;
		  bufferWriteInt((yyval.action), (yyvsp[(6) - (7)].exprlist).count);
		  bufferConcat((yyval.action), (yyvsp[(1) - (7)].action));
		  bufferConcat((yyval.action), (yyvsp[(3) - (7)].action));
		  bufferWriteOp((yyval.action), SWFACTION_CALLMETHOD); }
    break;

  case 252:
#line 1248 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), (yyvsp[(1) - (3)].str), strlen((yyvsp[(1) - (3)].str))+1);
		  bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));
		  free((yyvsp[(1) - (3)].str)); }
    break;

  case 253:
#line 1256 "./swf5compiler.y"
    { (yyval.exprlist).buffer = (yyvsp[(1) - (1)].action);
		  (yyval.exprlist).count = 1; }
    break;

  case 254:
#line 1260 "./swf5compiler.y"
    { bufferConcat((yyval.exprlist).buffer, (yyvsp[(3) - (3)].action));
		  ++(yyval.exprlist).count;  }
    break;

  case 255:
#line 1265 "./swf5compiler.y"
    { (yyval.op) = SWFACTION_ADD2; }
    break;

  case 256:
#line 1266 "./swf5compiler.y"
    { (yyval.op) = SWFACTION_SUBTRACT; }
    break;

  case 257:
#line 1267 "./swf5compiler.y"
    { (yyval.op) = SWFACTION_MULTIPLY; }
    break;

  case 258:
#line 1268 "./swf5compiler.y"
    { (yyval.op) = SWFACTION_DIVIDE; }
    break;

  case 259:
#line 1269 "./swf5compiler.y"
    { (yyval.op) = SWFACTION_MODULO; }
    break;

  case 260:
#line 1270 "./swf5compiler.y"
    { (yyval.op) = SWFACTION_BITWISEAND; }
    break;

  case 261:
#line 1271 "./swf5compiler.y"
    { (yyval.op) = SWFACTION_BITWISEOR; }
    break;

  case 262:
#line 1272 "./swf5compiler.y"
    { (yyval.op) = SWFACTION_BITWISEXOR; }
    break;

  case 263:
#line 1273 "./swf5compiler.y"
    { (yyval.op) = SWFACTION_SHIFTLEFT; }
    break;

  case 264:
#line 1274 "./swf5compiler.y"
    { (yyval.op) = SWFACTION_SHIFTRIGHT; }
    break;

  case 265:
#line 1275 "./swf5compiler.y"
    { (yyval.op) = SWFACTION_SHIFTRIGHT2; }
    break;

  case 266:
#line 1279 "./swf5compiler.y"
    { (yyval.op) = SWFACTION_INCREMENT; }
    break;

  case 267:
#line 1280 "./swf5compiler.y"
    { (yyval.op) = SWFACTION_DECREMENT; }
    break;

  case 268:
#line 1287 "./swf5compiler.y"
    { if((yyvsp[(1) - (1)].lval).obj)
		  {
		    (yyval.action) = (yyvsp[(1) - (1)].lval).obj;
		    if((yyvsp[(1) - (1)].lval).ident)
		      bufferConcat((yyval.action), (yyvsp[(1) - (1)].lval).ident);
		    else
		      bufferConcat((yyval.action), (yyvsp[(1) - (1)].lval).memexpr);

		    bufferWriteOp((yyval.action), SWFACTION_GETMEMBER);
		  }
		  else
		  {
		    (yyval.action) = (yyvsp[(1) - (1)].lval).ident;
		    bufferWriteOp((yyval.action), SWFACTION_GETVARIABLE);
		  }
		}
    break;

  case 271:
#line 1310 "./swf5compiler.y"
    { (yyval.lval).ident = newBuffer();
		  bufferWriteString((yyval.lval).ident, (yyvsp[(1) - (1)].str), strlen((yyvsp[(1) - (1)].str))+1);
		  free((yyvsp[(1) - (1)].str));
		  (yyval.lval).obj = 0;
		  (yyval.lval).memexpr = 0; }
    break;

  case 272:
#line 1317 "./swf5compiler.y"
    { (yyval.lval).obj = (yyvsp[(1) - (3)].action);
		  (yyval.lval).ident = newBuffer();
		  bufferWriteString((yyval.lval).ident, (yyvsp[(3) - (3)].str), strlen((yyvsp[(3) - (3)].str))+1);
		  free((yyvsp[(3) - (3)].str));
		  (yyval.lval).memexpr = 0; }
    break;

  case 273:
#line 1324 "./swf5compiler.y"
    { (yyval.lval).obj = (yyvsp[(1) - (4)].action);
		  (yyval.lval).memexpr = (yyvsp[(3) - (4)].action);
		  (yyval.lval).ident = 0; }
    break;

  case 276:
#line 1337 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(2) - (2)].action);
		  bufferWriteInt((yyvsp[(2) - (2)].action), -1);
		  bufferWriteOp((yyvsp[(2) - (2)].action), SWFACTION_MULTIPLY); }
    break;

  case 277:
#line 1342 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(2) - (2)].action);
		  bufferWriteInt((yyvsp[(2) - (2)].action), 0xffffffff);
		  bufferWriteOp((yyvsp[(2) - (2)].action), SWFACTION_BITWISEXOR); }
    break;

  case 278:
#line 1347 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(2) - (2)].action);
		  bufferWriteOp((yyvsp[(2) - (2)].action), SWFACTION_LOGICALNOT); }
    break;

  case 279:
#line 1351 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(1) - (3)].action);
		  bufferWriteOp((yyval.action), SWFACTION_PUSHDUP);
		  bufferWriteOp((yyval.action), SWFACTION_LOGICALNOT);
		  bufferWriteOp((yyval.action), SWFACTION_IF);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), bufferLength((yyvsp[(3) - (3)].action))+1);
		  bufferWriteOp((yyval.action), SWFACTION_POP);
		  bufferConcatSimple((yyval.action), (yyvsp[(3) - (3)].action)); }
    break;

  case 280:
#line 1361 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(1) - (3)].action);
		  bufferWriteOp((yyval.action), SWFACTION_PUSHDUP);
		  bufferWriteOp((yyval.action), SWFACTION_IF);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), bufferLength((yyvsp[(3) - (3)].action))+1);
		  bufferWriteOp((yyval.action), SWFACTION_POP);
		  bufferConcatSimple((yyval.action), (yyvsp[(3) - (3)].action)); }
    break;

  case 281:
#line 1370 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(1) - (3)].action);
		  bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));
		  bufferWriteOp((yyval.action), SWFACTION_MULTIPLY); }
    break;

  case 282:
#line 1375 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(1) - (3)].action);
		  bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));
		  bufferWriteOp((yyval.action), SWFACTION_DIVIDE); }
    break;

  case 283:
#line 1380 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(1) - (3)].action);
		  bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));
		  bufferWriteOp((yyval.action), SWFACTION_MODULO); }
    break;

  case 284:
#line 1385 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(1) - (3)].action);
		  bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));
		  bufferWriteOp((yyval.action), SWFACTION_ADD2); }
    break;

  case 285:
#line 1390 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(1) - (3)].action);
		  bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));
		  bufferWriteOp((yyval.action), SWFACTION_SUBTRACT); }
    break;

  case 286:
#line 1395 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(1) - (3)].action);
		  bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));
		  bufferWriteOp((yyval.action), SWFACTION_BITWISEAND); }
    break;

  case 287:
#line 1400 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(1) - (3)].action);
		  bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));
		  bufferWriteOp((yyval.action), SWFACTION_BITWISEOR); }
    break;

  case 288:
#line 1405 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(1) - (3)].action);
		  bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));
		  bufferWriteOp((yyval.action), SWFACTION_BITWISEXOR); }
    break;

  case 289:
#line 1410 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(1) - (3)].action);
		  bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));
		  bufferWriteOp((yyval.action), SWFACTION_LESS2); }
    break;

  case 290:
#line 1415 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (3)].action);
		  bufferConcat((yyval.action), (yyvsp[(1) - (3)].action));
		  bufferWriteOp((yyval.action), SWFACTION_LESS2); }
    break;

  case 291:
#line 1420 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(3) - (3)].action);
		  bufferConcat((yyval.action), (yyvsp[(1) - (3)].action));
		  bufferWriteOp((yyval.action), SWFACTION_LESS2);
		  bufferWriteOp((yyval.action), SWFACTION_LOGICALNOT); }
    break;

  case 292:
#line 1426 "./swf5compiler.y"
    { bufferConcat((yyvsp[(1) - (3)].action), (yyvsp[(3) - (3)].action));
		  bufferWriteOp((yyvsp[(1) - (3)].action), SWFACTION_LESS2);
		  bufferWriteOp((yyvsp[(1) - (3)].action), SWFACTION_LOGICALNOT); }
    break;

  case 293:
#line 1431 "./swf5compiler.y"
    { bufferConcat((yyvsp[(1) - (3)].action), (yyvsp[(3) - (3)].action));
		  bufferWriteOp((yyvsp[(1) - (3)].action), SWFACTION_EQUALS2); }
    break;

  case 294:
#line 1435 "./swf5compiler.y"
    { bufferConcat((yyvsp[(1) - (3)].action), (yyvsp[(3) - (3)].action));
		  bufferWriteOp((yyvsp[(1) - (3)].action), SWFACTION_STRICTEQUALS); }
    break;

  case 295:
#line 1439 "./swf5compiler.y"
    { bufferConcat((yyvsp[(1) - (3)].action), (yyvsp[(3) - (3)].action));
		  bufferWriteOp((yyvsp[(1) - (3)].action), SWFACTION_EQUALS2);
		  bufferWriteOp((yyvsp[(1) - (3)].action), SWFACTION_LOGICALNOT); }
    break;

  case 296:
#line 1444 "./swf5compiler.y"
    { bufferConcat((yyvsp[(1) - (3)].action), (yyvsp[(3) - (3)].action));
		  bufferWriteOp((yyvsp[(1) - (3)].action), SWFACTION_STRICTEQUALS); 
		  bufferWriteOp((yyvsp[(1) - (3)].action), SWFACTION_LOGICALNOT); }
    break;

  case 297:
#line 1449 "./swf5compiler.y"
    { bufferConcat((yyvsp[(1) - (3)].action), (yyvsp[(3) - (3)].action));
		  bufferWriteOp((yyvsp[(1) - (3)].action), SWFACTION_SHIFTLEFT); }
    break;

  case 298:
#line 1453 "./swf5compiler.y"
    { bufferConcat((yyvsp[(1) - (3)].action), (yyvsp[(3) - (3)].action));
		  bufferWriteOp((yyvsp[(1) - (3)].action), SWFACTION_SHIFTRIGHT); }
    break;

  case 299:
#line 1457 "./swf5compiler.y"
    { bufferConcat((yyvsp[(1) - (3)].action), (yyvsp[(3) - (3)].action));
		  bufferWriteOp((yyvsp[(1) - (3)].action), SWFACTION_SHIFTRIGHT2); }
    break;

  case 300:
#line 1461 "./swf5compiler.y"
    { bufferWriteOp((yyvsp[(1) - (5)].action), SWFACTION_IF);
		  bufferWriteS16((yyvsp[(1) - (5)].action), 2);
		  bufferWriteS16((yyvsp[(1) - (5)].action), bufferLength((yyvsp[(5) - (5)].action))+5);
		  bufferConcatSimple((yyvsp[(1) - (5)].action), (yyvsp[(5) - (5)].action));
		  bufferWriteOp((yyvsp[(1) - (5)].action), SWFACTION_JUMP);
		  bufferWriteS16((yyvsp[(1) - (5)].action), 2);
		  bufferWriteS16((yyvsp[(1) - (5)].action), bufferLength((yyvsp[(3) - (5)].action)));
		  bufferConcatSimple((yyvsp[(1) - (5)].action), (yyvsp[(3) - (5)].action)); }
    break;

  case 301:
#line 1471 "./swf5compiler.y"
    { if((yyvsp[(1) - (3)].lval).obj) /* obj[memexpr] or obj.ident */
		  {
		    (yyval.action) = (yyvsp[(1) - (3)].lval).obj;

		    if((yyvsp[(1) - (3)].lval).ident)
		      bufferConcat((yyval.action), (yyvsp[(1) - (3)].lval).ident);
		    else
		      bufferConcat((yyval.action), (yyvsp[(1) - (3)].lval).memexpr);

		    bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));
		    bufferWriteSetRegister((yyval.action), 0);
		    bufferWriteOp((yyval.action), SWFACTION_SETMEMBER);
		    bufferWriteRegister((yyval.action), 0);
		  }
		  else /* just ident */
		  {
		    (yyval.action) = (yyvsp[(3) - (3)].action);
		    bufferWriteOp((yyval.action), SWFACTION_PUSHDUP);
		    bufferConcat((yyval.action), (yyvsp[(1) - (3)].lval).ident);
		    bufferWriteOp((yyval.action), SWFACTION_STACKSWAP);
		    bufferWriteOp((yyval.action), SWFACTION_SETVARIABLE);
		  }
/* tricky case missing here: lvalue ASSIGN expr */
/* like in x = y += z; */
		}
    break;

  case 302:
#line 1498 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(1) - (3)].action);
		  bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));
		  bufferWriteOp((yyval.action), SWFACTION_INSTANCEOF); }
    break;

  case 304:
#line 1508 "./swf5compiler.y"
    {
#ifdef DEBUG
		  printf("NEW %s\n", (yyvsp[(2) - (2)].str));
#endif
		  (yyval.action) = newBuffer();
		  bufferWriteInt((yyval.action), 0);
		  bufferWriteString((yyval.action), (yyvsp[(2) - (2)].str), strlen((yyvsp[(2) - (2)].str))+1);
		  free((yyvsp[(2) - (2)].str));
		  bufferWriteOp((yyval.action), SWFACTION_NEWOBJECT); }
    break;

  case 305:
#line 1519 "./swf5compiler.y"
    {
#ifdef DEBUG
		  printf("NEW %s '(' expr_list ')'\n", (yyvsp[(2) - (5)].str));
#endif
		  (yyval.action) = (yyvsp[(4) - (5)].exprlist).buffer;
		  bufferWriteInt((yyval.action), (yyvsp[(4) - (5)].exprlist).count);
		  bufferWriteString((yyval.action), (yyvsp[(2) - (5)].str), strlen((yyvsp[(2) - (5)].str))+1);
		  free((yyvsp[(2) - (5)].str));
		  bufferWriteOp((yyval.action), SWFACTION_NEWOBJECT); }
    break;

  case 306:
#line 1530 "./swf5compiler.y"
    {
#ifdef DEBUG
		  printf("NEW lvalue_expr '.' %s\n", (yyvsp[(4) - (4)].str));
#endif
		  (yyval.action) = newBuffer();
		  bufferWriteInt((yyval.action), 0);
		  bufferConcat((yyval.action), (yyvsp[(2) - (4)].action));
		  bufferWriteString((yyval.action), (yyvsp[(4) - (4)].str), strlen((yyvsp[(4) - (4)].str))+1);
		  free((yyvsp[(4) - (4)].str));
		  bufferWriteOp((yyval.action), SWFACTION_NEWMETHOD); }
    break;

  case 307:
#line 1542 "./swf5compiler.y"
    {
#ifdef DEBUG
		  printf("NEW lvalue_expr '[' expr ']'\n");
#endif
		  (yyval.action) = newBuffer();
		  bufferWriteInt((yyval.action), 0);
		  bufferConcat((yyval.action), (yyvsp[(2) - (5)].action));
		  bufferConcat((yyval.action), (yyvsp[(4) - (5)].action));
		  bufferWriteOp((yyval.action), SWFACTION_NEWMETHOD); }
    break;

  case 308:
#line 1554 "./swf5compiler.y"
    {
#ifdef DEBUG
		  printf("NEW lvalue_expr '.' %s '(' expr_list ')'\n", (yyvsp[(4) - (7)].str));
#endif
		  (yyval.action) = (yyvsp[(6) - (7)].exprlist).buffer;
		  bufferWriteInt((yyval.action), (yyvsp[(6) - (7)].exprlist).count);
		  bufferConcat((yyval.action), (yyvsp[(2) - (7)].action));
		  bufferWriteString((yyval.action), (yyvsp[(4) - (7)].str), strlen((yyvsp[(4) - (7)].str))+1);
		  free((yyvsp[(4) - (7)].str));
		  bufferWriteOp((yyval.action), SWFACTION_NEWMETHOD); }
    break;

  case 309:
#line 1566 "./swf5compiler.y"
    {
#ifdef DEBUG
		  printf("NEW lvalue_expr '[' expr ']' '(' expr_list ')'\n");
#endif
		  (yyval.action) = (yyvsp[(7) - (8)].exprlist).buffer;
		  bufferWriteInt((yyval.action), (yyvsp[(7) - (8)].exprlist).count);
		  bufferConcat((yyval.action), (yyvsp[(2) - (8)].action));
		  bufferConcat((yyval.action), (yyvsp[(4) - (8)].action));
		  bufferWriteOp((yyval.action), SWFACTION_NEWMETHOD); }
    break;

  case 310:
#line 1577 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(2) - (3)].exprlist).buffer;
		  bufferWriteInt((yyval.action), (yyvsp[(2) - (3)].exprlist).count);
		  bufferWriteOp((yyval.action), SWFACTION_INITARRAY); }
    break;

  case 311:
#line 1582 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteInt((yyval.action), 0);
		  bufferWriteOp((yyval.action), SWFACTION_INITOBJECT); }
    break;

  case 312:
#line 1587 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(2) - (3)].exprlist).buffer;
		  bufferWriteInt((yyval.action), (yyvsp[(2) - (3)].exprlist).count);
		  bufferWriteOp((yyval.action), SWFACTION_INITOBJECT); }
    break;

  case 313:
#line 1595 "./swf5compiler.y"
    {
			if((yyvsp[(1) - (1)].function)->name != NULL)
			{
				swf5error("anonymous decl only. identifier not allowed");
				YYABORT;
			}
			(yyval.action) = newBuffer();
			if(swfVersion > 6)
				bufferWriteFunction((yyval.action), (yyvsp[(1) - (1)].function), 2);
			else
				bufferWriteFunction((yyval.action), (yyvsp[(1) - (1)].function), 1);
		}
    break;

  case 316:
#line 1612 "./swf5compiler.y"
    { if((yyvsp[(2) - (2)].lval).obj)
		  {
		    if((yyvsp[(2) - (2)].lval).ident)	// expr . identifier
		    {
		      (yyval.action) = (yyvsp[(2) - (2)].lval).obj;
		      bufferWriteOp((yyval.action), SWFACTION_PUSHDUP);	      /* a, a */
		      bufferWriteBuffer((yyval.action), (yyvsp[(2) - (2)].lval).ident);        /* a, a, i */
		      bufferWriteOp((yyval.action), SWFACTION_STACKSWAP);      /* a, i, a */
		      bufferConcat((yyval.action), (yyvsp[(2) - (2)].lval).ident);             /* a, i, a, i */
		      bufferWriteOp((yyval.action), SWFACTION_GETMEMBER);
		      bufferWriteOp((yyval.action), (yyvsp[(1) - (2)].op));
		      bufferWriteSetRegister((yyval.action), 0);
		      bufferWriteOp((yyval.action), SWFACTION_SETMEMBER); /* a.i = a.i+1 */
		      bufferWriteRegister((yyval.action), 0);	      /* a.i+1 */
		    }
		    else	// expr [ expr ]
		    {
		      (yyval.action) = (yyvsp[(2) - (2)].lval).memexpr;			      /* i */
		      bufferConcat((yyval.action), (yyvsp[(2) - (2)].lval).obj);		      /* i, a */
		      bufferWriteSetRegister((yyval.action), 0);	/* ($2.memexpr can use reg0) */
		      bufferWriteOp((yyval.action), SWFACTION_STACKSWAP);      /* a, i */
		      bufferWriteOp((yyval.action), SWFACTION_PUSHDUP);	      /* a, i, i */
		      bufferWriteRegister((yyval.action), 0);	      /* a, i, i, a */
		      bufferWriteOp((yyval.action), SWFACTION_STACKSWAP);      /* a, i, a, i */
		      bufferWriteOp((yyval.action), SWFACTION_GETMEMBER); /* a, i, a[i] */
		      bufferWriteOp((yyval.action), (yyvsp[(1) - (2)].op));		      /* a, i, a[i]+1 */
		      bufferWriteSetRegister((yyval.action), 0);
		      bufferWriteOp((yyval.action), SWFACTION_SETMEMBER); /* a[i] = a[i]+1 */
		      bufferWriteRegister((yyval.action), 0);	      /* a[i]+1 */
		    }
		  }
		  else	// identifier
		  {
		    (yyval.action) = newBuffer();
		    bufferWriteBuffer((yyval.action), (yyvsp[(2) - (2)].lval).ident);
		    bufferWriteOp((yyval.action), SWFACTION_GETVARIABLE);
		    bufferWriteOp((yyval.action), (yyvsp[(1) - (2)].op));
		    bufferWriteOp((yyval.action), SWFACTION_PUSHDUP);
		    bufferConcat((yyval.action), (yyvsp[(2) - (2)].lval).ident);
		    bufferWriteOp((yyval.action), SWFACTION_STACKSWAP);
		    bufferWriteOp((yyval.action), SWFACTION_SETVARIABLE);
		  }
		}
    break;

  case 317:
#line 1657 "./swf5compiler.y"
    { if((yyvsp[(1) - (2)].lval).obj)
		  {
		    if((yyvsp[(1) - (2)].lval).ident)
		    {
		      (yyval.action) = (yyvsp[(1) - (2)].lval).obj;	                      /* a */
		      bufferWriteOp((yyval.action), SWFACTION_PUSHDUP);	      /* a, a */
		      bufferWriteBuffer((yyval.action), (yyvsp[(1) - (2)].lval).ident);        /* a, a, i */
		      bufferWriteOp((yyval.action), SWFACTION_GETMEMBER); /* a, a.i */
		      bufferWriteSetRegister((yyval.action), 0);
		      bufferWriteOp((yyval.action), SWFACTION_STACKSWAP);      /* a.i, a */
		      bufferConcat((yyval.action), (yyvsp[(1) - (2)].lval).ident);             /* a.i, a, i */
		      bufferWriteRegister((yyval.action), 0);             /* a.i, a, i, a.i */
		      bufferWriteOp((yyval.action), (yyvsp[(2) - (2)].op));		      /* a.i, a, i, a.i+1 */
		      bufferWriteOp((yyval.action), SWFACTION_SETMEMBER);
		    }
		    else
		    {
		      (yyval.action) = (yyvsp[(1) - (2)].lval).memexpr;
		      bufferConcat((yyval.action), (yyvsp[(1) - (2)].lval).obj);               /* i, a */
		      bufferWriteSetRegister((yyval.action), 0);
		      bufferWriteOp((yyval.action), SWFACTION_STACKSWAP);      /* a, i */
		      bufferWriteOp((yyval.action), SWFACTION_PUSHDUP);	      /* a, i, i */
		      bufferWriteRegister((yyval.action), 0);             /* a, i, i, a */
		      bufferWriteOp((yyval.action), SWFACTION_STACKSWAP);      /* a, i, a, i */
		      bufferWriteOp((yyval.action), SWFACTION_GETMEMBER); /* a, i, a[i] */
		      bufferWriteSetRegister((yyval.action), 0);
		      bufferWriteOp((yyval.action), (yyvsp[(2) - (2)].op));		      /* a, i, a[i]+1 */
		      bufferWriteOp((yyval.action), SWFACTION_SETMEMBER);
		      bufferWriteRegister((yyval.action), 0);             /* a[i] */
		    }
		  }
		  else
		  {
		    (yyval.action) = newBuffer();
		    bufferWriteBuffer((yyval.action), (yyvsp[(1) - (2)].lval).ident);
		    bufferWriteOp((yyval.action), SWFACTION_GETVARIABLE);
		    bufferWriteOp((yyval.action), SWFACTION_PUSHDUP);
		    bufferWriteOp((yyval.action), (yyvsp[(2) - (2)].op));
		    bufferConcat((yyval.action), (yyvsp[(1) - (2)].lval).ident);
		    bufferWriteOp((yyval.action), SWFACTION_STACKSWAP);
		    bufferWriteOp((yyval.action), SWFACTION_SETVARIABLE);
		  }
		}
    break;

  case 318:
#line 1702 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(2) - (3)].action); }
    break;

  case 319:
#line 1706 "./swf5compiler.y"
    { if((yyvsp[(1) - (3)].lval).obj)
		  {
		    if((yyvsp[(1) - (3)].lval).ident)
		    {
		      (yyval.action) = (yyvsp[(1) - (3)].lval).obj;			      /* a */
		      bufferWriteOp((yyval.action), SWFACTION_PUSHDUP);	      /* a, a */
		      bufferWriteBuffer((yyval.action), (yyvsp[(1) - (3)].lval).ident);	      /* a, a, i */
		      bufferWriteOp((yyval.action), SWFACTION_GETMEMBER); /* a, a.i */
		      bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));		      /* a, a.i, v */
		      bufferWriteOp((yyval.action), (yyvsp[(2) - (3)].op));		      /* a, a.i+v */
		      bufferConcat((yyval.action), (yyvsp[(1) - (3)].lval).ident);	      /* a, a.i+v, i */
		      bufferWriteOp((yyval.action), SWFACTION_STACKSWAP);      /* a, i, a.i+v */
		      bufferWriteSetRegister((yyval.action), 0);
		      bufferWriteOp((yyval.action), SWFACTION_SETMEMBER); /* a.i = a.i+v */
		      bufferWriteRegister((yyval.action), 0);
		    }
		    else
		    {
		      (yyval.action) = (yyvsp[(1) - (3)].lval).memexpr;			      /* i */
		      bufferConcat((yyval.action), (yyvsp[(1) - (3)].lval).obj);		      /* i, a */
		      bufferWriteSetRegister((yyval.action), 0);
		      bufferWriteOp((yyval.action), SWFACTION_STACKSWAP);      /* a, i */
		      bufferWriteOp((yyval.action), SWFACTION_PUSHDUP);	      /* a, i, i */
		      bufferWriteRegister((yyval.action), 0);	      /* a, i, i, a */
		      bufferWriteOp((yyval.action), SWFACTION_STACKSWAP);      /* a, i, a, i */
		      bufferWriteOp((yyval.action), SWFACTION_GETMEMBER); /* a, i, a[i] */
		      bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));		      /* a, i, a[i], v */
		      bufferWriteOp((yyval.action), (yyvsp[(2) - (3)].op));		      /* a, i, a[i]+v */
		      bufferWriteSetRegister((yyval.action), 0);
		      bufferWriteOp((yyval.action), SWFACTION_SETMEMBER); /* a[i] = a[i]+v */
		      bufferWriteRegister((yyval.action), 0);
		    }
		  }
		  else
		  {
		    (yyval.action) = (yyvsp[(1) - (3)].lval).ident;
		    bufferWriteOp((yyval.action), SWFACTION_PUSHDUP);
		    bufferWriteOp((yyval.action), SWFACTION_GETVARIABLE);
		    bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));
		    bufferWriteOp((yyval.action), (yyvsp[(2) - (3)].op));
		    bufferWriteSetRegister((yyval.action), 0);
		    bufferWriteOp((yyval.action), SWFACTION_SETVARIABLE);
		    bufferWriteRegister((yyval.action), 0);
		  }
		}
    break;

  case 320:
#line 1755 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteBoolean((yyval.action), (yyvsp[(1) - (1)].intVal)); }
    break;

  case 321:
#line 1758 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteNull((yyval.action)); }
    break;

  case 322:
#line 1762 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteUndef((yyval.action)); }
    break;

  case 323:
#line 1766 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), (yyvsp[(1) - (1)].str), strlen((yyvsp[(1) - (1)].str))+1);
		  free((yyvsp[(1) - (1)].str)); }
    break;

  case 324:
#line 1770 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteInt((yyval.action), (yyvsp[(1) - (1)].intVal)); }
    break;

  case 325:
#line 1773 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteDouble((yyval.action), (yyvsp[(1) - (1)].doubleVal)); }
    break;

  case 327:
#line 1781 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(1) - (3)].action);
		  bufferConcat((yyval.action), (yyvsp[(3) - (3)].action)); }
    break;

  case 328:
#line 1787 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), (yyvsp[(1) - (4)].str), strlen((yyvsp[(1) - (4)].str))+1);
		  free((yyvsp[(1) - (4)].str));
		  bufferConcat((yyval.action), (yyvsp[(4) - (4)].action));
		  bufferWriteOp((yyval.action), SWFACTION_DEFINELOCAL); }
    break;

  case 329:
#line 1794 "./swf5compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), (yyvsp[(1) - (2)].str), strlen((yyvsp[(1) - (2)].str))+1);
		  free((yyvsp[(1) - (2)].str));
		  bufferWriteOp((yyval.action), SWFACTION_DEFINELOCAL2); }
    break;

  case 330:
#line 1802 "./swf5compiler.y"
    { asmBuffer = newBuffer(); }
    break;

  case 331:
#line 1804 "./swf5compiler.y"
    { (yyval.action) = asmBuffer; }
    break;

  case 332:
#line 1807 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(2) - (2)].action); }
    break;

  case 334:
#line 1812 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(1) - (1)].action);
		  bufferWriteOp((yyval.action), SWFACTION_POP); }
    break;

  case 335:
#line 1816 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(1) - (1)].action);
		  bufferWriteOp((yyval.action), SWFACTION_POP); }
    break;

  case 336:
#line 1820 "./swf5compiler.y"
    { (yyval.action) = (yyvsp[(1) - (1)].action);
		  bufferWriteOp((yyval.action), SWFACTION_POP); }
    break;

  case 337:
#line 1824 "./swf5compiler.y"
    { if((yyvsp[(2) - (2)].lval).obj)
		  {
		    if((yyvsp[(2) - (2)].lval).ident)
		    {
		      (yyval.action) = (yyvsp[(2) - (2)].lval).obj;		              /* a */
		      bufferWriteOp((yyval.action), SWFACTION_PUSHDUP);	      /* a, a */
		      bufferWriteBuffer((yyval.action), (yyvsp[(2) - (2)].lval).ident);	      /* a, a, i */
		      bufferWriteOp((yyval.action), SWFACTION_GETMEMBER); /* a, a.i */
		      bufferWriteOp((yyval.action), (yyvsp[(1) - (2)].op));		      /* a, a.i+1 */
		      bufferConcat((yyval.action), (yyvsp[(2) - (2)].lval).ident);	      /* a, a.i+1, i */
		      bufferWriteOp((yyval.action), SWFACTION_STACKSWAP);      /* a, i, a.i+1 */
		      bufferWriteOp((yyval.action), SWFACTION_SETMEMBER); /* a.i = a.i+1 */
		    }
		    else
		    {
		      /* weird contortions so that $2.memexpr can use reg 0 */
		      (yyval.action) = (yyvsp[(2) - (2)].lval).memexpr;			      /* i */
		      bufferConcat((yyval.action), (yyvsp[(2) - (2)].lval).obj);		      /* i, a */
		      bufferWriteSetRegister((yyval.action), 0);
		      bufferWriteOp((yyval.action), SWFACTION_STACKSWAP);      /* a, i */
		      bufferWriteOp((yyval.action), SWFACTION_PUSHDUP);	      /* a, i, i */
		      bufferWriteRegister((yyval.action), 0);	      /* a, i, i, a */
		      bufferWriteOp((yyval.action), SWFACTION_STACKSWAP);      /* a, i, a, i */
		      bufferWriteOp((yyval.action), SWFACTION_GETMEMBER); /* a, i, a[i] */
		      bufferWriteOp((yyval.action), (yyvsp[(1) - (2)].op));		      /* a, i, a[i]+1 */
		      bufferWriteOp((yyval.action), SWFACTION_SETMEMBER); /* a[i] = a[i]+1 */
		    }
		  }
		  else
		  {
		    (yyval.action) = (yyvsp[(2) - (2)].lval).ident;
		    bufferWriteOp((yyval.action), SWFACTION_PUSHDUP);
		    bufferWriteOp((yyval.action), SWFACTION_GETVARIABLE);
		    bufferWriteOp((yyval.action), (yyvsp[(1) - (2)].op));
		    bufferWriteOp((yyval.action), SWFACTION_SETVARIABLE);
		  }
		}
    break;

  case 338:
#line 1863 "./swf5compiler.y"
    { if((yyvsp[(1) - (2)].lval).obj)
		  {
		    if((yyvsp[(1) - (2)].lval).ident)
		    {
		      (yyval.action) = (yyvsp[(1) - (2)].lval).obj;			      /* a */
		      bufferWriteOp((yyval.action), SWFACTION_PUSHDUP);       /* a, a */
		      bufferWriteBuffer((yyval.action), (yyvsp[(1) - (2)].lval).ident);	      /* a, a, i */
		      bufferWriteOp((yyval.action), SWFACTION_GETMEMBER); /* a, a.i */
		      bufferWriteOp((yyval.action), (yyvsp[(2) - (2)].op));                  /* a, a.i+1 */
		      bufferConcat((yyval.action), (yyvsp[(1) - (2)].lval).ident);             /* a, a.i+1, i */
		      bufferWriteOp((yyval.action), SWFACTION_STACKSWAP);      /* a, i, a.i+1 */
		      bufferWriteOp((yyval.action), SWFACTION_SETMEMBER); /* a.i = a.i+1 */
		    }
		    else
		    {
		      /* weird contortions so that $1.memexpr can use reg 0 */
		      (yyval.action) = (yyvsp[(1) - (2)].lval).memexpr;	/* i */
		      bufferConcat((yyval.action), (yyvsp[(1) - (2)].lval).obj);		      /* i, a */
		      bufferWriteSetRegister((yyval.action), 0);
		      bufferWriteOp((yyval.action), SWFACTION_STACKSWAP);      /* a, i */
		      bufferWriteOp((yyval.action), SWFACTION_PUSHDUP);       /* a, i, i */
		      bufferWriteRegister((yyval.action), 0);             /* a, i, i, a */
		      bufferWriteOp((yyval.action), SWFACTION_STACKSWAP);      /* a, i, a, i */
		      bufferWriteOp((yyval.action), SWFACTION_GETMEMBER); /* a, i, a[i] */
		      bufferWriteOp((yyval.action), (yyvsp[(2) - (2)].op));                  /* a, i, a[i]+1 */
		      bufferWriteOp((yyval.action), SWFACTION_SETMEMBER); /* a[i] = a[i]+1 */
		    }
		  }
		  else
		  {
		    (yyval.action) = (yyvsp[(1) - (2)].lval).ident;
		    bufferWriteOp((yyval.action), SWFACTION_PUSHDUP);	
		    bufferWriteOp((yyval.action), SWFACTION_GETVARIABLE);
		    bufferWriteOp((yyval.action), (yyvsp[(2) - (2)].op));
		    bufferWriteOp((yyval.action), SWFACTION_SETVARIABLE);
		  }
		}
    break;

  case 339:
#line 1902 "./swf5compiler.y"
    { if((yyvsp[(1) - (3)].lval).obj)
		  {
		    (yyval.action) = (yyvsp[(1) - (3)].lval).obj;

		    if((yyvsp[(1) - (3)].lval).ident)
		      bufferConcat((yyval.action), (yyvsp[(1) - (3)].lval).ident);
		    else
		      bufferConcat((yyval.action), (yyvsp[(1) - (3)].lval).memexpr);

		    bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));
		    bufferWriteOp((yyval.action), SWFACTION_SETMEMBER);
		  }
		  else
		  {
		    (yyval.action) = (yyvsp[(1) - (3)].lval).ident;
		    bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));
		    bufferWriteOp((yyval.action), SWFACTION_SETVARIABLE);
		  }
		}
    break;

  case 340:
#line 1923 "./swf5compiler.y"
    { if((yyvsp[(1) - (3)].lval).obj)
		  {
		    if((yyvsp[(1) - (3)].lval).ident)
		    {
		      (yyval.action) = (yyvsp[(1) - (3)].lval).obj;			      /* a */
		      bufferWriteOp((yyval.action), SWFACTION_PUSHDUP);	      /* a, a */
		      bufferWriteBuffer((yyval.action), (yyvsp[(1) - (3)].lval).ident);	      /* a, a, i */
		      bufferWriteOp((yyval.action), SWFACTION_GETMEMBER); /* a, a.i */
		      bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));		      /* a, a.i, v */
		      bufferWriteOp((yyval.action), (yyvsp[(2) - (3)].op));		      /* a, a.i+v */
		      bufferConcat((yyval.action), (yyvsp[(1) - (3)].lval).ident);	      /* a, a.i+v, i */
		      bufferWriteOp((yyval.action), SWFACTION_STACKSWAP);      /* a, i, a.i+v */
		      bufferWriteOp((yyval.action), SWFACTION_SETMEMBER); /* a.i = a.i+v */
		    }
		    else
		    {
		      (yyval.action) = (yyvsp[(1) - (3)].lval).memexpr;			      /* i */
		      bufferConcat((yyval.action), (yyvsp[(1) - (3)].lval).obj);		      /* i, a */
		      bufferWriteSetRegister((yyval.action), 0);
		      bufferWriteOp((yyval.action), SWFACTION_STACKSWAP);      /* a, i */
		      bufferWriteOp((yyval.action), SWFACTION_PUSHDUP);	      /* a, i, i */
		      bufferWriteRegister((yyval.action), 0);	      /* a, i, i, a */
		      bufferWriteOp((yyval.action), SWFACTION_STACKSWAP);      /* a, i, a, i */
		      bufferWriteOp((yyval.action), SWFACTION_GETMEMBER); /* a, i, a[i] */
		      bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));		      /* a, i, a[i], v */
		      bufferWriteOp((yyval.action), (yyvsp[(2) - (3)].op));		      /* a, i, a[i]+v */
		      bufferWriteOp((yyval.action), SWFACTION_SETMEMBER); /* a[i] = a[i]+v */
		    }
		  }
		  else
		  {
		    (yyval.action) = (yyvsp[(1) - (3)].lval).ident;
		    bufferWriteOp((yyval.action), SWFACTION_PUSHDUP);
		    bufferWriteOp((yyval.action), SWFACTION_GETVARIABLE);
		    bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));
		    bufferWriteOp((yyval.action), (yyvsp[(2) - (3)].op));
		    bufferWriteOp((yyval.action), SWFACTION_SETVARIABLE);
		  }
		}
    break;

  case 342:
#line 1968 "./swf5compiler.y"
    { (yyval.len) = (yyvsp[(1) - (2)].len) + (yyvsp[(2) - (2)].len); }
    break;

  case 343:
#line 1973 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer,
						     SWFACTION_WITH); }
    break;

  case 344:
#line 1975 "./swf5compiler.y"
    { (yyval.len) = (yyvsp[(2) - (4)].len) + (yyvsp[(3) - (4)].len);
				  bufferPatchLength(asmBuffer, (yyvsp[(3) - (4)].len)); }
    break;

  case 345:
#line 1980 "./swf5compiler.y"
    { (yyval.len) = bufferWriteConstantString(asmBuffer, (yyvsp[(1) - (1)].str),
								 strlen((yyvsp[(1) - (1)].str))+1); }
    break;

  case 346:
#line 1983 "./swf5compiler.y"
    { (yyval.len) = bufferWriteInt(asmBuffer, (yyvsp[(1) - (1)].intVal)); }
    break;

  case 347:
#line 1985 "./swf5compiler.y"
    { (yyval.len) = bufferWriteDouble(asmBuffer, (yyvsp[(1) - (1)].doubleVal)); }
    break;

  case 348:
#line 1987 "./swf5compiler.y"
    { bufferWriteU8(asmBuffer, PUSH_BOOLEAN);
				  (yyval.len) = bufferWriteU8(asmBuffer, (yyvsp[(1) - (1)].intVal))+1;
				  bufferPatchPushLength(asmBuffer, 2); }
    break;

  case 349:
#line 1991 "./swf5compiler.y"
    { (yyval.len) = bufferWriteU8(asmBuffer, PUSH_NULL);
				  bufferPatchPushLength(asmBuffer, 1); }
    break;

  case 350:
#line 1994 "./swf5compiler.y"
    { (yyval.len) = bufferWriteU8(asmBuffer, PUSH_UNDEF);
				  bufferPatchPushLength(asmBuffer, 1); }
    break;

  case 351:
#line 1997 "./swf5compiler.y"
    { bufferWriteU8(asmBuffer, PUSH_REGISTER);
				  (yyval.len) = bufferWriteU8(asmBuffer,
						     (char)atoi((yyvsp[(1) - (1)].str)))+1;
				  bufferPatchPushLength(asmBuffer, 2); }
    break;

  case 352:
#line 2005 "./swf5compiler.y"
    { (yyval.len) = (yyvsp[(1) - (1)].len); }
    break;

  case 353:
#line 2006 "./swf5compiler.y"
    { (yyval.len) = (yyvsp[(1) - (3)].len) + (yyvsp[(3) - (3)].len); }
    break;

  case 354:
#line 2010 "./swf5compiler.y"
    { (yyval.len) = bufferWritePushOp(asmBuffer);
				  (yyval.len) += bufferWriteS16(asmBuffer, 0); }
    break;

  case 355:
#line 2012 "./swf5compiler.y"
    { (yyval.len) = (yyvsp[(2) - (3)].len) + (yyvsp[(3) - (3)].len);
				  bufferPatchLength(asmBuffer, (yyvsp[(3) - (3)].len)); }
    break;

  case 357:
#line 2018 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_STOREREGISTER);
				  (yyval.len) += bufferWriteS16(asmBuffer, 1);
				  (yyval.len) += bufferWriteU8(asmBuffer,
						      (char)atoi((yyvsp[(2) - (2)].str))); }
    break;

  case 358:
#line 2024 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer,
						     SWFACTION_CALLFUNCTION); }
    break;

  case 359:
#line 2026 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer,
						     SWFACTION_RETURN); }
    break;

  case 360:
#line 2028 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_CALLMETHOD); }
    break;

  case 361:
#line 2030 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_NEWOBJECT); }
    break;

  case 362:
#line 2032 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_NEWMETHOD); }
    break;

  case 363:
#line 2034 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_BITWISEAND); }
    break;

  case 364:
#line 2036 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_BITWISEOR); }
    break;

  case 365:
#line 2038 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_BITWISEXOR); }
    break;

  case 366:
#line 2040 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_MODULO); }
    break;

  case 367:
#line 2042 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_ADD2); }
    break;

  case 368:
#line 2044 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_LESS2); }
    break;

  case 369:
#line 2046 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_EQUALS2); }
    break;

  case 370:
#line 2048 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_INCREMENT); }
    break;

  case 371:
#line 2050 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_DECREMENT); }
    break;

  case 372:
#line 2052 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_TYPEOF); }
    break;

  case 373:
#line 2054 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_INSTANCEOF); }
    break;

  case 374:
#line 2056 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_ENUMERATE); }
    break;

  case 375:
#line 2058 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_DELETE); }
    break;

  case 376:
#line 2060 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_NEWOBJECT); }
    break;

  case 377:
#line 2062 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_INITARRAY); }
    break;

  case 378:
#line 2064 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_INITOBJECT); }
    break;

  case 379:
#line 2066 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_GETMEMBER); }
    break;

  case 380:
#line 2068 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_SETMEMBER); }
    break;

  case 381:
#line 2070 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_SHIFTLEFT); }
    break;

  case 382:
#line 2072 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_SHIFTRIGHT); }
    break;

  case 383:
#line 2074 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_SHIFTRIGHT2); }
    break;

  case 384:
#line 2076 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_DEFINELOCAL2); }
    break;

  case 385:
#line 2078 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_EXTENDS); }
    break;

  case 386:
#line 2080 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_TARGETPATH); }
    break;

  case 387:
#line 2082 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_IMPLEMENTSOP); }
    break;

  case 388:
#line 2084 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, 
						     SWFACTION_FSCOMMAND2); }
    break;

  case 389:
#line 2086 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer,
						     SWFACTION_CASTOP);	}
    break;

  case 390:
#line 2090 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_ADD); }
    break;

  case 391:
#line 2091 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_SUBTRACT); }
    break;

  case 392:
#line 2092 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_MULTIPLY); }
    break;

  case 393:
#line 2093 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_DIVIDE); }
    break;

  case 394:
#line 2094 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_EQUAL); }
    break;

  case 395:
#line 2095 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_LESSTHAN); }
    break;

  case 396:
#line 2096 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_LOGICALAND); }
    break;

  case 397:
#line 2097 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_LOGICALOR); }
    break;

  case 398:
#line 2098 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_LOGICALNOT); }
    break;

  case 399:
#line 2099 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_STRINGEQ); }
    break;

  case 400:
#line 2100 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_STRINGLENGTH); }
    break;

  case 401:
#line 2101 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_SUBSTRING); }
    break;

  case 402:
#line 2102 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_INT); }
    break;

  case 403:
#line 2103 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_PUSHDUP); }
    break;

  case 404:
#line 2104 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_STACKSWAP); }
    break;

  case 405:
#line 2105 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_POP); }
    break;

  case 406:
#line 2106 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_GETVARIABLE); }
    break;

  case 407:
#line 2107 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_SETVARIABLE); }
    break;

  case 408:
#line 2108 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_GETPROPERTY); }
    break;

  case 409:
#line 2109 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_SETPROPERTY); }
    break;

  case 410:
#line 2110 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_TONUMBER); }
    break;

  case 411:
#line 2111 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_TOSTRING); }
    break;

  case 412:
#line 2112 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_SETTARGET2); }
    break;

  case 413:
#line 2113 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_STRINGCONCAT); }
    break;

  case 414:
#line 2114 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_DUPLICATECLIP); }
    break;

  case 415:
#line 2115 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_REMOVECLIP); }
    break;

  case 416:
#line 2116 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_TRACE); }
    break;

  case 417:
#line 2117 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_STRINGCOMPARE); }
    break;

  case 418:
#line 2118 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_RANDOMNUMBER); }
    break;

  case 419:
#line 2119 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_MBLENGTH); }
    break;

  case 420:
#line 2120 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_ORD); }
    break;

  case 421:
#line 2121 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_CHR); }
    break;

  case 422:
#line 2122 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_GETTIME); }
    break;

  case 423:
#line 2123 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_MBSUBSTRING); }
    break;

  case 424:
#line 2124 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_MBORD); }
    break;

  case 425:
#line 2125 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_MBCHR); }
    break;

  case 426:
#line 2128 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_JUMP);
				  (yyval.len) += bufferWriteS16(asmBuffer, 2);
				  (yyval.len) += bufferBranchTarget(asmBuffer, (yyvsp[(2) - (2)].str)); }
    break;

  case 427:
#line 2132 "./swf5compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_IF);
				  (yyval.len) += bufferWriteS16(asmBuffer, 2);
				  (yyval.len) += bufferBranchTarget(asmBuffer, (yyvsp[(2) - (2)].str)); }
    break;

  case 428:
#line 2139 "./swf5compiler.y"
    { (yyval.intVal) = lookupProperty((yyvsp[(1) - (1)].str)); }
    break;

  case 429:
#line 2140 "./swf5compiler.y"
    { (yyval.intVal) = PROPERTY_X; }
    break;

  case 430:
#line 2141 "./swf5compiler.y"
    { (yyval.intVal) = PROPERTY_Y; }
    break;

  case 431:
#line 2142 "./swf5compiler.y"
    { (yyval.intVal) = PROPERTY_XSCALE; }
    break;

  case 432:
#line 2143 "./swf5compiler.y"
    { (yyval.intVal) = PROPERTY_YSCALE; }
    break;

  case 433:
#line 2144 "./swf5compiler.y"
    { (yyval.intVal) = PROPERTY_CURRENTFRAME; }
    break;

  case 434:
#line 2145 "./swf5compiler.y"
    { (yyval.intVal) = PROPERTY_TOTALFRAMES; }
    break;

  case 435:
#line 2146 "./swf5compiler.y"
    { (yyval.intVal) = PROPERTY_ALPHA; }
    break;

  case 436:
#line 2147 "./swf5compiler.y"
    { (yyval.intVal) = PROPERTY_VISIBLE; }
    break;

  case 437:
#line 2148 "./swf5compiler.y"
    { (yyval.intVal) = PROPERTY_WIDTH; }
    break;

  case 438:
#line 2149 "./swf5compiler.y"
    { (yyval.intVal) = PROPERTY_HEIGHT; }
    break;

  case 439:
#line 2150 "./swf5compiler.y"
    { (yyval.intVal) = PROPERTY_ROTATION; }
    break;

  case 440:
#line 2151 "./swf5compiler.y"
    { (yyval.intVal) = PROPERTY_TARGET; }
    break;

  case 441:
#line 2152 "./swf5compiler.y"
    { (yyval.intVal) = PROPERTY_FRAMESLOADED; }
    break;

  case 442:
#line 2153 "./swf5compiler.y"
    { (yyval.intVal) = PROPERTY_NAME; }
    break;

  case 443:
#line 2154 "./swf5compiler.y"
    { (yyval.intVal) = PROPERTY_DROPTARGET; }
    break;

  case 444:
#line 2155 "./swf5compiler.y"
    { (yyval.intVal) = PROPERTY_URL; }
    break;

  case 445:
#line 2156 "./swf5compiler.y"
    { (yyval.intVal) = PROPERTY_HIGHQUALITY; }
    break;

  case 446:
#line 2157 "./swf5compiler.y"
    { (yyval.intVal) = PROPERTY_FOCUSRECT; }
    break;

  case 447:
#line 2158 "./swf5compiler.y"
    { (yyval.intVal) = PROPERTY_SOUNDBUFTIME; }
    break;

  case 448:
#line 2159 "./swf5compiler.y"
    { (yyval.intVal) = PROPERTY_QUALITY; }
    break;

  case 449:
#line 2160 "./swf5compiler.y"
    { (yyval.intVal) = PROPERTY_XMOUSE; }
    break;

  case 450:
#line 2161 "./swf5compiler.y"
    { (yyval.intVal) = PROPERTY_YMOUSE; }
    break;


/* Line 1267 of yacc.c.  */
#line 6717 "swf5compiler.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 2163 "./swf5compiler.y"



