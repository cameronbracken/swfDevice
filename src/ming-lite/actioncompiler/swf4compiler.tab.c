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
#define yyparse swf4parse
#define yylex   swf4lex
#define yyerror swf4error
#define yylval  swf4lval
#define yychar  swf4char
#define yydebug swf4debug
#define yynerrs swf4nerrs


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




/* Copy the first part of user declarations.  */
#line 5 "./swf4compiler.y"


#include <time.h>
#include <string.h>
#include <stdlib.h>
#include "compile.h"
#include "actiontypes.h"
#include "assembler.h"

#define YYPARSE_PARAM buffer
#define YYERROR_VERBOSE 1



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
#line 19 "./swf4compiler.y"
{
  Buffer action;
  char *str;
  SWFActionFunction function;
  SWFGetUrl2Method getURLMethod;
  int len;
}
/* Line 187 of yacc.c.  */
#line 344 "swf4compiler.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 357 "swf4compiler.tab.c"

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
#define YYFINAL  110
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1509

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  128
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  186
/* YYNRULES -- Number of states.  */
#define YYNSTATES  425

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   364

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   118,     2,     2,     2,     2,   113,     2,
     125,   126,   116,   114,   107,   115,   127,   117,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   110,   124,
     111,   108,   112,   109,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   122,     2,   123,     2,     2,     2,     2,
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
     105,   106,   119,   120,   121
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    15,    19,    21,
      24,    26,    28,    30,    32,    34,    38,    39,    41,    44,
      55,    64,    74,    85,    94,   104,   112,   118,   119,   121,
     131,   137,   144,   154,   155,   157,   160,   163,   164,   167,
     171,   176,   181,   186,   191,   198,   206,   213,   221,   229,
     236,   251,   260,   264,   268,   272,   276,   280,   284,   289,
     294,   299,   304,   309,   314,   320,   326,   331,   335,   340,
     345,   350,   355,   360,   367,   376,   383,   386,   389,   391,
     395,   397,   400,   402,   404,   406,   410,   415,   418,   423,
     426,   429,   432,   436,   440,   444,   448,   452,   456,   460,
     464,   468,   472,   476,   480,   484,   488,   492,   496,   500,
     506,   508,   512,   514,   516,   518,   520,   522,   524,   526,
     528,   532,   534,   535,   541,   543,   546,   549,   554,   559,
     563,   567,   571,   575,   579,   585,   591,   597,   603,   609,
     611,   613,   615,   619,   621,   624,   625,   629,   631,   633,
     635,   637,   639,   641,   643,   645,   647,   649,   651,   653,
     655,   657,   659,   661,   663,   665,   667,   669,   671,   673,
     675,   677,   679,   681,   683,   685,   687,   689,   691,   693,
     695,   697,   699,   702,   705,   708,   711
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     129,     0,    -1,   130,    -1,   131,    -1,   130,   131,    -1,
     132,    -1,   122,   123,    -1,   122,   134,   123,    -1,   124,
      -1,   149,   124,    -1,   135,    -1,   137,    -1,   139,    -1,
     140,    -1,   149,    -1,   133,   107,   149,    -1,    -1,   132,
      -1,   134,   132,    -1,     6,   125,    40,   125,    87,   126,
     126,   132,     7,   132,    -1,     6,   125,    40,   125,    87,
     126,   126,   132,    -1,     6,   125,   118,    40,   125,    87,
     126,   126,   132,    -1,     6,   125,    40,   125,   151,   126,
     126,   132,     7,   132,    -1,     6,   125,    40,   125,   151,
     126,   126,   132,    -1,     6,   125,   118,    40,   125,   151,
     126,   126,   132,    -1,     6,   125,   151,   126,   132,     7,
     132,    -1,     6,   125,   151,   126,   132,    -1,    -1,   151,
      -1,     9,   125,   118,    40,   125,    87,   126,   126,   132,
      -1,     9,   125,   151,   126,   132,    -1,     8,   132,     9,
     125,   151,   126,    -1,     4,   125,   138,   124,   136,   124,
     138,   126,   132,    -1,    -1,   133,    -1,     5,   124,    -1,
       3,   124,    -1,    -1,   107,    86,    -1,    21,   125,   126,
      -1,    24,   125,   146,   126,    -1,    24,   125,    86,   126,
      -1,    18,   125,   151,   126,    -1,    19,   125,   151,   126,
      -1,    25,   125,   151,   107,   151,   126,    -1,    25,   125,
     151,   107,   151,   141,   126,    -1,    26,   125,    86,   107,
      86,   126,    -1,    27,   125,   151,   107,   151,   141,   126,
      -1,    28,   125,   151,   107,   151,   141,   126,    -1,    20,
     125,   151,   107,   151,   126,    -1,    20,   125,   151,   107,
     151,   107,   151,   107,   151,   107,   151,   107,   151,   126,
      -1,    17,   125,   151,   107,   151,   107,   151,   126,    -1,
      32,   125,   126,    -1,    33,   125,   126,    -1,    34,   125,
     126,    -1,    35,   125,   126,    -1,    36,   125,   126,    -1,
      37,   125,   126,    -1,    38,   125,    87,   126,    -1,    38,
     125,    86,   126,    -1,    38,   125,   151,   126,    -1,    39,
     125,   151,   126,    -1,    41,   125,    86,   126,    -1,    41,
     125,   151,   126,    -1,    84,   125,    86,   126,   132,    -1,
      84,   125,   151,   126,   132,    -1,    11,   125,   151,   126,
      -1,    12,   125,   126,    -1,    13,   125,   151,   126,    -1,
      14,   125,   151,   126,    -1,    15,   125,   151,   126,    -1,
      22,   125,   151,   126,    -1,    23,   125,   151,   126,    -1,
      16,   125,   151,   107,   151,   126,    -1,    30,   125,   151,
     107,   151,   107,   151,   126,    -1,    31,   125,   151,   107,
      86,   126,    -1,   148,    96,    -1,   148,    97,    -1,   143,
      -1,   125,   145,   126,    -1,    87,    -1,   115,    87,    -1,
      86,    -1,   146,    -1,   147,    -1,   147,   127,    88,    -1,
      96,   147,   127,    88,    -1,    96,   148,    -1,    97,   147,
     127,    88,    -1,    97,   148,    -1,   115,   145,    -1,   118,
     145,    -1,   148,   108,   145,    -1,   145,   116,   145,    -1,
     145,   117,   145,    -1,   145,   114,   145,    -1,   145,   115,
     145,    -1,   145,   113,   145,    -1,   145,   111,   145,    -1,
     145,   112,   145,    -1,   145,    91,   145,    -1,   145,    92,
     145,    -1,   145,   103,   145,    -1,   145,   102,   145,    -1,
     145,   104,   145,    -1,   145,    90,   145,    -1,   145,    93,
     145,    -1,   145,    94,   145,    -1,   145,    95,   145,    -1,
     145,   109,   145,   110,   145,    -1,    88,    -1,   147,   110,
      88,    -1,    10,    -1,   127,    -1,   117,    -1,   105,    -1,
      88,    -1,    89,    -1,   146,    -1,    86,    -1,   125,   145,
     126,    -1,   144,    -1,    -1,    42,   122,   150,   154,   123,
      -1,   142,    -1,    96,   148,    -1,    97,   148,    -1,    96,
     147,   127,    88,    -1,    97,   147,   127,    88,    -1,   148,
     108,   145,    -1,   148,   100,   145,    -1,   148,    99,   145,
      -1,   148,    98,   145,    -1,   148,   101,   145,    -1,   147,
     127,    88,   108,   145,    -1,   147,   127,    88,   100,   145,
      -1,   147,   127,    88,    99,   145,    -1,   147,   127,    88,
      98,   145,    -1,   147,   127,    88,   101,   145,    -1,   145,
      -1,    86,    -1,   152,    -1,   153,   107,   152,    -1,   155,
      -1,   154,   155,    -1,    -1,    58,   156,   153,    -1,    43,
      -1,    82,    -1,    45,    -1,    44,    -1,    46,    -1,    47,
      -1,    48,    -1,    49,    -1,    50,    -1,    51,    -1,    52,
      -1,    54,    -1,    53,    -1,    55,    -1,    56,    -1,    83,
      -1,    57,    -1,    59,    -1,    60,    -1,    61,    -1,    80,
      -1,    81,    -1,    62,    -1,    65,    -1,    66,    -1,    68,
      -1,    71,    -1,    70,    -1,    72,    -1,    73,    -1,    76,
      -1,    75,    -1,    77,    -1,    78,    -1,    79,    -1,    63,
      87,    -1,    64,    87,    -1,    67,    87,    -1,    69,    87,
      -1,    74,    87,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   161,   161,   167,   168,   173,   177,   178,   179,   180,
     181,   182,   183,   184,   188,   189,   193,   194,   195,   202,
     218,   234,   246,   260,   274,   284,   295,   305,   306,   330,
     345,   357,   365,   387,   388,   392,   400,   409,   411,   418,
     422,   429,   436,   440,   445,   452,   459,   468,   475,   483,
     490,   502,   511,   515,   519,   523,   527,   531,   535,   542,
     549,   555,   561,   568,   572,   586,   599,   603,   607,   611,
     615,   619,   623,   627,   632,   638,   647,   658,   672,   674,
     677,   682,   688,   693,   699,   704,   712,   727,   737,   752,
     762,   767,   771,   777,   782,   787,   792,   797,   802,   807,
     812,   818,   823,   828,   832,   836,   840,   845,   849,   853,
     865,   867,   874,   877,   880,   883,   886,   889,   894,   899,
     904,   908,   911,   910,   915,   917,   925,   933,   946,   959,
     963,   970,   977,   984,   991,  1000,  1013,  1026,  1039,  1054,
    1058,  1062,  1063,  1067,  1068,  1072,  1072,  1078,  1079,  1080,
    1081,  1082,  1083,  1084,  1085,  1086,  1087,  1088,  1089,  1090,
    1091,  1092,  1093,  1094,  1095,  1096,  1097,  1098,  1099,  1100,
    1101,  1102,  1103,  1104,  1105,  1106,  1107,  1108,  1109,  1110,
    1111,  1112,  1114,  1118,  1122,  1125,  1129
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BREAK", "FOR", "CONTINUE", "IF", "ELSE",
  "DO", "WHILE", "THIS", "EVAL", "TIME", "RANDOM", "LENGTH", "INT",
  "CONCAT", "DUPLICATECLIP", "REMOVECLIP", "TRACE", "STARTDRAG",
  "STOPDRAG", "ORD", "CHR", "CALLFRAME", "GETURL", "GETURL1", "LOADMOVIE",
  "LOADVARIABLES", "POSTURL", "SUBSTR", "GETPROPERTY", "NEXTFRAME",
  "PREVFRAME", "PLAY", "STOP", "TOGGLEQUALITY", "STOPSOUNDS", "GOTOFRAME",
  "GOTOANDPLAY", "FRAMELOADED", "SETTARGET", "ASM", "ASMADD", "ASMDIVIDE",
  "ASMMULTIPLY", "ASMEQUALS", "ASMLESS", "ASMLOGICALAND", "ASMLOGICALOR",
  "ASMLOGICALNOT", "ASMSTRINGAND", "ASMSTRINGEQUALS", "ASMSTRINGEXTRACT",
  "ASMSTRINGLENGTH", "ASMMBSTRINGEXTRACT", "ASMMBSTRINGLENGTH", "ASMPOP",
  "ASMPUSH", "ASMASCIITOCHAR", "ASMCHARTOASCII", "ASMTOINTEGER", "ASMCALL",
  "ASMIF", "ASMJUMP", "ASMGETVARIABLE", "ASMSETVARIABLE", "ASMGETURL2",
  "ASMGETPROPERTY", "ASMGOTOFRAME2", "ASMREMOVESPRITE", "ASMSETPROPERTY",
  "ASMSETTARGET2", "ASMSTARTDRAG", "ASMWAITFORFRAME2", "ASMCLONESPRITE",
  "ASMENDDRAG", "ASMGETTIME", "ASMRANDOMNUMBER", "ASMTRACE",
  "ASMMBASCIITOCHAR", "ASMMBCHARTOASCII", "ASMSUBSTRACT", "ASMSTRINGLESS",
  "TELLTARGET", "BROKENSTRING", "STRING", "NUMBER", "IDENTIFIER", "PATH",
  "\"==\"", "\"<=\"", "\">=\"", "\"!=\"", "\"&&\"", "\"||\"", "\"++\"",
  "\"--\"", "\"+=\"", "\"/=\"", "\"*=\"", "\"-=\"", "\"===\"", "\"!==\"",
  "\"<=>\"", "\"..\"", "\"end\"", "','", "'='", "'?'", "':'", "'<'", "'>'",
  "'&'", "'+'", "'-'", "'*'", "'/'", "'!'", "UMINUS", "POSTFIX", "NEGATE",
  "'{'", "'}'", "';'", "'('", "')'", "'.'", "$accept", "program", "elems",
  "elem", "stmt", "assign_stmts", "statements", "if_stmt", "expr_opt",
  "iter_stmt", "assign_stmts_opt", "cont_stmt", "break_stmt", "urlmethod",
  "void_function_call", "function_call", "pf_expr", "rhs_expr", "variable",
  "sprite", "lhs_expr", "assign_stmt", "@1", "expr", "push_item",
  "push_list", "opcode_list", "opcode", "@2", 0
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
     355,   356,   357,   358,   359,   360,   361,    44,    61,    63,
      58,    60,    62,    38,    43,    45,    42,    47,    33,   362,
     363,   364,   123,   125,    59,    40,    41,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   128,   129,   130,   130,   131,   132,   132,   132,   132,
     132,   132,   132,   132,   133,   133,   134,   134,   134,   135,
     135,   135,   135,   135,   135,   135,   135,   136,   136,   137,
     137,   137,   137,   138,   138,   139,   140,   141,   141,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   144,   144,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     146,   146,   147,   147,   147,   147,   147,   147,   148,   148,
     148,   149,   150,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   151,
     152,   153,   153,   154,   154,   156,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     3,     1,     2,
       1,     1,     1,     1,     1,     3,     0,     1,     2,    10,
       8,     9,    10,     8,     9,     7,     5,     0,     1,     9,
       5,     6,     9,     0,     1,     2,     2,     0,     2,     3,
       4,     4,     4,     4,     6,     7,     6,     7,     7,     6,
      14,     8,     3,     3,     3,     3,     3,     3,     4,     4,
       4,     4,     4,     4,     5,     5,     4,     3,     4,     4,
       4,     4,     4,     6,     8,     6,     2,     2,     1,     3,
       1,     2,     1,     1,     1,     3,     4,     2,     4,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     0,     5,     1,     2,     2,     4,     4,     3,
       3,     3,     3,     3,     5,     5,     5,     5,     5,     1,
       1,     1,     3,     1,     2,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     110,   117,     0,     0,   115,   114,     0,     8,     0,   113,
       0,     2,     3,     5,    10,    11,    12,    13,   124,   121,
     118,     0,     0,     0,    36,    33,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
       0,     0,   125,     0,   126,     6,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    82,    80,
       0,     0,     0,     0,     0,    78,     0,    83,    84,     0,
       1,     4,     0,     0,    76,    77,     0,     0,     0,     0,
       0,     9,    34,     0,    14,     0,     0,   139,     0,     0,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
       0,     0,     0,     0,    52,    53,    54,    55,    56,    57,
      82,    80,     0,     0,    82,     0,     0,    82,     0,     0,
       0,     7,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,     0,    89,    80,    90,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   120,     0,
       0,   111,     0,   132,   131,   130,   133,   129,     0,    27,
       0,     0,     0,     0,     0,     0,     0,    42,    43,     0,
      41,    40,     0,     0,     0,     0,    59,    58,    60,    61,
      62,    63,   147,   150,   149,   151,   152,   153,   154,   155,
     156,   157,   159,   158,   160,   161,   163,   145,   164,   165,
     166,   169,     0,     0,   170,   171,     0,   172,     0,   174,
     173,   175,   176,     0,   178,   177,   179,   180,   181,   167,
     168,   148,   162,     0,   143,     0,     0,   127,   128,     0,
      67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,   105,   100,   101,   106,   107,   108,   103,   102,
     104,     0,    98,    99,    97,    95,    96,    93,    94,    85,
      92,     0,     0,     0,     0,     0,    15,     0,    28,    80,
       0,     0,    26,     0,     0,    30,     0,     0,     0,     0,
      37,    37,     0,   182,   183,   184,   185,   186,   123,   144,
      64,    65,    66,    68,    69,    70,     0,    71,    72,     0,
       0,    86,    88,     0,   137,   136,   135,   138,   134,    33,
       0,     0,    80,     0,     0,    31,     0,     0,     0,    49,
       0,    44,     0,    46,     0,     0,   140,   141,   146,     0,
       0,     0,   109,     0,     0,     0,     0,     0,    25,     0,
       0,     0,    38,    45,    47,    48,     0,    73,     0,    75,
       0,    20,    23,     0,     0,     0,    51,     0,   142,     0,
      32,     0,     0,    21,    24,    29,     0,    74,    19,    22,
       0,     0,     0,     0,    50
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    40,    41,    42,    43,   122,    87,    44,   317,    45,
     123,    46,    47,   372,    48,   105,    49,   127,   107,   108,
     109,    53,   156,   128,   377,   378,   273,   274,   332
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -316
static const yytype_int16 yypact[] =
{
     737,   -86,   -80,   -73,   -66,   737,   -64,  -316,   -63,   -62,
     -57,   -56,   -54,   -52,   -51,   -35,   -34,   -33,   -22,   -15,
     -14,   -12,    -9,    -6,    -5,    -2,     6,   -17,    18,  -316,
     -71,  -316,    20,    20,  -316,  -316,   487,  -316,  1002,  -316,
     107,   737,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -109,   -20,    24,  -316,   848,  -316,    -3,   135,  1025,
    1002,  1002,  1002,  1002,    26,    44,  1002,    64,  1002,  1002,
      27,    30,    31,    32,    33,    36,  1048,  1002,  1146,  -316,
    1169,   -96,  -316,   -81,  -316,  -316,  -316,   612,    29,    35,
      38,    45,    47,    48,    50,    54,    55,    56,    43,  -316,
      20,    20,  1192,  1002,  1002,  -316,    74,    76,   -75,    89,
    -316,  -316,    94,   110,  -316,  -316,  1002,  1002,  1002,  1002,
    1002,  -316,    96,    80,  -316,    81,   881,  1392,    79,    82,
     979,    88,   109,    91,    92,   112,  -316,    95,    97,   114,
     113,   115,   119,   120,  -316,  -316,  -316,  -316,  -316,  -316,
    -105,   102,   104,   105,   -84,   108,  1398,   -82,   111,   145,
     147,  -316,  -316,  1002,   117,  1002,  1002,  1002,  1002,  1002,
    1002,  1002,  1002,   -70,  -316,   -67,  -316,  -316,  -316,  -316,
     565,  1002,  1002,  1002,  1002,  1002,  1002,  1002,  1002,  1002,
    1002,  1002,  1002,  1002,  1002,  1002,  1002,  1002,  -316,   148,
    1002,  -316,    28,  1392,  1392,  1392,  1392,  1392,   848,  1002,
    1215,   116,   737,  1002,   122,   737,  1002,  -316,  -316,  1002,
    -316,  -316,  1002,   158,  1002,  1002,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,   161,   163,  -316,  -316,   164,  -316,   172,  -316,
    -316,  -316,  -316,   173,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  1302,  -316,   737,   737,  -316,  -316,   137,
    -316,   138,   139,   141,   154,   142,   143,   165,   177,   157,
     185,   178,   166,    25,    25,   166,   275,   275,   166,   166,
      25,   690,    25,    25,   -18,   -69,   -69,  -316,  -316,  -316,
    1392,  1002,  1002,  1002,  1002,  1002,  -316,   167,  -316,   159,
     162,  1313,   280,   168,   202,  -316,   183,  -103,  -101,   169,
     190,   190,   221,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  1002,  -316,  -316,  1002,
     222,  -316,  -316,  1002,  1392,  1392,  1392,  1392,  1392,   848,
     186,   187,   188,   189,   737,  -316,   211,  1002,  1002,  -316,
     225,  -316,   212,  -316,   213,   214,  -316,  -316,   209,   215,
     237,   219,  1392,   224,   737,   737,   227,   228,  -316,   230,
     234,   240,  -316,  -316,  -316,  -316,   221,  -316,  1002,  -316,
     737,   341,   344,   737,   737,   737,  -316,  1002,  -316,   235,
    -316,   737,   737,  -316,  -316,  -316,   255,  -316,  -316,  -316,
    1002,   256,  1002,   243,  -316
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -316,  -316,  -316,   329,    59,  -316,  -316,  -316,  -316,  -316,
      12,  -316,  -316,  -315,  -316,  -316,  -316,   136,     0,    17,
      34,   -53,  -316,   133,   -24,  -316,  -316,   100,  -316
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -121
static const yytype_int16 yytable[] =
{
      50,   112,   124,  -119,   368,    50,   370,     7,    88,    89,
      90,    91,    92,    93,   112,   374,   375,    51,   113,    94,
      95,   226,    51,   369,  -119,   371,  -119,    96,    97,   112,
       7,   159,    50,    50,    52,   112,    50,   125,    54,    52,
     112,    50,   230,   112,   275,    55,   160,   196,   197,    81,
      83,    56,   199,    51,     7,    50,  -116,   289,    51,    57,
     290,    59,    60,    61,    58,   138,    82,    84,    62,    63,
      52,    64,    51,    65,    66,    52,   114,   115,   116,   117,
     118,   119,   139,    98,    99,    30,    31,    50,   120,    52,
      67,    68,    69,   100,   101,    86,   194,   195,   196,   197,
      50,    50,    34,    70,    51,    79,    29,   110,    30,    31,
      71,    72,   102,    73,    35,   126,    74,   173,   175,    75,
      76,    52,   104,    77,    39,    34,   311,   312,   313,   314,
     137,    78,    30,    31,   174,   176,   315,    35,   193,   194,
     195,   196,   197,    80,   129,    38,   162,    39,   121,    34,
     141,  -119,   136,   144,   163,   316,   145,   146,   147,   148,
     164,    35,   149,   165,   181,   182,   183,   184,   185,   186,
     166,    39,   167,   168,   106,   169,   187,   188,   189,   170,
     171,   172,   201,   190,  -118,   191,   192,   193,   194,   195,
     196,   197,   131,   132,   133,   134,   135,   200,   202,   140,
     198,   142,   143,   208,   209,   212,   210,   213,    50,   152,
     153,   155,    50,   158,   215,    50,   216,   217,   218,   219,
     222,   220,   223,   221,   112,    51,   224,   225,   227,    51,
     228,   229,    51,   277,   231,   278,   309,   276,   178,   179,
     180,   321,    52,   280,   329,   351,    52,   324,   333,    52,
     334,   335,   203,   204,   205,   206,   207,   182,   183,   336,
     337,   346,   179,   342,   343,   344,   179,   345,   347,   348,
     189,   322,   349,   352,   325,    50,    50,   191,   192,   193,
     194,   195,   196,   197,   350,   360,  -120,   364,   361,   366,
     367,   359,    51,    51,   365,   373,   279,   370,   281,   282,
     283,   284,   285,   286,   287,   288,   124,   376,   381,    52,
      52,   392,   384,   385,   386,   387,   396,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   340,   341,   310,   389,   393,   394,
     395,   397,   318,   320,   398,   399,   323,   407,   411,   326,
     400,   412,   327,   403,   404,   328,   405,   330,   331,    50,
     406,   417,   420,   422,    50,   181,   182,   183,   184,   424,
     111,   383,   408,   339,     0,     0,    51,   187,   188,   189,
       0,    51,     0,     0,    50,    50,   191,   192,   193,   194,
     195,   196,   197,    52,     0,     0,     0,     0,    52,     0,
      50,    51,    51,    50,    50,    50,     0,     0,     0,     0,
       0,    50,    50,     0,     0,     0,     0,    51,    52,    52,
      51,    51,    51,   388,     0,     0,     0,     0,    51,    51,
       0,     0,     0,     0,    52,     0,     0,    52,    52,    52,
       0,     0,     0,   401,   402,    52,    52,   354,   355,   356,
     357,   358,     0,     0,   363,     0,     0,     0,     0,   410,
       0,     0,   413,   414,   415,     0,     0,     0,     0,     0,
     418,   419,     0,     0,     0,     0,     0,     0,     0,   379,
       0,     0,   380,     0,     0,     0,     0,     0,     0,   382,
       1,     2,     3,     4,     0,     5,     6,     7,     0,     0,
     390,   391,     0,     0,     8,     9,    10,    11,    12,     0,
       0,    13,    14,    15,    16,    17,     0,     0,     0,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
       0,   409,     0,     0,     0,     0,     0,     0,     0,     0,
     416,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   421,     0,   423,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,    29,     0,    30,    31,     0,     0,     0,
       0,     0,     0,    32,    33,     0,     0,     0,     0,     0,
       0,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,    36,
      85,    37,    38,     0,    39,     1,     2,     3,     4,     0,
       5,     6,     7,     0,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,     0,     0,    13,    14,    15,    16,
      17,     0,     0,     0,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,   181,   182,   183,   184,   185,
     186,     0,     0,     0,     0,     0,     0,   187,   188,   189,
       0,     0,     0,     0,   190,     0,   191,   192,   193,   194,
     195,   196,   197,     0,     0,     0,     0,     0,     0,     0,
       0,   291,     0,     0,     0,     0,    28,     0,    29,     0,
      30,    31,     0,     0,     0,     0,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    35,
       0,     0,     0,     0,    36,   161,    37,    38,     0,    39,
       1,     2,     3,     4,     0,     5,     6,     7,     0,     0,
       0,     0,     0,     0,     8,     9,    10,    11,    12,     0,
       0,    13,    14,    15,    16,    17,     0,     0,     0,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
     181,   182,   183,   184,   185,   186,     0,     0,     0,     0,
       0,     0,   187,   188,   189,     0,     0,     0,     0,   190,
     353,   191,   192,   193,   194,   195,   196,   197,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,    29,     0,    30,    31,     0,     0,     0,
       0,     0,     0,    32,    33,     0,     0,     0,     0,     0,
       0,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     7,    36,
       0,    37,    38,     0,    39,     8,     9,    10,    11,    12,
       0,     0,    13,    14,    15,    16,    17,     0,     0,     0,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,     7,    88,    89,    90,    91,    92,    93,     0,     0,
       0,     0,     0,    94,    95,     0,     0,     0,     0,     0,
       0,    96,    97,     0,     0,     0,     0,     0,     0,     0,
       0,   211,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,    29,     0,    30,    31,     0,     0,
       0,     0,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    35,     0,    98,    99,    30,
      31,     0,     0,    38,     0,    39,     0,   100,   101,     0,
       0,     0,     0,     0,     0,     0,    34,     0,     0,     7,
      88,    89,    90,    91,    92,    93,   102,     0,    35,   103,
       0,    94,    95,     0,     0,     0,   104,     0,    39,    96,
      97,     0,     7,    88,    89,    90,    91,    92,    93,   214,
       0,     0,     0,     0,    94,    95,     0,     0,     0,     0,
       0,     0,    96,    97,     0,     7,    88,    89,    90,    91,
      92,    93,     0,     0,     0,     0,     0,    94,    95,     0,
       0,     0,     0,     0,     0,    96,    97,     0,     7,    88,
      89,    90,    91,    92,    93,    98,    99,    30,    31,     0,
      94,    95,     0,     0,     0,   100,   101,     0,    96,    97,
       0,     0,     0,     0,    34,     0,     0,     0,    98,    99,
      30,    31,     0,     0,   102,     0,    35,   103,   100,   101,
       0,     0,     0,     0,   104,     0,    39,    34,     0,     0,
       0,    98,    99,    30,    31,     0,     0,   102,     0,    35,
     103,   100,   101,     0,     0,     0,     0,   104,     0,    39,
      34,     0,     0,     0,   150,   151,    30,    31,     0,     0,
     102,     0,    35,   130,   100,   101,     0,     0,     0,     0,
     104,     0,    39,    34,     0,     0,     7,    88,    89,    90,
      91,    92,    93,   102,     0,    35,   103,     0,    94,    95,
       0,     0,     0,   104,     0,    39,    96,    97,     0,     7,
      88,    89,    90,    91,    92,    93,     0,     0,     0,     0,
       0,    94,    95,     0,     0,     0,     0,     0,     0,    96,
      97,     0,     7,    88,    89,    90,    91,    92,    93,     0,
       0,     0,     0,     0,    94,    95,     0,     0,     0,     0,
       0,     0,    96,    97,     0,     7,    88,    89,    90,    91,
      92,    93,   154,    99,    30,    31,     0,    94,    95,     0,
       0,     0,   100,   101,     0,    96,    97,     0,     0,     0,
       0,    34,     0,     0,     0,   157,    99,    30,    31,     0,
       0,   102,     0,    35,   103,   100,   101,     0,     0,     0,
       0,   104,     0,    39,    34,     0,     0,     0,    98,   177,
      30,    31,     0,     0,   102,     0,    35,   103,   100,   101,
       0,     0,     0,     0,   104,     0,    39,    34,     0,     0,
       0,    98,   319,    30,    31,     0,     0,   102,     0,    35,
     103,   100,   101,     0,     0,     0,     0,   104,     0,    39,
      34,     0,     0,     7,    88,    89,    90,    91,    92,    93,
     102,     0,    35,   103,     0,    94,    95,     0,     0,     0,
     104,     0,    39,    96,    97,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
     362,    30,    31,     0,     0,     0,     0,     0,     0,   100,
     101,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,   338,     0,     0,   102,     0,
      35,   103,     0,     0,     0,     0,     0,     0,   104,     0,
      39,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   181,   182,   183,   184,   185,   186,     0,     0,
       0,     0,     0,     0,   187,   188,   189,     0,     0,     0,
       0,   190,     0,   191,   192,   193,   194,   195,   196,   197
};

static const yytype_int16 yycheck[] =
{
       0,   110,    55,   108,   107,     5,   107,    10,    11,    12,
      13,    14,    15,    16,   110,   330,   331,     0,   127,    22,
      23,   126,     5,   126,   108,   126,   108,    30,    31,   110,
      10,   127,    32,    33,     0,   110,    36,    40,   124,     5,
     110,    41,   126,   110,   126,   125,   127,   116,   117,    32,
      33,   124,   127,    36,    10,    55,   127,   127,    41,   125,
     127,   125,   125,   125,     5,    65,    32,    33,   125,   125,
      36,   125,    55,   125,   125,    41,    96,    97,    98,    99,
     100,   101,    65,    86,    87,    88,    89,    87,   108,    55,
     125,   125,   125,    96,    97,    36,   114,   115,   116,   117,
     100,   101,   105,   125,    87,   122,    86,     0,    88,    89,
     125,   125,   115,   125,   117,   118,   125,   100,   101,   125,
     125,    87,   125,   125,   127,   105,    98,    99,   100,   101,
      86,   125,    88,    89,   100,   101,   108,   117,   113,   114,
     115,   116,   117,   125,     9,   125,    87,   127,   124,   105,
      86,   108,   126,   126,   125,   208,   126,   126,   126,   126,
     125,   117,   126,   125,    90,    91,    92,    93,    94,    95,
     125,   127,   125,   125,    38,   125,   102,   103,   104,   125,
     125,   125,    88,   109,   108,   111,   112,   113,   114,   115,
     116,   117,    59,    60,    61,    62,    63,   108,    88,    66,
     126,    68,    69,   107,   124,   126,   125,   125,   208,    76,
      77,    78,   212,    80,   126,   215,   107,   126,   126,   107,
     107,   126,   107,   126,   110,   208,   107,   107,   126,   212,
     126,   126,   215,    88,   126,    88,    88,   126,   102,   103,
     104,   125,   208,   126,    86,    88,   212,   125,    87,   215,
      87,    87,   116,   117,   118,   119,   120,    91,    92,    87,
      87,   107,   126,   126,   126,   126,   130,   126,   126,   126,
     104,   212,   107,    88,   215,   275,   276,   111,   112,   113,
     114,   115,   116,   117,   107,   126,   108,     7,   126,    87,
     107,   124,   275,   276,   126,   126,   163,   107,   165,   166,
     167,   168,   169,   170,   171,   172,   359,    86,    86,   275,
     276,    86,   126,   126,   126,   126,   107,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   275,   276,   200,   126,   126,   126,
     126,   126,   209,   210,   107,   126,   213,   107,     7,   216,
     126,     7,   219,   126,   126,   222,   126,   224,   225,   359,
     126,   126,   107,   107,   364,    90,    91,    92,    93,   126,
      41,   359,   396,   273,    -1,    -1,   359,   102,   103,   104,
      -1,   364,    -1,    -1,   384,   385,   111,   112,   113,   114,
     115,   116,   117,   359,    -1,    -1,    -1,    -1,   364,    -1,
     400,   384,   385,   403,   404,   405,    -1,    -1,    -1,    -1,
      -1,   411,   412,    -1,    -1,    -1,    -1,   400,   384,   385,
     403,   404,   405,   364,    -1,    -1,    -1,    -1,   411,   412,
      -1,    -1,    -1,    -1,   400,    -1,    -1,   403,   404,   405,
      -1,    -1,    -1,   384,   385,   411,   412,   311,   312,   313,
     314,   315,    -1,    -1,   321,    -1,    -1,    -1,    -1,   400,
      -1,    -1,   403,   404,   405,    -1,    -1,    -1,    -1,    -1,
     411,   412,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,
      -1,    -1,   349,    -1,    -1,    -1,    -1,    -1,    -1,   353,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    -1,
     367,   368,    -1,    -1,    17,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    42,
      -1,   398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     407,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   420,    -1,   422,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    86,    -1,    88,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,   122,
     123,   124,   125,    -1,   127,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    41,    42,    90,    91,    92,    93,    94,
      95,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,   104,
      -1,    -1,    -1,    -1,   109,    -1,   111,   112,   113,   114,
     115,   116,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   126,    -1,    -1,    -1,    -1,    84,    -1,    86,    -1,
      88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
      -1,    -1,    -1,    -1,   122,   123,   124,   125,    -1,   127,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    42,
      90,    91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   103,   104,    -1,    -1,    -1,    -1,   109,
     110,   111,   112,   113,   114,   115,   116,   117,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    86,    -1,    88,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,    10,   122,
      -1,   124,   125,    -1,   127,    17,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      42,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    86,    -1,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   117,    -1,    86,    87,    88,
      89,    -1,    -1,   125,    -1,   127,    -1,    96,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   115,    -1,   117,   118,
      -1,    22,    23,    -1,    -1,    -1,   125,    -1,   127,    30,
      31,    -1,    10,    11,    12,    13,    14,    15,    16,    40,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    10,    11,
      12,    13,    14,    15,    16,    86,    87,    88,    89,    -1,
      22,    23,    -1,    -1,    -1,    96,    97,    -1,    30,    31,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    86,    87,
      88,    89,    -1,    -1,   115,    -1,   117,   118,    96,    97,
      -1,    -1,    -1,    -1,   125,    -1,   127,   105,    -1,    -1,
      -1,    86,    87,    88,    89,    -1,    -1,   115,    -1,   117,
     118,    96,    97,    -1,    -1,    -1,    -1,   125,    -1,   127,
     105,    -1,    -1,    -1,    86,    87,    88,    89,    -1,    -1,
     115,    -1,   117,   118,    96,    97,    -1,    -1,    -1,    -1,
     125,    -1,   127,   105,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   115,    -1,   117,   118,    -1,    22,    23,
      -1,    -1,    -1,   125,    -1,   127,    30,    31,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    10,    11,    12,    13,    14,
      15,    16,    86,    87,    88,    89,    -1,    22,    23,    -1,
      -1,    -1,    96,    97,    -1,    30,    31,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    86,    87,    88,    89,    -1,
      -1,   115,    -1,   117,   118,    96,    97,    -1,    -1,    -1,
      -1,   125,    -1,   127,   105,    -1,    -1,    -1,    86,    87,
      88,    89,    -1,    -1,   115,    -1,   117,   118,    96,    97,
      -1,    -1,    -1,    -1,   125,    -1,   127,   105,    -1,    -1,
      -1,    86,    87,    88,    89,    -1,    -1,   115,    -1,   117,
     118,    96,    97,    -1,    -1,    -1,    -1,   125,    -1,   127,
     105,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     115,    -1,   117,   118,    -1,    22,    23,    -1,    -1,    -1,
     125,    -1,   127,    30,    31,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,   115,    -1,
     117,   118,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,
     127,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    90,    91,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,   104,    -1,    -1,    -1,
      -1,   109,    -1,   111,   112,   113,   114,   115,   116,   117
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,     9,    10,    17,    18,
      19,    20,    21,    24,    25,    26,    27,    28,    32,    33,
      34,    35,    36,    37,    38,    39,    41,    42,    84,    86,
      88,    89,    96,    97,   105,   117,   122,   124,   125,   127,
     129,   130,   131,   132,   135,   137,   139,   140,   142,   144,
     146,   147,   148,   149,   124,   125,   124,   125,   132,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   122,
     125,   147,   148,   147,   148,   123,   132,   134,    11,    12,
      13,    14,    15,    16,    22,    23,    30,    31,    86,    87,
      96,    97,   115,   118,   125,   143,   145,   146,   147,   148,
       0,   131,   110,   127,    96,    97,    98,    99,   100,   101,
     108,   124,   133,   138,   149,    40,   118,   145,   151,     9,
     118,   151,   151,   151,   151,   151,   126,    86,   146,   147,
     151,    86,   151,   151,   126,   126,   126,   126,   126,   126,
      86,    87,   151,   151,    86,   151,   150,    86,   151,   127,
     127,   123,   132,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   147,   148,   147,   148,    87,   145,   145,
     145,    90,    91,    92,    93,    94,    95,   102,   103,   104,
     109,   111,   112,   113,   114,   115,   116,   117,   126,   127,
     108,    88,    88,   145,   145,   145,   145,   145,   107,   124,
     125,    40,   126,   125,    40,   126,   107,   126,   126,   107,
     126,   126,   107,   107,   107,   107,   126,   126,   126,   126,
     126,   126,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,   154,   155,   126,   126,    88,    88,   151,
     126,   151,   151,   151,   151,   151,   151,   151,   151,   127,
     127,   126,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,    88,
     145,    98,    99,   100,   101,   108,   149,   136,   151,    87,
     151,   125,   132,   151,   125,   132,   151,   151,   151,    86,
     151,   151,   156,    87,    87,    87,    87,    87,   123,   155,
     132,   132,   126,   126,   126,   126,   107,   126,   126,   107,
     107,    88,    88,   110,   145,   145,   145,   145,   145,   124,
     126,   126,    87,   151,     7,   126,    87,   107,   107,   126,
     107,   126,   141,   126,   141,   141,    86,   152,   153,   151,
     151,    86,   145,   138,   126,   126,   126,   126,   132,   126,
     151,   151,    86,   126,   126,   126,   107,   126,   107,   126,
     126,   132,   132,   126,   126,   126,   126,   107,   152,   151,
     132,     7,     7,   132,   132,   132,   151,   126,   132,   132,
     107,   151,   107,   151,   126
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
#line 162 "./swf4compiler.y"
    { *((Buffer *)buffer) = (yyvsp[(1) - (1)].action); }
    break;

  case 4:
#line 169 "./swf4compiler.y"
    { bufferConcat((yyvsp[(1) - (2)].action), (yyvsp[(2) - (2)].action)); }
    break;

  case 6:
#line 177 "./swf4compiler.y"
    { (yyval.action) = NULL; }
    break;

  case 7:
#line 178 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(2) - (3)].action); }
    break;

  case 8:
#line 179 "./swf4compiler.y"
    { (yyval.action) = NULL; }
    break;

  case 15:
#line 189 "./swf4compiler.y"
    { bufferConcat((yyvsp[(1) - (3)].action), (yyvsp[(3) - (3)].action)); }
    break;

  case 16:
#line 193 "./swf4compiler.y"
    { (yyval.action) = NULL; }
    break;

  case 18:
#line 196 "./swf4compiler.y"
    { bufferConcat((yyvsp[(1) - (2)].action), (yyvsp[(2) - (2)].action)); }
    break;

  case 19:
#line 203 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteU8((yyval.action), SWFACTION_WAITFORFRAME);
		  bufferWriteS16((yyval.action), 3);
		  bufferWriteS16((yyval.action), atoi((yyvsp[(5) - (10)].str)));
		  free((yyvsp[(5) - (10)].str));
		  bufferWriteU8((yyval.action), 1);		/* if not loaded, jump to.. */
		  bufferWriteU8((yyval.action), SWFACTION_JUMP);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), bufferLength((yyvsp[(10) - (10)].action))+5);
		  bufferConcat((yyval.action), (yyvsp[(10) - (10)].action));			  /* ..here */
		  bufferWriteU8((yyval.action), SWFACTION_JUMP);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), bufferLength((yyvsp[(8) - (10)].action)));
		  bufferConcat((yyval.action), (yyvsp[(8) - (10)].action)); }
    break;

  case 20:
