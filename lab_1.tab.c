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



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PLUS = 258,
     MINUS = 259,
     TIMES = 260,
     DIVIDE = 261,
     PERCENT = 262,
     GREATER_EQUAL = 263,
     LESS_EQUAL = 264,
     GREATER = 265,
     LESS = 266,
     NOT_EQUAL = 267,
     EQUAL = 268,
     ASSIGN = 269,
     AND = 270,
     OR = 271,
     NOT = 272,
     IDENTIFIER = 273,
     STRING = 274,
     COMMA = 275,
     CHAR = 276,
     BIN = 277,
     HEX = 278,
     INTEGER = 279,
     TRUE = 280,
     FALSE = 281,
     IF = 282,
     ELSE = 283,
     WHILE = 284,
     DO = 285,
     BREAK = 286,
     SEMICOLON = 287,
     LPAREN = 288,
     RPAREN = 289,
     LBRACE = 290,
     RBRACE = 291,
     LBRACKET = 292,
     RBRACKET = 293,
     TYPEDEF = 294,
     ARRAY_COMMAS = 295,
     RETURN = 296
   };
#endif
/* Tokens.  */
#define PLUS 258
#define MINUS 259
#define TIMES 260
#define DIVIDE 261
#define PERCENT 262
#define GREATER_EQUAL 263
#define LESS_EQUAL 264
#define GREATER 265
#define LESS 266
#define NOT_EQUAL 267
#define EQUAL 268
#define ASSIGN 269
#define AND 270
#define OR 271
#define NOT 272
#define IDENTIFIER 273
#define STRING 274
#define COMMA 275
#define CHAR 276
#define BIN 277
#define HEX 278
#define INTEGER 279
#define TRUE 280
#define FALSE 281
#define IF 282
#define ELSE 283
#define WHILE 284
#define DO 285
#define BREAK 286
#define SEMICOLON 287
#define LPAREN 288
#define RPAREN 289
#define LBRACE 290
#define RBRACE 291
#define LBRACKET 292
#define RBRACKET 293
#define TYPEDEF 294
#define ARRAY_COMMAS 295
#define RETURN 296




/* Copy the first part of user declarations.  */
#line 1 "lab_1.y"

#include "lab_1.tab.h"
#include "error.h"


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
#line 6 "lab_1.y"
{
    Node* node;
}
/* Line 193 of yacc.c.  */
#line 187 "lab_1.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 200 "lab_1.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   486

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNRULES -- Number of states.  */
#define YYNSTATES  140

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    13,    18,    19,    21,
      25,    28,    29,    31,    33,    35,    37,    39,    41,    43,
      45,    47,    49,    51,    53,    55,    58,    61,    63,    66,
      70,    72,    74,    76,    80,    87,    91,    94,    95,    98,
      99,   103,   106,   112,   120,   123,   126,   130,   132,   134,
     136,   138,   140,   142,   144,   146,   150,   154,   158,   162,
     166,   170,   175,   179,   183,   187,   191,   195,   199,   203,
     206,   209,   212,   216,   221,   223,   224,   228,   230,   235,
     237,   239,   241,   243,   245,   247,   249
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    -1,    43,    44,    -1,    45,    61,    -1,
      45,    32,    -1,    47,    33,    46,    34,    -1,    -1,    47,
      -1,    47,    20,    46,    -1,    48,    18,    -1,    -1,    49,
      -1,    50,    -1,    53,    -1,    54,    -1,    39,    -1,    57,
      -1,    58,    -1,    61,    -1,    62,    -1,    63,    -1,    64,
      -1,    65,    -1,    52,    -1,    41,    32,    -1,    41,    65,
      -1,    18,    -1,    49,    40,    -1,    56,    20,    55,    -1,
      56,    -1,    18,    -1,    66,    -1,    49,    55,    32,    -1,
      27,    33,    67,    34,    51,    59,    -1,    28,    51,    59,
      -1,    28,    51,    -1,    -1,    51,    60,    -1,    -1,    35,
      60,    36,    -1,    35,    36,    -1,    29,    33,    67,    34,
      51,    -1,    30,    61,    29,    33,    67,    34,    32,    -1,
      31,    32,    -1,    67,    32,    -1,    67,    13,    67,    -1,
      69,    -1,    68,    -1,    70,    -1,    71,    -1,    74,    -1,
      75,    -1,    76,    -1,    66,    -1,    67,     3,    67,    -1,
      67,    14,    67,    -1,    67,     4,    67,    -1,    67,     5,
      67,    -1,    67,     6,    67,    -1,    67,     7,    67,    -1,
      67,    13,    13,    67,    -1,    67,    12,    67,    -1,    67,
      11,    67,    -1,    67,    10,    67,    -1,    67,     9,    67,
      -1,    67,     8,    67,    -1,    67,    15,    67,    -1,    67,
      16,    67,    -1,     3,    67,    -1,     4,    67,    -1,    17,
      67,    -1,    33,    67,    34,    -1,    18,    33,    72,    34,
      -1,    73,    -1,    -1,    67,    20,    73,    -1,    67,    -1,
      67,    37,    73,    38,    -1,    18,    -1,    25,    -1,    26,
      -1,    19,    -1,    21,    -1,    23,    -1,    22,    -1,    24,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    65,    65,    66,    68,    69,    73,    75,    76,    77,
      79,    81,    82,    85,    86,    87,    89,    92,    93,    94,
      95,    96,    97,    98,    99,   101,   102,   104,   106,   109,
     110,   112,   113,   115,   117,   119,   120,   121,   123,   124,
     126,   127,   129,   131,   133,   135,   137,   139,   140,   141,
     142,   143,   144,   145,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   163,
     164,   165,   167,   169,   170,   171,   173,   174,   175,   177,
     179,   180,   181,   182,   183,   184,   185
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PLUS", "MINUS", "TIMES", "DIVIDE",
  "PERCENT", "GREATER_EQUAL", "LESS_EQUAL", "GREATER", "LESS", "NOT_EQUAL",
  "EQUAL", "ASSIGN", "AND", "OR", "NOT", "IDENTIFIER", "STRING", "COMMA",
  "CHAR", "BIN", "HEX", "INTEGER", "TRUE", "FALSE", "IF", "ELSE", "WHILE",
  "DO", "BREAK", "SEMICOLON", "LPAREN", "RPAREN", "LBRACE", "RBRACE",
  "LBRACKET", "RBRACKET", "TYPEDEF", "ARRAY_COMMAS", "RETURN", "$accept",
  "source", "sourceItem", "funcSignature", "listArgDef", "argDef",
  "optionalTypeRef", "typeRef", "builtin", "statement", "return", "custom",
  "array", "listVarDeclared", "listVarDeclaredItem", "var", "if",
  "optionalElseStatement", "listStatement", "block", "while", "do",
  "break", "expression", "assignment", "expr", "binary", "unary", "braces",
  "call", "optionalListExpr", "listExpr", "indexer", "place", "literal", 0
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
     295,   296
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    43,    44,    44,    45,    46,    46,    46,
      47,    48,    48,    49,    49,    49,    50,    51,    51,    51,
      51,    51,    51,    51,    51,    52,    52,    53,    54,    55,
      55,    56,    56,    57,    58,    59,    59,    59,    60,    60,
      61,    61,    62,    63,    64,    65,    66,    67,    67,    67,
      67,    67,    67,    67,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    69,
      69,    69,    70,    71,    72,    72,    73,    73,    74,    75,
      76,    76,    76,    76,    76,    76,    76
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     4,     0,     1,     3,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     2,     3,
       1,     1,     1,     3,     6,     3,     2,     0,     2,     0,
       3,     2,     5,     7,     2,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     4,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     3,     4,     1,     0,     3,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    27,    16,     3,     0,     0,     0,    12,
      13,    14,    15,     5,     0,     4,     7,    10,    28,     0,
       0,     0,    79,    82,    83,    85,    84,    86,    80,    81,
       0,     0,     0,     0,     0,    41,     0,     0,    39,    24,
      17,    18,     0,    19,    20,    21,    22,    23,    54,     0,
      48,    47,    49,    50,    51,    52,    53,     0,     8,    79,
      69,    70,    71,    75,     0,     0,     0,    44,     0,    25,
      26,    79,     0,    30,    54,     0,    38,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,     0,     6,     7,    77,     0,    74,     0,
       0,     0,    72,    33,     0,    55,    57,    58,    59,    60,
      66,    65,    64,    63,    62,     0,    46,    56,    67,    68,
       0,     9,     0,    73,     0,     0,     0,    29,    61,    78,
      76,    37,    42,     0,     0,    34,     0,    36,    43,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     5,     6,    57,    58,     8,    37,    10,    38,
      39,    11,    12,    72,    73,    40,    41,   135,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      97,    98,    54,    55,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -105