#line 219 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteU8((yyval.action), SWFACTION_WAITFORFRAME);
		  bufferWriteS16((yyval.action), 3);
		  bufferWriteS16((yyval.action), atoi((yyvsp[(5) - (8)].str)));
		  free((yyvsp[(5) - (8)].str));
		  bufferWriteU8((yyval.action), 1);		/* if not loaded, jump to.. */
		  bufferWriteU8((yyval.action), SWFACTION_JUMP);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), 5);
		  bufferWriteU8((yyval.action), SWFACTION_JUMP);	  /* ..here */
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), bufferLength((yyvsp[(8) - (8)].action)));	  /* ..and then out */
		  bufferConcat((yyval.action), (yyvsp[(8) - (8)].action)); }
    break;

  case 21:
#line 235 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteU8((yyval.action), SWFACTION_WAITFORFRAME);
		  bufferWriteS16((yyval.action), 3);
		  bufferWriteS16((yyval.action), atoi((yyvsp[(6) - (9)].str)));
		  free((yyvsp[(6) - (9)].str));
		  bufferWriteU8((yyval.action), 1);		/* if not loaded, jump to.. */
		  bufferWriteU8((yyval.action), SWFACTION_JUMP);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), bufferLength((yyvsp[(9) - (9)].action)));
		  bufferConcat((yyval.action), (yyvsp[(9) - (9)].action)); }
    break;

  case 22:
#line 247 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(5) - (10)].action);
		  bufferWriteU8((yyval.action), SWFACTION_WAITFORFRAME2);
		  bufferWriteS16((yyval.action), 1);
		  bufferWriteU8((yyval.action), 1);		/* if not loaded, jump to.. */
		  bufferWriteU8((yyval.action), SWFACTION_JUMP);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), bufferLength((yyvsp[(10) - (10)].action))+5);
		  bufferConcat((yyval.action), (yyvsp[(10) - (10)].action));			  /* ..here */
		  bufferWriteU8((yyval.action), SWFACTION_JUMP);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), bufferLength((yyvsp[(8) - (10)].action)));
		  bufferConcat((yyval.action), (yyvsp[(8) - (10)].action)); }
    break;

  case 23:
#line 261 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(5) - (8)].action);
		  bufferWriteU8((yyval.action), SWFACTION_WAITFORFRAME2);
		  bufferWriteS16((yyval.action), 1);
		  bufferWriteU8((yyval.action), 1);		/* if not loaded, jump to.. */
		  bufferWriteU8((yyval.action), SWFACTION_JUMP);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), 5);
		  bufferWriteU8((yyval.action), SWFACTION_JUMP);	  /* ..here */
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), bufferLength((yyvsp[(8) - (8)].action)));	  /* ..and then out */
		  bufferConcat((yyval.action), (yyvsp[(8) - (8)].action)); }
    break;

  case 24:
#line 275 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(6) - (9)].action);
		  bufferWriteU8((yyval.action), SWFACTION_WAITFORFRAME2);
		  bufferWriteS16((yyval.action), 1);
		  bufferWriteU8((yyval.action), 1);		/* if not loaded, jump to.. */
		  bufferWriteU8((yyval.action), SWFACTION_JUMP);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), bufferLength((yyvsp[(9) - (9)].action)));
		  bufferConcat((yyval.action), (yyvsp[(9) - (9)].action)); }
    break;

  case 25:
#line 285 "./swf4compiler.y"
    { bufferWriteU8((yyvsp[(3) - (7)].action), SWFACTION_IF);
		  bufferWriteS16((yyvsp[(3) - (7)].action), 2);
		  bufferWriteS16((yyvsp[(3) - (7)].action), bufferLength((yyvsp[(7) - (7)].action))+5);
		  bufferConcat((yyvsp[(3) - (7)].action), (yyvsp[(7) - (7)].action));
		  bufferWriteU8((yyvsp[(3) - (7)].action), SWFACTION_JUMP);
		  bufferWriteS16((yyvsp[(3) - (7)].action), 2);
		  bufferWriteS16((yyvsp[(3) - (7)].action), bufferLength((yyvsp[(5) - (7)].action)));
		  bufferConcat((yyvsp[(3) - (7)].action), (yyvsp[(5) - (7)].action));
		  (yyval.action) = (yyvsp[(3) - (7)].action); }
    break;

  case 26:
#line 296 "./swf4compiler.y"
    { bufferWriteU8((yyvsp[(3) - (5)].action), SWFACTION_LOGICALNOT);
		  bufferWriteU8((yyvsp[(3) - (5)].action), SWFACTION_IF);
		  bufferWriteS16((yyvsp[(3) - (5)].action), 2);
		  bufferWriteS16((yyvsp[(3) - (5)].action), bufferLength((yyvsp[(5) - (5)].action)));
		  bufferConcat((yyvsp[(3) - (5)].action), (yyvsp[(5) - (5)].action));
		  (yyval.action) = (yyvsp[(3) - (5)].action); }
    break;

  case 27:
#line 305 "./swf4compiler.y"
    { (yyval.action) = NULL; }
    break;

  case 28:
#line 306 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(1) - (1)].action); }
    break;

  case 29:
#line 331 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteU8((yyval.action), SWFACTION_WAITFORFRAME);
		  bufferWriteS16((yyval.action), 3);
		  bufferWriteS16((yyval.action), atoi((yyvsp[(6) - (9)].str)));
		  free((yyvsp[(6) - (9)].str));
		  bufferWriteU8((yyval.action), 1);		/* if not loaded, jump to.. */
		  bufferWriteU8((yyval.action), SWFACTION_JUMP);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), bufferLength((yyvsp[(9) - (9)].action))+5);
		  bufferConcat((yyval.action), (yyvsp[(9) - (9)].action));				  /* ..here */
		  bufferWriteU8((yyval.action), SWFACTION_JUMP);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), -(bufferLength((yyval.action))+2)); }
    break;

  case 30:
#line 346 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(3) - (5)].action);
		  bufferWriteU8((yyval.action), SWFACTION_LOGICALNOT);
		  bufferWriteU8((yyval.action), SWFACTION_IF);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), bufferLength((yyvsp[(5) - (5)].action))+5);
		  bufferConcat((yyval.action), (yyvsp[(5) - (5)].action));
		  bufferWriteU8((yyval.action), SWFACTION_JUMP);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), -(bufferLength((yyval.action))+2));
		  bufferResolveJumps((yyval.action)); }
    break;

  case 31:
#line 358 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(2) - (6)].action);
		  bufferConcat((yyval.action), (yyvsp[(5) - (6)].action));
		  bufferWriteU8((yyval.action), SWFACTION_IF);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), -(bufferLength((yyval.action))+2));
		  bufferResolveJumps((yyval.action)); }
    break;

  case 32:
#line 366 "./swf4compiler.y"
    { if (!(yyvsp[(5) - (9)].action))
                    (yyvsp[(5) - (9)].action) = newBuffer();
                  else {
                    bufferWriteU8((yyvsp[(5) - (9)].action), SWFACTION_LOGICALNOT);
                    bufferWriteU8((yyvsp[(5) - (9)].action), SWFACTION_IF);
                    bufferWriteS16((yyvsp[(5) - (9)].action), 2);
                    bufferWriteS16((yyvsp[(5) - (9)].action), bufferLength((yyvsp[(9) - (9)].action))+bufferLength((yyvsp[(7) - (9)].action))+5);
                  }
                  bufferConcat((yyvsp[(5) - (9)].action), (yyvsp[(9) - (9)].action));
                  bufferConcat((yyvsp[(5) - (9)].action), (yyvsp[(7) - (9)].action));
                  bufferWriteU8((yyvsp[(5) - (9)].action), SWFACTION_JUMP);
                  bufferWriteS16((yyvsp[(5) - (9)].action), 2);
                  bufferWriteS16((yyvsp[(5) - (9)].action), -(bufferLength((yyvsp[(5) - (9)].action))+2));
                  bufferResolveJumps((yyvsp[(5) - (9)].action));
                  (yyval.action) = (yyvsp[(3) - (9)].action);
                  if(!(yyval.action)) (yyval.action) = newBuffer();
                  bufferConcat((yyval.action), (yyvsp[(5) - (9)].action));
                }
    break;

  case 33:
#line 387 "./swf4compiler.y"
    { (yyval.action) = NULL; }
    break;

  case 35:
#line 393 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteU8((yyval.action), SWFACTION_JUMP);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), MAGIC_CONTINUE_NUMBER); }
    break;

  case 36:
#line 401 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteU8((yyval.action), SWFACTION_JUMP);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), MAGIC_BREAK_NUMBER); }
    break;

  case 37:
#line 409 "./swf4compiler.y"
    { (yyval.getURLMethod) = GETURL_METHOD_NOSEND; }
    break;

  case 38:
#line 411 "./swf4compiler.y"
    { if(strcmp((yyvsp[(2) - (2)].str), "GET") == 0)
				    (yyval.getURLMethod) = GETURL_METHOD_GET;
				  else if(strcmp((yyvsp[(2) - (2)].str), "POST") == 0)
				    (yyval.getURLMethod) = GETURL_METHOD_POST; }
    break;

  case 39:
#line 419 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteU8((yyval.action), SWFACTION_ENDDRAG); }
    break;

  case 40:
#line 423 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), (yyvsp[(3) - (4)].str), strlen((yyvsp[(3) - (4)].str))+1);
		  bufferWriteU8((yyval.action), SWFACTION_CALLFRAME);
		  bufferWriteS16((yyval.action), 0);
		  free((yyvsp[(3) - (4)].str)); }
    break;

  case 41:
#line 430 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), (yyvsp[(3) - (4)].str), strlen((yyvsp[(3) - (4)].str))+1);
		  bufferWriteU8((yyval.action), SWFACTION_CALLFRAME);
		  bufferWriteS16((yyval.action), 0);
		  free((yyvsp[(3) - (4)].str)); }
    break;

  case 42:
#line 437 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteU8((yyval.action), SWFACTION_REMOVECLIP); }
    break;

  case 43:
#line 441 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteU8((yyval.action), SWFACTION_TRACE); }
    break;

  case 44:
#line 446 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(3) - (6)].action);
		  bufferConcat((yyval.action), (yyvsp[(5) - (6)].action));
		  bufferWriteU8((yyval.action), SWFACTION_GETURL2);
		  bufferWriteS16((yyval.action), 1);
		  bufferWriteU8((yyval.action), GETURL_METHOD_NOSEND); }
    break;

  case 45:
#line 453 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(3) - (7)].action);
		  bufferConcat((yyval.action), (yyvsp[(5) - (7)].action));
		  bufferWriteU8((yyval.action), SWFACTION_GETURL2);
		  bufferWriteS16((yyval.action), 1);
		  bufferWriteU8((yyval.action), (yyvsp[(6) - (7)].getURLMethod)); }
    break;

  case 46:
#line 460 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteU8((yyval.action), SWFACTION_GETURL);
		  bufferWriteS16((yyval.action), strlen((yyvsp[(3) - (6)].str)) + strlen((yyvsp[(5) - (6)].str)) + 2);
		  bufferWriteHardString((yyval.action), (yyvsp[(3) - (6)].str), strlen((yyvsp[(3) - (6)].str)));
		  bufferWriteU8((yyval.action), 0);
		  bufferWriteHardString((yyval.action), (yyvsp[(5) - (6)].str), strlen((yyvsp[(5) - (6)].str)));
		  bufferWriteU8((yyval.action), 0); }
    break;

  case 47:
#line 469 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(3) - (7)].action);
		  bufferConcat((yyval.action), (yyvsp[(5) - (7)].action));
		  bufferWriteU8((yyval.action), SWFACTION_GETURL2);
		  bufferWriteS16((yyval.action), 1);
		  bufferWriteU8((yyval.action), (yyvsp[(6) - (7)].getURLMethod) | GETURL_LOADMOVIE); }
    break;

  case 48:
#line 476 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(3) - (7)].action);
		  bufferConcat((yyval.action), (yyvsp[(5) - (7)].action));
		  bufferWriteU8((yyval.action), SWFACTION_GETURL2);
		  bufferWriteS16((yyval.action), 1);
		  bufferWriteU8((yyval.action), 0xc0 + (yyvsp[(6) - (7)].getURLMethod)); }
    break;

  case 49:
#line 484 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), "0", 2); /* no constraint */
		  bufferConcat((yyval.action), (yyvsp[(5) - (6)].action));
		  bufferConcat((yyval.action), (yyvsp[(3) - (6)].action));
		  bufferWriteU8((yyval.action), SWFACTION_STARTDRAG); }
    break;

  case 50:
#line 491 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferConcat((yyval.action), (yyvsp[(7) - (14)].action));
		  bufferConcat((yyval.action), (yyvsp[(11) - (14)].action));
		  bufferConcat((yyval.action), (yyvsp[(9) - (14)].action));
		  bufferConcat((yyval.action), (yyvsp[(13) - (14)].action));
		  bufferWriteString((yyval.action), "1", 2); /* has constraint */
		  bufferConcat((yyval.action), (yyvsp[(5) - (14)].action));
		  bufferConcat((yyval.action), (yyvsp[(3) - (14)].action));
		  bufferWriteU8((yyval.action), SWFACTION_STARTDRAG); }
    break;

  case 51:
#line 503 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(3) - (8)].action);
		  bufferConcat((yyval.action), (yyvsp[(5) - (8)].action));
		  bufferConcat((yyval.action), (yyvsp[(7) - (8)].action));
		  bufferWriteWTHITProperty((yyval.action));
		  bufferWriteU8((yyval.action), SWFACTION_ADD); /* see docs for explanation */
		  bufferWriteU8((yyval.action), SWFACTION_DUPLICATECLIP); }
    break;

  case 52:
#line 512 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteU8((yyval.action), SWFACTION_NEXTFRAME); }
    break;

  case 53:
#line 516 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteU8((yyval.action), SWFACTION_PREVFRAME); }
    break;

  case 54:
#line 520 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteU8((yyval.action), SWFACTION_PLAY); }
    break;

  case 55:
#line 524 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteU8((yyval.action), SWFACTION_STOP); }
    break;

  case 56:
#line 528 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteU8((yyval.action), SWFACTION_TOGGLEQUALITY); }
    break;

  case 57:
#line 532 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteU8((yyval.action), SWFACTION_STOPSOUNDS); }
    break;

  case 58:
#line 536 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteU8((yyval.action), SWFACTION_GOTOFRAME);
		  bufferWriteS16((yyval.action), 2);
		  bufferWriteS16((yyval.action), atoi((yyvsp[(3) - (4)].str)));
		  free((yyvsp[(3) - (4)].str)); }
    break;

  case 59:
#line 543 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteU8((yyval.action), SWFACTION_GOTOLABEL);
		  bufferWriteS16((yyval.action), strlen((yyvsp[(3) - (4)].str))+1);
		  bufferWriteHardString((yyval.action), (yyvsp[(3) - (4)].str), strlen((yyvsp[(3) - (4)].str))+1);
		  free((yyvsp[(3) - (4)].str)); }
    break;

  case 60:
#line 550 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteU8((yyval.action), SWFACTION_GOTOFRAME2);
		  bufferWriteS16((yyval.action), 1);
		  bufferWriteU8((yyval.action), 0); }
    break;

  case 61:
#line 556 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteU8((yyval.action), SWFACTION_GOTOFRAME2);
		  bufferWriteS16((yyval.action), 1);
		  bufferWriteU8((yyval.action), 1); }
    break;

  case 62:
#line 562 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteU8((yyval.action), SWFACTION_SETTARGET);
		  bufferWriteS16((yyval.action), strlen((yyvsp[(3) - (4)].str))+1);
		  bufferWriteHardString((yyval.action), (yyvsp[(3) - (4)].str), strlen((yyvsp[(3) - (4)].str))+1);
		  free((yyvsp[(3) - (4)].str)); }
    break;

  case 63:
#line 569 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteU8((yyval.action), SWFACTION_SETTARGET2); }
    break;

  case 64:
#line 573 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
			/* SetTarget(STRING) */
		  bufferWriteU8((yyval.action), SWFACTION_SETTARGET);
		  bufferWriteS16((yyval.action), strlen((yyvsp[(3) - (5)].str))+1);
		  bufferWriteHardString((yyval.action), (yyvsp[(3) - (5)].str), strlen((yyvsp[(3) - (5)].str))+1);
			/* stmt */
		  bufferConcat((yyval.action), (yyvsp[(5) - (5)].action));
			/* SetTarget('') */
		  bufferWriteU8((yyval.action), SWFACTION_SETTARGET);
		  bufferWriteS16((yyval.action), 1);
		  bufferWriteU8((yyval.action), 0);
		  free((yyvsp[(3) - (5)].str)); }
    break;

  case 65:
#line 587 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(3) - (5)].action);
			/* SetTarget(expr) */
		  bufferWriteU8((yyval.action), SWFACTION_SETTARGET2); 
			/* stmt */
		  bufferConcat((yyval.action), (yyvsp[(5) - (5)].action));
			/* SetTarget('') */
		  bufferWriteU8((yyval.action), SWFACTION_SETTARGET);
		  bufferWriteS16((yyval.action), 1);
		  bufferWriteU8((yyval.action), 0); }
    break;

  case 66:
#line 600 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteU8((yyval.action), SWFACTION_GETVARIABLE); }
    break;

  case 67:
#line 604 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteU8((yyval.action), SWFACTION_GETTIME); }
    break;

  case 68:
#line 608 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteU8((yyval.action), SWFACTION_RANDOMNUMBER); }
    break;

  case 69:
#line 612 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteU8((yyval.action), SWFACTION_STRINGLENGTH); }
    break;

  case 70:
#line 616 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteU8((yyval.action), SWFACTION_INT); }
    break;

  case 71:
#line 620 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteU8((yyval.action), SWFACTION_ORD); }
    break;

  case 72:
#line 624 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(3) - (4)].action);
		  bufferWriteU8((yyval.action), SWFACTION_CHR); }
    break;

  case 73:
#line 628 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(3) - (6)].action);
		  bufferConcat((yyval.action), (yyvsp[(5) - (6)].action));
		  bufferWriteU8((yyval.action), SWFACTION_STRINGCONCAT); }
    break;

  case 74:
#line 633 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(3) - (8)].action);
		  bufferConcat((yyval.action), (yyvsp[(5) - (8)].action));
		  bufferConcat((yyval.action), (yyvsp[(7) - (8)].action));
		  bufferWriteU8((yyval.action), SWFACTION_SUBSTRING); }
    break;

  case 75:
#line 639 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferConcat((yyval.action), (yyvsp[(3) - (6)].action));
		  bufferWriteProperty((yyval.action), (yyvsp[(5) - (6)].str));
		  bufferWriteU8((yyval.action), SWFACTION_GETPROPERTY);
		  free((yyvsp[(5) - (6)].str)); }
    break;

  case 76:
#line 648 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteBuffer((yyval.action), (yyvsp[(1) - (2)].action));
		  bufferWriteU8((yyval.action), SWFACTION_GETVARIABLE);
		  bufferWriteBuffer((yyval.action), (yyvsp[(1) - (2)].action));
		  bufferConcat((yyval.action), (yyvsp[(1) - (2)].action));
		  bufferWriteU8((yyval.action), SWFACTION_GETVARIABLE);
		  bufferWriteString((yyval.action), "1", 2);
		  bufferWriteU8((yyval.action), SWFACTION_ADD);
		  bufferWriteU8((yyval.action), SWFACTION_SETVARIABLE); }
    break;

  case 77:
#line 659 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteBuffer((yyval.action), (yyvsp[(1) - (2)].action));
		  bufferWriteU8((yyval.action), SWFACTION_GETVARIABLE);
		  bufferWriteBuffer((yyval.action), (yyvsp[(1) - (2)].action));
		  bufferConcat((yyval.action), (yyvsp[(1) - (2)].action));
		  bufferWriteU8((yyval.action), SWFACTION_GETVARIABLE);
		  bufferWriteString((yyval.action), "1", 2);
		  bufferWriteU8((yyval.action), SWFACTION_SUBTRACT);
		  bufferWriteU8((yyval.action), SWFACTION_SETVARIABLE); }
    break;

  case 79:
#line 675 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(2) - (3)].action); }
    break;

  case 80:
#line 678 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), (yyvsp[(1) - (1)].str), strlen((yyvsp[(1) - (1)].str))+1);
		  free((yyvsp[(1) - (1)].str)); }
    break;

  case 81:
#line 683 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), "-", 2);
		  bufferWriteString((yyval.action), (yyvsp[(2) - (2)].str), strlen((yyvsp[(2) - (2)].str))+1);
		  free((yyvsp[(2) - (2)].str)); }
    break;

  case 82:
#line 689 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), (yyvsp[(1) - (1)].str), strlen((yyvsp[(1) - (1)].str))+1);
		  free((yyvsp[(1) - (1)].str)); }
    break;

  case 83:
#line 694 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), (yyvsp[(1) - (1)].str), strlen((yyvsp[(1) - (1)].str))+1);
		  bufferWriteU8((yyval.action), SWFACTION_GETVARIABLE);
		  free((yyvsp[(1) - (1)].str)); }
    break;

  case 84:
#line 700 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), (yyvsp[(1) - (1)].str), strlen((yyvsp[(1) - (1)].str))+1);
		  free((yyvsp[(1) - (1)].str)); }
    break;

  case 85:
#line 705 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), (yyvsp[(1) - (3)].str), strlen((yyvsp[(1) - (3)].str))+1);
		  bufferWriteProperty((yyval.action), (yyvsp[(3) - (3)].str));
		  bufferWriteU8((yyval.action), SWFACTION_GETPROPERTY);
		  free((yyvsp[(3) - (3)].str));
		  free((yyvsp[(1) - (3)].str)); }
    break;

  case 86:
#line 713 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), (yyvsp[(2) - (4)].str), strlen((yyvsp[(2) - (4)].str))+1);
		  bufferWriteProperty((yyval.action), (yyvsp[(4) - (4)].str));
		  bufferWriteString((yyval.action), (yyvsp[(2) - (4)].str), strlen((yyvsp[(2) - (4)].str))+1);
		  bufferWriteProperty((yyval.action), (yyvsp[(4) - (4)].str));
		  bufferWriteString((yyval.action), (yyvsp[(2) - (4)].str), strlen((yyvsp[(2) - (4)].str))+1);
		  bufferWriteProperty((yyval.action), (yyvsp[(4) - (4)].str));
		  bufferWriteString((yyval.action), "1", 2);
		  bufferWriteU8((yyval.action), SWFACTION_ADD);
		  bufferWriteU8((yyval.action), SWFACTION_SETPROPERTY);
		  bufferWriteU8((yyval.action), SWFACTION_GETPROPERTY);
		  free((yyvsp[(2) - (4)].str));
		  free((yyvsp[(4) - (4)].str)); }
    break;

  case 87:
#line 728 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(2) - (2)].action);
		  bufferWriteU8((yyval.action), SWFACTION_PUSHDUP);
		  bufferWriteU8((yyval.action), SWFACTION_PUSHDUP);
		  bufferWriteU8((yyval.action), SWFACTION_GETVARIABLE);
		  bufferWriteString((yyval.action), "1", 2);
		  bufferWriteU8((yyval.action), SWFACTION_ADD);
		  bufferWriteU8((yyval.action), SWFACTION_SETVARIABLE);
		  bufferWriteU8((yyval.action), SWFACTION_GETVARIABLE); }
    break;

  case 88:
#line 738 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), (yyvsp[(2) - (4)].str), strlen((yyvsp[(2) - (4)].str))+1);
		  bufferWriteProperty((yyval.action), (yyvsp[(4) - (4)].str));
		  bufferWriteString((yyval.action), (yyvsp[(2) - (4)].str), strlen((yyvsp[(2) - (4)].str))+1);
		  bufferWriteProperty((yyval.action), (yyvsp[(4) - (4)].str));
		  bufferWriteString((yyval.action), (yyvsp[(2) - (4)].str), strlen((yyvsp[(2) - (4)].str))+1);
		  bufferWriteProperty((yyval.action), (yyvsp[(4) - (4)].str));
		  bufferWriteString((yyval.action), "1", 2);
		  bufferWriteU8((yyval.action), SWFACTION_ADD);
		  bufferWriteU8((yyval.action), SWFACTION_SETPROPERTY);
		  bufferWriteU8((yyval.action), SWFACTION_GETPROPERTY);
		  free((yyvsp[(2) - (4)].str));
		  free((yyvsp[(4) - (4)].str)); }
    break;

  case 89:
#line 753 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(2) - (2)].action);
		  bufferWriteU8((yyval.action), SWFACTION_PUSHDUP);
		  bufferWriteU8((yyval.action), SWFACTION_PUSHDUP);
		  bufferWriteU8((yyval.action), SWFACTION_GETVARIABLE);
		  bufferWriteString((yyval.action), "1", 2);
		  bufferWriteU8((yyval.action), SWFACTION_SUBTRACT);
		  bufferWriteU8((yyval.action), SWFACTION_SETVARIABLE);
		  bufferWriteU8((yyval.action), SWFACTION_GETVARIABLE); }
    break;

  case 90:
#line 763 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(2) - (2)].action);
		  bufferWriteString((yyvsp[(2) - (2)].action), "-1", 3);
		  bufferWriteU8((yyvsp[(2) - (2)].action), SWFACTION_MULTIPLY); }
    break;

  case 91:
#line 768 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(2) - (2)].action);
		  bufferWriteU8((yyvsp[(2) - (2)].action), SWFACTION_LOGICALNOT); }
    break;

  case 92:
#line 772 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(1) - (3)].action);
		  bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));
		  bufferWriteU8((yyval.action), SWFACTION_PUSHDUP);
		  bufferWriteU8((yyval.action), SWFACTION_SETVARIABLE); }
    break;

  case 93:
#line 778 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(1) - (3)].action);
		  bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));
		  bufferWriteU8((yyval.action), SWFACTION_MULTIPLY); }
    break;

  case 94:
#line 783 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(1) - (3)].action);
		  bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));
		  bufferWriteU8((yyval.action), SWFACTION_DIVIDE); }
    break;

  case 95:
#line 788 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(1) - (3)].action);
		  bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));
		  bufferWriteU8((yyval.action), SWFACTION_ADD); }
    break;

  case 96:
#line 793 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(1) - (3)].action);
		  bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));
		  bufferWriteU8((yyval.action), SWFACTION_SUBTRACT); }
    break;

  case 97:
#line 798 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(1) - (3)].action);
		  bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));
		  bufferWriteU8((yyval.action), SWFACTION_STRINGCONCAT); }
    break;

  case 98:
#line 803 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(1) - (3)].action);
		  bufferConcat((yyval.action), (yyvsp[(3) - (3)].action));
		  bufferWriteU8((yyval.action), SWFACTION_LESSTHAN); }
    break;

  case 99:
#line 808 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(3) - (3)].action);
		  bufferConcat((yyval.action), (yyvsp[(1) - (3)].action));
		  bufferWriteU8((yyval.action), SWFACTION_LESSTHAN); }
    break;

  case 100:
#line 813 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(3) - (3)].action);
		  bufferConcat((yyval.action), (yyvsp[(1) - (3)].action));
		  bufferWriteU8((yyval.action), SWFACTION_LESSTHAN);
		  bufferWriteU8((yyval.action), SWFACTION_LOGICALNOT); }
    break;

  case 101:
#line 819 "./swf4compiler.y"
    { bufferConcat((yyvsp[(1) - (3)].action), (yyvsp[(3) - (3)].action));
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_LESSTHAN);
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_LOGICALNOT); }
    break;

  case 102:
#line 824 "./swf4compiler.y"
    { bufferConcat((yyvsp[(1) - (3)].action), (yyvsp[(3) - (3)].action));
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_STRINGEQ);
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_LOGICALNOT); }
    break;

  case 103:
#line 829 "./swf4compiler.y"
    { bufferConcat((yyvsp[(1) - (3)].action), (yyvsp[(3) - (3)].action));
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_STRINGEQ); }
    break;

  case 104:
#line 833 "./swf4compiler.y"
    { bufferConcat((yyvsp[(1) - (3)].action), (yyvsp[(3) - (3)].action));
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_STRINGCOMPARE); }
    break;

  case 105:
#line 837 "./swf4compiler.y"
    { bufferConcat((yyvsp[(1) - (3)].action), (yyvsp[(3) - (3)].action));
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_EQUAL); }
    break;

  case 106:
#line 841 "./swf4compiler.y"
    { bufferConcat((yyvsp[(1) - (3)].action), (yyvsp[(3) - (3)].action));
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_EQUAL);
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_LOGICALNOT); }
    break;

  case 107:
#line 846 "./swf4compiler.y"
    { bufferConcat((yyvsp[(1) - (3)].action), (yyvsp[(3) - (3)].action));
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_LOGICALAND); }
    break;

  case 108:
#line 850 "./swf4compiler.y"
    { bufferConcat((yyvsp[(1) - (3)].action), (yyvsp[(3) - (3)].action));
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_LOGICALOR); }
    break;

  case 109:
#line 854 "./swf4compiler.y"
    { bufferWriteU8((yyvsp[(1) - (5)].action), SWFACTION_IF);
		  bufferWriteS16((yyvsp[(1) - (5)].action), 2);
		  bufferWriteS16((yyvsp[(1) - (5)].action), bufferLength((yyvsp[(5) - (5)].action))+5);
		  bufferConcat((yyvsp[(1) - (5)].action), (yyvsp[(5) - (5)].action));
		  bufferWriteU8((yyvsp[(1) - (5)].action), SWFACTION_JUMP);
		  bufferWriteS16((yyvsp[(1) - (5)].action), 2);
		  bufferWriteS16((yyvsp[(1) - (5)].action), bufferLength((yyvsp[(3) - (5)].action)));
		  bufferConcat((yyvsp[(1) - (5)].action), (yyvsp[(3) - (5)].action)); }
    break;

  case 111:
#line 868 "./swf4compiler.y"
    { (yyval.str) = (yyvsp[(1) - (3)].str);
		  (yyval.str) = stringConcat((yyval.str), strdup(":"));
		  (yyval.str) = stringConcat((yyval.str), (yyvsp[(3) - (3)].str)); }
    break;

  case 112:
#line 875 "./swf4compiler.y"
    { (yyval.str) = strdup(""); }
    break;

  case 113:
#line 878 "./swf4compiler.y"
    { (yyval.str) = strdup(""); }
    break;

  case 114:
#line 881 "./swf4compiler.y"
    { (yyval.str) = strdup("/"); }
    break;

  case 115:
#line 884 "./swf4compiler.y"
    { (yyval.str) = strdup(".."); }
    break;

  case 116:
#line 887 "./swf4compiler.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 117:
#line 890 "./swf4compiler.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 118:
#line 895 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), (yyvsp[(1) - (1)].str), strlen((yyvsp[(1) - (1)].str))+1);
		  free((yyvsp[(1) - (1)].str)); }
    break;

  case 119:
#line 900 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), (yyvsp[(1) - (1)].str), strlen((yyvsp[(1) - (1)].str))+1);
		  free((yyvsp[(1) - (1)].str)); }
    break;

  case 120:
#line 904 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(2) - (3)].action); }
    break;

  case 122:
#line 911 "./swf4compiler.y"
    { asmBuffer = newBuffer(); }
    break;

  case 123:
#line 913 "./swf4compiler.y"
    { (yyval.action) = asmBuffer; }
    break;

  case 125:
#line 918 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(2) - (2)].action);
		  bufferWriteBuffer((yyval.action), (yyvsp[(2) - (2)].action));
		  bufferWriteU8((yyval.action), SWFACTION_GETVARIABLE);
		  bufferWriteString((yyval.action), "1", 2);
		  bufferWriteU8((yyval.action), SWFACTION_ADD);
		  bufferWriteU8((yyval.action), SWFACTION_SETVARIABLE); }
    break;

  case 126:
#line 926 "./swf4compiler.y"
    { (yyval.action) = (yyvsp[(2) - (2)].action);
		  bufferWriteBuffer((yyval.action), (yyvsp[(2) - (2)].action));
		  bufferWriteU8((yyval.action), SWFACTION_GETVARIABLE);
		  bufferWriteString((yyval.action), "1", 2);
		  bufferWriteU8((yyval.action), SWFACTION_SUBTRACT);
		  bufferWriteU8((yyval.action), SWFACTION_SETVARIABLE); }
    break;

  case 127:
#line 934 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), (yyvsp[(2) - (4)].str), strlen((yyvsp[(2) - (4)].str))+1);
		  bufferWriteProperty((yyval.action), (yyvsp[(4) - (4)].str));
		  bufferWriteU8((yyval.action), SWFACTION_GETPROPERTY);
		  bufferWriteString((yyval.action), "1", 2);
		  bufferWriteU8((yyval.action), SWFACTION_ADD);
		  bufferWriteString((yyval.action), (yyvsp[(2) - (4)].str), strlen((yyvsp[(2) - (4)].str))+1);
		  bufferWriteProperty((yyval.action), (yyvsp[(4) - (4)].str));
		  bufferWriteU8((yyval.action), SWFACTION_SETPROPERTY);
		  free((yyvsp[(2) - (4)].str));
		  free((yyvsp[(4) - (4)].str)); }
    break;

  case 128:
#line 947 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), (yyvsp[(2) - (4)].str), strlen((yyvsp[(2) - (4)].str))+1);
		  bufferWriteProperty((yyval.action), (yyvsp[(4) - (4)].str));
		  bufferWriteU8((yyval.action), SWFACTION_GETPROPERTY);
		  bufferWriteString((yyval.action), "1", 2);
		  bufferWriteU8((yyval.action), SWFACTION_SUBTRACT);
		  bufferWriteString((yyval.action), (yyvsp[(2) - (4)].str), strlen((yyvsp[(2) - (4)].str))+1);
		  bufferWriteProperty((yyval.action), (yyvsp[(4) - (4)].str));
		  bufferWriteU8((yyval.action), SWFACTION_SETPROPERTY);
		  free((yyvsp[(2) - (4)].str));
		  free((yyvsp[(4) - (4)].str)); }
    break;

  case 129:
#line 960 "./swf4compiler.y"
    { bufferConcat((yyvsp[(1) - (3)].action), (yyvsp[(3) - (3)].action));
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_SETVARIABLE); }
    break;

  case 130:
#line 964 "./swf4compiler.y"
    { bufferWriteBuffer((yyvsp[(1) - (3)].action), (yyvsp[(1) - (3)].action));
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_GETVARIABLE);
		  bufferConcat((yyvsp[(1) - (3)].action), (yyvsp[(3) - (3)].action));
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_MULTIPLY);
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_SETVARIABLE); }
    break;

  case 131:
#line 971 "./swf4compiler.y"
    { bufferWriteBuffer((yyvsp[(1) - (3)].action), (yyvsp[(1) - (3)].action));
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_GETVARIABLE);
		  bufferConcat((yyvsp[(1) - (3)].action), (yyvsp[(3) - (3)].action));
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_DIVIDE);
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_SETVARIABLE); }
    break;

  case 132:
#line 978 "./swf4compiler.y"
    { bufferWriteBuffer((yyvsp[(1) - (3)].action), (yyvsp[(1) - (3)].action));
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_GETVARIABLE);
		  bufferConcat((yyvsp[(1) - (3)].action), (yyvsp[(3) - (3)].action));
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_ADD);
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_SETVARIABLE); }
    break;

  case 133:
#line 985 "./swf4compiler.y"
    { bufferWriteBuffer((yyvsp[(1) - (3)].action), (yyvsp[(1) - (3)].action));
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_GETVARIABLE);
		  bufferConcat((yyvsp[(1) - (3)].action), (yyvsp[(3) - (3)].action));
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_SUBTRACT);
		  bufferWriteU8((yyvsp[(1) - (3)].action), SWFACTION_SETVARIABLE); }
    break;

  case 134:
#line 992 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), (yyvsp[(1) - (5)].str), strlen((yyvsp[(1) - (5)].str))+1);
		  bufferWriteProperty((yyval.action), (yyvsp[(3) - (5)].str));
		  bufferConcat((yyval.action),(yyvsp[(5) - (5)].action));
		  bufferWriteU8((yyval.action), SWFACTION_SETPROPERTY);
		  free((yyvsp[(1) - (5)].str));
		  free((yyvsp[(3) - (5)].str)); }
    break;

  case 135:
#line 1001 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), (yyvsp[(1) - (5)].str), strlen((yyvsp[(1) - (5)].str))+1);
		  bufferWriteProperty((yyval.action), (yyvsp[(3) - (5)].str));
		  bufferWriteString((yyval.action), (yyvsp[(1) - (5)].str), strlen((yyvsp[(1) - (5)].str))+1);
		  bufferWriteProperty((yyval.action), (yyvsp[(3) - (5)].str));
		  bufferWriteU8((yyval.action), SWFACTION_GETPROPERTY);
		  bufferConcat((yyval.action), (yyvsp[(5) - (5)].action));
		  bufferWriteU8((yyval.action), SWFACTION_MULTIPLY);
		  bufferWriteU8((yyval.action), SWFACTION_SETPROPERTY);
		  free((yyvsp[(1) - (5)].str));
		  free((yyvsp[(3) - (5)].str)); }
    break;

  case 136:
#line 1014 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), (yyvsp[(1) - (5)].str), strlen((yyvsp[(1) - (5)].str))+1);
		  bufferWriteProperty((yyval.action), (yyvsp[(3) - (5)].str));
		  bufferWriteString((yyval.action), (yyvsp[(1) - (5)].str), strlen((yyvsp[(1) - (5)].str))+1);
		  bufferWriteProperty((yyval.action), (yyvsp[(3) - (5)].str));
		  bufferWriteU8((yyval.action), SWFACTION_GETPROPERTY);
		  bufferConcat((yyval.action), (yyvsp[(5) - (5)].action));
		  bufferWriteU8((yyval.action), SWFACTION_DIVIDE);
		  bufferWriteU8((yyval.action), SWFACTION_SETPROPERTY);
		  free((yyvsp[(1) - (5)].str));
		  free((yyvsp[(3) - (5)].str)); }
    break;

  case 137:
#line 1027 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), (yyvsp[(1) - (5)].str), strlen((yyvsp[(1) - (5)].str))+1);
		  bufferWriteProperty((yyval.action), (yyvsp[(3) - (5)].str));
		  bufferWriteString((yyval.action), (yyvsp[(1) - (5)].str), strlen((yyvsp[(1) - (5)].str))+1);
		  bufferWriteProperty((yyval.action), (yyvsp[(3) - (5)].str));
		  bufferWriteU8((yyval.action), SWFACTION_GETPROPERTY);
		  bufferConcat((yyval.action), (yyvsp[(5) - (5)].action));
		  bufferWriteU8((yyval.action), SWFACTION_ADD);
		  bufferWriteU8((yyval.action), SWFACTION_SETPROPERTY);
		  free((yyvsp[(1) - (5)].str));
		  free((yyvsp[(3) - (5)].str)); }
    break;

  case 138:
#line 1040 "./swf4compiler.y"
    { (yyval.action) = newBuffer();
		  bufferWriteString((yyval.action), (yyvsp[(1) - (5)].str), strlen((yyvsp[(1) - (5)].str))+1);
		  bufferWriteProperty((yyval.action), (yyvsp[(3) - (5)].str));
		  bufferWriteString((yyval.action), (yyvsp[(1) - (5)].str), strlen((yyvsp[(1) - (5)].str))+1);
		  bufferWriteProperty((yyval.action), (yyvsp[(3) - (5)].str));
		  bufferWriteU8((yyval.action), SWFACTION_GETPROPERTY);
		  bufferConcat((yyval.action), (yyvsp[(5) - (5)].action));
		  bufferWriteU8((yyval.action), SWFACTION_SUBTRACT);
		  bufferWriteU8((yyval.action), SWFACTION_SETPROPERTY);
		  free((yyvsp[(1) - (5)].str));
		  free((yyvsp[(3) - (5)].str)); }
    break;

  case 140:
#line 1058 "./swf4compiler.y"
    { (yyval.len) = bufferWriteU8(asmBuffer, PUSH_STRING);
				  (yyval.len) += bufferWriteHardString(asmBuffer, (yyvsp[(1) - (1)].str), strlen((yyvsp[(1) - (1)].str)) + 1); }
    break;

  case 141:
#line 1062 "./swf4compiler.y"
    { (yyval.len) = (yyvsp[(1) - (1)].len); }
    break;

  case 142:
#line 1063 "./swf4compiler.y"
    { (yyval.len) = (yyvsp[(1) - (3)].len) + (yyvsp[(3) - (3)].len); }
    break;

  case 144:
#line 1068 "./swf4compiler.y"
    { (yyval.len) = (yyvsp[(1) - (2)].len) + (yyvsp[(2) - (2)].len); }
    break;

  case 145:
#line 1072 "./swf4compiler.y"
    { (yyval.len) = bufferWritePushOp(asmBuffer);
				  (yyval.len) += bufferWriteS16(asmBuffer, 0); }
    break;

  case 146:
#line 1074 "./swf4compiler.y"
    { (yyval.len) = (yyvsp[(2) - (3)].len) + (yyvsp[(3) - (3)].len);
			
				  bufferPatchLength(asmBuffer, (yyvsp[(3) - (3)].len)); }
    break;

  case 147:
#line 1078 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_ADD); }
    break;

  case 148:
#line 1079 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_SUBTRACT); }
    break;

  case 149:
#line 1080 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_MULTIPLY); }
    break;

  case 150:
#line 1081 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_DIVIDE); }
    break;

  case 151:
#line 1082 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_EQUAL); }
    break;

  case 152:
#line 1083 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_LESSTHAN); }
    break;

  case 153:
#line 1084 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_LOGICALAND); }
    break;

  case 154:
#line 1085 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_LOGICALOR); }
    break;

  case 155:
#line 1086 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_LOGICALNOT); }
    break;

  case 156:
#line 1087 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_STRINGCONCAT); }
    break;

  case 157:
#line 1088 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_STRINGEQ); }
    break;

  case 158:
#line 1089 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_STRINGLENGTH); }
    break;

  case 159:
#line 1090 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_SUBSTRING); }
    break;

  case 160:
#line 1091 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_MBSUBSTRING); }
    break;

  case 161:
#line 1092 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_MBLENGTH); }
    break;

  case 162:
#line 1093 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_STRINGCOMPARE); }
    break;

  case 163:
#line 1094 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_POP); }
    break;

  case 164:
#line 1095 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_CHR); }
    break;

  case 165:
#line 1096 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_ORD); }
    break;

  case 166:
#line 1097 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_INT); }
    break;

  case 167:
#line 1098 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_MBCHR); }
    break;

  case 168:
#line 1099 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_MBORD); }
    break;

  case 169:
#line 1100 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_CALLFRAME); }
    break;

  case 170:
#line 1101 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_GETVARIABLE); }
    break;

  case 171:
#line 1102 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_SETVARIABLE); }
    break;

  case 172:
#line 1103 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_GETPROPERTY); }
    break;

  case 173:
#line 1104 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_SETPROPERTY); }
    break;

  case 174:
#line 1105 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_REMOVECLIP); }
    break;

  case 175:
#line 1106 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_SETTARGET2); }
    break;

  case 176:
#line 1107 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_STARTDRAG); }
    break;

  case 177:
#line 1108 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_ENDDRAG); }
    break;

  case 178:
#line 1109 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_DUPLICATECLIP); }
    break;

  case 179:
#line 1110 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_GETTIME); }
    break;

  case 180:
#line 1111 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_RANDOMNUMBER); }
    break;

  case 181:
#line 1112 "./swf4compiler.y"
    { (yyval.len) = bufferWriteOp(asmBuffer, SWFACTION_TRACE); }
    break;

  case 182:
#line 1114 "./swf4compiler.y"
    { (yyval.len) = ( 
					bufferWriteOp(asmBuffer, SWFACTION_IF)
					+ bufferWriteS16(asmBuffer, 2)
					+ bufferWriteS16(asmBuffer, atoi((yyvsp[(2) - (2)].str)))); }
    break;

  case 183:
#line 1118 "./swf4compiler.y"
    { (yyval.len) =  ( 
					bufferWriteOp(asmBuffer, SWFACTION_JUMP)
					+ bufferWriteS16(asmBuffer, 2)
					+ bufferWriteS16(asmBuffer, atoi((yyvsp[(2) - (2)].str)))); }
    break;

  case 184:
#line 1122 "./swf4compiler.y"
    { (yyval.len) =  (bufferWriteOp(asmBuffer, SWFACTION_GETURL2)
					+ bufferWriteS16(asmBuffer, 1) 
					+ bufferWriteU8(asmBuffer, atoi((yyvsp[(2) - (2)].str)))); }
    break;

  case 185:
#line 1125 "./swf4compiler.y"
    { (yyval.len) =  (bufferWriteOp(asmBuffer, SWFACTION_GOTOFRAME2) 
					+ bufferWriteS16(asmBuffer, 1)
					+ bufferWriteU8(asmBuffer, atoi((yyvsp[(2) - (2)].str)))); 
					/* SceneBias missing */ }
    break;

  case 186:
#line 1129 "./swf4compiler.y"
    { (yyval.len) = (bufferWriteOp(asmBuffer, SWFACTION_WAITFORFRAME2) 
					+ bufferWriteS16(asmBuffer, 1)
					+ bufferWriteU8(asmBuffer, atoi((yyvsp[(2) - (2)].str)))); }
    break;


/* Line 1267 of yacc.c.  */
#line 3467 "swf4compiler.tab.c"
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


#line 1135 "./swf4compiler.y"