static const yytype_int16 yypact[] =
{
    -105,     8,  -105,  -105,  -105,  -105,    17,   -28,   -11,   -24,
    -105,  -105,  -105,  -105,    87,  -105,   -15,  -105,  -105,   429,
     429,   429,    10,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
     -21,   -16,     6,    -7,   429,  -105,   381,   154,   121,  -105,
    -105,  -105,     4,  -105,  -105,  -105,  -105,  -105,  -105,   192,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,    14,    22,    20,
     325,   325,   325,   429,   429,   429,    25,  -105,   206,  -105,
    -105,   -10,    23,    36,    19,   325,  -105,  -105,   429,   429,
     429,   429,   429,   429,   429,   429,   429,   429,   405,   429,
     429,   429,  -105,   429,  -105,   -15,   241,    24,  -105,   259,
     276,    42,  -105,  -105,   453,   325,   325,   325,   325,   325,
     360,   360,   360,   360,   360,   429,   360,   374,   325,   325,
      38,  -105,   429,  -105,   121,   121,   429,  -105,   360,  -105,
    -105,    29,  -105,   311,   121,  -105,    45,    29,  -105,  -105
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -105,  -105,  -105,  -105,   -17,    78,  -105,     3,  -105,  -104,
    -105,  -105,  -105,   -23,  -105,  -105,  -105,   -57,    44,     5,
    -105,  -105,  -105,    47,   -31,   -19,  -105,  -105,  -105,  -105,
    -105,   -84,  -105,  -105,  -105
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -33
static const yytype_int16 yytable[] =
{
      60,    61,    62,     3,     9,    16,    74,    17,     2,   120,
     -31,    15,    64,   -27,   -27,    68,    18,    65,    75,     9,
     131,   132,   -31,    63,     4,    67,     3,   -27,   -27,   -27,
     137,   -27,   -27,   -27,   -27,   -27,   -27,    66,   130,   -32,
      77,    14,    95,    63,    96,    99,   100,     4,    94,    13,
     -27,   -32,    14,    63,   101,   103,   104,   134,   123,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   116,
     117,   118,   119,    74,    96,   126,   129,   138,   121,     7,
     139,   127,    76,    70,     0,    75,     0,     0,     0,     0,
      19,    20,     0,     0,     0,     0,   128,     0,     9,     0,
       0,     0,     0,    96,    21,    22,    23,   133,    24,    25,
      26,    27,    28,    29,    30,     0,    31,    32,    33,     0,
      34,     0,    14,    35,    19,    20,     4,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,    22,
      23,     0,    24,    25,    26,    27,    28,    29,    30,     0,
      31,    32,    33,     0,    34,     0,    14,    19,    20,     0,
       4,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    71,    23,     0,    24,    25,    26,    27,    28,
      29,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,     0,     0,     0,    18,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,     0,    92,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     102,     0,     0,    93,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,     0,     0,
       0,   122,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,     0,     0,    93,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,   124,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,     0,     0,    93,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,     0,     0,     0,   136,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,    78,    79,    80,    81,    82,   -33,   -33,
     -33,   -33,   -33,   -33,    89,    90,    91,    78,    79,    80,
      81,    82,     0,     0,    19,    20,     0,     0,   -33,    90,
      91,     0,     0,     0,     0,     0,     0,    93,    21,    59,
      23,     0,    24,    25,    26,    27,    28,    29,    19,    20,
       0,    93,     0,    69,    34,     0,     0,     0,   115,     0,
       0,     0,    21,    59,    23,     0,    24,    25,    26,    27,
      28,    29,    19,    20,     0,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,    21,    59,    23,     0,
      24,    25,    26,    27,    28,    29,    19,    20,     0,     0,
       0,     0,    34,     0,     0,     0,     0,     0,     0,     0,
      21,    71,    23,     0,    24,    25,    26,    27,    28,    29,
       0,     0,     0,     0,     0,     0,    34
};

static const yytype_int16 yycheck[] =
{
      19,    20,    21,    18,     1,    33,    37,    18,     0,    93,
      20,     6,    33,     3,     4,    34,    40,    33,    37,    16,
     124,   125,    32,    33,    39,    32,    18,    17,    18,    19,
     134,    21,    22,    23,    24,    25,    26,    32,   122,    20,
      36,    35,    20,    33,    63,    64,    65,    39,    34,    32,
      40,    32,    35,    33,    29,    32,    20,    28,    34,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,   104,    93,    33,    38,    32,    95,     1,
     137,   104,    38,    36,    -1,   104,    -1,    -1,    -1,    -1,
       3,     4,    -1,    -1,    -1,    -1,   115,    -1,    95,    -1,
      -1,    -1,    -1,   122,    17,    18,    19,   126,    21,    22,
      23,    24,    25,    26,    27,    -1,    29,    30,    31,    -1,
      33,    -1,    35,    36,     3,     4,    39,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    27,    -1,
      29,    30,    31,    -1,    33,    -1,    35,     3,     4,    -1,
      39,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    32,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    37,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    20,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    -1,    -1,    37,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    34,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    37,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,     3,     4,     5,
       6,     7,    -1,    -1,     3,     4,    -1,    -1,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    37,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,     3,     4,
      -1,    37,    -1,    32,    33,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    26,     3,     4,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    26,     3,     4,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    33
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    43,     0,    18,    39,    44,    45,    47,    48,    49,
      50,    53,    54,    32,    35,    61,    33,    18,    40,     3,
       4,    17,    18,    19,    21,    22,    23,    24,    25,    26,
      27,    29,    30,    31,    33,    36,    41,    49,    51,    52,
      57,    58,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    74,    75,    76,    46,    47,    18,
      67,    67,    67,    33,    33,    33,    61,    32,    67,    32,
      65,    18,    55,    56,    66,    67,    60,    36,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    32,    37,    34,    20,    67,    72,    73,    67,
      67,    29,    34,    32,    20,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    13,    67,    67,    67,    67,
      73,    46,    20,    34,    34,    34,    33,    55,    67,    38,
      73,    51,    51,    67,    28,    59,    34,    51,    32,    59
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
#line 65 "lab_1.y"
    {{(yyval.node) = NULL;};}
    break;

  case 3:
#line 66 "lab_1.y"
    {{(yyval.node) = createNode("source", (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), "");};}
    break;

  case 4:
#line 68 "lab_1.y"
    {{(yyval.node) = createNode("sourceItem", (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), "");};}
    break;

  case 5:
#line 69 "lab_1.y"
    {{(yyval.node) = createNode("sourceItem", (yyvsp[(1) - (2)].node), NULL, "");};}
    break;

  case 6:
#line 73 "lab_1.y"
    {{(yyval.node) = createNode("funcSignature", (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), "");};}
    break;

  case 7:
#line 75 "lab_1.y"
    {{(yyval.node) = NULL;};}
    break;

  case 8:
#line 76 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 9:
#line 77 "lab_1.y"
    {{(yyval.node) = createNode("listArgDef", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 10:
#line 79 "lab_1.y"
    {{(yyval.node) = createNode("argDef", (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), "");};}
    break;

  case 11:
#line 81 "lab_1.y"
    {{ (yyval.node) = NULL; };}
    break;

  case 12:
#line 82 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 13:
#line 85 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 14:
#line 86 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 15:
#line 87 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 16:
#line 89 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 17:
#line 92 "lab_1.y"
    {{(yyval.node) =  (yyvsp[(1) - (1)].node);};}
    break;

  case 18:
#line 93 "lab_1.y"
    {{(yyval.node) =  (yyvsp[(1) - (1)].node);};}
    break;

  case 19:
#line 94 "lab_1.y"
    {{(yyval.node) =  (yyvsp[(1) - (1)].node);};}
    break;

  case 20:
#line 95 "lab_1.y"
    {{(yyval.node) =  (yyvsp[(1) - (1)].node);};}
    break;

  case 21:
#line 96 "lab_1.y"
    {{(yyval.node) =  (yyvsp[(1) - (1)].node);};}
    break;

  case 22:
#line 97 "lab_1.y"
    {{(yyval.node) =  (yyvsp[(1) - (1)].node);};}
    break;

  case 23:
#line 98 "lab_1.y"
    {{(yyval.node) =  (yyvsp[(1) - (1)].node);};}
    break;

  case 25:
#line 101 "lab_1.y"
    {{(yyval.node)=createNode("return", NULL, NULL, (yyvsp[(2) - (2)].node)->value);};}
    break;

  case 26:
#line 102 "lab_1.y"
    {{(yyval.node)=createNode("return", (yyvsp[(2) - (2)].node), NULL, (yyvsp[(2) - (2)].node)->value);};}
    break;

  case 27:
#line 104 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 28:
#line 106 "lab_1.y"
    {{(yyval.node) = createNode("array", (yyvsp[(1) - (2)].node), NULL, (yyvsp[(2) - (2)].node)->value);};}
    break;

  case 29:
#line 109 "lab_1.y"
    {{(yyval.node) = createNode("listVarDeclared", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 30:
#line 110 "lab_1.y"
    {{(yyval.node) = createNode("listVarDeclared", (yyvsp[(1) - (1)].node), NULL, "");};}
    break;

  case 31:
#line 112 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 32:
#line 113 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 33:
#line 115 "lab_1.y"
    {{(yyval.node) = createNode("var", (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), "");};}
    break;

  case 34:
#line 117 "lab_1.y"
    {{(yyval.node) = createNode("if", (yyvsp[(3) - (6)].node), createNode("ifStatements", (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].node), ""), "");};}
    break;

  case 35:
#line 119 "lab_1.y"
    {{(yyval.node) = createNode("else", (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 36:
#line 120 "lab_1.y"
    {{(yyval.node) = createNode("else", (yyvsp[(2) - (2)].node), NULL, "");};}
    break;

  case 37:
#line 121 "lab_1.y"
    {{(yyval.node) = NULL;};}
    break;

  case 38:
#line 123 "lab_1.y"
    {{(yyval.node) = createNode("listStatement", (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), "");};}
    break;

  case 39:
#line 124 "lab_1.y"
    {{(yyval.node) = NULL;};}
    break;

  case 40:
#line 126 "lab_1.y"
    {{(yyval.node) = createNode("block", (yyvsp[(2) - (3)].node), NULL, "");};}
    break;

  case 41:
#line 127 "lab_1.y"
    {{(yyval.node) = createNode("block", NULL, NULL, "");};}
    break;

  case 42:
#line 129 "lab_1.y"
    {{(yyval.node) = createNode("while", (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node), "");};}
    break;

  case 43:
#line 131 "lab_1.y"
    {{(yyval.node) = createNode("dowhile", (yyvsp[(2) - (7)].node), (yyvsp[(5) - (7)].node), "");};}
    break;

  case 44:
#line 133 "lab_1.y"
    {{(yyval.node) = createNode("break", NULL, NULL, "");};}
    break;

  case 45:
#line 135 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (2)].node);};}
    break;

  case 46:
#line 137 "lab_1.y"
    {{(yyval.node) = createNode("assigment", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 47:
#line 139 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 48:
#line 140 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 49:
#line 141 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 50:
#line 142 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 51:
#line 143 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 52:
#line 144 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 53:
#line 145 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 55:
#line 148 "lab_1.y"
    {{(yyval.node) = createNode("PLUS", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 56:
#line 149 "lab_1.y"
    {{(yyval.node) = createNode("ASSIGN", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 57:
#line 150 "lab_1.y"
    {{(yyval.node) = createNode("MINUS", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 58:
#line 151 "lab_1.y"
    {{(yyval.node) = createNode("TIMES", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 59:
#line 152 "lab_1.y"
    {{(yyval.node) = createNode("DIVIDE", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 60:
#line 153 "lab_1.y"
    {{(yyval.node) = createNode("PERCENT", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 61:
#line 154 "lab_1.y"
    {{(yyval.node) = createNode("EQUALITY", (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node), "");};}
    break;

  case 62:
#line 155 "lab_1.y"
    {{(yyval.node) = createNode("NOT_EQUAL", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 63:
#line 156 "lab_1.y"
    {{(yyval.node) = createNode("LESS", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 64:
#line 157 "lab_1.y"
    {{(yyval.node) = createNode("GREATER", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 65:
#line 158 "lab_1.y"
    {{(yyval.node) = createNode("LESS_EQUAL", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 66:
#line 159 "lab_1.y"
    {{(yyval.node) = createNode("GREATER_EQUAL", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 67:
#line 160 "lab_1.y"
    {{(yyval.node) = createNode("AND", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 68:
#line 161 "lab_1.y"
    {{(yyval.node) = createNode("OR", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 69:
#line 163 "lab_1.y"
    {{(yyval.node) = createNode("PLUS", (yyvsp[(2) - (2)].node), NULL, "");};}
    break;

  case 70:
#line 164 "lab_1.y"
    {{(yyval.node) = createNode("MINUS", (yyvsp[(2) - (2)].node), NULL, "");};}
    break;

  case 71:
#line 165 "lab_1.y"
    {{(yyval.node) = createNode("NOT", (yyvsp[(2) - (2)].node), NULL, "");};}
    break;

  case 72:
#line 167 "lab_1.y"
    {{(yyval.node) = createNode("braces", (yyvsp[(2) - (3)].node), NULL, "");};}
    break;

  case 73:
#line 169 "lab_1.y"
    {{(yyval.node) = createNode("CALL", (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), "");};}
    break;

  case 74:
#line 170 "lab_1.y"
    {{(yyval.node) = createNode("optionalListExpr", (yyvsp[(1) - (1)].node), NULL, "");};}
    break;

  case 75:
#line 171 "lab_1.y"
    {{(yyval.node) = createNode("optionalListExpr", NULL, NULL, "");};}
    break;

  case 76:
#line 173 "lab_1.y"
    {{(yyval.node) = createNode("listExpr", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "");};}
    break;

  case 77:
#line 174 "lab_1.y"
    {{(yyval.node) = createNode("listExpr", (yyvsp[(1) - (1)].node), NULL, "");};}
    break;

  case 78:
#line 175 "lab_1.y"
    {{(yyval.node) = createNode("indexer", (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), "");};}
    break;

  case 79:
#line 177 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 80:
#line 179 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 81:
#line 180 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 82:
#line 181 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 83:
#line 182 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 84:
#line 183 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 85:
#line 184 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;

  case 86:
#line 185 "lab_1.y"
    {{(yyval.node) = (yyvsp[(1) - (1)].node);};}
    break;


/* Line 1267 of yacc.c.  */
#line 2010 "lab_1.tab.c"
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


#line 186 "lab_1.y"


